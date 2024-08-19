#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EnumAiGunshipState.h"
#include "GunshipMovementProfile.h"
#include "MarineClassDataAssets.h"
#include "Templates/SubclassOf.h"
#include "GunShipClassDataAsset.generated.h"

class UAIAction;
class UAIState;

UCLASS(Blueprintable)
class ASF_API UGunShipClassDataAsset : public UMarineClassDataAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EnumAiGunshipState, TSubclassOf<UAIState>> GunshipStateEnumToClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EnumAiGunshipState, FGameplayTagContainer> GunshipAIStatePerceptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EnumAiGunshipState, FGameplayTagContainer> GunshipAIStateDisabledPerceptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector EyesViewPointLocationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UAIAction>> GunshipAIActionAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeBetweenRoamTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGunshipMovementProfile Roam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGunshipMovementProfile TransitionEvade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGunshipMovementProfile TransitionApproach;
    
    UGunShipClassDataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGunshipMovementProfile> GetAllProfiles() const;
    
};

