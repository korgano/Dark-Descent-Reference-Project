#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SequencerFunctionLibrary.generated.h"

class USoundClass;
class USoundCue;

UCLASS(Blueprintable)
class ASF_API USequencerFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USequencerFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSoundCueSoundWavePath(const USoundCue* SoundCue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSoundCueSoundWaveName(const USoundCue* SoundCue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static USoundClass* GetSoundClassFromSoundCue(const USoundCue* SoundCue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float GetQualifiedFrameTimeAsSeconds(const FQualifiedFrameTime& QualifiedFrameTimeToConvert);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNodeCountFromSoundCue(const USoundCue* SoundCue);
    
    UFUNCTION(BlueprintCallable)
    static void ExportSoundWave(const USoundCue* SoundCue, const FString& basepath);
    
};

