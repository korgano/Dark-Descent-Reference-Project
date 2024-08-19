#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActorWithGameplayTag.h"
#include "RoomLandingPoint.generated.h"

UCLASS(Blueprintable)
class ASF_API ARoomLandingPoint : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
    ARoomLandingPoint(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FRotator GetOrientation() const;
    
};

