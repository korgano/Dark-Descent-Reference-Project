#include "ASFGameplayStaticsLibrary.h"
#include "Templates/SubclassOf.h"

UASFGameplayStaticsLibrary::UASFGameplayStaticsLibrary() {
}

FString UASFGameplayStaticsLibrary::ToCamelCase(const FString& _string) {
    return TEXT("");
}

void UASFGameplayStaticsLibrary::TindaPrintWarningString(const UObject* WorldContextObject, const FString& inString, const FVector2D TextScale, float Duration, bool bNewerOnTop, bool bPrintToScreen, bool bPrintToLog) {
}

void UASFGameplayStaticsLibrary::TindaPrintString(const UObject* WorldContextObject, const FString& inString, FLinearColor TextColor, const FVector2D TextScale, float Duration, int32 ID, bool bNewerOnTop, bool bPrintToScreen, bool bPrintToLog, bool bPrintToFile, const FString& FilePath, bool OverWriteFile) {
}

void UASFGameplayStaticsLibrary::TindaPrintErrorString(const UObject* WorldContextObject, const FString& inString, const FVector2D TextScale, float Duration, bool bNewerOnTop, bool bPrintToScreen, bool bPrintToLog) {
}

void UASFGameplayStaticsLibrary::TindaClearPrintedStrings(const UObject* WorldContextObject) {
}

void UASFGameplayStaticsLibrary::TindaClearPrintedStringOfID(const UObject* WorldContextObject, int32 ID) {
}

void UASFGameplayStaticsLibrary::SortStrings(TArray<FString>& _Strings, TArray<FString>& _SortedStrings) {
}

void UASFGameplayStaticsLibrary::SetSequencerBinding(ALevelSequenceActor* SequenceActor, FMovieSceneObjectBindingID Binding, const TArray<AActor*>& Actors, bool bAllowBindingsFromAsset) {
}

void UASFGameplayStaticsLibrary::SetComponentsCollisionEnabled(AActor* Actor, bool newCollisionEnabled, AMission* Mission, const TArray<FName>& CollisionProfilesToIgnore) {
}

bool UASFGameplayStaticsLibrary::SetActorLocationForceSweepCollision(const UObject* WorldContextObject, AActor* Actor, FVector NewLocation, FHitResult& SweepHitResult, bool bTeleport) {
    return false;
}

void UASFGameplayStaticsLibrary::ResetMeshMaterials(UMeshComponent* _MeshComp) {
}

bool UASFGameplayStaticsLibrary::IsValid(UObject* WorldContextObject, const FCharacterIDName& ID) {
    return false;
}

bool UASFGameplayStaticsLibrary::IsInPlayMode(UObject* WorldContextObject) {
    return false;
}

TArray<FTutorialText> UASFGameplayStaticsLibrary::GetTutorialTexts(const FString& _string) {
    return TArray<FTutorialText>();
}

FText UASFGameplayStaticsLibrary::GetTimespanAsText(const FTimespan& _Timespan) {
    return FText::GetEmpty();
}

FString UASFGameplayStaticsLibrary::GetTagLeaf(FGameplayTag _Tag) {
    return TEXT("");
}

AASFCheatActor* UASFGameplayStaticsLibrary::GetTacticalCheatActor(const UObject* WorldContextObject) {
    return NULL;
}

FName UASFGameplayStaticsLibrary::GetStringTableId(const FString& Keyword) {
    return NAME_None;
}

FString UASFGameplayStaticsLibrary::GetRandomChar() {
    return TEXT("");
}

int32 UASFGameplayStaticsLibrary::GetRandomBoneIndexOnCharacter(AActor* _Character) {
    return 0;
}

AAIGuardPath* UASFGameplayStaticsLibrary::GetPathWithTheLessEnemies(TSubclassOf<UNavigationQueryFilter> _navFilter, AASFCharacter* _Enemy, bool _DiscardIfFull) {
    return NULL;
}

