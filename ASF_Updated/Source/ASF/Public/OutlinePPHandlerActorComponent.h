#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EnumHover.h"
#include "OutlinePPHandlerActorComponent.generated.h"

class APostProcessVolume;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UOutlinePPHandlerActorComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EnumHover, int32> nbAskHovers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APostProcessVolume* PP;
    
    UOutlinePPHandlerActorComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdatePP(APostProcessVolume* NewPP);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetVisibilityOutlinePP(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void OnUserSettingByteValueChanged(FGameplayTag SettingTag, uint8 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NeedUpdateOutlinePP(EnumHover Type, bool bAdd);
    
    UFUNCTION(BlueprintCallable)
    void HoverChange(EnumHover Type, bool bIsHoverAsked);
    
};

