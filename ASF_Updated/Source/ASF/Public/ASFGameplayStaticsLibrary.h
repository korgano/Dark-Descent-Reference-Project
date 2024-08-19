#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "MovieSceneObjectBindingID.h"
#include "AcknowsSequence.h"
#include "AcknowsSequenceList.h"
#include "CharacterIDName.h"
#include "CodexEntry.h"
#include "Templates/SubclassOf.h"
#include "TutorialText.h"
#include "ASFGameplayStaticsLibrary.generated.h"

class AAIGuardPath;
class AASFCharacter;
class AASFCheatActor;
class AActor;
class ALevelSequenceActor;
class AMission;
class APlayerController;
class ASquad;
class UEnum;
class UMaterialInstanceDynamic;
class UMeshComponent;
class UNavigationQueryFilter;
class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class ASF_API UASFGameplayStaticsLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UASFGameplayStaticsLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ToCamelCase(const FString& _string);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TindaPrintWarningString(const UObject* WorldContextObject, const FString& inString, const FVector2D TextScale, float Duration, bool bNewerOnTop, bool bPrintToScreen, bool bPrintToLog);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TindaPrintString(const UObject* WorldContextObject, const FString& inString, FLinearColor TextColor, const FVector2D TextScale, float Duration, int32 ID, bool bNewerOnTop, bool bPrintToScreen, bool bPrintToLog, bool bPrintToFile, const FString& FilePath, bool OverWriteFile);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TindaPrintErrorString(const UObject* WorldContextObject, const FString& inString, const FVector2D TextScale, float Duration, bool bNewerOnTop, bool bPrintToScreen, bool bPrintToLog);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TindaClearPrintedStrings(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void TindaClearPrintedStringOfID(const UObject* WorldContextObject, int32 ID);
    
    UFUNCTION(BlueprintCallable)
    static void SortStrings(UPARAM(Ref) TArray<FString>& _Strings, TArray<FString>& _SortedStrings);
    
    UFUNCTION(BlueprintCallable)
    static void SetSequencerBinding(ALevelSequenceActor* SequenceActor, FMovieSceneObjectBindingID Binding, const TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);
    
    UFUNCTION(BlueprintCallable)
    static void SetComponentsCollisionEnabled(AActor* Actor, bool newCollisionEnabled, AMission* Mission, const TArray<FName>& CollisionProfilesToIgnore);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetActorLocationForceSweepCollision(const UObject* WorldContextObject, AActor* Actor, FVector NewLocation, FHitResult& SweepHitResult, bool bTeleport);
    
    UFUNCTION(BlueprintCallable)
    static void ResetMeshMaterials(UMeshComponent* _MeshComp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsValid(UObject* WorldContextObject, const FCharacterIDName& ID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool IsInPlayMode(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FTutorialText> GetTutorialTexts(const FString& _string);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText GetTimespanAsText(const FTimespan& _Timespan);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetTagLeaf(FGameplayTag _Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AASFCheatActor* GetTacticalCheatActor(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FName GetStringTableId(const FString& Keyword);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetRandomChar();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRandomBoneIndexOnCharacter(AActor* _Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AAIGuardPath* GetPathWithTheLessEnemies(TSubclassOf<UNavigationQueryFilter> _navFilter, AASFCharacter* _Enemy, bool _DiscardIfFull);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AAIGuardPath* GetPathWithoutEnemies(TSubclassOf<UNavigationQueryFilter> _navFilter, AASFCharacter* _Enemy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag GetParentTag(FGameplayTag _Tag);
    
    UFUNCTION(BlueprintCallable)
    static FName GetOnlineSubsystemName();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static FString GetOnlinePlayerID(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetMatchingTags(TArray<FGameplayTag>& _Res, const FGameplayTagContainer& _TagContainer, const FGameplayTag& _Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector GetLocationForBoneIndexOnCharacter(AActor* _Character, int32 _BoneIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetEnumValuesAsString(UEnum* _Enum, bool _DisplayName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_WorldContext"))
    static TArray<FText> GetEnumValuesAsLocalizedText(UEnum* _Enum, UObject* _WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FText> GetEnumValuesAsDisplayNameText(UEnum* _Enum);
    
    UFUNCTION(BlueprintCallable)
    static UMaterialInstanceDynamic* GetDynamicMaterialInstance(UMeshComponent* _SkeletalMeshComp, int32 _MaterialIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="_WorldContext"))
    static FString GetCodexEntryMediaURL(const FCodexEntry& _Entry, UObject* _WorldContext);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<FVector> GetCameraFrustrum(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetBuildConfiguration(FString& Configuration);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerController* GetASFPlayerController(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void GetActorBoundsWithExclude(AActor* Actor, bool bOnlyCollidingComponents, FVector& Origin, FVector& BoxExtent, const TArray<UPrimitiveComponent*>& ComponentToExclude, bool bIncludeFromChildActors);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static ASquad* FindSquadWithCharacterID(UObject* WorldContextObject, const FCharacterIDName& IDToFind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AASFCharacter* FindCharacterWithID(UObject* WorldContextObject, const FCharacterIDName& IDToFind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AActor* FindActorWithID(UObject* WorldContextObject, const FCharacterIDName& IDToFind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DialogueListContains(const FAcknowsSequenceList& _DialogueList, const FAcknowsSequence& _Dialogue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CompareDialogues(const FAcknowsSequence& _Dialogue1, const FAcknowsSequence& _Dialogue2);
    
    UFUNCTION(BlueprintCallable)
    static void ClearOnScreenDebugMessageASF();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString BeautifyString(const FString& _string);
    
    UFUNCTION(BlueprintCallable)
    static AAIGuardPath* AddToPathWithTheLessEnemies(TSubclassOf<UNavigationQueryFilter> _navFilter, AASFCharacter* _Enemy, AAIGuardPath* _PreviousPath);
    
};

