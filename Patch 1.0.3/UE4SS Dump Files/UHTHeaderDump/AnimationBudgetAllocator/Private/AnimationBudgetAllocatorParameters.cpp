#include "AnimationBudgetAllocatorParameters.h"

FAnimationBudgetAllocatorParameters::FAnimationBudgetAllocatorParameters() {
    this->BudgetInMs = 0.00f;
    this->MinQuality = 0.00f;
    this->MaxTickRate = 0;
    this->WorkUnitSmoothingSpeed = 0.00f;
    this->AlwaysTickFalloffAggression = 0.00f;
    this->InterpolationFalloffAggression = 0.00f;
    this->InterpolationMaxRate = 0;
    this->MaxInterpolatedComponents = 0;
    this->InterpolationTickMultiplier = 0.00f;
    this->InitialEstimatedWorkUnitTimeMs = 0.00f;
    this->MaxTickedOffsreenComponents = 0;
    this->StateChangeThrottleInFrames = 0;
    this->BudgetFactorBeforeReducedWork = 0.00f;
    this->BudgetFactorBeforeReducedWorkEpsilon = 0.00f;
    this->BudgetPressureSmoothingSpeed = 0.00f;
    this->ReducedWorkThrottleMinInFrames = 0;
    this->ReducedWorkThrottleMaxInFrames = 0;
    this->BudgetFactorBeforeAggressiveReducedWork = 0.00f;
    this->ReducedWorkThrottleMaxPerFrame = 0;
    this->BudgetPressureBeforeEmergencyReducedWork = 0.00f;
    this->AutoCalculatedSignificanceMaxDistance = 0.00f;
}

