#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Grip.generated.h"

class AHumanoid;

UCLASS(Blueprintable)
class ASF_API AGrip : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BestLocalPosition;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameBoneForIK;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameBoneReference;
    
    AGrip(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetBestLocalPosition(FVector _BestLocalPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitBestLocalPosition(AHumanoid* _Humanoid);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetSizeGrip() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetBestLocalPositionOnVector(FVector _BoneReferencePosition, FVector _VectorDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetBestLocalPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FTransform GetBestInteractionTransform();
    
};

