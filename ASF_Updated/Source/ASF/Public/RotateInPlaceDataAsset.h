#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "RotateInPlaceDataAsset.generated.h"

class UAnimSequence;

UCLASS(Blueprintable)
class ASF_API URotateInPlaceDataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UAnimSequence*> Relaxed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UAnimSequence*> Relaxed_Wounded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UAnimSequence*> Alert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UAnimSequence*> Alert_Wounded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UAnimSequence*> Crouch;
    
    URotateInPlaceDataAsset();

};

