#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InteractiveComponent_Usable.h"
#include "InteractiveComponent_ObjSearch.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UInteractiveComponent_ObjSearch : public UInteractiveComponent_Usable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SearchTypeDurationModifierTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EndWithClose;
    
    UInteractiveComponent_ObjSearch(const FObjectInitializer& ObjectInitializer);

};

