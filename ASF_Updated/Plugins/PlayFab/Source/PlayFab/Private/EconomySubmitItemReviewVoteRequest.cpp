#include "EconomySubmitItemReviewVoteRequest.h"

FEconomySubmitItemReviewVoteRequest::FEconomySubmitItemReviewVoteRequest() {
    this->AlternateId = NULL;
    this->CustomTags = NULL;
    this->Entity = NULL;
    this->Vote = EHelpfulnessVote::pfenum_None;
}

