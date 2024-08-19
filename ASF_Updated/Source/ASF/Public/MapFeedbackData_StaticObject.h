#pragma once
#include "CoreMinimal.h"
#include "LevelObjectSaveStruct.h"
#include "LevelOpenDataSaveStruct.h"
#include "MapFeedbackData_UserWidget.h"
#include "MapFeedbackData_StaticObject.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ASF_API UMapFeedbackData_StaticObject : public UMapFeedbackData_UserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelOpenDataSaveStruct LevelsOpenData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelObjectSaveStruct SavedObject;
    
    UMapFeedbackData_StaticObject();

};

