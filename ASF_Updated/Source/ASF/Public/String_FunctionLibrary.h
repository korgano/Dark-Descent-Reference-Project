#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "String_FunctionLibrary.generated.h"

UCLASS(Blueprintable)
class ASF_API UString_FunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UString_FunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 StringUpperCharCount(const FString& InputString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 StringArrayUpperCharCount(const TArray<FString>& InputStrings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 StringArrayCharCount(const TArray<FString>& InputStrings);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString RemoveWhiteSpaces(const FString& InputString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString RemoveTrailingUpperChars(const FString& SourceString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString RemoveSubstringAt(const FString& InputString, const int32 Start, const int32 End);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString RemoveAllSubStrings(const FString& InputString, const TArray<FString>& Substrings, const bool UseCase);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString MinifiesStringToKey(const FString& String);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ContainsAnyOneOfSubstrings(const FString& SearchIn, const TArray<FString>& Substrings, const bool UseCase, const bool ExactMatch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ContainsAllSubstrings(const FString& SearchIn, const TArray<FString>& Substrings, const bool UseCase, const bool ExactMatch);
    
};

