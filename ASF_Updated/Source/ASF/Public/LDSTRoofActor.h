#pragma once
#include "CoreMinimal.h"
#include "LDSTActor.h"
#include "LDSTRoofActor.generated.h"

UCLASS(Blueprintable)
class ASF_API ALDSTRoofActor : public ALDSTActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoCulling;
    
    ALDSTRoofActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnSubLevelUnveilStateChanged(const FString& _SubLevel, bool _bUnveil);
    
    UFUNCTION(BlueprintCallable)
    void ActivateCulling(bool _bWithCulling);
    
};

