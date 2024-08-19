#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Skill.h"
#include "Skill_LookAt.generated.h"

class AASFPlayerController;

UCLASS(Blueprintable)
class ASF_API USkill_LookAt : public USkill {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CursorZOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFPlayerController* Controller;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Launched;
    
public:
    USkill_LookAt();

    UFUNCTION(BlueprintCallable)
    void SetLocation(FVector _Location);
    
    UFUNCTION(BlueprintCallable)
    FVector GetLocationToAimAt(FVector& Origin, bool _Launched);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector CheckCollider();
    
};

