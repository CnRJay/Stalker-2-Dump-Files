#include "HairCardsGeometrySettings.h"

FHairCardsGeometrySettings::FHairCardsGeometrySettings() {
    this->GenerationType = EHairCardsGenerationType::CardsCount;
    this->CardsCount = 0;
    this->ClusterType = EHairCardsClusterType::Low;
    this->MinSegmentLength = 0.00f;
    this->AngularThreshold = 0.00f;
    this->MinCardsLength = 0.00f;
    this->MaxCardsLength = 0.00f;
}

