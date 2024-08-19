#pragma once
#include "CoreMinimal.h"
#include "Item.h"
#include "Welder.generated.h"

UCLASS(Blueprintable)
class ASF_API AWelder : public AItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCutting;
    
public:
    AWelder(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Start();
    
    UFUNCTION(BlueprintCallable)
    void SetIsCutting(bool IsCutting);
    
};

