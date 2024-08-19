#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "AttributeAndName.h"
#include "TindaFloatAndName.h"
#include "Cheat_BlueprintFunctionLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class ASF_API UCheat_BlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCheat_BlueprintFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void GetPropertyTindaFloat(UObject* _Object, TArray<FTindaFloatAndName>& _TindaFloat);
    
    UFUNCTION(BlueprintCallable)
    static void GetPropertyAttribut(UObject* _Object, TArray<FAttributeAndName>& Attributes);
    
    UFUNCTION(BlueprintCallable)
    static FString GetPathOfSelectedFile(const FString& FileType);
    
};

