#include "AnimationMirrorData.h"

UAnimationMirrorData::UAnimationMirrorData() {
}

void UAnimationMirrorData::SetPelvisBoneName(const FName bone_name) {
}

void UAnimationMirrorData::SetMirrorMappedData(TArray<FName> _MirrorData, TArray<EnumMirrorDir> _MirrorAxisData, TArray<EnumMirrorDir> _RightAxisData) {
}

void UAnimationMirrorData::SetMirrorBinomesAxis(const EnumMirrorDir _BinomesMirrorAxis_Rot, const EnumMirrorDir _BinomesRightAxis) {
}

void UAnimationMirrorData::SetMirrorBaseAxis(const EnumMirrorDir _MirrorAxis_Rot, const EnumMirrorDir _RightAxis, const EnumMirrorDir _PelvisMirrorAxis_Rot, const EnumMirrorDir _PelvisRightAxis, const bool _AutoMapMirrorData) {
}

FName UAnimationMirrorData::GetPelvisBoneName() const {
    return NAME_None;
}

FName UAnimationMirrorData::GetMirrorMappedBone(const FName bone_name) const {
    return NAME_None;
}

TArray<EnumMirrorDir> UAnimationMirrorData::GetBoneRightAxisDataStructure() const {
    return TArray<EnumMirrorDir>();
}

TArray<FName> UAnimationMirrorData::GetBoneMirrorDataStructure() const {
    return TArray<FName>();
}

TArray<EnumMirrorDir> UAnimationMirrorData::GetBoneMirrorAxisDataStructure() const {
    return TArray<EnumMirrorDir>();
}


