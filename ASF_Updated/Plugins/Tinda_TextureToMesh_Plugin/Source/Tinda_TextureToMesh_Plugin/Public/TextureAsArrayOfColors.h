#pragma once
#include "CoreMinimal.h"
#include "TextureAsArrayOfColors.generated.h"

USTRUCT(BlueprintType)
struct FTextureAsArrayOfColors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeY;
    
    TINDA_TEXTURETOMESH_PLUGIN_API FTextureAsArrayOfColors();
};

