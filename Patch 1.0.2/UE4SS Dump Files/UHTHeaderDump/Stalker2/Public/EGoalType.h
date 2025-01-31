#pragma once
#include "CoreMinimal.h"
#include "EGoalType.generated.h"

UENUM(BlueprintType)
enum class EGoalType : uint8 {
    None,
    ALife,
    AskMedkit,
    Berserk,
    Combat,
    Threat,
    Escort,
    Flee,
    Follow,
    GuardTarget,
    GuardZone,
    HealAlly,
    HideFromThreats,
    Emission,
    ReturnFromShelter,
    Idle,
    Kill,
    LairPatrolling,
    MoveTo,
    Pacifist,
    Panic,
    RecoverFromKnockdown,
    SeekPlayer,
    AnimationStay,
    IdleStay,
    WaitingPlayer,
    WarnThreat,
    ContextualAction,
    Patrol,
    ShootTarget,
    Sane,
    LeaveRestrictedArea,
    HideWeaponWarning,
    AttackLairGoal,
    ReuniteWithLair,
    UseAbility,
    PathFailed,
};

