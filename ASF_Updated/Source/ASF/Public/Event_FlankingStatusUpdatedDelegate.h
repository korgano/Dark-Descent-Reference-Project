#pragma once
#include "CoreMinimal.h"
#include "EnumFlankingStatus.h"
#include "Event_FlankingStatusUpdatedDelegate.generated.h"

class AASFCharacter;
class UCoverComponent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FEvent_FlankingStatusUpdated, UCoverComponent*, CoverComponent, AASFCharacter*, Character, EnumFlankingStatus, FlankingStatusUpdated);

