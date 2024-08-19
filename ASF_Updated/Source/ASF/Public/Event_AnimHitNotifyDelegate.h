#pragma once
#include "CoreMinimal.h"
#include "Event_AnimHitNotifyDelegate.generated.h"

class AActor;
class UAttackMontageDataAsset;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEvent_AnimHitNotify, AActor*, ThingHited, UAttackMontageDataAsset*, DataAssetAttack);

