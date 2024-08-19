#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "GenericPoolInterface.h"
#include "ASFProjectile.generated.h"

class AWeapon;
class UObject;
class UProjectileComponent;
class UWorld;

UCLASS(Blueprintable)
class ASF_API AASFProjectile : public AActor, public IGenericPoolInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileComponent* ProjectileComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWeapon* Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHitResult Hit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* HitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HitLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasHit;
    
    AASFProjectile(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UObject* GenerateObject(UWorld* World, UClass* OutputType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EnableObject_Intern();
    
    UFUNCTION(BlueprintCallable)
    void EnableObject();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void DisableObject_Intern();
    
    UFUNCTION(BlueprintCallable)
    void DisableObject();
    

    // Fix for true pure virtual functions not being implemented
};

