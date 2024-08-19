#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Tinda_TimerManagerBPLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class UTinda_TimerManagerBPLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTinda_TimerManagerBPLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Tinda_UnPauseTimerHandle(const UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static void Tinda_UnPauseTimerDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void Tinda_UnPauseTimer(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool Tinda_TimerExistsHandle(const UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Tinda_TimerExistsDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Tinda_TimerExists(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable)
    static FTimerHandle Tinda_SetTimerDelegate(FTimerDynamicDelegate Delegate, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance, bool bPausable);
    
    UFUNCTION(BlueprintCallable)
    static FTimerHandle Tinda_SetTimer(UObject* Object, const FString& FunctionName, float Time, bool bLooping, float InitialStartDelay, float InitialStartDelayVariance);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Tinda_PauseTimerHandle(const UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static void Tinda_PauseTimerDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void Tinda_PauseTimer(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Tinda_IsValidTimerHandle(FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool Tinda_IsTimerPausedHandle(const UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Tinda_IsTimerPausedDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Tinda_IsTimerPaused(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool Tinda_IsTimerActiveHandle(const UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Tinda_IsTimerActiveDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool Tinda_IsTimerActive(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable)
    static FTimerHandle Tinda_InvalidateTimerHandle(UPARAM(Ref) FTimerHandle& Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float Tinda_GetTimerRemainingTimeHandle(const UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Tinda_GetTimerRemainingTimeDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Tinda_GetTimerRemainingTime(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float Tinda_GetTimerElapsedTimeHandle(const UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Tinda_GetTimerElapsedTimeDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float Tinda_GetTimerElapsedTime(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Tinda_ClearTimerHandle(const UObject* WorldContextObject, FTimerHandle Handle);
    
    UFUNCTION(BlueprintCallable)
    static void Tinda_ClearTimerDelegate(FTimerDynamicDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    static void Tinda_ClearTimer(UObject* Object, const FString& FunctionName);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void Tinda_ClearAndInvalidateTimerHandle(const UObject* WorldContextObject, UPARAM(Ref) FTimerHandle& Handle);
    
};

