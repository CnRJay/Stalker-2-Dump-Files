#include "PhysicalMaterialMask.h"

UPhysicalMaterialMask::UPhysicalMaterialMask() {
    this->UVChannelIndex = 0;
    this->AddressX = TA_Wrap;
    this->AddressY = TA_Wrap;
    this->PhysicalMaterials[0] = NULL;
    this->PhysicalMaterials[1] = NULL;
    this->PhysicalMaterials[2] = NULL;
    this->PhysicalMaterials[3] = NULL;
    this->PhysicalMaterials[4] = NULL;
    this->PhysicalMaterials[5] = NULL;
    this->PhysicalMaterials[6] = NULL;
    this->PhysicalMaterials[7] = NULL;
    this->MaskSizeX = 0;
    this->MaskSizeY = 0;
}


