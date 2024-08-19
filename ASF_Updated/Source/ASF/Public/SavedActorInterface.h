#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ESaveType.h"
#include "SavedActorInterface.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class USavedActorInterface : public UInterface {
    GENERATED_BODY()
};

class ISavedActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldHaveOpenData();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldBeSaved(ESaveType _SaveType);
    
    UFUNCTION()
    virtual bool SavedActorInterface_IsInitialized() PURE_VIRTUAL(SavedActorInterface_IsInitialized, return false;);
    
    UFUNCTION()
    virtual void SavedActorInterface_BindOnInitialized() PURE_VIRTUAL(SavedActorInterface_BindOnInitialized,);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeforeSaving(ESaveType _SaveType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AfterSaving(ESaveType _SaveType);
    
};

