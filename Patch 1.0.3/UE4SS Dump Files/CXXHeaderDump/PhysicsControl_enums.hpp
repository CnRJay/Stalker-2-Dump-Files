enum class EPhysicsControlType {
    WorldSpace = 0,
    ParentSpace = 1,
    EPhysicsControlType_MAX = 2,
};

enum class EPhysicsMovementType {
    Static = 0,
    Kinematic = 1,
    Simulated = 2,
    EPhysicsMovementType_MAX = 3,
};

enum class EResetToCachedTargetBehavior {
    ResetImmediately = 0,
    ResetDuringUpdateControls = 1,
    EResetToCachedTargetBehavior_MAX = 2,
};

