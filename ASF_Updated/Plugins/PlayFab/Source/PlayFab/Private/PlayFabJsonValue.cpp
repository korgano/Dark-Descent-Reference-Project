#include "PlayFabJsonValue.h"

UPlayFabJsonValue::UPlayFabJsonValue() {
}

bool UPlayFabJsonValue::IsNull() const {
    return false;
}

FString UPlayFabJsonValue::GetTypeString() const {
    return TEXT("");
}

TEnumAsByte<EPFJson::Type> UPlayFabJsonValue::GetType() const {
    return EPFJson::None;
}

UPlayFabJsonValue* UPlayFabJsonValue::ConstructJsonValueString(UObject* WorldContextObject, const FString& StringValue) {
    return NULL;
}

UPlayFabJsonValue* UPlayFabJsonValue::ConstructJsonValueObject(UObject* WorldContextObject, UPlayFabJsonObject* JsonObject) {
    return NULL;
}

UPlayFabJsonValue* UPlayFabJsonValue::ConstructJsonValueNumber(UObject* WorldContextObject, float Number) {
    return NULL;
}

UPlayFabJsonValue* UPlayFabJsonValue::ConstructJsonValueBool(UObject* WorldContextObject, bool InValue) {
    return NULL;
}

UPlayFabJsonValue* UPlayFabJsonValue::ConstructJsonValueArray(UObject* WorldContextObject, const TArray<UPlayFabJsonValue*>& inArray) {
    return NULL;
}

FString UPlayFabJsonValue::AsString() const {
    return TEXT("");
}

UPlayFabJsonObject* UPlayFabJsonValue::AsObject() {
    return NULL;
}

float UPlayFabJsonValue::AsNumber() const {
    return 0.0f;
}

bool UPlayFabJsonValue::AsBool() const {
    return false;
}

TArray<UPlayFabJsonValue*> UPlayFabJsonValue::AsArray() const {
    return TArray<UPlayFabJsonValue*>();
}


