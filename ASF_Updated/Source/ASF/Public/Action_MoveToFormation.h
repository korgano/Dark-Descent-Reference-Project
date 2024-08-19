#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Action.h"
#include "DataMove.h"
#include "EFormationTypeEnum.h"
#include "Segment.h"
#include "Templates/SubclassOf.h"
#include "Action_MoveToFormation.generated.h"

class AActor;
class UActionStep;
class UAction_MoveToFormation;

UCLASS(Blueprintable)
class ASF_API UAction_MoveToFormation : public UAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFormationTypeEnum FormationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSegment> Segments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UActionStep> ActionStep_Move;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector OverwatchLocation;
    
    UAction_MoveToFormation();

    UFUNCTION(BlueprintCallable)
    static UAction_MoveToFormation* Create_Action_MoveToFormation(AActor* _Context, TSubclassOf<UAction_MoveToFormation> _ActionClass, FDataMove _DataMove, EFormationTypeEnum _FormationType, FVector _OverwatchLocation);
    
};

