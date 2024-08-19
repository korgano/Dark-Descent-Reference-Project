#pragma once
#include "CoreMinimal.h"
#include "Activity.h"
#include "Templates/SubclassOf.h"
#include "Activity_CommandOverwatch.generated.h"

class AActor;
class UActivity_CommandOverwatch;

UCLASS(Blueprintable)
class ASF_API UActivity_CommandOverwatch : public UActivity {
    GENERATED_BODY()
public:
    UActivity_CommandOverwatch();

    UFUNCTION(BlueprintCallable)
    static UActivity_CommandOverwatch* Create_Activity_CommandOverwatch(TSubclassOf<UActivity> _Activity_Type, AActor* _Instigator);
    
};

