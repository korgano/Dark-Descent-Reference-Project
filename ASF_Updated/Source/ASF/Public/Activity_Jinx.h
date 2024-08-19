#pragma once
#include "CoreMinimal.h"
#include "Activity.h"
#include "Activity_Jinx.generated.h"

UCLASS(Blueprintable)
class ASF_API UActivity_Jinx : public UActivity {
    GENERATED_BODY()
public:
    UActivity_Jinx();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReloadTime() const;
    
};

