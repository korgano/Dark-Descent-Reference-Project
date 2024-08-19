#include "GuardRoom.h"
#include "CommonSaveLoadComponent.h"

AGuardRoom::AGuardRoom(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GuardTime = 4.00f;
    this->CurrentPattern = 0;
    this->SaveComponent = CreateDefaultSubobject<UCommonSaveLoadComponent>(TEXT("Common Save Load Component"));
}

void AGuardRoom::OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel) {
}

void AGuardRoom::OnSubLevelHandlerSet(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler) {
}

void AGuardRoom::OnRoomClusterRebuilt(ARoomCluster* _RoomCluster) {
}

void AGuardRoom::NextPattern() {
}

bool AGuardRoom::IsGraphIdInsideOfRoom(int32 _GraphID) {
    return false;
}

bool AGuardRoom::GetRandomReachableLocation(AASFCharacter* _Character, TArray<FTransform> _Locations, FTransform& _LocFound) {
    return false;
}

FTransform AGuardRoom::GetNextPatternPosition(AHumanoidTactical* _Character) {
    return FTransform{};
}

FTransform AGuardRoom::GetMeleeAlertedPattern(AHumanoidTactical* _Character) {
    return FTransform{};
}

FTransform AGuardRoom::GetIdlePoint(AASFCharacter* _Character, FTransform _LastIdlePointVisited) {
    return FTransform{};
}

void AGuardRoom::FreeIdlePoint(FTransform _IdlePointFreed) {
}


