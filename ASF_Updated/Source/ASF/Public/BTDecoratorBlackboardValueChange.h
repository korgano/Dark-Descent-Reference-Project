#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "ASF_EBTBlackboardRestart.h"
#include "BTDecoratorBlackboardValueChange.generated.h"

UCLASS(Blueprintable)
class ASF_API UBTDecoratorBlackboardValueChange : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CachedDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ASF_EBTBlackboardRestart::Type> NotifyObserver;
    
public:
    UBTDecoratorBlackboardValueChange();

};

