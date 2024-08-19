#pragma once
#include "CoreMinimal.h"
#include "OpenDataSaveComponent.h"
#include "OpenDataSaveObjetiveComponent.generated.h"

class AObjective;
class ULevelSaveGame;
class USubObjectiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UOpenDataSaveObjetiveComponent : public UOpenDataSaveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlyObjectiveOpenData;
    
public:
    UOpenDataSaveObjetiveComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    bool GenerateSubObjectiveOpenData(USubObjectiveComponent* SubObjectiveComponent, ULevelSaveGame* _LevelSave);
    
    UFUNCTION(BlueprintCallable)
    bool GenerateObjectiveOpenData(AObjective* Objective, ULevelSaveGame* _LevelSave);
    
};

