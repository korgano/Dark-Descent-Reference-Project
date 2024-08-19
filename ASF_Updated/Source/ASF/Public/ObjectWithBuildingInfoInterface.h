#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "BuildingIDName.h"
#include "ObjectWithBuildingInfoInterface.generated.h"

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UObjectWithBuildingInfoInterface : public UInterface {
    GENERATED_BODY()
};

class IObjectWithBuildingInfoInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void GetBuildingIDName(FBuildingIDName& _FBuildingIDName) const PURE_VIRTUAL(GetBuildingIDName,);
    
};

