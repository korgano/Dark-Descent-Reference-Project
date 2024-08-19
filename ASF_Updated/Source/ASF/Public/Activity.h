#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EActivityAnimationType.h"
#include "EnumActionStatus.h"
#include "EnumActivityType.h"
#include "Event_Activity_EnumActionStatusDelegate.h"
#include "Templates/SubclassOf.h"
#include "Activity.generated.h"

class AASFCharacter;
class AActor;
class UActivity;
class UTinda_Effect;
class UWorld;

UCLASS(Blueprintable)
class ASF_API UActivity : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Activity_EnumActionStatus OnActivityEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Activity_EnumActionStatus OnActivityStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEvent_Activity_EnumActionStatus OnActivityPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CharacterOrientation_Desired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CharacterAimingLocation_Desired;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumActivityType ActivityType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EnumActionStatus ActivityStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAnimationReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceOwnerRender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AASFCharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EActivityAnimationType AnimationType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PerceptionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PerceptionDisabled;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ActivityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UTinda_Effect> ActivityEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ActivityPerceptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTinda_Effect* EffectApplied;
    
public:
    UActivity();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseAnimationReady();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TickActivity(float _DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartActivity();
    
    UFUNCTION(BlueprintCallable)
    void SetCharacter(AASFCharacter* _Character);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationType(EActivityAnimationType _AnimationType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResumeActivity();
    
    UFUNCTION(BlueprintCallable)
    void RemoveActivityEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PauseActivity();
    
    UFUNCTION(BlueprintCallable)
    bool IsCharacterOrientation_Desired_Valid();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCancelledWhenInterrupt(UActivity* InteruptingActivity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitActivity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetPerceptionEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetPerceptionDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetCharacterOrientation_Desired();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetCharacterAimingLocation_Desired();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AASFCharacter* GetCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetbForceOwnerRender() const;
    
    UFUNCTION(BlueprintCallable)
    EActivityAnimationType GetAnimationType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumActivityType GetActivityType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EnumActionStatus GetActivityStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActivityPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndActivity(EnumActionStatus _Status);
    
    UFUNCTION(BlueprintCallable)
    static UActivity* Create_Activity_BP(TSubclassOf<UActivity> _Activity_Type, AActor* _Instigator);
    
    UFUNCTION(BlueprintCallable)
    bool CharacterAimingLocation_Desired_Valid();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AskEndActivity(EnumActionStatus _Status);
    
    UFUNCTION(BlueprintCallable)
    void AddActivityEffect();
    
};

