#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "Polygone.h"
#include "BoxelToGeometryConverter.generated.h"

UCLASS(Blueprintable)
class ASF_API UBoxelToGeometryConverter : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoxelSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPolygone> Polygones;
    
public:
    UBoxelToGeometryConverter();

    UFUNCTION(BlueprintCallable)
    void InitBoxelConverter(float _BoxelSize, int32 _GridSize);
    
    UFUNCTION(BlueprintCallable)
    TArray<FPolygone> GetPolygones();
    
    UFUNCTION(BlueprintCallable)
    void ComputeGeometryVertex();
    
    UFUNCTION(BlueprintCallable)
    bool CanAddBoxelAtLocation(int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable)
    void AddBoxel(FVector BoxelPos, int32 X, int32 Y);
    
};

