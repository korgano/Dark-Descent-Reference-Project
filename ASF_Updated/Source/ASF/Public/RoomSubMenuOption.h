#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RoomSubMenuOption.generated.h"

USTRUCT(BlueprintType)
struct FRoomSubMenuOption {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    ASF_API FRoomSubMenuOption();
};

