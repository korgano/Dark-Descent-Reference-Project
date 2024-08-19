#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ActorInteractedComponent.generated.h"

class UInteractiveComponent;
class UTexture2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API UActorInteractedComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UTexture2D>> Icons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Names;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayPriority;
    
    UActorInteractedComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ToggleInteraction(UInteractiveComponent* InteractiveComponent, bool bIsActivated);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsInteractionAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FString GetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIcon() const;
    
};

