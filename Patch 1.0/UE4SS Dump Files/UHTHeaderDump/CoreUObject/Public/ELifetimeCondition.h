#pragma once
#include "CoreMinimal.h"
#include "ELifetimeCondition.generated.h"

UENUM(BlueprintType)
enum ELifetimeCondition {
    COND_None,
    COND_InitialOnly,
    COND_OwnerOnly,
    COND_SkipOwner,
    COND_SimulatedOnly,
    COND_AutonomousOnly,
    COND_SimulatedOrPhysics,
    COND_InitialOrOwner,
    COND_Custom,
    COND_ReplayOrOwner,
    COND_ReplayOnly,
    COND_SimulatedOnlyNoReplay,
    COND_SimulatedOrPhysicsNoReplay,
    COND_SkipReplay,
    COND_Never = 15,
    COND_NetGroup,
};

