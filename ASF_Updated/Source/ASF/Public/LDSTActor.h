#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EnumLDActorType.h"
#include "LDActor.h"
#include "MatScalarParameter.h"
#include "RoofFadingInfo.h"
#include "Templates/SubclassOf.h"
#include "LDSTActor.generated.h"

class AASFGameModeBase_TacticalMode;
class ALDSTActor;
class ASubLevelHandler;
class UBlueprint;
class UFOWRevertedRenderTextureGDrawer;
class ULightComponent;
class UMaterialInterface;
class UNavModifierComponent;
class UStaticMesh;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class ASF_API ALDSTActor : public ALDActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentSubLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedToChangeCustomDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedToActivateCustomDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    TArray<FRoofFadingInfo> WhenToFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* BlockMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* TrueMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFOWRevertedRenderTextureGDrawer* ExteriorWallFOWDrawer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNavModifierComponent* NavModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALDSTActor> BlockMeshClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALDSTActor> TrueMeshClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCustomLightChanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasBeenRegenerated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMergedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepMeshCollider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanReceiveDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExteriorWall;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInDebugCollisionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInDebugTypeMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> MatsSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatScalarParameter> MaterialScalarParameters;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector XVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector YVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CenterVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ULightComponent*, float> LightIntensitySave;
    
public:
    ALDSTActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTrueMeshClass(TSubclassOf<ALDSTActor> _Class);
    
    UFUNCTION(BlueprintCallable)
    static void SetSTTrueMeshOnCDO(UBlueprint* _BP, UStaticMesh* _TrueMesh);
    
    UFUNCTION(BlueprintCallable)
    void SetNewLDType(EnumLDActorType NewType);
    
    UFUNCTION(BlueprintCallable)
    static UClass* SetMeshOnCDO(UBlueprint* _BP, UStaticMesh* _Mesh);
    
    UFUNCTION(BlueprintCallable)
    void SetBlockMeshClass(TSubclassOf<ALDSTActor> _Class);
    
    UFUNCTION(BlueprintCallable)
    void RemoveRoofFadingInfos(const TArray<FRoofFadingInfo>& NewInfoToRemove);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelUnload(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelLoaded(ASubLevelHandler* Handler, const FString& StreamingLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnSubLevelHandlerSet(AASFGameModeBase_TacticalMode* GameMode, ASubLevelHandler* SubLevelHandler);
    
    UFUNCTION(BlueprintCallable)
    void OnIndoorCameraBoundaryUpdated(AASFGameModeBase_TacticalMode* GameMode, const FString& Building, bool bActivate);
    
    UFUNCTION(BlueprintCallable)
    void MarkAsKeepMeshCollision(bool bKeepMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInDebugMode() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsFromThisBuilding(const FString& BuildingName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlockMesh() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetYVector();
    
    UFUNCTION(BlueprintCallable)
    FVector GetXVector();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ALDSTActor> GetTrueMeshClass() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetCenterVector();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<ALDSTActor> GetBlockMeshClass() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceMatForLDType_Debug(bool bDebugMode);
    
    UFUNCTION(BlueprintCallable)
    void ForceMatForColType_Debug(bool bDebugMode);
    
    UFUNCTION(BlueprintCallable)
    void FadeLDSTActorOnOff(bool _bFadeOn);
    
    UFUNCTION(BlueprintCallable)
    void DelegateCustomCullAfterFade();
    
    UFUNCTION(BlueprintCallable)
    void AddRoofFadingInfos(const TArray<FRoofFadingInfo>& NewInfoToAdd);
    
};

