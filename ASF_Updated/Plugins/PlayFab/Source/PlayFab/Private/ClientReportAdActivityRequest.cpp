#include "ClientReportAdActivityRequest.h"

FClientReportAdActivityRequest::FClientReportAdActivityRequest() {
    this->Activity = EAdActivity::pfenum_Opened;
    this->CustomTags = NULL;
}

