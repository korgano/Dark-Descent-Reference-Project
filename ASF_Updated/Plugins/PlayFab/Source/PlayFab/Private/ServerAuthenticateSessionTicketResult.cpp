#include "ServerAuthenticateSessionTicketResult.h"

FServerAuthenticateSessionTicketResult::FServerAuthenticateSessionTicketResult() {
    this->IsSessionTicketExpired = false;
    this->UserInfo = NULL;
}

