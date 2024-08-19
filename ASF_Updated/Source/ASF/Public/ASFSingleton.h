#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Diplomacies.h"
#include "EnumLDActorCoverType.h"
#include "EnumLDActorCrossableType.h"
#include "EnumLDActorType.h"
#include "Templates/SubclassOf.h"
#include "ASFSingleton.generated.h"

class AActor;
class AFeedbackSubObjectiveArea;
class AGameplayTwinActor;
class APropsCollAndNavActor;
class UASFSingleton;
class UCurveFloat;
class UDataTable;
class UFOWRevertedRenderTextureGDrawer;
class UGameplayTwinCustomDetailWIdget;
class ULevelPrimaryDataAsset;
class UMapFeedback_SubObjective;
class UMapInformationComponent;
class UMarineClassDataAssets;
class UMarineWound_DataAsset;
class UMaterial;
class UMaterialInterface;
class UNavArea;
class UObjectiveTierColorDataAsset;
class UResource_DataAsset;
class URoomClusterFilter;
class USoundClass;
class USoundMix;
class UStressComponent_DataAsset;
class USubLevelPrimaryDataAsset;
class UUserWidget;

UCLASS(Blueprintable)
class ASF_API UASFSingleton : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EnumLDActorCoverType, TSubclassOf<UNavArea>> CoverNavAreaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EnumLDActorCrossableType, TSubclassOf<UNavArea>> CrossableNavAreaClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceBlockMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UDataTable*> ObjectClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PipelineRenderingOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMapInformationComponent> MapInformationComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMapFeedback_SubObjective> MapFeedbackComponentClass_SubObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULevelPrimaryDataAsset*> Levels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MissionDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DialogueSpeakerDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MTMinimapMaterialType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UResource_DataAsset>> Supplies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UMarineClassDataAssets>> Civilians;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URoomClusterFilter> RoomFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URoomClusterFilter> SafeZoneFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<URoomClusterFilter> CondemnedFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoGameplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fRoofClippingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDiplomacies> Diplomacies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagWithNoHardRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AGameplayTwinActor> GameplayTwinClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayTwinCustomDetailWIdget> GameplayTwinCustomDetailWIdget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> LDModeUserWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* Curve_SecondFogData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EnumLDActorType, TSoftObjectPtr<UMaterialInterface>> MapLDTypeMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSoftObjectPtr<UMaterialInterface>> MapColTypeMat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, TSoftObjectPtr<UMarineWound_DataAsset>> MarineWound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APropsCollAndNavActor> PropsCollAndNavActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SizeMaxSmallProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SizeMaxMediumProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStressComponent_DataAsset* StressComponent_DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObjectiveTierColorDataAsset* ObjectiveTierColorDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFOWRevertedRenderTextureGDrawer> FOWReveredBoxDrawerComponentBPClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterial> MPP_SpecularFireflies_Filter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, USoundClass*> MapSoundClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, USoundMix*> MapSoundMix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* InputImagesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerActionToInputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* EventOnActor_Messages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFeedbackSubObjectiveArea> FeedbackSubObjectiveArea;
    
    UASFSingleton();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USubLevelPrimaryDataAsset* GetSubLevel(FName LevelName, FName SubLevelName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UASFSingleton* GetSingletonInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UResource_DataAsset* GetResourceDataAsset(FGameplayTag _Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMarineWound_DataAsset* GetMarineWound_DataAsset(FGameplayTag _Tag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelPrimaryDataAsset* GetLevel(FName LevelName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMarineClassDataAssets* GetCivilianDataAsset(FGameplayTag _Tag);
    
    UFUNCTION(BlueprintCallable)
    static void DisplayEventOnActorMessage(AActor* _Actor, const FString& _Id);
    
};

