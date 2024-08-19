#pragma once
#include "CoreMinimal.h"
#include "TargetableObjectData.h"
#include "TargetableObject.generated.h"

class AActor;

UCLASS(Blueprintable)
class ASF_API UTargetableObject : public UTargetableObjectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TargetedObject;
    
    UTargetableObject();

};

