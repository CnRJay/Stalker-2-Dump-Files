#include "GroomCreateStrandsTexturesOptions.h"

UGroomCreateStrandsTexturesOptions::UGroomCreateStrandsTexturesOptions() {
    this->Resolution = 2048;
    this->TraceType = EStrandsTexturesTraceType::TraceBidirectional;
    this->TraceDistance = 3.00f;
    this->MeshType = EStrandsTexturesMeshType::Static;
    this->StaticMesh = NULL;
    this->SkeletalMesh = NULL;
    this->LODIndex = 0;
    this->SectionIndex = 0;
    this->UVChannelIndex = 0;
}


