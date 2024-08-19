#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "FOWRenderTarget.generated.h"

class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class ASF_API AFOWRenderTarget : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D PlanSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlanLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FictiveLocation;
    
    AFOWRenderTarget(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetPlayerFieldOfView(UTexture2D* GeneratedMask, FVector2D DrawLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitRenderTarget(FVector RealPosition, FVector PipelineRenderingOffset, FVector Scale, int32 TextureDefinition);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CropRenderTargetLocalised(UTexture2D* GeneratedMask, FVector2D DrawLocation);
    
};

