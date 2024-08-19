#pragma once
#include "CoreMinimal.h"
#include "SaveLoadComponent.h"
#include "FOWSaveLoadComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UFOWSaveLoadComponent : public USaveLoadComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubLevelName;
    
public:
    UFOWSaveLoadComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SaveFOW(FName _SubLevelName);
    
    UFUNCTION(BlueprintCallable)
    void LoadFOW(FName _SubLevelName);
    
};

