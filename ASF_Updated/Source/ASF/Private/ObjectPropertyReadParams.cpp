#include "ObjectPropertyReadParams.h"

FObjectPropertyReadParams::FObjectPropertyReadParams() {
    this->ReadType = EnumObjectPropertyReadType::READ_PROPERTY_NAME_ON_CLASS;
    this->Value = 0.00f;
}

