#include "Tinda_WidgetBPLibrary.h"
#include "Templates/SubclassOf.h"

UTinda_WidgetBPLibrary::UTinda_WidgetBPLibrary() {
}

UUserWidget* UTinda_WidgetBPLibrary::WidgetGetParentOfClass(UWidget* ChildWidget, TSubclassOf<UUserWidget> WidgetClass) {
    return NULL;
}

float UTinda_WidgetBPLibrary::Tinda_WidgetSampleFunction(float Param) {
    return 0.0f;
}


