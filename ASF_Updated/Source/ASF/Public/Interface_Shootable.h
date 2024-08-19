#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "Interface_Shootable.generated.h"

class APawn;

UINTERFACE(Blueprintable, MinimalAPI)
class UInterface_Shootable : public UInterface {
    GENERATED_BODY()
};

class IInterface_Shootable : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShotThe(FVector _StartShotLocation, APawn* _Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetShotLocation();
    
};

