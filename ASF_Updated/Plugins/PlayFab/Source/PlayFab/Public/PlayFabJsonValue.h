#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EPFJson.h"
#include "PlayFabJsonValue.generated.h"

class UPlayFabJsonObject;
class UPlayFabJsonValue;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabJsonValue : public UObject {
    GENERATED_BODY()
public:
    UPlayFabJsonValue();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNull() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTypeString() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EPFJson::Type> GetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPlayFabJsonValue* ConstructJsonValueString(UObject* WorldContextObject, const FString& StringValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPlayFabJsonValue* ConstructJsonValueObject(UObject* WorldContextObject, UPlayFabJsonObject* JsonObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPlayFabJsonValue* ConstructJsonValueNumber(UObject* WorldContextObject, float Number);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPlayFabJsonValue* ConstructJsonValueBool(UObject* WorldContextObject, bool InValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPlayFabJsonValue* ConstructJsonValueArray(UObject* WorldContextObject, const TArray<UPlayFabJsonValue*>& inArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString AsString() const;
    
    UFUNCTION(BlueprintCallable)
    UPlayFabJsonObject* AsObject();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float AsNumber() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AsBool() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UPlayFabJsonValue*> AsArray() const;
    
};

