#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EnumAlienAttackMemberUsed.h"
#include "SwooshComponent.generated.h"

class UAnimSequence;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ASF_API USwooshComponent : public UActorComponent {
    GENERATED_BODY()
public:
    USwooshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartOffsetedGhost(float OffsetTime, UPARAM(Ref) TArray<EnumAlienAttackMemberUsed>& MemberToDraw, FVector OriginalMove, float DelayBefore, float DelayAfter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartDelayedAnim(UAnimSequence* AnimToDuplicate, float BasePlayRate, UPARAM(Ref) TArray<EnumAlienAttackMemberUsed>& MemberToDraw, float BlendInTime, float BlendOutTime);
    
};

