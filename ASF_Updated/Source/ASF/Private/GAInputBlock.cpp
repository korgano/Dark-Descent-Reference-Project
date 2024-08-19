#include "GAInputBlock.h"

UGAInputBlock::UGAInputBlock() {
    this->ActionLabel = TEXT("Block/Unblock input");
    this->bIsUsableClass = true;
    this->DisplayName = TEXT("Block/Unblock input");
    this->bBlockCameraMove = false;
    this->bUnBlockCameraMove = false;
    this->bBlockClick = false;
    this->bUnBlockClick = false;
    this->bBlockBeforeMoveMarine = false;
    this->bUnblockBeforeMoveMarine = false;
    this->bUseForceArray = false;
}


