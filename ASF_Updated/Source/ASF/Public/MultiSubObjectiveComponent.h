#pragma once
#include "CoreMinimal.h"
#include "SubObjectiveComponent.h"
#include "MultiSubObjectiveComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UMultiSubObjectiveComponent : public USubObjectiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LinkedSubObjectiveTagNames;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 countSubObjective;
    
public:
    UMultiSubObjectiveComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryToTriggerTriggerInfo();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSubLinkedSucceeded(USubObjectiveComponent* subobjective);
    
};

