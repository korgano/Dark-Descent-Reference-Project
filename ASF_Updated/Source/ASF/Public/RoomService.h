#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "RoomService.generated.h"

class AASFGameModeBase_BaseManagement;
class AActor;
class ARoom;

UCLASS(Blueprintable)
class ASF_API URoomService : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, ARoom*> Rooms;
    
public:
    URoomService();

    UFUNCTION(BlueprintCallable)
    void SetRooms(const TArray<AActor*>& _Rooms);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnNewTurn_Event(AASFGameModeBase_BaseManagement* _GameMode, int32 _Turn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ARoom*> GetRooms() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ARoom* GetRoomByClass(const UObject* WoldContextObject, TSubclassOf<ARoom> RoomClass, FGameplayTag _RoomTag);
    
};

