#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SplineComponent.h"
#include "CharacterRailDelegateDelegate.h"
#include "CharacterRailDropDelegateDelegate.h"
#include "DamageResultStruct.h"
#include "RailDrivenCharacterData.h"
#include "RailPointData.h"
#include "CharacterRailSplineComponent.generated.h"

class AASFCharacter;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UCharacterRailSplineComponent : public USplineComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRailDrivenCharacterData> DrivenCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRailPointData> RailPointsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRailPointData DefaultRailPointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRailPointData LastRailPointData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDistanceBetweenDepartures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LerpToFinalStandingRotationOnLastSegment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GiveHandToAnimatorOnLastSegment;
    
public:
    UCharacterRailSplineComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateCharacterDataOnIndexIncrease(FRailDrivenCharacterData& CharacterData);
    
public:
    UFUNCTION(BlueprintCallable)
    void UnbindFromCharacterRailUpdate(AASFCharacter* Character, const FCharacterRailDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindFromCharacterDrop(AASFCharacter* Character, const FCharacterRailDropDelegate& Delegate);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCharacterDied(AASFCharacter* ActorKilled, const FDamageResultStruct& DamageResult);
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterDestroyed(AActor* ActorDestroyed);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLerpingRotationOnFinalSegment() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterDriven(AASFCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRailPointData GetRailPointDataForPointIndex(int32 PointIndex, bool& Found) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRailDrivenCharacterData GetRailDrivenDataForCharacter(AASFCharacter* Character, bool& Found) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinimumDistanceBetweenDepartures() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetFinalTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetFinalRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFinalLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRailPointData FindRailPointDataForPointIndex(int32 PointIndex, bool& Found) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRailPointData FindRailPointDataForCharacter(AASFCharacter* Character, bool& Found) const;
    
    UFUNCTION(BlueprintCallable)
    void DropCharacter(AASFCharacter* Character, bool ResetRotation);
    
    UFUNCTION(BlueprintCallable)
    void DriveCharacter(AASFCharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDriveNewCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDriveCharacter(AASFCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable)
    void BindToCharacterRailUpdate(AASFCharacter* Character, const FCharacterRailDelegate& Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindToCharacterDrop(AASFCharacter* Character, const FCharacterRailDropDelegate& Delegate);
    
};

