#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Event_SoftLogger_FStringDelegate.h"
#include "SoftLogger.generated.h"

UCLASS(Blueprintable)
class ASF_API USoftLogger : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_SoftLogger_FString OnNewMessage;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PreMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> MessageQueue;
    
public:
    USoftLogger();

    UFUNCTION(BlueprintCallable)
    void LogMessage(const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetMessages();
    
    UFUNCTION(BlueprintCallable)
    void DumpLog(const FString& Filename);
    
    UFUNCTION(BlueprintCallable)
    FString BoolToString(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void AddPreMessage(const FString& Message);
    
};

