#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "FeedbackSubObjectiveArea.generated.h"

class USubObjectiveComponent;
class UTexture2D;

UCLASS(Blueprintable)
class ASF_API AFeedbackSubObjectiveArea : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USubObjectiveComponent* SubObjectiveComponent;
    
    AFeedbackSubObjectiveArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitMapInformationComponent(UTexture2D* _MapFeedbackTexture, FLinearColor _Color);
    
};

