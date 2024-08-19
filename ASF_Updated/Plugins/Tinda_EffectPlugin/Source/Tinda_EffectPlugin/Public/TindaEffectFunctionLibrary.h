#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "TindaEffectFunctionLibrary.generated.h"

class AActor;
class UActorComponent;

UCLASS(Blueprintable)
class TINDA_EFFECTPLUGIN_API UTindaEffectFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTindaEffectFunctionLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UActorComponent* GetChildComponentRespectingQuery(AActor* _Actor, const FGameplayTagQuery _QueryToRespect);
    
};

