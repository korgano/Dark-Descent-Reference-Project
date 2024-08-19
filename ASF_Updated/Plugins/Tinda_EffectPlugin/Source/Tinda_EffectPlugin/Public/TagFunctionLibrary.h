#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "TagFunctionLibrary.generated.h"

UCLASS(Blueprintable)
class TINDA_EFFECTPLUGIN_API UTagFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTagFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag MakeTagFromString(const FString& String);
    
};

