#pragma once
#include "CoreMinimal.h"
#include "Tinda_MenuUserWidget.h"
#include "DisplaySettingsWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UDisplaySettingsWidget : public UTinda_MenuUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinResolutionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxResolutionScale;
    
public:
    UDisplaySettingsWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingPredefinedResolution(const FString& Format) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasQualityMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetScreenResolutions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float ComputeResolutionScale(const FString& Format) const;
    
};

