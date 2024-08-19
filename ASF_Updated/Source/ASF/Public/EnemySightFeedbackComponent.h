#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/StaticMeshComponent.h"
#include "EnemySightFeedbackComponent.generated.h"

class AASFPlayerController;
class AActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UEnemySightFeedbackComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrevAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlphaSaved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimerCpt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFeedbackVisibility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCinematicMode;
    
public:
    UEnemySightFeedbackComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateVisibility(bool _Visibility);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateDisplay(float _DetectionValue, float _MaxDist, FVector _Dir, AActor* _Target, bool _SightLong);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetVisibilityFalse();
    
    UFUNCTION(BlueprintCallable)
    void OnCinematicActivationUpdated(AASFPlayerController* _pc, bool _Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetFeedbackCoordinate(const AActor* _Target, FVector& _StartPosition, FVector& _EndPosition);
    
public:
    UFUNCTION(BlueprintCallable)
    void EnableSightFeedback(bool IsFeedbackEnabled);
    
};

