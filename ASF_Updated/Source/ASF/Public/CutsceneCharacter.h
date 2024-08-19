#pragma once
#include "CoreMinimal.h"
#include "ActorWithGameplayTag.h"
#include "ActorWithCharacterIDInterface.h"
#include "CharacterIDName.h"
#include "CutsceneCharacterEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "CutsceneCharacter.generated.h"

class UAnimInstance;
class UPreviewMeshCollection;
class USceneComponent;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class ASF_API ACutsceneCharacter : public AActorWithGameplayTag, public IActorWithCharacterIDInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewMeshCollection* PreviewMeshCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewMeshCollection* CurrentPreviewMeshCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CurrentIsBodypartedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* CurrentAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> PostProcessAnimInstance;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCutsceneCharacterEvent OnCharacterBuilt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, SaveGame, meta=(AllowPrivateAccess=true))
    FCharacterIDName CharacterIDName;
    
    ACutsceneCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedARebuild() const;
    
    UFUNCTION(BlueprintCallable)
    void InitPostProcessAnimInstance(USkeletalMeshComponent* Mesh);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USceneComponent* GetRootSceneComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool GetIsBodyparted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USkeletalMeshComponent* GetCharacterMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    USkeletalMesh* GetCharacterMainMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UClass* GetAnimClass() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishConstruction();
    
    UFUNCTION(BlueprintCallable)
    void BuildMesh();
    

    // Fix for true pure virtual functions not being implemented
};

