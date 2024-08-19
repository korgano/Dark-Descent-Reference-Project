#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Event_NestDelegate.h"
#include "NestComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UNestComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Nest OnNestDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKillTheNestIsActive;
    
    UNestComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartNestAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartKillTheNest();
    
};

