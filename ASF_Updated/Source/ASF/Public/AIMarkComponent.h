#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "StructMarkedObjectDetail.h"
#include "AIMarkComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAIMarkComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStructMarkedObjectDetail> ObjectsMarked;
    
public:
    UAIMarkComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveMark(const FGameplayTag& _MarkTag, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    bool GetMarkWeight(float& Strengh, float& Decision, const TArray<FGameplayTag>& _MarkTags, const UObject* _Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 FindObject(const FGameplayTag& _MarkTag, const UObject* _Object) const;
    
    UFUNCTION(BlueprintCallable)
    bool ContainMark(UPARAM(Ref) TArray<FGameplayTag>& _MarkTags, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    bool ContainForceFailMark(UPARAM(Ref) TArray<FGameplayTag>& _MarkTags, UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void AddMark(const FGameplayTag& _MarkTag, const UObject* _Object, bool _ForceFail, float _Duration, float _DecisionModificator, float _StrenghtModificator);
    
};

