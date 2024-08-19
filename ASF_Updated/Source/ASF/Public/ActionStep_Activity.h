#pragma once
#include "CoreMinimal.h"
#include "ActionStep.h"
#include "EnumActionStatus.h"
#include "Event_ActionStep_ActivityDelegate.h"
#include "ActionStep_Activity.generated.h"

class UActivity;

UCLASS(Blueprintable)
class ASF_API UActionStep_Activity : public UActionStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ActionStep_Activity OnActivity_Created;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UActivity> ActivityClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UActivity* Activity;
    
public:
    UActionStep_Activity();

    UFUNCTION(BlueprintCallable)
    void SetGameplayTask(UActivity* _Activity);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivityPaused(UActivity* _Activity, EnumActionStatus _Status);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActivityEnded(UActivity* _Activity, EnumActionStatus _Status);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActivity* GetGameplayTask();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UActivity* CreateActivity();
    
};

