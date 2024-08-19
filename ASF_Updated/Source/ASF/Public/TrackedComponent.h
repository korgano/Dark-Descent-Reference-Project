#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EDiplomacy.h"
#include "TrackedComponent.generated.h"

class UBleepSignalComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UTrackedComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBleepSignalComponent* Bleep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDiplomacy DiplomacyWithLeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasMoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOwnerVisible;
    
    UTrackedComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateTrackedComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInMotionTrackerRange() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasMoveRecently();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLocation() const;
    
};

