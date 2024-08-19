#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FOWRevertedBinaryTest.generated.h"

UCLASS(Blueprintable)
class ASF_API AFOWRevertedBinaryTest : public AActor {
    GENERATED_BODY()
public:
    AFOWRevertedBinaryTest(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void setMemory(int32 beginning, int32 Length);
    
    UFUNCTION(BlueprintCallable)
    void resetMemory();
    
    UFUNCTION(BlueprintCallable)
    void checkMemory();
    
};

