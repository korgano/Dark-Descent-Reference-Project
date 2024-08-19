#pragma once
#include "CoreMinimal.h"
#include "InteractiveComponent_Ally.h"
#include "InteractiveComponent_APC.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInteractiveComponent_APC : public UInteractiveComponent_Ally {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistMaxFromCharacterToInteractionToEnableComponent;
    
    UInteractiveComponent_APC(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsCharacterCloseEnough(AActor* _Actor);
    
};

