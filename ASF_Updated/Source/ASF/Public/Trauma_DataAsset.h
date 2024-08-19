#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "TraumaApplied.h"
#include "Trauma_DataAsset.generated.h"

class UTexture2D;
class UTinda_Effect;

UCLASS(Blueprintable)
class ASF_API UTrauma_DataAsset : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UTinda_Effect>> Trauma_Effect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TraumaTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Descriptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanBeHealedByAsylum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberTurnAutoHeal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> TraumaIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Level_Intensity;
    
    UTrauma_DataAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString LevelToString(int32 _i);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Greater_TraumaTrauma(const FTraumaApplied& _A, const FTraumaApplied& _B);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription(const FTraumaApplied& _Trauma);
    
};

