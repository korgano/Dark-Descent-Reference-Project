#pragma once
#include "CoreMinimal.h"
#include "LDSTActor.h"
#include "OpenDataWidget.h"
#include "LDSTWallActor.generated.h"

class UMapFeedbackDataProperties;

UCLASS(Blueprintable)
class ASF_API ALDSTWallActor : public ALDSTActor, public IOpenDataWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMapFeedbackDataProperties> OpenDataProperties;
    
public:
    ALDSTWallActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UMapFeedbackDataProperties> GetOpenDataProperties_Implementation() const;
    

    // Fix for true pure virtual functions not being implemented
};

