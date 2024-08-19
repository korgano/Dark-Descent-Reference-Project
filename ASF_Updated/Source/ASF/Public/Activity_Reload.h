#pragma once
#include "CoreMinimal.h"
#include "Activity.h"
#include "Activity_Reload.generated.h"

class UInventoryComponent;

UCLASS(Blueprintable)
class ASF_API UActivity_Reload : public UActivity {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* Inventory;
    
    UActivity_Reload();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetReloadTime() const;
    
};

