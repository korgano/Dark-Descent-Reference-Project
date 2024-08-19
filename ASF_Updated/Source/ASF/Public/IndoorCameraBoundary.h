#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "BuildingIDName.h"
#include "ObjectWithBuildingInfoInterface.h"
#include "SubLevelID.h"
#include "IndoorCameraBoundary.generated.h"

class UShapeComponent;

UCLASS(Blueprintable)
class ASF_API AIndoorCameraBoundary : public AActor, public IObjectWithBuildingInfoInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildingIDName BuildingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyRoofFade;
    
    AIndoorCameraBoundary(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetColor(FColor Color);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UShapeComponent* GetShapeComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FSubLevelID GetIndoorCameraBoundarySubLevelID() const;
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void GetBuildingIDName(FBuildingIDName& _FBuildingIDName) const override PURE_VIRTUAL(GetBuildingIDName,);
    
};

