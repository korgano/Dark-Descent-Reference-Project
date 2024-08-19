#pragma once
#include "CoreMinimal.h"
#include "Tinda_Effect.h"
#include "TindaEffect_CharaIdSaved.generated.h"

UCLASS(Blueprintable)
class ASF_API UTindaEffect_CharaIdSaved : public UTinda_Effect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString CharacterIDName;
    
    UTindaEffect_CharaIdSaved();

};

