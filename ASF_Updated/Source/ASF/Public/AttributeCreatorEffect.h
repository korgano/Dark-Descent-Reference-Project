#pragma once
#include "CoreMinimal.h"
#include "Tinda_Effect.h"
#include "AttributeCreationParams.h"
#include "AttributeCreatorEffect.generated.h"

UCLASS(Blueprintable)
class ASF_API UAttributeCreatorEffect : public UTinda_Effect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttributeCreationParams> AttributeCreationParams;
    
public:
    UAttributeCreatorEffect();

};

