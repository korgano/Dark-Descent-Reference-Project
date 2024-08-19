#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "Event_PickedActorDelegate.h"
#include "GameplayTwinCustomDetailWIdget.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UGameplayTwinCustomDetailWIdget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_PickedActor OnPickedActorModeActivated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_PickedActor OnClearActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetActor;
    
    UGameplayTwinCustomDetailWIdget();

    UFUNCTION(BlueprintCallable)
    void SetSelectedLevelActors(const TArray<AActor*>& ActorsToSelect);
    
    UFUNCTION(BlueprintCallable)
    void SetLevelViewportCameraInfo(FVector CameraLocation, FRotator CameraRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetSelectedLevelActors();
    
    UFUNCTION(BlueprintCallable)
    bool GetLevelViewportCameraInfo(FVector& CameraLocation, FRotator& CameraRotation);
    
};

