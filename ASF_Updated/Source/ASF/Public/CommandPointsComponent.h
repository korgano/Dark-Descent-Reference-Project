#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Event_CommandPointsComponent_float_boolDelegate.h"
#include "CommandPointsComponent.generated.h"

class UCommandPoint_DataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UCommandPointsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Completion;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_CommandPointsComponent_float_bool OnCompletionChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommandPoint_DataAsset* CommandPoint_DataAsset;
    
public:
    UCommandPointsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCompletion(float _Completion, bool _DisplayFeedback);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCommandPoint_DataAsset* GetCommandPoint_DataAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddCommandPoint_External(float _Amount);
    
};

