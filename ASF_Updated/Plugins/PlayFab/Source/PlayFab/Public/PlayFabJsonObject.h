#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PlayFabJsonObject.generated.h"

class UPlayFabJsonObject;
class UPlayFabJsonValue;

UCLASS(Blueprintable)
class PLAYFAB_API UPlayFabJsonObject : public UObject {
    GENERATED_BODY()
public:
    UPlayFabJsonObject();

    UFUNCTION(BlueprintCallable)
    void SetStringField(const FString& FieldName, const FString& StringValue);
    
    UFUNCTION(BlueprintCallable)
    void SetStringArrayField(const FString& FieldName, const TArray<FString>& StringArray);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectField(const FString& FieldName, UPlayFabJsonObject* JsonObject);
    
    UFUNCTION(BlueprintCallable)
    void SetObjectArrayField(const FString& FieldName, const TArray<UPlayFabJsonObject*>& ObjectArray);
    
    UFUNCTION(BlueprintCallable)
    void SetNumberField(const FString& FieldName, float Number);
    
    UFUNCTION(BlueprintCallable)
    void SetNumberArrayField(const FString& FieldName, const TArray<float>& NumberArray);
    
    UFUNCTION(BlueprintCallable)
    void SetFieldNull(const FString& FieldName);
    
    UFUNCTION(BlueprintCallable)
    void SetField(const FString& FieldName, UPlayFabJsonValue* JsonValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolField(const FString& FieldName, bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolArrayField(const FString& FieldName, const TArray<bool>& BoolArray);
    
    UFUNCTION(BlueprintCallable)
    void SetArrayField(const FString& FieldName, const TArray<UPlayFabJsonValue*>& inArray);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void RemoveField(const FString& FieldName);
    
    UFUNCTION(BlueprintCallable)
    void MergeJsonObject(UPlayFabJsonObject* InJsonObject, bool Overwrite);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStringField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetStringArrayField(const FString& FieldName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayFabJsonObject* GetObjectField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UPlayFabJsonObject*> GetObjectArrayField(const FString& FieldName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNumberField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<float> GetNumberArrayField(const FString& FieldName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetFieldNames();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPlayFabJsonValue* GetField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBoolField(const FString& FieldName) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<bool> GetBoolArrayField(const FString& FieldName);
    
    UFUNCTION(BlueprintCallable)
    TArray<UPlayFabJsonValue*> GetArrayField(const FString& FieldName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString EncodeJson() const;
    
    UFUNCTION(BlueprintCallable)
    bool DecodeJson(const FString& JsonString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UPlayFabJsonObject* ConstructJsonObject(UObject* WorldContextObject);
    
};

