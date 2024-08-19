#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "PlacementRestrictionArea.generated.h"

class UArrowComponent;
class UShapeComponent;

UCLASS(Abstract, Blueprintable)
class ASF_API APlacementRestrictionArea : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* RotationArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShapeComponent* AreaShapeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestrictionAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationFeedbackLength;
    
public:
    APlacementRestrictionArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RevealRotation(const FVector& StartLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RevealLocation();
    
    UFUNCTION(BlueprintCallable)
    void RevealAll();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsRotationAuthorized(const FRotator& Rotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsLocationInArea(const FVector& Location) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitializeRestrictionArea();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideRotation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideLocation();
    
    UFUNCTION(BlueprintCallable)
    void HideAll();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotationFeedbackLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRestrictionAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UShapeComponent* GetAreaShapeComponent() const;
    
};

