#pragma once
#include "CoreMinimal.h"
#include "ASFStaticMeshComponent.h"
#include "Event_Character_boolDelegate.h"
#include "CharacterSelectionComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UCharacterSelectionComponent : public UASFStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 nbAskHover;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Character_bool OnHoverChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Character_bool OnSelectionChanged;
    
    UCharacterSelectionComponent();

    UFUNCTION(BlueprintCallable)
    void SelectCharacter(bool B);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplaySelectionFeedback(bool bIsHovered);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisplayHoverFeedback(bool bIsHovered);
    
    UFUNCTION(BlueprintCallable)
    void AskHover(bool B);
    
};

