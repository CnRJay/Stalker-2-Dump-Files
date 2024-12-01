#include "StrandGenerator.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent

AStrandGenerator::AStrandGenerator(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
    this->bUseStartSeparator = true;
    this->bUseStopSeparator = true;
    this->bUseAutoAdjusting = true;
    this->bOnlyRightAngle = true;
}

FStrandFinalData AStrandGenerator::GetFinalStrandData() {
    return FStrandFinalData{};
}


