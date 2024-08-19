#include "PlayFabJsonObject.h"

UPlayFabJsonObject::UPlayFabJsonObject() {
}

void UPlayFabJsonObject::SetStringField(const FString& FieldName, const FString& StringValue) {
}

void UPlayFabJsonObject::SetStringArrayField(const FString& FieldName, const TArray<FString>& StringArray) {
}

void UPlayFabJsonObject::SetObjectField(const FString& FieldName, UPlayFabJsonObject* JsonObject) {
}

void UPlayFabJsonObject::SetObjectArrayField(const FString& FieldName, const TArray<UPlayFabJsonObject*>& ObjectArray) {
}

void UPlayFabJsonObject::SetNumberField(const FString& FieldName, float Number) {
}

void UPlayFabJsonObject::SetNumberArrayField(const FString& FieldName, const TArray<float>& NumberArray) {
}

void UPlayFabJsonObject::SetFieldNull(const FString& FieldName) {
}

void UPlayFabJsonObject::SetField(const FString& FieldName, UPlayFabJsonValue* JsonValue) {
}

void UPlayFabJsonObject::SetBoolField(const FString& FieldName, bool InValue) {
}

void UPlayFabJsonObject::SetBoolArrayField(const FString& FieldName, const TArray<bool>& BoolArray) {
}

void UPlayFabJsonObject::SetArrayField(const FString& FieldName, const TArray<UPlayFabJsonValue*>& inArray) {
}

void UPlayFabJsonObject::Reset() {
}

void UPlayFabJsonObject::RemoveField(const FString& FieldName) {
}

void UPlayFabJsonObject::MergeJsonObject(UPlayFabJsonObject* InJsonObject, bool Overwrite) {
}

bool UPlayFabJsonObject::HasField(const FString& FieldName) const {
    return false;
}

FString UPlayFabJsonObject::GetStringField(const FString& FieldName) const {
    return TEXT("");
}

TArray<FString> UPlayFabJsonObject::GetStringArrayField(const FString& FieldName) {
    return TArray<FString>();
}

UPlayFabJsonObject* UPlayFabJsonObject::GetObjectField(const FString& FieldName) const {
    return NULL;
}

TArray<UPlayFabJsonObject*> UPlayFabJsonObject::GetObjectArrayField(const FString& FieldName) {
    return TArray<UPlayFabJsonObject*>();
}

float UPlayFabJsonObject::GetNumberField(const FString& FieldName) const {
    return 0.0f;
}

TArray<float> UPlayFabJsonObject::GetNumberArrayField(const FString& FieldName) {
    return TArray<float>();
}

TArray<FString> UPlayFabJsonObject::GetFieldNames() {
    return TArray<FString>();
}

UPlayFabJsonValue* UPlayFabJsonObject::GetField(const FString& FieldName) const {
    return NULL;
}

bool UPlayFabJsonObject::GetBoolField(const FString& FieldName) const {
    return false;
}

TArray<bool> UPlayFabJsonObject::GetBoolArrayField(const FString& FieldName) {
    return TArray<bool>();
}

TArray<UPlayFabJsonValue*> UPlayFabJsonObject::GetArrayField(const FString& FieldName) {
    return TArray<UPlayFabJsonValue*>();
}

FString UPlayFabJsonObject::EncodeJson() const {
    return TEXT("");
}

bool UPlayFabJsonObject::DecodeJson(const FString& JsonString) {
    return false;
}

UPlayFabJsonObject* UPlayFabJsonObject::ConstructJsonObject(UObject* WorldContextObject) {
    return NULL;
}


