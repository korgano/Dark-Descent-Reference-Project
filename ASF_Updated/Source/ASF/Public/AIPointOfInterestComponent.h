#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "AIPointOfInterestComponent.generated.h"

class AASFGameState_TacticalMode;
class UAIPointOfInterestConfig;
class UObject;
class UPointOfInterestConfig_DataAsset;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UAIPointOfInterestComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* CustomLocation;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAIPointOfInterestConfig* PointOfInterestConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPointOfInterestConfig_DataAsset* PointOfInterestConfig_DataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRoomPOI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag POIPoolTag;
    
public:
    UAIPointOfInterestComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPOIPoolTag(FGameplayTag _POIPoolTag);
    
    UFUNCTION(BlueprintCallable)
    void SetPointOfInterestConfig(UPointOfInterestConfig_DataAsset* _PointOfInterestConfig_DataAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetIsRoomPOI(bool _IsRoomPOI);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RegenerateContainer(AASFGameState_TacticalMode* GameState);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitPointOfInterest();
    
    UFUNCTION(BlueprintCallable)
    UPointOfInterestConfig_DataAsset* GetPointOfInterestConfig();
    
    UFUNCTION(BlueprintCallable)
    void EnableRoomPOI(const FGameplayTagContainer& _Categories, UObject* _Source, float _Duration);
    
    UFUNCTION(BlueprintCallable)
    void DisableRoomPOI(const FGameplayTagContainer& _Categories);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DeletePointOfInterest();
    
};

