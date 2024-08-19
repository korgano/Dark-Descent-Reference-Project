#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "GameplayTagContainer.h"
#include "RoomCameraActor.generated.h"

UCLASS(Blueprintable)
class ASF_API ARoomCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RoomTag;
    
public:
    ARoomCameraActor(const FObjectInitializer& ObjectInitializer);

};

