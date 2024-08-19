#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Event_ResourceContainerDelegate.h"
#include "Event_ResourceContainer_intDelegate.h"
#include "ResourceContainer.generated.h"

UCLASS(Blueprintable)
class ASF_API UResourceContainer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbResourcesReserved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbFreeResources;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ResourceContainer_int OnCurrentValueChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ResourceContainer_int OnNbResourcesReservedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ResourceContainer_int OnNbFreeResourcesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_ResourceContainer OnResourceContainerRemoved;
    
    UResourceContainer();

    UFUNCTION(BlueprintCallable)
    void SpendResources(int32 _Value, bool _HasBeenReserved);
    
    UFUNCTION(BlueprintCallable)
    void ReserveResources(int32 _Value);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveFreeResources(int32 _Value);
    
    UFUNCTION(BlueprintCallable)
    bool HaveEnoughResources(int32 _Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNbResourcesReserved() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNbFreeResources() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCapacityUsed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAvailableResources() const;
    
    UFUNCTION(BlueprintCallable)
    void FreeResources(int32 _Value);
    
    UFUNCTION(BlueprintCallable)
    int32 AddResources(int32 _Value, int32 _FreeCapacity);
    
    UFUNCTION(BlueprintCallable)
    void AddFreeResources(int32 _Value);
    
};

