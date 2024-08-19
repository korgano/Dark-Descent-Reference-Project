#pragma once
#include "CoreMinimal.h"
#include "AIActionAlien.h"
#include "AIActionAlien_Breach.generated.h"

class ADoor;
class UAIActionAlien_Breach;

UCLASS(Blueprintable)
class ASF_API UAIActionAlien_Breach : public UAIActionAlien {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADoor* Door;
    
public:
    UAIActionAlien_Breach();

    UFUNCTION(BlueprintCallable)
    static void RemoveBreachingAlien(UAIActionAlien_Breach* _BreachingAlien);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBreacherAdded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAlienBreachingDoorNum(ADoor* _Door);
    
    UFUNCTION(BlueprintCallable)
    static void AddBreachingAlien(UAIActionAlien_Breach* _BreachingAlien);
    
};

