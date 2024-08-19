#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ESaveType.h"
#include "Event_SaveLoadComponentDelegate.h"
#include "LevelObjectSaveStruct.h"
#include "SaveLoadComponent.generated.h"

class AASFCharacter;
class ULevelSaveGame;
class UObject;
class UTinda_Effect;
class UTinda_EffectHandlerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API USaveLoadComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SaveLoadComponent OnApplyValuesEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ESaveType> SaveTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> TagsToProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> TagsToAutoCreateEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ProcessedTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ParentActorSaveName;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenLoaded;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTinda_Effect*> EffectsToApply;
    
public:
    USaveLoadComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SaveTindaEffects(UTinda_EffectHandlerComponent* _EffectHandler, FLevelObjectSaveStruct& _ObjectSaveStructPtr);
    
    UFUNCTION(BlueprintCallable)
    void SavePropertiesFromObject(UObject* _Object, FLevelObjectSaveStruct& _ObjectSaveStructPtr, bool _bIsComponent);
    
    UFUNCTION(BlueprintCallable)
    void SaveParentActorGeneric(ULevelSaveGame* GenericSave);
    
    UFUNCTION(BlueprintCallable)
    void SaveParentActor(ESaveType _SaveType, const ULevelSaveGame* _LevelSaveGame);
    
    UFUNCTION(BlueprintCallable)
    void OnSaveRequested_Event(ESaveType _SaveType);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterMeshLoaded(AASFCharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void LoadParentActorFromStruct(UPARAM(Ref) FLevelObjectSaveStruct& ObjectSaveStruct);
    
    UFUNCTION(BlueprintCallable)
    bool HasBeenLoaded();
    
    UFUNCTION(BlueprintCallable)
    void GetAllSavedProperties(FLevelObjectSaveStruct& _ObjectSaveStructPtr);
    
    UFUNCTION(BlueprintCallable)
    void ApplyValues();
    
};

