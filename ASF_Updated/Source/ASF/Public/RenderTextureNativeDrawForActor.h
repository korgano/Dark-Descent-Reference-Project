#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "RenderTextureNativeDrawForActor.generated.h"

class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API URenderTextureNativeDrawForActor : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeY;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FColor> RenderTargetMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* GeneratedTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* previousGeneratedTexture;
    
public:
    URenderTextureNativeDrawForActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void InitialiseTextureParam(int32 size_X, int32 size_Y);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetPreviousGeneratedTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetGeneratedTexture() const;
    
    UFUNCTION(BlueprintCallable)
    void GenerateMaskByLinearFunctionWithAntiAliase(const TArray<FVector2D>& FieldOfViewCoordinate, const FVector2D& FieldOfViewCenter);
    
    UFUNCTION(BlueprintCallable)
    UTexture2D* CreateRenderTargetMask();
    
};

