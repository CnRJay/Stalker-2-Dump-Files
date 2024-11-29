#include "HairGroupsCardsSourceDescription.h"

FHairGroupsCardsSourceDescription::FHairGroupsCardsSourceDescription() {
    this->Material = NULL;
    this->SourceType = EHairCardsSourceType::Procedural;
    this->ProceduralMesh = NULL;
    this->ImportedMesh = NULL;
    this->GroupIndex = 0;
    this->LODIndex = 0;
}

