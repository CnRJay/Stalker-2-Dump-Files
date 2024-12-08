#include "NavCorridorTestingComponent.h"

UNavCorridorTestingComponent::UNavCorridorTestingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FilterClass = NULL;
    this->bFindCorridorToGoal = true;
    this->bFollowPathOnGoalCorridor = false;
    this->FollowLookAheadDistance = 200.00f;
    this->GoalActor = NULL;
    this->NavData = NULL;
    this->bUpdateParametersFromWidth = false;
    this->PathOffset = 40.00f;
    this->PathfindingTimeUs = 0.00f;
    this->CorridorTimeUs = 0.00f;
}


