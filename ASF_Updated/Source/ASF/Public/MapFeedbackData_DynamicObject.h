#pragma once
#include "CoreMinimal.h"
#include "LevelDynamicObjectSaveStruct.h"
#include "MapFeedbackData_UserWidget.h"
#include "MapFeedbackData_DynamicObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UMapFeedbackData_DynamicObject : public UMapFeedbackData_UserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelDynamicObjectSaveStruct DynamicObjectData;
    
    UMapFeedbackData_DynamicObject();

};

