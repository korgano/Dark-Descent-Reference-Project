#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EnumMirrorDir.h"
#include "AnimationMirrorData.generated.h"

UCLASS(Blueprintable)
class TINDA_MIRRORANIMNODE_API UAnimationMirrorData : public UObject {
    GENERATED_BODY()
public:
    UAnimationMirrorData();

    UFUNCTION(BlueprintCallable)
    void SetPelvisBoneName(const FName bone_name);
    
    UFUNCTION(BlueprintCallable)
    void SetMirrorMappedData(TArray<FName> _MirrorData, TArray<EnumMirrorDir> _MirrorAxisData, TArray<EnumMirrorDir> _RightAxisData);
    
    UFUNCTION(BlueprintCallable)
    void SetMirrorBinomesAxis(const EnumMirrorDir _BinomesMirrorAxis_Rot, const EnumMirrorDir _BinomesRightAxis);
    
    UFUNCTION(BlueprintCallable)
    void SetMirrorBaseAxis(const EnumMirrorDir _MirrorAxis_Rot, const EnumMirrorDir _RightAxis, const EnumMirrorDir _PelvisMirrorAxis_Rot, const EnumMirrorDir _PelvisRightAxis, const bool _AutoMapMirrorData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetPelvisBoneName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetMirrorMappedBone(const FName bone_name) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EnumMirrorDir> GetBoneRightAxisDataStructure() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetBoneMirrorDataStructure() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EnumMirrorDir> GetBoneMirrorAxisDataStructure() const;
    
};

