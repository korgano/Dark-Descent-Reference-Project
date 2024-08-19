#pragma once
#include "CoreMinimal.h"
#include "Components/TextRenderComponent.h"
#include "ASF_TextRenderComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UASF_TextRenderComponent : public UTextRenderComponent {
    GENERATED_BODY()
public:
    UASF_TextRenderComponent(const FObjectInitializer& ObjectInitializer);

};

