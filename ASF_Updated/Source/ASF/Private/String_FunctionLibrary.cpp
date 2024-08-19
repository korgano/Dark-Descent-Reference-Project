#include "String_FunctionLibrary.h"

UString_FunctionLibrary::UString_FunctionLibrary() {
}

int32 UString_FunctionLibrary::StringUpperCharCount(const FString& InputString) {
    return 0;
}

int32 UString_FunctionLibrary::StringArrayUpperCharCount(const TArray<FString>& InputStrings) {
    return 0;
}

int32 UString_FunctionLibrary::StringArrayCharCount(const TArray<FString>& InputStrings) {
    return 0;
}

FString UString_FunctionLibrary::RemoveWhiteSpaces(const FString& InputString) {
    return TEXT("");
}

FString UString_FunctionLibrary::RemoveTrailingUpperChars(const FString& SourceString) {
    return TEXT("");
}

FString UString_FunctionLibrary::RemoveSubstringAt(const FString& InputString, const int32 Start, const int32 End) {
    return TEXT("");
}

FString UString_FunctionLibrary::RemoveAllSubStrings(const FString& InputString, const TArray<FString>& Substrings, const bool UseCase) {
    return TEXT("");
}

FString UString_FunctionLibrary::MinifiesStringToKey(const FString& String) {
    return TEXT("");
}

bool UString_FunctionLibrary::ContainsAnyOneOfSubstrings(const FString& SearchIn, const TArray<FString>& Substrings, const bool UseCase, const bool ExactMatch) {
    return false;
}

bool UString_FunctionLibrary::ContainsAllSubstrings(const FString& SearchIn, const TArray<FString>& Substrings, const bool UseCase, const bool ExactMatch) {
    return false;
}


