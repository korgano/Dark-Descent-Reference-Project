#include "AIActionSquad.h"

UAIActionSquad::UAIActionSquad() {
    this->Squad = NULL;
    this->Controller = NULL;
    this->Pawn = NULL;
    this->bPlayerCommand = false;
}

void UAIActionSquad::SetPlayerCommand(bool _bPlayerCommand) {
}

void UAIActionSquad::SetDataMove(FDataMove _DataMove) {
}

bool UAIActionSquad::IsPlayerCommand() const {
    return false;
}

ASquad* UAIActionSquad::GetSquad() {
    return NULL;
}

FDataMove UAIActionSquad::GetDataMove() const {
    return FDataMove{};
}


