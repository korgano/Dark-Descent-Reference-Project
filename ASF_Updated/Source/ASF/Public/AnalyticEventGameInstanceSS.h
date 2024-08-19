#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "AnalyticEvent.h"
#include "Event_AnalyticEventGameInstanceSSDelegate.h"
#include "Event_AnalyticEventGameInstanceSS_AnalyticEventDelegate.h"
#include "AnalyticEventGameInstanceSS.generated.h"

UCLASS(Blueprintable)
class ASF_API UAnalyticEventGameInstanceSS : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnalyticEvent> DuringRun_AnalyticEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnalyticEvent> Global_AnalyticEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnalyticEventGameInstanceSS_AnalyticEvent OnRegisterAnalyticEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_AnalyticEventGameInstanceSS OnClearAnalyticEvent;
    
    UAnalyticEventGameInstanceSS();

    UFUNCTION(BlueprintCallable)
    void Register_AnalyticEvent_WithoutAttributes(const FString& _Name);
    
    UFUNCTION(BlueprintCallable)
    void Register_AnalyticEvent(const FAnalyticEvent& _Event);
    
    UFUNCTION(BlueprintCallable)
    void Clear_AnalyticEvent();
    
};

