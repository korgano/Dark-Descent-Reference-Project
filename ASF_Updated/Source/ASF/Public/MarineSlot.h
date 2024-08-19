#pragma once
#include "CoreMinimal.h"
#include "ActorWithGameplayTag.h"
#include "EnumBaseManagementMode.h"
#include "MarineSlot.generated.h"

class AHumanoid;

UCLASS(Blueprintable)
class ASF_API AMarineSlot : public AActorWithGameplayTag {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AHumanoid* Marine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumBaseManagementMode Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
public:
    AMarineSlot(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEmpty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AHumanoid* GetMarine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumBaseManagementMode GetAnimation() const;
    
    UFUNCTION(BlueprintCallable)
    void Fill(AHumanoid* _Marine);
    
    UFUNCTION(BlueprintCallable)
    void Empty();
    
};