AAIGuardPath* UASFGameplayStaticsLibrary::GetPathWithoutEnemies(TSubclassOf<UNavigationQueryFilter> _navFilter, AASFCharacter* _Enemy) {
    return NULL;
}

FGameplayTag UASFGameplayStaticsLibrary::GetParentTag(FGameplayTag _Tag) {
    return FGameplayTag{};
}

FName UASFGameplayStaticsLibrary::GetOnlineSubsystemName() {
    return NAME_None;
}

FString UASFGameplayStaticsLibrary::GetOnlinePlayerID(const UObject* WorldContextObject) {
    return TEXT("");
}

void UASFGameplayStaticsLibrary::GetMatchingTags(TArray<FGameplayTag>& _Res, const FGameplayTagContainer& _TagContainer, const FGameplayTag& _Tag) {
}

FVector UASFGameplayStaticsLibrary::GetLocationForBoneIndexOnCharacter(AActor* _Character, int32 _BoneIndex) {
    return FVector{};
}

TArray<FString> UASFGameplayStaticsLibrary::GetEnumValuesAsString(UEnum* _Enum, bool _DisplayName) {
    return TArray<FString>();
}

TArray<FText> UASFGameplayStaticsLibrary::GetEnumValuesAsLocalizedText(UEnum* _Enum, UObject* _WorldContext) {
    return TArray<FText>();
}

TArray<FText> UASFGameplayStaticsLibrary::GetEnumValuesAsDisplayNameText(UEnum* _Enum) {
    return TArray<FText>();
}

UMaterialInstanceDynamic* UASFGameplayStaticsLibrary::GetDynamicMaterialInstance(UMeshComponent* _SkeletalMeshComp, int32 _MaterialIndex) {
    return NULL;
}

FString UASFGameplayStaticsLibrary::GetCodexEntryMediaURL(const FCodexEntry& _Entry, UObject* _WorldContext) {
    return TEXT("");
}

TArray<FVector> UASFGameplayStaticsLibrary::GetCameraFrustrum(UObject* WorldContextObject) {
    return TArray<FVector>();
}

void UASFGameplayStaticsLibrary::GetBuildConfiguration(FString& Configuration) {
}

APlayerController* UASFGameplayStaticsLibrary::GetASFPlayerController(const UObject* WorldContextObject) {
    return NULL;
}

void UASFGameplayStaticsLibrary::GetActorBoundsWithExclude(AActor* Actor, bool bOnlyCollidingComponents, FVector& Origin, FVector& BoxExtent, const TArray<UPrimitiveComponent*>& ComponentToExclude, bool bIncludeFromChildActors) {
}

ASquad* UASFGameplayStaticsLibrary::FindSquadWithCharacterID(UObject* WorldContextObject, const FCharacterIDName& IDToFind) {
    return NULL;
}

AASFCharacter* UASFGameplayStaticsLibrary::FindCharacterWithID(UObject* WorldContextObject, const FCharacterIDName& IDToFind) {
    return NULL;
}

AActor* UASFGameplayStaticsLibrary::FindActorWithID(UObject* WorldContextObject, const FCharacterIDName& IDToFind) {
    return NULL;
}

bool UASFGameplayStaticsLibrary::DialogueListContains(const FAcknowsSequenceList& _DialogueList, const FAcknowsSequence& _Dialogue) {
    return false;
}

bool UASFGameplayStaticsLibrary::CompareDialogues(const FAcknowsSequence& _Dialogue1, const FAcknowsSequence& _Dialogue2) {
    return false;
}

void UASFGameplayStaticsLibrary::ClearOnScreenDebugMessageASF() {
}

FString UASFGameplayStaticsLibrary::BeautifyString(const FString& _string) {
    return TEXT("");
}

AAIGuardPath* UASFGameplayStaticsLibrary::AddToPathWithTheLessEnemies(TSubclassOf<UNavigationQueryFilter> _navFilter, AASFCharacter* _Enemy, AAIGuardPath* _PreviousPath) {
    return NULL;
}


