#include "InfluenceMapQuery.h"
#include "InfluenceMapFilter.h"

UInfluenceMapQuery::UInfluenceMapQuery() {
    this->QueryFilter = UInfluenceMapFilter::StaticClass();
    this->QueryID = 0;
}


