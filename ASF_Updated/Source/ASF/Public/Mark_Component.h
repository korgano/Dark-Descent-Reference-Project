#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Mark_Component.generated.h"

class AMark;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UMark_Component : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMark*> Marks;
    
    UMark_Component(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    AMark* GetMarkWithTag(FName _Tag);
    
    UFUNCTION(BlueprintCallable)
    TArray<AMark*> GetMarksWithTag(FName _Tag);
    
};

