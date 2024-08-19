#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EnumFOWVisionType.h"
#include "Event_UFOWRevertedReaderDelegate.h"
#include "FOWSetting.h"
#include "MinimapData.h"
#include "FOWRevertedReader.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UTexture2D;
class UWorld;

UCLASS(Blueprintable)
class ASF_API UFOWRevertedReader : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_UFOWRevertedReader OnReaderUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MapShader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* MapTextureMask;
    
public:
    UFOWRevertedReader();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D WorldToMinimapUV(FVector Position) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D Vector_WorldToMinimapUV(FVector Vector) const;
    
    UFUNCTION(BlueprintCallable)
    void UpdateMapShader();
    
    UFUNCTION(BlueprintCallable)
    void Save_TileCompression(TArray<uint8>& FOWSave);
    
    UFUNCTION(BlueprintCallable)
    void Save(TArray<uint8>& FOWSave);
    
    UFUNCTION(BlueprintCallable)
    void Load_TileDecompression(TArray<uint8>& FOWSaveArray, const FMinimapData& _PlanInformation);
    
    UFUNCTION(BlueprintCallable)
    void Load(TArray<uint8>& FOWSaveArray, const FMinimapData& _PlanInformation);
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitTexture();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="_WorldContext"))
    void Init(UObject* _WorldContext, UMaterialInterface* MaterialType, FName OptionalName, UTexture2D* MainTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMaterialInstanceDynamic* GetShaderMaterial() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetMinimapVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetGeneratedMotherRenderTexture() const;
    
    UFUNCTION(BlueprintCallable)
    EnumFOWVisionType GetFOWStateAround(FVector ActorPosition, int32 pixelLength, int32 pixelHeight);
    
    UFUNCTION(BlueprintCallable)
    void Generate(const FFOWSetting& FOWSettings, const FMinimapData& _PlanInformation);
    
    UFUNCTION(BlueprintCallable)
    void ClearFOW(bool OnlyMinimap);
    
};

