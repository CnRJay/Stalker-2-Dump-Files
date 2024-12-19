enum class AnsverSlotPaddingType {
    None = 0,
    Top = 1,
    Bottom = 2,
    TopAndBottom = 3,
    AnsverSlotPaddingType_MAX = 4,
};

enum class EAIAnimationAction {
    None = 0,
    HitBlendOut = 1,
    HitEnded = 2,
    DeathRagdoll = 3,
    KnockDownIn = 4,
    KnockDownOut = 5,
    ZombieResurrect = 6,
    ResurectionComplete = 7,
    EAIAnimationAction_MAX = 8,
};

enum class EAIConstraintType {
    PrepareForEmission = 0,
    Count = 1,
    EAIConstraintType_MAX = 2,
};

enum class EAIFeature {
    None = 0,
    Tick = 1,
    UpdateDecision = 2,
    Threat = 4,
    Combat = 8,
    UpdateSensors = 16,
    Vision = 32,
    Hearing = 64,
    Hit = 128,
    Flair = 256,
    EmissionThreatAndCombat = 512,
    Sanity = 1024,
    MovementDetection = 2048,
    ALifeDirector = 4096,
    LeaveRestrictedArea = 8192,
    WoundedWeapon = 16384,
    MotionWarpingNPC = 32768,
    ALifePopulationManager = 65536,
    SeePlayer = 131072,
    LuminanceManager = 262144,
    FlashlightUseManager = 524288,
    All = 1048575,
    EAIFeature_MAX = 1048576,
};

enum class EAIMovementPose {
    Stand = 0,
    Crouch = 1,
    EAIMovementPose_MAX = 2,
};

enum class EAIThreatState {
    None = 0,
    Peaceful = 1,
    SearchForThreat = 2,
    Combat = 4,
    EAIThreatState_MAX = 5,
};

enum class EALifeDirectorScenarioTarget {
    None = 0,
    Player = 1,
    EnemyLair = 2,
    AllyLair = 4,
    AttackEnemyLair = 8,
    ContextualAction = 16,
    TargetEachOther = 32,
    EALifeDirectorScenarioTarget_MAX = 33,
};

enum class EALifeFactionGoalType {
    Aggressive = 0,
    Normal = 1,
    Defensive = 2,
    GetCount = 3,
    EALifeFactionGoalType_MAX = 4,
};

enum class EALifeGroupPriorityType {
    Default = 0,
    Global = 1,
    Local = 2,
    Emission = 3,
    Quest = 4,
    Directed = 5,
    Count = 6,
    EALifeGroupPriorityType_MAX = 7,
};

enum class EAbility {
    None = 0,
    Empty = 1,
    ActivateAnomaly = 2,
    Attack = 3,
    AoEAttack = 4,
    Roar = 5,
    Berserk = 6,
    PSYStrike = 7,
    Zombification = 8,
    AuraEffect = 9,
    Charge = 10,
    Throw = 11,
    ThrowGrenade = 12,
    Shield = 13,
    AOEAttackPassive = 14,
    LongJump = 15,
    WeaponDrag = 16,
    WeaponRiseAndShoot = 17,
    TrickSound = 18,
    Summon = 19,
    HumanMeleeAttack = 20,
    StrelokSpecial = 21,
    BlinkTeleport = 22,
    Count = 23,
    EAbility_MAX = 24,
};

enum class EAbilityStatePhase {
    Anticipation = 0,
    Execution = 1,
    Recovery = 2,
    Complete = 3,
    EAbilityStatePhase_MAX = 4,
};

enum class EActionType {
    HideMainItem = 0,
    EquipMainItem = 1,
    HideSupportItem = 2,
    EquipSupportItem = 3,
    Interact = 4,
    UseMainItem = 5,
    ReloadWeapon = 6,
    ChangeFireType = 7,
    HandleAimInput = 8,
    MeleeAttack = 9,
    ThrowItem = 10,
    ChangeAmmoType = 11,
    UnjamWeapon = 12,
    Fall = 13,
    Lean = 14,
    Crouch = 15,
    Walk = 16,
    Sprint = 17,
    Run = 18,
    Climb = 19,
    PickUpItem = 20,
    UseConsumableItem = 21,
    UseBackpack = 22,
    UsePDA = 23,
    DragDeadBody = 24,
    AutoCover = 25,
    RemoveLeftHandFromMainItem = 26,
    ReturnLeftHandOnMainItem = 27,
    KnockDown = 28,
    InstallAttach = 29,
    ThrowWithoutEquip = 30,
    EquipBothHands = 31,
    HandleAimInputUnfocusable = 32,
    UseMainItemUnfocusable = 33,
    MeleeAttackUnfocusable = 34,
    Vault = 35,
    EnableShootingAttach = 36,
    DisableShootingAttach = 37,
    ToggleFlashlight = 38,
    Limp = 39,
    SwapWeapon = 40,
    ItemSelector = 41,
    AttachSelector = 42,
    InteractWithAnim = 43,
    InteractInstant = 44,
    PickUpItemWithAnim = 45,
    EquipTwoHandItem = 46,
    HideTwoHandItem = 47,
    InspectArtifact = 48,
    UnloadWeapon = 49,
    ToggleFlashlightWithAnim = 50,
    PlayGuitar = 51,
    Dodge = 52,
    GetCount = 53,
    EActionType_MAX = 54,
};

enum class EAdvanceActionType {
    None = 0,
    Approach = 1,
    ReadyForAction = 2,
    MontageMovement = 3,
    Action = 4,
    EAdvanceActionType_MAX = 5,
};

enum class EAffectMembers {
    NoAffectMembers = 0,
    AffectMembers = 1,
    Count = 2,
    EAffectMembers_MAX = 3,
};

enum class EAgentArchetype {
    Human = 0,
    Mutant = 1,
    GetCount = 2,
    EAgentArchetype_MAX = 3,
};

enum class EAgentBehaviourModifier {
    Default = 0,
    Zombie = 1,
    Phantom = 2,
    GetCount = 3,
    EAgentBehaviourModifier_MAX = 4,
};

enum class EAgentDomain {
    ALife = 0,
    Quest = 1,
    Count = 2,
    EAgentDomain_MAX = 3,
};

enum class EAgentFollowingFlags {
    None = 0,
    ForceLookAtTargetLocation = 1,
    GetCount = 2,
    EAgentFollowingFlags_MAX = 3,
};

enum class EAgentType {
    Human = 0,
    MutantGeneric = 1,
    Bloodsucker = 2,
    BlindDog = 3,
    Flesh = 4,
    Boar = 5,
    Controller = 6,
    Poltergeist = 7,
    Pseudogiant = 8,
    Snork = 9,
    Burer = 10,
    Chimera = 11,
    Cat = 12,
    Tushkan = 13,
    RatSwarm = 14,
    PseudoDog = 15,
    Deer = 16,
    GetCount = 17,
    EAgentType_MAX = 18,
};

enum class EAgentTypeMask {
    None = 0,
    Human = 1,
    MutantGeneric = 2,
    Bloodsucker = 4,
    BlindDog = 8,
    Flesh = 16,
    Boar = 32,
    Controller = 64,
    Poltergeist = 128,
    Pseudogiant = 256,
    Snork = 512,
    Burer = 1024,
    Chimera = 2048,
    Cat = 4096,
    Tushkan = 8192,
    RatSwarm = 16384,
    PseudoDog = 32768,
    Deer = 65536,
    Mutants = 131070,
    CloseCombatAgent = 96574,
    DeffensiveCombatAgent = 1216,
    SmallNavAgent = 24576,
    DefaultNavAgent = 38607,
    LargeNavAgent = 67888,
    AgentsCrushingStaticDestructs = 106495,
    AgentsAvoidingStaticDestructs = 8192,
    Default = 4294967295,
    EAgentTypeMask_MAX = 4294967296,
};

enum class EAggressiveMutantCombatPlannerActions {
    ContainerActions = 0,
    SimpleActions = 1,
    RotateToEnemyAction = 2,
    MoveToEnemyAction = 3,
    MutantEscapeAction = 4,
    PrepareForAttackAction = 5,
    RetreatAction = 6,
    EAggressiveMutantCombatPlannerActions_MAX = 7,
};

enum class EAimAssistPresetType {
    Disable = 0,
    Default = 1,
    Focusing = 2,
    Full = 3,
    Custom = 4,
    GetCount = 5,
    EAimAssistPresetType_MAX = 6,
};

enum class EAimAssistType {
    None = 0,
    Stickiness = 1,
    Magnetism = 2,
    Snapping = 3,
    TargetTracking = 4,
    GetCount = 5,
    EAimAssistType_MAX = 6,
};

enum class EAimAssistWeightType {
    None = 0,
    DistanceFromApex = 1,
    DistanceFromCenter = 2,
    Angle = 3,
    Intensity = 4,
    IsTargetHostile = 5,
    GetCount = 6,
    EAimAssistWeightType_MAX = 7,
};

enum class EAllowedValues {
    Any = 0,
    NonZero = 1,
    PositiveOnly = 2,
    EAllowedValues_MAX = 3,
};

enum class EAmmoCaliber {
    None = 0,
    A918 = 1,
    A919 = 2,
    A045 = 3,
    A545 = 4,
    A556 = 5,
    A762 = 6,
    A762Sniper = 7,
    A762NATO = 8,
    A939 = 9,
    A012 = 10,
    AVOG = 11,
    AGA = 12,
    APG7V = 13,
    AHEDP = 14,
    GetCount = 15,
    EAmmoCaliber_MAX = 16,
};

enum class EAmmoType {
    None = 0,
    Default = 1,
    ArmorPiercing = 2,
    Supersonic = 3,
    Expanding = 4,
    Incendiary = 5,
    GetCount = 6,
    EAmmoType_MAX = 7,
};

enum class EAnalyticsCategory {
    None = 0,
    Kills = 1,
    Deaths = 2,
    Count = 3,
    EAnalyticsCategory_MAX = 4,
};

enum class EAnalyticsLogType {
    LocalOnly = 0,
    GlobalOnly = 1,
    LocalAndGlobal = 2,
    EAnalyticsLogType_MAX = 3,
};

enum class EAnimClimbState {
    None = 0,
    RightUp = 1,
    LeftUp = 2,
    RightDown = 3,
    LeftDown = 4,
    ExitUpLadder = 5,
    EnterUpLadder = 6,
    EnterDownLadder = 7,
    FastDescentStartRight = 8,
    FastDescentStartLeft = 9,
    FastDescentStartBoth = 10,
    FastDescentLoop = 11,
    FastDescentExit = 12,
    FastDescentExitOnTop = 13,
    EnterLastStepUpRight = 14,
    EnterLastStepUpLeft = 15,
    EnterPreLastStepUpRight = 16,
    EnterPreLastStepUpLeft = 17,
    ExitLastStep = 18,
    EAnimClimbState_MAX = 19,
};

enum class EAnimConstraintProfile {
    None = 0,
    HingesOnly = 1,
    NoLimits = 2,
    RagdollNoDrivers = 3,
    EAnimConstraintProfile_MAX = 4,
};

enum class EAnimDialogContextualState {
    Stand = 0,
    SitChair = 1,
    SitBarrel = 2,
    SitEdge = 3,
    SitGround = 4,
    EAnimDialogContextualState_MAX = 5,
};

enum class EAnimDialogIdleState {
    None = 0,
    Listening = 1,
    Waiting = 2,
    Talking = 3,
    EAnimDialogIdleState_MAX = 4,
};

enum class EAnimDirections {
    None = 0,
    Forward = 1,
    Backward = 2,
    Left = 3,
    Right = 4,
    ForwardLeft = 5,
    ForwardRight = 6,
    BackwardLeft = 7,
    BackwardRight = 8,
    EAnimDirections_MAX = 9,
};

enum class EAnimFacialSource {
    Dialog = 0,
    Contextual = 1,
    ActorDuplicating = 2,
    EAnimFacialSource_MAX = 3,
};

enum class EAnimGuitarRightHandState {
    StrumDown = 0,
    StrumUp = 1,
    StrumDownWithoutUp = 2,
    StrumUpWithoutDown = 3,
    StrumDownWithoutUpTwice = 4,
    StrumUpWithoutDownTwice = 5,
    EAnimGuitarRightHandState_MAX = 6,
};

enum class EAnimGuitarState {
    Enter = 0,
    Exit = 1,
    Chord1 = 2,
    Chord1m = 3,
    Chord2 = 4,
    Chord2m = 5,
    Chord3 = 6,
    Chord3m = 7,
    Chord4 = 8,
    Chord4m = 9,
    Chord5 = 10,
    Chord5m = 11,
    Chord6 = 12,
    Chord6m = 13,
    WithoutGuitar = 14,
    EAnimGuitarState_MAX = 15,
};

enum class EAnimHitBodyPart {
    Head = 0,
    LeftShoulder = 1,
    RightShoulder = 2,
    LowerBody = 3,
    EAnimHitBodyPart_MAX = 4,
};

enum class EAnimHitBodyPartType {
    Head = 0,
    UpperBody = 1,
    LowerBody = 2,
    LeftLeg = 3,
    RightLeg = 4,
    EAnimHitBodyPartType_MAX = 5,
};

enum class EAnimHitSourceType {
    Default = 0,
    Shotgun = 1,
    EAnimHitSourceType_MAX = 2,
};

enum class EAnimHumanBodyState {
    Stand = 0,
    Sit = 1,
    EAnimHumanBodyState_MAX = 2,
};

enum class EAnimInteractAction {
    None = 0,
    OpenLootMenu = 1,
    CloseLootMenu = 2,
    StartPlayerContextualAction = 3,
    TriggerNotifyEvent = 4,
    EAnimInteractAction_MAX = 5,
};

enum class EAnimObjState {
    None = 0,
    Alive = 1,
    Moving = 2,
    Walking = 4,
    Running = 8,
    Sprinting = 16,
    Crouching = 32,
    LowCrouching = 64,
    Climbing = 128,
    Falling = 256,
    Limping = 512,
    Zombie = 1024,
    BusyLeftHand = 2048,
    Sitting = 4096,
    Inspecting = 8192,
    Combat = 16384,
    Rotating = 32768,
    RenderRelevant = 65536,
    EAnimObjState_MAX = 65537,
};

enum class EAnimPoseSearchMoveType {
    Idle = 0,
    Move = 1,
    Start = 2,
    Stop = 3,
    DirectionChange = 4,
    EAnimPoseSearchMoveType_MAX = 5,
};

enum class EAnimPushbackState {
    Inactive = 0,
    Active = 1,
    Delayed = 2,
    BlendingOut = 3,
    EAnimPushbackState_MAX = 4,
};

enum class EAnimStateCurveType {
    Standing = 0,
    Sitting = 1,
    Lying = 2,
    EAnimStateCurveType_MAX = 3,
};

enum class EAnimStealthKillPose {
    None = 0,
    Standing = 1,
    Sitting = 2,
    SittingOnGround = 3,
    EAnimStealthKillPose_MAX = 4,
};

enum class EAnimSwitchFireTypeMode {
    Hip = 0,
    Aim = 1,
    EAnimSwitchFireTypeMode_MAX = 2,
};

enum class EAnimTopazAction {
    None = 0,
    SetVisible = 1,
    SetInvisible = 2,
    EnableDisplay = 3,
    DisableDisplay = 4,
    EAnimTopazAction_MAX = 5,
};

enum class EAnimUpdateCondition {
    None = 0,
    SwappedFirstAndThirdPerson = 1,
    MainHandChanged = 2,
    SecondaryHandChanged = 3,
    Aimed = 4,
    MainUnEquipped = 5,
    AttachInstalled = 6,
    WeaponStateChanged = 7,
    EAnimUpdateCondition_MAX = 8,
};

enum class EAnimationAimState {
    None = 0,
    HipToAimActive = 1,
    AimToHipActive = 2,
    AimingActive = 3,
    EAnimationAimState_MAX = 4,
};

enum class EAnimationHands {
    None = 0,
    LeftHand = 1,
    RightHand = 2,
    BothHand = 3,
    EAnimationHands_MAX = 4,
};

enum class EAnimationHeadTypes {
    SK_fac_20_00 = 0,
    SK_fac_20_01 = 1,
    SK_fac_20_02 = 2,
    SK_fac_20_03 = 3,
    SK_fac_20_04 = 4,
    SK_fac_30_01 = 5,
    SK_fac_30_02 = 6,
    SK_fac_30_03 = 7,
    SK_fac_30_04 = 8,
    SK_fac_30_05 = 9,
    SK_fac_30_07 = 10,
    SK_fac_30_08 = 11,
    SK_fac_30_09 = 12,
    SK_fac_30_10 = 13,
    SK_fac_30_11 = 14,
    SK_fac_30_12 = 15,
    SK_fac_30_13 = 16,
    SK_fac_30_14 = 17,
    SK_fac_30_15 = 18,
    SK_fac_30_16 = 19,
    SK_fac_30_17 = 20,
    SK_fac_30_18 = 21,
    SK_fac_30_19 = 22,
    SK_fac_40_01 = 23,
    SK_fac_40_03 = 24,
    SK_fac_40_04 = 25,
    SK_fac_40_05 = 26,
    SK_fac_40_06 = 27,
    SK_fac_40_07 = 28,
    SK_fac_40_08 = 29,
    SK_fac_40_09 = 30,
    SK_fac_50_01 = 31,
    SK_fac_50_01_02 = 32,
    SK_fac_50_02 = 33,
    SK_fac_50_03 = 34,
    SK_fac_50_04 = 35,
    SK_fac_50_05 = 36,
    SK_fac_50_06 = 37,
    SK_fac_50_07 = 38,
    SK_fac_20_00_v2 = 39,
    SK_fac_20_02_v2 = 40,
    SK_fac_30_02_v2 = 41,
    SK_fac_30_03_v2 = 42,
    SK_fac_30_04_v2 = 43,
    SK_fac_30_07_v2 = 44,
    SK_fac_30_08_v2 = 45,
    SK_fac_40_01_v2 = 46,
    SK_fac_MAX = 47,
};

enum class EAnimationIdleStates {
    Idle = 0,
    RelaxedIdle = 1,
    ShootingIdle = 2,
    EAnimationIdleStates_MAX = 3,
};

enum class EAnimationLeanState {
    None = 0,
    LeftIn = 1,
    LeftIdle = 2,
    LeftOut = 3,
    RightIn = 4,
    RightIdle = 5,
    RightOut = 6,
    EAnimationLeanState_MAX = 7,
};

enum class EAnimationMovingStates {
    Idle = 0,
    Moving = 1,
    ShootingMoving = 2,
    EAnimationMovingStates_MAX = 3,
};

enum class EAnimationReloadTypes {
    None = 0,
    Full = 1,
    Tactical = 2,
    Unload = 4,
    SingleBullet = 8,
    TwinFull = 16,
    TwinTactical = 32,
    TwinFullAux = 64,
    TwinTacticalAux = 128,
    EAnimationReloadTypes_MAX = 129,
};

enum class EAnimationRequestType {
    None = 0,
    WhenAvailableSlot = 1,
    WhenChangeState = 2,
    WhenAnimMontageBlendingOut = 3,
    WhenAnimMontageEnded = 4,
    WhenAnimationStarted = 5,
    EAnimationRequestType_MAX = 6,
};

enum class EAnimationShootingTypes {
    Default = 0,
    Aim = 1,
    DefaultLastShoot = 2,
    AimLastShoot = 3,
    LooseShoot = 4,
    LooseShootInAim = 5,
    EAnimationShootingTypes_MAX = 6,
};

enum class EAnimationSlots {
    DefaultSlot = 0,
    MainActionSlot = 1,
    EAnimationSlots_MAX = 2,
};

enum class EAnimationStates {
    None = 0,
    Stand = 1,
    Walking = 2,
    Running = 3,
    Sprinting = 4,
    Crouching = 5,
    LowCrouching = 6,
    EAnimationStates_MAX = 7,
};

enum class EAnimationStealthState {
    None = 0,
    RelaxToStealthActive = 1,
    StealthToRelaxActive = 2,
    StealthActive = 3,
    EAnimationStealthState_MAX = 4,
};

enum class EAnimationTargetType {
    None = 0,
    Stay = 1,
    Sleep = 2,
    Rest = 3,
    Heal = 4,
    InteractWithPDA = 5,
    ReactionOnEmission = 6,
    EAnimationTargetType_MAX = 7,
};

enum class EAnimationThrowingType {
    None = 0,
    Weak = 1,
    Strong = 2,
    WeakOneHanded = 3,
    StrongOneHanded = 4,
    WithoutEquip = 5,
    EAnimationThrowingType_MAX = 6,
};

enum class EAnimationType {
    ClimbAnimationEnded = 0,
    ExitLadder = 1,
    FocusCameraCenter = 2,
    StartJumpFall = 3,
    EAnimationType_MAX = 4,
};

enum class EAnomalyActiveState {
    Active = 0,
    Idle = 1,
    EAnomalyActiveState_MAX = 2,
};

enum class EAnomalyAnimInteraction {
    GravityInteractIn = 0,
    EAnomalyAnimInteraction_MAX = 1,
};

enum class EAnomalyElementType {
    None = 0,
    Gravity = 1,
    Electro = 2,
    Fire = 3,
    Chemical = 4,
    PSY = 5,
    GetCount = 6,
    EAnomalyElementType_MAX = 7,
};

enum class EAnomalyOverlappedActorState {
    None = 0,
    CanTriggerAnomaly = 1,
    ReachableByAnomaly = 2,
    HasInteractionEffects = 4,
    HasPreInteractionEffects = 8,
    HasPostInteractionEffects = 16,
    HasImmuneToAnomaly = 32,
    ReachableAndCanTriggerAnomaly = 3,
    EAnomalyOverlappedActorState_MAX = 33,
};

enum class EAnomalyStateType {
    None = 0,
    Idle = 1,
    Activation = 2,
    Active = 3,
    Recharge = 4,
    EAnomalyStateType_MAX = 5,
};

enum class EAnomalyType {
    None = 0,
    CarouselAnomaly = 1,
    ChemicalAnomaly = 2,
    ClassicFireAnomaly = 3,
    ClickerAnomaly = 4,
    DiamondAnomaly = 5,
    ElectroAnomaly = 6,
    ExpulsionAnomaly = 7,
    FlycatcherAnomaly = 8,
    RazorAnomaly = 9,
    LavaLampAnomaly = 10,
    LightningBallAnomaly = 11,
    PillowAnomaly = 12,
    PSYAnomaly = 13,
    PSYEmitterAnomaly = 14,
    PSYControllerAnomaly = 15,
    SoapBubbleAnomaly = 16,
    ToxicCloudAnomaly = 17,
    GetCount = 18,
    EAnomalyType_MAX = 19,
};

enum class EAnomalyVisualization {
    Shape = 0,
    VFX = 1,
    EAnomalyVisualization_MAX = 2,
};

enum class EApplyRestrictionType {
    Custom = 0,
    LeaveSame = 1,
    Reset = 2,
    EApplyRestrictionType_MAX = 3,
};

enum class EArchiartifactType {
    None = 0,
    Ball = 1,
    Water = 2,
    Flower = 3,
    Bolt = 4,
    Nut = 5,
    Kettle = 6,
    GetCount = 7,
    EArchiartifactType_MAX = 8,
};

enum class EArmorScale {
    LightArmor = 0,
    MediumArmor = 1,
    HeavyArmor = 2,
    SuperHeavyArmor = 3,
    GetCount = 4,
    EArmorScale_MAX = 5,
};

enum class EArtifactRarity {
    Common = 0,
    Uncommon = 1,
    Rare = 2,
    Epic = 3,
    GetCount = 4,
    EArtifactRarity_MAX = 5,
};

enum class EArtifactSpawnerExcludeRule {
    None = 0,
    ExcludeQuestArtifacts = 1,
    ExcludeArchiArtifacts = 2,
    All = 3,
    EArtifactSpawnerExcludeRule_MAX = 4,
};

enum class EArtifactType {
    Fire = 0,
    Electro = 1,
    Gravity = 2,
    Chemical = 3,
    PSY = 4,
    GetCount = 5,
    Fake = 6,
    None = 7,
    EArtifactType_MAX = 8,
};

enum class EAspectRatio {
    Auto = 0,
    X16Y9 = 1,
    X16Y10 = 2,
    X21Y9 = 3,
    X32Y9 = 4,
    X4Y3 = 5,
    GetCount = 6,
    EAspectRatio_MAX = 7,
};

enum class EAssetType {
    None = 0,
    DynamicReloadAsset = 1,
    Blueprint = 2,
    AnomalyBlueprint = 3,
    ArtifactBlueprint = 4,
    BoltBlueprint = 5,
    CharacterBlueprint = 6,
    ProjectileBlueprint = 7,
    InteractableBlueprint = 8,
    UIWidgetBlueprint = 9,
    GrenadeBlueprint = 10,
    StaticMesh = 11,
    SkeletalMesh = 12,
    BaseWeaponAnimationBlueprints = 13,
    AnimSequence = 14,
    AnimMontage = 15,
    Material = 16,
    MaterialInstanceConstant = 17,
    ItemIcons = 18,
    UIIcons = 19,
    Markers = 20,
    UpgradeIcons = 21,
    Texture2D = 22,
    CurveFloat = 23,
    CurveLinearColor = 24,
    CameraShake = 25,
    WeaponCameraShake = 26,
    WeaponParticles = 27,
    ProjectileParticles = 28,
    ProjectileDecals = 29,
    WeaponMaterials = 30,
    CurveLinearColorAtlas = 31,
    MaterialParameterCollection = 32,
    ParticleSystems = 33,
    NiagaraParticleSystem = 34,
    TrueSkySequenceAsset = 35,
    GroomAsset = 36,
    GroomBindingAsset = 37,
    GroomMaterials = 38,
    AkAudioEvent = 39,
    AkAudioParameter = 40,
    AkAudioSwitchValue = 41,
    AkAudioStateValue = 42,
    AkAudioAuxBus = 43,
    InputAction = 44,
    InputMappingContext = 45,
    GetCount = 46,
    EAssetType_MAX = 47,
};

enum class EAsyncLoadPriority {
    Default = 0,
    High = 50,
    Maximum = 100,
    EAsyncLoadPriority_MAX = 101,
};

enum class EAttachAction {
    None = 0,
    JoinAttachToHand = 1,
    RemoveAttachFromHandAndAttachToWeapon = 2,
    PickingUpItem = 3,
    RemoveItemFromHand = 4,
    FinishRequestedInstallAttach = 5,
    AttachMeshToSocket = 6,
    ForceBindedHandsLookVertical = 7,
    UpdateCameraRotation = 8,
    UpdatePlayerPosition = 9,
    DissolvePickedFakeArtifact = 10,
    EAttachAction_MAX = 11,
};

enum class EAttachItemType {
    None = 0,
    Required = 1,
    Injector = 2,
    Artifact = 3,
    Mesh = 4,
    EAttachItemType_MAX = 5,
};

enum class EAttachSlot {
    None = 0,
    Barrel = 1,
    Scope = 2,
    Handguard = 3,
    Magazine = 4,
    PlankScope = 5,
    Flashlight = 6,
    Lasersight = 7,
    GetCount = 8,
    EAttachSlot_MAX = 9,
};

enum class EAttachSlotState {
    None = 0,
    Default = 1,
    Detach = 2,
    Selected = 4,
    Highlighted = 8,
    Empty = 16,
    Filled = 32,
    Disabled = 64,
    SelectedHighlighted = 12,
    HighlightedFilled = 40,
    HighlightedEmpty = 24,
    SelectedFilled = 36,
    SelectedEmpty = 20,
    SelectedHighlightedFilled = 44,
    SelectedHighlightedEmpty = 28,
    EAttachSlotState_MAX = 65,
};

enum class EAttachType {
    Silencer = 0,
    Muzzle = 1,
    FlashSuppressor = 2,
    Scope = 3,
    Grip = 4,
    GrenadeLauncher = 5,
    Shotgun = 6,
    WeaponFlashlight = 7,
    LaserSight = 8,
    Magazine = 9,
    IronSight = 10,
    PlankScope = 11,
    GetCount = 12,
    EAttachType_MAX = 13,
};

enum class EAttachedMagazineType {
    Eject = 0,
    Insert = 1,
    EAttachedMagazineType_MAX = 2,
};

enum class EAttackActionType {
    None = 0,
    Shoot = 1,
    Melee = 2,
    Throw = 3,
    Reload = 4,
    Jam = 5,
    Idle = 6,
    Attach = 7,
    ChargeGrenade = 8,
    GetCount = 9,
    EAttackActionType_MAX = 10,
};

enum class EAttackDirection {
    Any = 0,
    Left = 1,
    Right = 2,
    EAttackDirection_MAX = 3,
};

enum class EAttractionPointType {
    StaticLocation = 0,
    FollowObject = 1,
    FollowCharacterBone = 2,
    ExitLookAt = 3,
    EAttractionPointType_MAX = 4,
};

enum class EAudioRoomPresetBandwidth {
    None = 0,
    Custom = 1,
    Close = 2,
    HalfOpen = 3,
    Open = 4,
    Isolated = 5,
    GetCount = 6,
    EAudioRoomPresetBandwidth_MAX = 7,
};

enum class EAudioRoomPresetBase {
    None = 0,
    Custom = 1,
    GlobalExterior = 2,
    RoomWoodSmall = 3,
    RoomWoodMedium = 4,
    RoomWoodLarge = 5,
    RoomConcreteSmall = 6,
    RoomConcreteMedium = 7,
    RoomConcreteLarge = 8,
    CaveGroundSmall = 9,
    CaveGroundMedium = 10,
    CaveGroundLarge = 11,
    CaveRockSmall = 12,
    CaveRockMedium = 13,
    CaveRockLarge = 14,
    HangarMedium = 15,
    HangarLarge = 16,
    LabSmall = 17,
    LabMedium = 18,
    LabLarge = 19,
    SewerSmall = 20,
    SewerMedium = 21,
    SewerLarge = 22,
    TunnelSmall = 23,
    TunnelMedium = 24,
    TunnelLarge = 25,
    BasementSmall = 26,
    BasementMedium = 27,
    BasementLarge = 28,
    IsolatedSmall = 29,
    IsolatedMedium = 30,
    IsolatedLarge = 31,
    MetalSmall = 32,
    SIRCAAMedium = 33,
    SIRCAALarge = 34,
    SIRCAAMediumNoDetails = 35,
    SIRCAALargeNoDetails = 36,
    SIRCAAGallery = 37,
    Generators_Large = 38,
    Elevator_Tunnel = 39,
    Strelok_Arena = 40,
    Lab_X7 = 41,
    XlabSmall = 42,
    XlabMedium = 43,
    XlabLarge = 44,
    GetCount = 45,
    EAudioRoomPresetBase_MAX = 46,
};

enum class EAudioVolumeAxisOptionType {
    None = 0,
    X = 1,
    Y = 2,
    Z = 3,
    X_Neg = 4,
    Y_Neg = 5,
    Z_Neg = 6,
    EAudioVolumeAxisOptionType_MAX = 7,
};

enum class EAutoCoverState {
    StandInCover = 0,
    CanLeanRight = 1,
    CanLeanLeft = 2,
    ApproachCover = 3,
    ApproachCoverLeft = 4,
    ApproachCoverRight = 5,
    AimLeft = 6,
    AimRight = 7,
    AimUp = 8,
    AimlessShootLeft = 9,
    AimlessShootRight = 10,
    AimlessShootUp = 11,
    ExitCover = 12,
    InCoverWithoutCoverAffect = 13,
    EAutoCoverState_MAX = 14,
};

enum class EAvailableCoverActionsSide {
    None = 0,
    Left = 1,
    Right = 2,
    Center = 4,
    EAvailableCoverActionsSide_MAX = 5,
};

enum class EAvailableCoverEnterTypes {
    None = 0,
    Short = 1,
    Long = 2,
    EAvailableCoverEnterTypes_MAX = 3,
};

enum class EAvailableCoverExitTypes {
    None = 0,
    Front = 1,
    Aside = 2,
    Back = 4,
    EAvailableCoverExitTypes_MAX = 5,
};

enum class EAvoidanceAgentCollisionState {
    None = 0,
    IgnoreUnits = 1,
    IgnorePlayer = 2,
    IgnoreAll = 3,
    EAvoidanceAgentCollisionState_MAX = 4,
};

enum class EAvoidanceAgentType {
    None = 0,
    AvoidanceAgent = 1,
    ObstacleAgent = 2,
    MoveThroughUnits = 4,
    Default = 3,
    EAvoidanceAgentType_MAX = 5,
};

enum class EAwareness {
    None = 0,
    Calm = 1,
    Suspicious = 2,
    Battle = 3,
    EAwareness_MAX = 4,
};

enum class EBehaviorType {
    Kill = 0,
    Follow = 1,
    Panic = 2,
    Rest = 3,
    Flee = 4,
    Sleep = 5,
    Stay = 6,
    Berserk = 7,
    Pacifist = 8,
    Confused = 9,
    Guard = 10,
    MoveTo = 11,
    Escort = 12,
    Patrol = 13,
    ShootTarget = 14,
    AttackLair = 15,
    UseAbility = 16,
    BaseSquad = 17,
    GetCount = 18,
    EBehaviorType_MAX = 19,
};

enum class EBeneficial {
    None = 0,
    Positive = 1,
    Negative = 2,
    GetCount = 3,
    EBeneficial_MAX = 4,
};

enum class EBiomeCurveAtlas {
    Default = 0,
    RedForest = 1,
    Urban = 2,
    OrdinaryForest = 3,
    Water = 4,
    Swamp = 5,
    Road = 6,
    DeadForest = 7,
    PineForest = 8,
    GetCount = 9,
    EBiomeCurveAtlas_MAX = 10,
};

enum class EBleedingStatusLog {
    None = 0,
    BleedingDamage = 1,
    EBleedingStatusLog_MAX = 2,
};

enum class EBlockSlot {
    None = 0,
    MainHandsSlot = 1,
    MainHandsSlotSecond = 2,
    PistolSlot = 3,
    KnifeSlot = 4,
    BoltSlot = 5,
    GrenadeSlot = 6,
    EBlockSlot_MAX = 7,
};

enum class EBodyMeshType {
    BodyArmor = 0,
    Face = 1,
    Hands = 2,
    Head = 3,
    Attach = 4,
    Cloth = 5,
    EBodyMeshType_MAX = 6,
};

enum class EBoltActionWeaponState {
    NotBolted = 0,
    ReadyToShoot = 1,
    NoBoltAction = 2,
    EBoltActionWeaponState_MAX = 3,
};

enum class EBoneInteractionType {
    HideBone = 0,
    ShowBone = 1,
    HideBoneOnAmmoCount = 2,
    EBoneInteractionType_MAX = 3,
};

enum class EBoolProviderType {
    None = 0,
    Constant = 1,
    And = 2,
    Or = 3,
    Not = 4,
    PlayerUnderRoof = 5,
    PlayerRank = 6,
    TargetRank = 7,
    FactionRelation = 8,
    TargetRelation = 9,
    TraderRegenerationHours = 10,
    TraderRegenerationDays = 11,
    TargetHasEffectBoolProvider = 12,
    TargetInShelter = 13,
    GetCount = 14,
    EBoolProviderType_MAX = 15,
};

enum class EBorderType {
    HorizontalBorder = 0,
    VerticalBorder = 1,
    EBorderType_MAX = 2,
};

enum class EBreathState {
    Inhale = 0,
    Exhale = 1,
    Hold = 2,
    EBreathState_MAX = 3,
};

enum class EBrokenGameDataFilter {
    None = 0,
    QuestPart = 1,
    UnderDraftComment = 2,
    IsInWhiteList = 3,
    GetCount = 4,
    EBrokenGameDataFilter_MAX = 5,
};

enum class EButtonState {
    Active = 0,
    Blocked = 1,
    Hidden = 2,
    EButtonState_MAX = 3,
};

enum class ECalculateSignificance {
    Default = 0,
    ScreenSize = 1,
    ScreenSizeAndDistance = 2,
    ECalculateSignificance_MAX = 3,
};

enum class ECameraShakeEffectSubtype {
    None = 0,
    AddEffect = 1,
    RemoveEffect = 2,
    GetCount = 3,
    ECameraShakeEffectSubtype_MAX = 4,
};

enum class ECameraShakeGroupType {
    None = 0,
    Priority = 1,
    MaxCount = 2,
    GetCount = 3,
    ECameraShakeGroupType_MAX = 4,
};

enum class ECameraShakeType {
    None = 0,
    Constant = 1,
    Vital = 2,
    FloatProvider = 3,
    GetCount = 4,
    ECameraShakeType_MAX = 5,
};

enum class ECauseOfDeath {
    None = 0,
    Range = 1,
    Puncture = 2,
    Bite = 3,
    Explosive = 4,
    Burn = 5,
    ChemicalBurn = 6,
    Shock = 7,
    Gravity = 8,
    CarouselAnomaly = 9,
    Emission = 10,
    Zombification = 11,
    PsyPhantomDeath = 12,
    HeadShot = 13,
    KnifeCritical = 14,
    DeadOnSpawn = 15,
    Killed = 16,
    Drowned = 17,
    SpawnedCorpseNoNPCCollision = 18,
    Quest = 19,
    ECauseOfDeath_MAX = 20,
};

enum class EChangeValueMode {
    Set = 0,
    Add = 1,
    Subtract = 2,
    Multiply = 3,
    Divide = 4,
    EChangeValueMode_MAX = 5,
};

enum class ECharacterType {
    Player = 0,
    NPC = 1,
    ECharacterType_MAX = 2,
};

enum class ECinematicParameter {
    None = 0,
    MovementSpeedMultiplier = 1,
    HudVisibility = 2,
    AnimationCameraYawLimit = 3,
    AnimationCameraPitchLimit = 4,
    AnimationCameraMultiplier = 5,
    GetCount = 6,
    ECinematicParameter_MAX = 7,
};

enum class ECloseType {
    OnlyPriority = 0,
    IgnoreClose = 1,
    PriorityAndIgnoreCloseByName = 2,
    ECloseType_MAX = 3,
};

enum class ECodelockKeyDirectionType {
    None = 0,
    Up = 1,
    Down = 2,
    Left = 3,
    Right = 4,
    ECodelockKeyDirectionType_MAX = 5,
};

enum class ECodelockKeyType {
    Digit = 0,
    Enter = 1,
    Cancel = 2,
    ECodelockKeyType_MAX = 3,
};

enum class ECoilsState {
    Broken = 0,
    Restoring = 1,
    Cooled = 2,
    ECoilsState_MAX = 3,
};

enum class ECollisionFormType {
    None = 0,
    Box = 1,
    Sphere = 2,
    Cylinder = 3,
    Custom = 4,
    ECollisionFormType_MAX = 5,
};

enum class EColorBlindMode {
    None = 0,
    Protanopia = 1,
    Deuteranopia = 2,
    Tritanopia = 3,
    GetCount = 4,
    EColorBlindMode_MAX = 5,
};

enum class ECompassPosition {
    Bottom = 0,
    Top = 1,
    ECompassPosition_MAX = 2,
};

enum class ECompassState {
    Default = 0,
    Battle = 1,
    SecondaryQuestZone = 2,
    MainQuestZone = 3,
    ECompassState_MAX = 4,
};

enum class EConditionCheckType {
    None = 0,
    And = 1,
    Or = 2,
    EConditionCheckType_MAX = 3,
};

enum class EConditionComparance {
    Less = 0,
    LessOrEqual = 1,
    Equal = 2,
    NotEqual = 3,
    GreaterOrEqual = 4,
    Greater = 5,
    EConditionComparance_MAX = 6,
};

enum class EConnectionLineState {
    None = 0,
    Top = 1,
    Middle = 2,
    Down = 3,
    EConnectionLineState_MAX = 4,
};

enum class EConsumableType {
    None = 0,
    Food = 1,
    Medicine = 2,
    Guitar = 3,
    EConsumableType_MAX = 4,
};

enum class EContextualActionAllowedAgentType {
    AlifeAgent = 0,
    QuestAgent = 1,
    EContextualActionAllowedAgentType_MAX = 2,
};

enum class EContextualActionBodyPart {
    None = 0,
    Head = 1,
    Back = 2,
    Skirt = 4,
    EContextualActionBodyPart_MAX = 5,
};

enum class EContextualActionComparisonOperator {
    Greater = 0,
    Less = 1,
    EContextualActionComparisonOperator_MAX = 2,
};

enum class EContextualActionDialogType {
    None = 0,
    Dialog = 1,
    BusyComment = 2,
    Comment = 3,
    EContextualActionDialogType_MAX = 4,
};

enum class EContextualActionEffectType {
    None = 0,
    ChangeNeedValue = 1,
    AddCurrentNeed = 2,
    RemoveCurrentNeed = 3,
    EContextualActionEffectType_MAX = 4,
};

enum class EContextualActionNeeds {
    None = 1,
    Idle = 2,
    Rest = 4,
    Sleep = 8,
    Smoke = 16,
    Drink = 32,
    Eat = 64,
    Guitar = 128,
    Work = 256,
    PDA = 512,
    Detector = 1024,
    Guard = 2048,
    WeaponCleaning = 4096,
    Patrolling = 8192,
    Fight = 16384,
    Quest = 32768,
    Emission = 65536,
    Monolog = 131072,
    Dialog = 262144,
    FallbackIdle = 524288,
    Anecdote = 1048576,
    RunOnTalking = 2097152,
    Count = 22,
    EContextualActionNeeds_MAX = 2097153,
};

enum class EContextualActionNodeType {
    None = 0,
    Start = 1,
    Animation = 2,
    SoundDependentAnimation = 3,
    RandomSelector = 4,
    SequentialSelector = 5,
    DistanceSelector = 6,
    Interrupt = 7,
    ConditionalSelector = 8,
    EContextualActionNodeType_MAX = 9,
};

enum class EContextualActionPreconditionType {
    None = 0,
    Need = 1,
    EquippedItem = 2,
    NPCPrototype = 3,
    AllowedAgentType = 4,
    ItemInInventory = 5,
    GlobalVariable = 6,
    AvailableBodyPart = 7,
    Weather = 8,
    Rank = 9,
    Faction = 10,
    EContextualActionPreconditionType_MAX = 11,
};

enum class EContextualAgentType {
    Human = 0,
    MutantGeneric = 1,
    Bloodsucker = 2,
    BlindDog = 3,
    Flesh = 4,
    Boar = 5,
    Controller = 6,
    Poltergeist = 7,
    Pseudogiant = 8,
    Snork = 9,
    Burer = 10,
    Chimera = 11,
    Cat = 12,
    Tushkan = 13,
    RatSwarm = 14,
    PseudoDog = 15,
    Deer = 16,
    Zombie = 17,
    GetCount = 18,
    EContextualAgentType_MAX = 19,
};

enum class EContextualItemAttachType {
    AttachNewStaticMesh = 0,
    AttachNewSkeletalMesh = 1,
    AttachItemFromScene = 2,
    AttachParticleSystem = 3,
    EContextualItemAttachType_MAX = 4,
};

enum class ECoverFocusType {
    Path = 0,
    Target = 1,
    ECoverFocusType_MAX = 2,
};

enum class ECrashStoredType {
    None = 0,
    ActiveNodes = 1,
    ActiveQuests = 2,
    Inventory = 3,
    Health = 4,
    Stamina = 5,
    DrinkLevel = 6,
    RadiationLevel = 7,
    GetCount = 8,
    ECrashStoredType_MAX = 9,
};

enum class ECriticalHitState {
    NotCriticalHit = 0,
    CriticalHit = 1,
    ECriticalHitState_MAX = 2,
};

enum class ECrosshairAnimationType {
    None = 0,
    Show = 1,
    Hidden = 2,
    ECrosshairAnimationType_MAX = 3,
};

enum class ECrosshairType {
    Cross = 0,
    Circle = 1,
    Point = 2,
    Arc = 3,
    Empty = 4,
    GetCount = 5,
    ECrosshairType_MAX = 6,
};

enum class ECrosshairTypeSetting {
    Regular = 0,
    Dot = 1,
    GetCount = 2,
    ECrosshairTypeSetting_MAX = 3,
};

enum class ECurrentActiveWeapon {
    None = 0,
    Primary = 1,
    Secondary = 2,
    GetCount = 3,
    ECurrentActiveWeapon_MAX = 4,
};

enum class ECurveAtlasParameter {
    SkySphere_CloudColor = 0,
    SkySphere_HorizonColor = 4,
    SkySphere_ZenithColor = 8,
    AtmosphericFogParametersPack1_SunMultiplier = 12,
    AtmosphericFog_FogMultiplier = 13,
    AtmosphericFog_DensityMultiplier = 14,
    AtmosphericFog_DensityOffset = 15,
    ExponentialFogParameters = 16,
    SkyLightColor = 20,
    Intensity = 24,
    Contrast = 28,
    GetCount = 29,
    ECurveAtlasParameter_MAX = 30,
};

enum class ECustomDataDistribution {
    Uniform = 0,
    Custom = 1,
    ECustomDataDistribution_MAX = 2,
};

enum class ECutsceneBlinkProfile {
    Default = 0,
    NoBlink = 1,
    Frequent = 2,
    ECutsceneBlinkProfile_MAX = 3,
};

enum class ECutsceneEyesIdleProfile {
    NoIdle = 0,
    Default = 1,
    Dialog = 2,
    KeepEyesOff = 3,
    ECutsceneEyesIdleProfile_MAX = 4,
};

enum class EDPadClickType {
    Up = 0,
    Down = 1,
    Right = 2,
    Left = 3,
    EDPadClickType_MAX = 4,
};

enum class EDamageAffectorType {
    None = 0,
    Projectile = 1,
    HeavyProjectile = 2,
    Explosion = 3,
    Melee = 4,
    Count = 5,
    EDamageAffectorType_MAX = 6,
};

enum class EDamageBone {
    Head = 0,
    Body = 1,
    Limbs = 2,
    GetCount = 3,
    EDamageBone_MAX = 4,
};

enum class EDamageSource {
    None = 0,
    AnomalyStrike = 1,
    Bullet = 2,
    ShockWave = 3,
    Explosion = 4,
    BiteSmall = 5,
    BiteLarge = 6,
    CutSmall = 7,
    CutLarge = 8,
    RamSmall = 9,
    RamLarge = 10,
    Knife = 11,
    WeaponButt = 12,
    Fire = 13,
    Electricity = 14,
    ElectricityPermanent = 15,
    Acid = 16,
    Radiation = 17,
    PSY = 18,
    Bleeding = 19,
    Emission = 20,
    Physics = 21,
    Hunger = 22,
    BulletHeavy = 23,
    Buckshot = 24,
    Chemical = 25,
    Expulsion = 26,
    ClassicFire = 27,
    SoapBubble = 28,
    Diamond = 29,
    IronWind = 30,
    Carousel = 31,
    LightningBall = 32,
    LavaLamp = 33,
    ToxicCloud = 34,
    Clicker = 35,
    Bulb = 36,
    FireBreath = 37,
    WanderingLights = 38,
    PoppyField = 39,
    PoltergeistCommonCollisionAttack = 40,
    PoltergeistFireCollisionAttack = 41,
    PoltergeistElectroCollisionAttack = 42,
    PoltergeistChemicalCollisionAttack = 43,
    Water = 44,
    Fall = 45,
    StealthKill = 46,
    CommonPermanent = 47,
    GetCount = 48,
    EDamageSource_MAX = 49,
};

enum class EDamageType {
    None = 0,
    Burn = 1,
    Shock = 2,
    ChemicalBurn = 3,
    Radiation = 4,
    PSY = 5,
    Strike = 6,
    Fall = 7,
    Physics = 8,
    Emission = 9,
    Bleeding = 10,
    Hunger = 11,
    GetCount = 12,
    EDamageType_MAX = 13,
};

enum class EDayOfWeekFlag {
    Monday = 1,
    Tuesday = 2,
    Wednesday = 4,
    Thursday = 8,
    Friday = 16,
    Saturday = 32,
    Sunday = 64,
    EDayOfWeekFlag_MAX = 65,
};

enum class EDeathAnimationType {
    Default = 0,
    Explosion = 1,
    Burn = 2,
    ChemicalBurn = 3,
    Emission = 4,
    Zombification = 5,
    HeadShot = 6,
    DeadOnSpawn = 7,
    Killed = 8,
    Drowned = 9,
    Carousel = 10,
    Shock = 11,
    Physic = 12,
    EDeathAnimationType_MAX = 13,
};

enum class EDebugBulletLog {
    None = 0,
    BaseDamage = 1,
    LastBulletDamage = 2,
    DistanceScalingDamage = 4,
    ArmorScalingDamage = 8,
    BoneScalingDamage = 16,
    BotsBaseDamage = 32,
    BotsLastBulletDamage = 64,
    BotsDistanceScalingDamage = 128,
    BotsArmorScalingDamage = 256,
    BotsBoneScalingDamage = 512,
    OnlyBaseDamage = 33,
    OnlyLastBulletDamage = 66,
    OnlyDistanceScalingDamage = 132,
    OnlyArmorScalingDamage = 264,
    OnlyBoneScalingDamage = 528,
    PlayerDamage = 31,
    BotsDamage = 992,
    Everything = 1023,
    EDebugBulletLog_MAX = 1024,
};

enum class EDebugElements {
    MiniMap = 0,
    DataAndTime = 1,
    PlayerStats = 2,
    Count = 3,
    EDebugElements_MAX = 4,
};

enum class EDestructionActionType {
    NoActionSelected = 0,
    SetNewMesh = 1,
    PlayVisualEffect = 2,
    PlaySound = 3,
    Destroy = 4,
    DisablePhysics = 5,
    EnablePhysics = 6,
    Explode = 7,
    SpawnItems = 8,
    EDestructionActionType_MAX = 9,
};

enum class EDetailsElementType {
    Default = 0,
    StageSlots = 1,
    Description = 2,
    Count_Max = 3,
    EDetailsElementType_MAX = 4,
};

enum class EDetectorMode {
    Inactive = 0,
    Active = 1,
    EDetectorMode_MAX = 2,
};

enum class EDetectorType {
    None = 0,
    Standard = 1,
    Echo = 2,
    Bear = 3,
    Gilka = 4,
    Veles = 5,
    GetCount = 6,
    EDetectorType_MAX = 7,
};

enum class EDialogAction {
    None = 0,
    TerminateDialog = 1,
    TimedAnswer = 2,
    FastTravel = 4,
    OpenTradeMenu = 8,
    OpenUpgradeMenu = 16,
    Heal = 32,
    Bribe = 64,
    GetMoney = 128,
    ShowMoney = 256,
    Attack = 512,
    Hit = 1024,
    GiveMedkit = 2048,
    Bye = 4096,
    ShowItem = 8192,
    RankCheck = 16384,
    FactionRelationshipCheck = 32768,
    GiveItem = 65536,
    GetItem = 131072,
    Guide = 262144,
    GuideUI = 524288,
    GuideSelection = 1048576,
    Threat = 2097152,
    Eat = 4194304,
    Drink = 8388608,
    SideQuest = 16777216,
    Reward = 33554432,
    SetGlobalVariable = 67108864,
    Laugh = 134217728,
    VisibleAsUILabel = 66844668,
    LastPhraseAction = 147062784,
    EDialogAction_MAX = 147062785,
};

enum class EDialogAnimationCategory {
    All = 0,
    Unique = 1,
    WalkieTalkie = 2,
    Woman = 3,
    Oldman = 4,
    Idle = 5,
    Wounded = 6,
    Agatha = 7,
    AgathaSmoke = 8,
    Harpia = 9,
    Doroznuk = 10,
    Bereza = 11,
    Kalina = 12,
    Drunk = 13,
    EDialogAnimationCategory_MAX = 14,
};

enum class EDialogAnimationType {
    Idle = 0,
    NPCApprovalTalkingUsual = 1,
    NPCApprovalTalkingExpressive = 2,
    NPCApprovalListeningStiff = 3,
    NPCApprovalListeningUsual = 4,
    NPCCallTalkingUsual = 5,
    NPCCallTalkingExpressive = 6,
    NPCGreetingTalkingUsual1 = 7,
    NPCGreetingTalkingUsual2 = 8,
    NPCGreetingTalkingStiff = 9,
    NPCGreetingTalkingExpressive = 10,
    NPCFarewellTalkingStiff = 11,
    NPCFarewellTalkingUsual = 12,
    NPCFarewellTalkingExpressive = 13,
    NPCDisapprovalTalkingStiff1 = 14,
    NPCDisapprovalTalkingStiff2 = 15,
    NPCDisapprovalTalkingUsual = 16,
    NPCDisapprovalTalkingUsual2 = 17,
    NPCDisapprovalTalkingExpressive = 18,
    NPCDisapprovalListeningUsual1 = 19,
    NPCDisapprovalListeningUsual2 = 20,
    NPCDisapprovalListeningUsual3 = 21,
    NPCDisapprovalListeningExpressive = 22,
    NPCReconcillationTalkingUsual = 23,
    NPCReconcillationTalkingExpressive = 24,
    NPCSalute = 25,
    NPCUsePDA = 26,
    NPCHandToForehead = 27,
    NPCAllInPosition = 28,
    NPCQuietly = 29,
    NPCFacepalm = 30,
    NPCPointPlayer = 31,
    NPCPointHimself = 32,
    NPCPointBack = 33,
    NPCGive = 34,
    NPCPsyVoices = 35,
    NPCFeelingSick = 36,
    SidorovichNotebook = 37,
    TalkWalkieTalkie_E07_MQ01 = 38,
    TalkWalkieTalkie_E07_MQ02 = 39,
    TalkWalkieTalkie_SQ13 = 40,
    TalkWalkieTalkie_E05_MQ01 = 41,
    TalkWalkieTalkie_E05_MQ04 = 42,
    TalkWalkieTalkie_E05_MQ05 = 43,
    TalkWalkieTalkie_E02_SQ01 = 44,
    TalkWalkieTalkie_E08_MQ03 = 45,
    TalkWalkieTalkie_E08_MQ04 = 46,
    TalkWalkieTalkie_E06_MQ02 = 47,
    TalkWalkieTalkie_E14_MQ01 = 48,
    TalkWalkieTalkie_E03_MQ01 = 49,
    TalkWalkieTalkie_E03_MQ06 = 50,
    TalkWalkieTalkie_E05_SQ01_1 = 51,
    TalkWalkieTalkie_E05_SQ01_2 = 52,
    TalkWalkieTalkie_E11_MQ01 = 53,
    TalkWalkieTalkie_SQ18 = 54,
    TalkWalkieTalkie_E14_MQ02 = 55,
    TalkWalkieTalkie_E08_MQ05 = 56,
    TalkWalkieTalkie_E07_MQ01_2 = 57,
    TalkWalkieTalkie_E06_MQ01_1 = 58,
    TalkWalkieTalkie_E06_MQ01_2 = 59,
    TalkWalkieTalkie_E06_MQ01_3 = 60,
    NPCDisapprovalTalkingStiff3 = 61,
    NPCAngerTalkingUsual_NEW = 62,
    NPCArquingTreatExpressiveLong_NEW = 63,
    NPCDisapprovalListeningBusyUsual_NEW = 64,
    NPCApprovalListeningStiff1_NEW = 65,
    NPCApprovalTalkingExpressive1_NEW = 66,
    NPCCallTalkingUsual2_NEW = 67,
    NPCPointdown_NEW = 68,
    NPCArguingArmsExpressive = 69,
    NPCArguingQuestionExpressive = 70,
    NPCAngerTalkingExpressive = 71,
    NPCDisapprovalThreatExpressive1 = 72,
    NPCDisapprovalThreatExpressive2 = 73,
    NPCDisapprovalDoubtStiff = 74,
    NPCDisapprovalDoubtExpressive = 75,
    NPCScaredTalkingStiff1 = 76,
    NPCScaredTalkingStiff2 = 77,
    NPCScaredTalkingUsual = 78,
    NPCThinkingStiff = 79,
    NPCDisappointmentWaveStiff = 80,
    NPCDisappointmentTalkingExpressive = 81,
    NPCReconciliationTalkingStiff = 82,
    NPCReconciliationTalkingUsual = 83,
    NPCIdleTalkingExpressive = 84,
    NPCIdleTalkingStiff1 = 85,
    NPCIdleTalkingStiff2 = 86,
    NPCIdleTalkingStiff3 = 87,
    NPCIdleTalkingUsual1 = 88,
    NPCIdleTalkingUsual2 = 89,
    NPCIdleTalkingUsual3 = 90,
    NPCIdleTalkingUsual4 = 91,
    NPCIdleTalkingUsual5 = 92,
    NPCIdleTalkingUsual6 = 93,
    NPCIdleTalkingHeadswayStiff = 94,
    NPCIdleTalkingExpressive2 = 95,
    NPCIdleTalkingExpressive1 = 96,
    NPCIdleTalkingArmsUsual = 97,
    NPCIdleWaitingUsual1 = 98,
    NPCIdleWaitingUsual2 = 99,
    NPCIdleWaitingExpressive2 = 100,
    NPCIdleListeningUsual3 = 101,
    NPCIdleListeningUsual4 = 102,
    TalkWalkieTalkie_E03_MQ1_2 = 103,
    TalkWalkieTalkie_E03_MQ1_3 = 104,
    TalkWalkieTalkie_E11_MQ1_1 = 105,
    TalkWalkieTalkie_E11_MQ1_2 = 106,
    TalkWalkieTalkie_E14_MQ1_2 = 107,
    TalkWalkieTalkie_E14_MQ1_3 = 108,
    TalkWalkieTalkie_E03_MQ03_1 = 109,
    TalkWalkieTalkie_E03_MQ03_2 = 110,
    NPCIdleListeningUsual1 = 111,
    NPCIdleListeningUsual2 = 112,
    NPCGive2 = 113,
    NPCTake1 = 114,
    NPCIdleWaitingCrossedArms = 115,
    NPCIdleWaitingHand = 116,
    NPCPSYListeningVoicesExpressive1 = 117,
    NPCPSYListeningVoicesExpressive2 = 118,
    NPCDrinkToast = 119,
    NPCDrinkPills = 120,
    DalinReaction = 121,
    StriderTouchneck = 122,
    NPCIdleWaitingStomachHands = 123,
    NPCIdleTalkingCrossedArmRight = 124,
    NPCIdleTalkingSpreadHands = 125,
    NPCWoundedArmLeft = 126,
    NPCWoundedArmRight = 127,
    NPCWoundedDisappointment = 128,
    NPCWoundedGratitude = 129,
    NPCWoundedSorry = 130,
    AgathaWaitingHeadtiltUsual = 131,
    AgathaNodUsual = 132,
    AgathaIdleListeningStiff1 = 133,
    AgathaIdleListeningStiff2 = 134,
    AgathaIdleListeningStiff3 = 135,
    AgathaIdleTalkingStiff1 = 136,
    AgathaIdleTalkingStiff2 = 137,
    AgathaIdleTalkingStiff3 = 138,
    AgathaSmokeIdleListeningStiff2 = 139,
    AgathaSmokeIdleListeningStiff3 = 140,
    AgathaSmokeIdleListeningStiff4 = 141,
    AgathaSmokeIdleListeningStiff5 = 142,
    AgathaSmokeIdleTalkingStiff1 = 143,
    AgathaSmokeIdleTalkingStiff2 = 144,
    AgathaSmokeIdleTalkingStiff3 = 145,
    AgathaSmokeIdleTalkingStiff4 = 146,
    AgathaSmokeIdleTalkingStiff5 = 147,
    AgathaSmokeUniqueSmoking1 = 148,
    AgathaSmokeUniqueSmoking2 = 149,
    AgathaSmokeNodUsual1 = 150,
    AgathaSmokeNodUsual2 = 151,
    AgathaSmokeWaitingHeadtiltUsual = 152,
    HarpiaIdleTalkingUsual1 = 153,
    HarpiaIdleTalkingUsual2 = 154,
    HarpiaIdleListeningUsual = 155,
    HarpiaIdleListeningStiff1 = 156,
    HarpiaIdleListeningStiff2 = 157,
    HarpiaIdleTalkingArmOnGunUsual = 158,
    HarpiaNodExpressive = 159,
    HarpiaArguaingArmOnGunExpressive = 160,
    HarpiaTalkingLongUsual = 161,
    HarpiaAruingBadReputationExpressive = 162,
    HarpiaIdleWaiting1 = 163,
    HarpiaIdleWaiting2 = 164,
    DoroznukIdleTalkingUsual = 165,
    DoroznukIdleListeningUsual1 = 166,
    DoroznukIdleListeningUsual2 = 167,
    DoroznukTalkingPointdown = 168,
    DoroznukTalkingFingerExpressive = 169,
    DoroznukTalkingUsual1 = 170,
    DoroznukTalkingUsual2 = 171,
    DoroznukTalkingDoubt = 172,
    DoroznukTalkingAgree = 173,
    DoroznukTalkingExpressive = 174,
    DoroznukTalkingHandWave = 175,
    DoroznukTalkingNegative = 176,
    DoroznukTalkingHead = 177,
    DoroznukIdleWaitingHand = 178,
    DoroznukIdleWaiting1 = 179,
    DoroznukIdleWaiting2 = 180,
    BerezaIdleTalkingUsual = 181,
    BerezaIdleTalkingHandUsual = 182,
    BerezaTalkingLongUsual = 183,
    BerezaIdleListeningUsual = 184,
    BerezaIdleTalkingArmUsual = 185,
    BerezaHippieUsual = 186,
    BerezaTalkingAgree = 187,
    BerezaTalkingNegative = 188,
    BerezaTalkingHead = 189,
    BerezaTalkingHandWave = 190,
    BerezaIdleWaitingHand = 191,
    BerezaIdleWaiting1 = 192,
    BerezaIdleWaiting2 = 193,
    KalinaIdleTalkingUsual = 194,
    KalinaIdleListeningStiff = 195,
    KalinaIdleListeningUsual = 196,
    KalinaTalkingArmsUsual1 = 197,
    KalinaTalkingArmsUsual2 = 198,
    KalinaTalkingLongUsual = 199,
    KalinaTalkingFingerExpressive = 200,
    KalinaTalkingGoAwayExpressive = 201,
    KalinaIdleWaiting1 = 202,
    KalinaIdleWaiting2 = 203,
    KalinaIdleWaiting3 = 204,
    KalinaIdleWaiting4 = 205,
    KalinaIdleWaitingDust = 206,
    KalinaIdleWaitingTable = 207,
    DrunkTalkingFingerExpressive = 208,
    DrunkTalkingFingerExpressive2 = 209,
    DrunkTalkingForwardUsual = 210,
    DrunkTalkingLong = 211,
    DrunkIdleListening = 212,
    DrunkIdleListening2 = 213,
    DrunkIdleListening3 = 214,
    DrunkTalkingLong1 = 215,
    DrunkTalkingLong2 = 216,
    DrunkTalkingLong3 = 217,
    TalkWalkieTalkie_E07_MQ01_3 = 218,
    TalkWalkieTalkie_E05_SQ04 = 219,
    PlayerHello = 220,
    PlayerArmSwingLeft = 221,
    PlayerArmSwingRight = 222,
    PlayerMoney = 223,
    PlayerPointForward = 224,
    PlayerWhatever = 225,
    PlayerShowItem = 226,
    PlayerDrinkVodka = 227,
    PlayerPeace = 228,
    PlayerRefuse = 229,
    PlayerWavingHands = 230,
    PlayerApproval = 231,
    PlayerDisapproval = 232,
    PlayerFingerCrunching = 233,
    PlayerPointUp = 234,
    PlayerFku = 235,
    PlayerFku2 = 236,
    PlayerPlayerSalute = 237,
    PlayerApplause = 238,
    PlayerHeadshakeRefuse = 239,
    PlayerAgree = 240,
    PlayerBackOn = 241,
    PlayerGiveItem = 242,
    PlayerNod = 243,
    PlayerShowBadge = 244,
    PlayerTakeItem = 245,
    PlayerWavingHandExpressive = 246,
    PlayerOpenHandsExpressive = 247,
    PlayerFingerpointOpenpalm = 248,
    PlayerBothhandsStatement = 249,
    PlayerDisapprovalRight = 250,
    PlayerOpenpalmRight = 251,
    PlayerPointNPCLeft = 252,
    PlayerConvince = 253,
    PlayerPoindownLeft = 254,
    PlayerPoindownRight = 255,
    None = 256,
    EDialogAnimationType_MAX = 257,
};

enum class EDialogAnswerColor {
    MainRead = 0,
    MainUnread = 1,
    MainHover = 2,
    CommonRead = 3,
    CommonUnread = 4,
    CommonUnavailable = 5,
    MainUnavailable = 6,
    CommonHover = 7,
    DangerUnread = 8,
    EDialogAnswerColor_MAX = 9,
};

enum class EDialogEndType {
    None = 0,
    CloseUI = 1,
    ReturnToTopicSelection = 2,
    GetCount = 3,
    EDialogEndType_MAX = 4,
};

enum class EDialogEventCategory {
    HitReaction = 0,
    NPCInteraction = 1,
    Emission = 2,
    Combat = 3,
    PeacefulReaction = 4,
    ContextualAction = 5,
    GetCount = 6,
    EDialogEventCategory_MAX = 7,
};

enum class EDialogEventType {
    None = 0,
    HitReaction_InstaDeath = 1,
    HitReaction_AgonyDeath = 2,
    HitReaction_WheezingDeath = 3,
    HitReaction_AverageDeath = 4,
    HitReaction_CarouselDeath = 5,
    HitReaction_Bullet = 6,
    HitReaction_Explosion = 7,
    HitReaction_Mutant = 8,
    HitReaction_Anomaly = 9,
    HitReaction_Transformation = 10,
    Emission_LeaderStart = 11,
    Emission_LeaderEnd = 12,
    DefeatComment = 13,
    Combat_Wounded_Knocked = 14,
    Combat_Wounded_GoingToHeal = 15,
    Combat_Wounded_HealingGratitude = 16,
    Combat_Wounded_Grunt_HealReceive = 17,
    Combat_EnemySearch = 18,
    Combat_EnemyFound = 19,
    Combat_SearchEnd = 20,
    Combat_Threats_EnemySearch = 21,
    Combat_Threats_AlertedSearch = 22,
    Combat_Threats_AlertedSearchEnd = 23,
    Combat_Threats_ThreatDetected = 24,
    Combat_Start = 25,
    Combat_Over = 26,
    Combat_EnemyRetreat = 27,
    Combat_SelfRetreat = 28,
    Combat_Action_Cover = 29,
    Combat_Action_Move = 30,
    Combat_Action_Flank = 31,
    Combat_Action_Detour = 32,
    Combat_Action_EnemyHit = 33,
    Combat_Action_FriendlyHit = 34,
    Combat_Action_FriendlyFire = 35,
    Combat_Action_Reload = 36,
    Combat_Action_FireSupression = 37,
    Combat_Action_FriendlyGrenade = 38,
    Combat_Action_EnemyGrenade = 39,
    Combat_Action_FriendlyDead = 40,
    Combat_Action_EnemyDead = 41,
    Combat_Zombie_Attack = 42,
    Combat_Zombie_Moan = 43,
    Peaceful_CorpseHubComment = 44,
    Peaceful_DropCorpse = 45,
    Peaceful_LootingEnemyCorpse = 46,
    Peaceful_LootingFriendlyCorpse = 47,
    CallPlayer = 48,
    Interact_Busy = 49,
    Interact_Friendly = 50,
    Interact_Neutral = 51,
    Interact_NonFriendly = 52,
    Interact_Bump = 53,
    Interact_HideWeapon = 54,
    Interact_SpeakToLeader = 55,
    Chatter = 56,
    Relax_EmissionFirstMessage = 57,
    Relax_EmissionSecondMessage = 58,
    Relax_EmissionThirdMessage = 59,
    DialogAction_Laugh = 60,
    Joke = 61,
    HitReaction_Melee = 62,
    RunOn = 63,
    Count = 64,
    EDialogEventType_MAX = 65,
};

enum class EDirections {
    None = 0,
    Forward = 1,
    Backward = 4,
    Left = 8,
    Right = 16,
    ForwardLeft = 9,
    ForwardRight = 17,
    BackwardLeft = 12,
    BackwardRight = 20,
    EDirections_MAX = 21,
};

enum class EDisplayPriority {
    None = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    GetCount = 4,
    EDisplayPriority_MAX = 5,
};

enum class EDistanceSelectorCondition {
    MinIn = 0,
    MinOut = 1,
    EDistanceSelectorCondition_MAX = 2,
};

enum class EDodgeSide {
    None = 0,
    Left = 1,
    Right = 2,
    GetCount = 3,
    EDodgeSide_MAX = 4,
};

enum class EDoorMoveDirection {
    CounterClockwise = 0,
    None = 1,
    Clockwise = 2,
    Stop = 3,
    EDoorMoveDirection_MAX = 4,
};

enum class EDoorState {
    Idle = 0,
    Locked = 1,
    Opening = 2,
    StealthOpening = 3,
    RestoreInitialState = 4,
    EDoorState_MAX = 5,
};

enum class EDpadNavigation {
    Left = 0,
    Up = 1,
    Right = 2,
    Down = 3,
    EDpadNavigation_MAX = 4,
};

enum class EDragDeadBodyState {
    StartDragDeadBody = 0,
    EndDragDeadBody = 1,
    StartPutDeadBody = 2,
    EndPutDeadBody = 3,
    StartCorpseDragIn = 4,
    EndCorpseDragIn = 5,
    StartCorpseDragOut = 6,
    EndCorpseDragOut = 7,
    EDragDeadBodyState_MAX = 8,
};

enum class EDuplicateResolveType {
    KeepNew = 0,
    KeepOld = 1,
    KeepAll = 2,
    EDuplicateResolveType_MAX = 3,
};

enum class EDynamicParticleType {
    None = 0,
    Leaves = 1,
    TumbleweedFlies = 2,
    FlyingCrowsAndBats = 3,
    BogFlies = 4,
    DynamicDust = 5,
    LightningStrike = 6,
    EDynamicParticleType_MAX = 7,
};

enum class EEffectDisplayType {
    None = 0,
    Value = 1,
    ValueAndTime = 2,
    EffectLevel = 3,
    GetCount = 4,
    EEffectDisplayType_MAX = 5,
};

enum class EEffectLevel {
    None = 0,
    Low = 1,
    Medium = 2,
    Strong = 3,
    Max = 4,
    VeryLow = 5,
    Count = 6,
};

enum class EEffectSource {
    None = 0,
    Obj = 1,
    Armor = 2,
    Weapon = 3,
    Artifact = 4,
    Consumable = 5,
    Other = 6,
    Debug = 7,
    GetCount = 8,
    EEffectSource_MAX = 9,
};

enum class EEffectType {
    None = 0,
    Accuracy = 1,
    AdditionalInventoryWeight = 2,
    AddAttachment = 3,
    AimingTime = 4,
    AimingFOV = 5,
    AimingMovementSpeed = 6,
    AimingSensitivity = 7,
    AmmoCapacity = 8,
    AmmoPerShot = 9,
    ArmorPiercing = 10,
    ArtifactSlots = 11,
    ArtifactSlotBlock = 12,
    BaseBleeding = 13,
    Bleeding = 14,
    BleedingChancePerShot = 15,
    CameraShake = 16,
    ChangeAmmoTypes = 17,
    ChangeCaliber = 18,
    ChangeFireTypes = 19,
    ChangeFireIntervals = 20,
    ChangeWeaponPattern = 21,
    Comfort = 22,
    Composite = 23,
    Corrosion = 24,
    VelocityBleeding = 25,
    VelocityCorrosion = 26,
    VelocityChange = 27,
    VelocityChangeNoCap = 28,
    TurnRateChangeYaw = 29,
    TurnRateChangePitch = 30,
    Damage = 31,
    BaseDamage = 32,
    VelocityDamage = 33,
    DegenBleeding = 34,
    DegenDrunkness = 35,
    DegenRadiation = 36,
    DegenPsyPoints = 37,
    DegenSuppressionPoints = 38,
    Dispersion = 39,
    Drunkness = 40,
    EffectiveFireDistance = 41,
    FireInterval = 42,
    RecoilInterval = 43,
    FireLoudness = 44,
    Health = 45,
    WoundedHPOverTime = 46,
    InstantHeal = 47,
    HungerPoints = 48,
    Invulnerability = 49,
    WeaponItemWeight = 50,
    KnockDown = 51,
    KnockDownPlayer = 52,
    KnockDownAI = 53,
    DragWeapon = 54,
    Limp = 55,
    MaxBleeding = 56,
    MaxDurability = 57,
    MaxHungerPoints = 58,
    MaxHealth = 59,
    MaxRadiation = 60,
    MaxStamina = 61,
    MaxThirstPoints = 62,
    MaxSleepinessPoints = 63,
    MaxDrunkness = 64,
    MaxSuppressionPoints = 65,
    MovementSpeed = 66,
    OpenSlotForAttachments = 67,
    PenaltyLessWeight = 68,
    PercentDamage = 69,
    ProtectionStrike = 70,
    ProtectionBurn = 71,
    ProtectionShock = 72,
    ProtectionChemical = 73,
    ProtectionRadiation = 74,
    ProtectionPSY = 75,
    ProtectionFall = 76,
    PsyPoints = 77,
    Radiation = 78,
    Recoil = 79,
    RegenHealth = 80,
    RegenHungerPoints = 81,
    RegenSleepinessPoints = 82,
    RegenStamina = 83,
    RegenThirstPoints = 84,
    ReloadingTime = 85,
    SleepinessPoints = 86,
    SoundEffect = 87,
    Stamina = 88,
    StealthReveal = 89,
    ThirstPoints = 90,
    SuppressionPoints = 91,
    BlockAnimationActionType = 92,
    BulletSpeedSlowdown = 93,
    SpawnPsyPhantoms = 94,
    PsyZombification = 95,
    Concussion = 96,
    PostProcessing = 97,
    InputDelay = 98,
    InputAxisMultiplier = 99,
    InputInertia2DAxis = 100,
    PoppyFieldSleepiness = 101,
    PoppyFieldRegenSleepiness = 102,
    AutoDepletionEffect = 103,
    MechanicsEffect = 104,
    FlagEffect = 105,
    AI_Confusion = 106,
    ShowEquipmentTime = 107,
    HideEquipmentTime = 108,
    FractionCount = 109,
    IdleSwayXModifier = 110,
    IdleSwayYModifier = 111,
    IdleSwayTimeModifier = 112,
    SPDrain = 113,
    HoldBreathDrain = 114,
    FireDistanceRecoil = 115,
    FireDistanceDispersion = 116,
    ForceFlashlightState = 117,
    InstantDeath = 118,
    Teleport = 119,
    BlockInput = 120,
    BlockingSwap = 121,
    OverDrunkness = 122,
    MaxOverDrunkness = 123,
    HideCurrentItem = 124,
    EquipLastItem = 125,
    DurabilityDamagePerShot = 126,
    DispersionAimModifier = 127,
    BulletDropLength = 128,
    DistanceDropOffLength = 129,
    MinBulletDistanceDamage = 130,
    MinBulletDistanceArmorPiercing = 131,
    DispersionMaxRadiusExtension = 132,
    DispersionPerIterationRadiusExtension = 133,
    RecoilRadiusNormalizationInterval = 134,
    FlairDistanceModifier = 135,
    RegenHealthModifier = 136,
    ForceFeedback = 137,
    Conditional = 138,
    ShowPDATime = 139,
    ArmorItemWeight = 140,
    GetCount = 141,
    EEffectType_MAX = 142,
};

enum class EElementUI {
    None = 0,
    All = 1,
    AllWindows = 2,
    Ammo = 3,
    Clock = 4,
    CombinationLock = 5,
    Compass = 6,
    CrossHair = 7,
    DeathScreen = 8,
    Dialog = 9,
    EquipmentSlots = 10,
    FadeoutScreen = 11,
    GrenadeCounter = 12,
    HP = 13,
    Inventory = 14,
    InteractionProgressBar = 15,
    InteractionPrompt = 16,
    InteractionPromptParameters = 17,
    ItemsInInventoryContainer = 18,
    ItemSelector = 19,
    Menu = 20,
    Minimap = 21,
    MoneyInBag = 22,
    MoneyInTrader = 23,
    Quests = 24,
    PickedItem = 25,
    Radiation = 26,
    RadiationBar = 27,
    SleepMenu = 28,
    SlotsInInventoryContainer = 29,
    SlotsInStorageContainer = 30,
    SlotsInTraderContainer = 31,
    StackSplittingWindow = 32,
    Stamina = 33,
    Stats = 34,
    StatsIconBar = 35,
    Stealth = 36,
    Storage = 37,
    Subtitles = 38,
    Teleport = 39,
    Trader = 40,
    Upgrade = 41,
    WeaponSelector = 42,
    WeightInBag = 43,
    WorldMap = 44,
    GetCount = 45,
    EElementUI_MAX = 46,
};

enum class EEmissionAIEvent {
    EmissionStart = 0,
    EmissionDanger = 1,
    EmissionActive = 2,
    EmissionEnd = 3,
    Count = 4,
    EEmissionAIEvent_MAX = 5,
};

enum class EEmissionStage {
    None = 0,
    BeforeTheStorm = 1,
    ActivateQuest = 2,
    ShockWave = 3,
    Active = 4,
    AfterTheStorm = 5,
    GetCount = 6,
    EEmissionStage_MAX = 7,
};

enum class EEmissionState {
    None = 0,
    Idle = 1,
    Active = 2,
    Paused = 3,
    GetCount = 4,
    EEmissionState_MAX = 5,
};

enum class EEmotionalDialogState {
    Talking = 0,
    ListeningWaiting = 1,
    Unique = 2,
    EEmotionalDialogState_MAX = 3,
};

enum class EEmotionalFaceMasks {
    None = 0,
    Surprised = 1,
    Angry = 2,
    Scared = 3,
    Sad = 4,
    Happy = 5,
    EEmotionalFaceMasks_MAX = 6,
};

enum class EEvadeActionType {
    None = 0,
    Back = 2,
    Left = 4,
    Right = 8,
    Side = 12,
    EEvadeActionType_MAX = 13,
};

enum class EFaceBlockingBlendMasks {
    Chin = 0,
    LeftCheek = 1,
    RightCheek = 2,
    Mouth = 3,
    OralCavity = 4,
    Nose = 5,
    LeftEye = 6,
    RightEye = 7,
    LeftTemple = 8,
    RightTemple = 9,
    Forehead = 10,
    Throat = 11,
    GetCount = 12,
    Cheeks = 13,
    Eyes = 14,
    Temples = 15,
    EFaceBlockingBlendMasks_MAX = 16,
};

enum class EFaction {
    None = 0,
    Bloodsucker = 1,
    Boar = 2,
    Beaver = 3,
    Burer = 4,
    Chimera = 5,
    Controller = 6,
    Dog = 7,
    Flesh = 8,
    Poltergeist = 9,
    Pseudodog = 10,
    Pseudogiant = 11,
    Snork = 12,
    Tushkan = 13,
    Zombie = 14,
    Bandits = 15,
    Duty = 16,
    Freedom = 17,
    Mercenaries = 18,
    Militaries = 19,
    Monolith = 20,
    Neutrals = 21,
    Scientists = 22,
    Varta = 23,
    Player = 24,
    GetCount = 25,
    EFaction_MAX = 26,
};

enum class EFactionRelationType {
    Neutral = 0,
    Friend = 1,
    Enemy = 2,
    EFactionRelationType_MAX = 3,
};

enum class EFilterMode {
    Disabled = 0,
    Blacklist = 1,
    Whitelist = 2,
    EFilterMode_MAX = 3,
};

enum class EFireType {
    None = 0,
    SemiAutomatic = 1,
    Queue = 2,
    Automatic = 3,
    Dualshot = 4,
    GetCount = 5,
    EFireType_MAX = 6,
};

enum class EFireTypeSlotType {
    Default = 0,
    First = 1,
    Last = 2,
    EFireTypeSlotType_MAX = 3,
};

enum class EFlashlightAction {
    Disable = 0,
    TurnOff = 1,
    TurnOn = 2,
    EFlashlightAction_MAX = 3,
};

enum class EFlashlightPriority {
    FlashlightWeaponAttachment = 0,
    AdditionalAttachment = 1,
    Head = 2,
    Chest = 3,
    EFlashlightPriority_MAX = 4,
};

enum class EFleeType {
    FleeFromCurrentLocation = 0,
    FleeFromCustomLocation = 1,
    FleeFromPlayer = 2,
    FleeFromNPC = 3,
    EFleeType_MAX = 4,
};

enum class EFloatProviderType {
    None = 0,
    Constant = 1,
    Conditional = 2,
    PlayerVital = 3,
    Weather = 4,
    PostEffect = 5,
    Blink = 6,
    ObjParam = 7,
    Add = 8,
    Subtract = 9,
    Multiply = 10,
    Divide = 11,
    GetCount = 12,
    EFloatProviderType_MAX = 13,
};

enum class EFocusType {
    NoFocus = 0,
    Location = 1,
    Direction = 2,
    EFocusType_MAX = 3,
};

enum class EFootType {
    None = 0,
    FrontRightFoot = 1,
    FrontLeftFoot = 2,
    BackRightFoot = 3,
    BackLeftFoot = 4,
    EFootType_MAX = 5,
};

enum class EGAQuickSlotUseState {
    Started = 0,
    Interrupted = 1,
    Finished = 2,
    EGAQuickSlotUseState_MAX = 3,
};

enum class EGASessionState {
    Start = 0,
    Finish = 1,
    EGASessionState_MAX = 2,
};

enum class EGSCInputDeviceType {
    MouseKeyboard = 0,
    DefaultGamepad = 1,
    Undefined = 2,
    EGSCInputDeviceType_MAX = 3,
};

enum class EGSCPlatformType {
    None = 0,
    PC = 1,
    XSX = 2,
    PS5 = 4,
    EGSCPlatformType_MAX = 5,
};

enum class EGSCTeleportType {
    None = 0,
    Default = 1,
    Classic = 2,
    Immersive = 3,
    Instant = 4,
    Quest = 5,
    EGSCTeleportType_MAX = 6,
};

enum class EGameDifficulty {
    Easy = 0,
    Medium = 1,
    Hard = 2,
    Stalker = 3,
    GetCount = 4,
    EGameDifficulty_MAX = 5,
};

enum class EGameGraphGenerationDebugType {
    None = 0,
    Samples = 1,
    SamplesLinks = 2,
    All = 255,
    EGameGraphGenerationDebugType_MAX = 256,
};

enum class EGameMode {
    ReleaseGame = 0,
    DebugGame = 1,
    Benchmark = 2,
    DeveloperSpectator = 3,
    Death = 4,
    GetCount = 5,
    EGameMode_MAX = 6,
};

enum class EGameState {
    Init = 0,
    LoadingInEditor = 1,
    Loading = 2,
    Idle = 3,
    EULA = 4,
    FirstTimeSettings = 5,
    MainMenu = 6,
    IntroTrailer = 7,
    GameplayCutScene = 8,
    Game = 9,
    EGameState_MAX = 10,
};

enum class EGaussWeaponDisplayState {
    Default = 0,
    Discharge = 1,
    Charge = 2,
    EGaussWeaponDisplayState_MAX = 3,
};

enum class EGenerationType {
    None = 0,
    Point = 1,
    Cover = 2,
    All = 3,
    EGenerationType_MAX = 4,
};

enum class EGlobalVariableType {
    Int = 0,
    String = 1,
    Bool = 2,
    GetCount = 3,
    EGlobalVariableType_MAX = 4,
};

enum class EGoalPriority {
    ALife = 0,
    ContextualAction = 1,
    PatrolContextualAction = 2,
    Patrol = 3,
    ReuniteWithLair = 4,
    Idle = 5,
    QuestPatrolContextualAction = 6,
    EmissionContextualAction = 7,
    MoveToHigherThanALife = 8,
    HigherThanALife = 9,
    HealAlly = 10,
    Threat = 11,
    HigherThanThreat = 12,
    HideWeaponWarning = 13,
    Combat = 14,
    HigherThanCombat = 15,
    LeaveRestrictedArea = 16,
    SafeFromEmission = 17,
    HigherThanEmission = 18,
    RadiationFields = 19,
    HigherThanRadiationFields = 20,
    Anomaly = 21,
    HigherThanAnomaly = 22,
    RecoverFromKnockdown = 23,
    AskMedkit = 24,
    EGoalPriority_MAX = 25,
};

enum class EGoalPriorityLevel {
    ContextDependent = 0,
    High = 1,
    Critical = 2,
    EGoalPriorityLevel_MAX = 3,
};

enum class EGoalType {
    None = 0,
    ALife = 1,
    AskMedkit = 2,
    Berserk = 3,
    Combat = 4,
    Threat = 5,
    Escort = 6,
    Flee = 7,
    Follow = 8,
    GuardTarget = 9,
    GuardZone = 10,
    HealAlly = 11,
    HideFromThreats = 12,
    Emission = 13,
    ReturnFromShelter = 14,
    Idle = 15,
    Kill = 16,
    LairPatrolling = 17,
    MoveTo = 18,
    Pacifist = 19,
    Panic = 20,
    RecoverFromKnockdown = 21,
    SeekPlayer = 22,
    AnimationStay = 23,
    IdleStay = 24,
    WaitingPlayer = 25,
    WarnThreat = 26,
    ContextualAction = 27,
    Patrol = 28,
    ShootTarget = 29,
    Sane = 30,
    LeaveRestrictedArea = 31,
    HideWeaponWarning = 32,
    AttackLairGoal = 33,
    ReuniteWithLair = 34,
    UseAbility = 35,
    PathFailed = 36,
    EGoalType_MAX = 37,
};

enum class EGodModType {
    None = 0,
    Invulnerable = 1,
    Unkillable = 2,
    InfiniteMagazine = 4,
    InfiniteAmmo = 8,
    UnbreakableWeapon = 16,
    All = 29,
    EGodModType_MAX = 30,
};

enum class EGrenadeDebugFlag {
    None = 0,
    DrawFragments = 1,
    DrawInnerRadius = 2,
    DrawOuterRadius = 4,
    DrawTraces = 8,
    DrawRadii = 6,
    Everything = 15,
    EGrenadeDebugFlag_MAX = 16,
};

enum class EGrenadeType {
    None = -1,
    RGD5 = 0,
    F1 = 1,
    Molotov = 2,
    Dynamite = 3,
    GetCount = 4,
    EGrenadeType_MAX = 5,
};

enum class EGuardType {
    GuardTarget = 0,
    GuardPlayer = 1,
    GuardZone = 2,
    EGuardType_MAX = 3,
};

enum class EHUDElements {
    None = 0,
    HP = 1,
    Stamina = 2,
    Stealth = 4,
    Minimap = 8,
    Radiation = 16,
    PDA = 32,
    AmmoBar = 64,
    Crosshair = 128,
    StatsIcons = 256,
    BasicHUD = 479,
    Everything = 511,
    GetCount = 512,
    EHUDElements_MAX = 513,
};

enum class EHandItem {
    None = 0,
    Backpack = 1,
    PDA = 2,
    EHandItem_MAX = 3,
};

enum class EHealingType {
    Quest = 0,
    HoldComponent = 1,
    Dialog = 2,
    EHealingType_MAX = 3,
};

enum class EHideViewType {
    ForceHide = 0,
    Hide = 1,
    Unhide = 2,
    EHideViewType_MAX = 3,
};

enum class EHintDescriptionSettings {
    Hide = 0,
    Left = 1,
    Right = 2,
    EHintDescriptionSettings_MAX = 3,
};

enum class EHintHoverActionType {
    None = 0,
    ChangeVisibility = 1,
    ChangeColor = 2,
    EHintHoverActionType_MAX = 3,
};

enum class EHintProgressType {
    NoProgress = 0,
    MultiClickProgress = 1,
    HoldProgress = 2,
    EHintProgressType_MAX = 3,
};

enum class EHintType {
    None = 0,
    General = 1,
    Audiolog = 2,
    InspectArtifact = 3,
    EHintType_MAX = 4,
};

enum class EHintsState {
    None = 0,
    HoveredItem = 1,
    Drag = 2,
    ContextualMenu = 3,
    Split = 4,
    QuickPanel = 5,
    EHintsState_MAX = 6,
};

enum class EHumanAnimDamageSource {
    None = 0,
    Emmision = 1,
    Bullet = 2,
    Explosion = 3,
    Chemical = 4,
    Fire = 5,
    Electro = 6,
    Expulsion = 7,
    Diamond = 8,
    IronWind = 9,
    Physics = 10,
    Zombification = 11,
    Carousel = 12,
    GetCount = 13,
    EHumanAnimDamageSource_MAX = 14,
};

enum class EHumanCombatPlannerAction {
    MoveToLocationWalkPrepareWeapon = 0,
    MoveToLocationWalkFire = 1,
    MoveToLocationSprint = 2,
    CoverPrepareWeapon = 3,
    CoverFire = 4,
    CoverLookOut = 5,
    CoverHide = 6,
    CoverLeave = 7,
    PrepareWeapon = 8,
    Fire = 9,
    WaitForLocations = 10,
    LookOut = 11,
    SearchEnemy = 12,
    ForgetEnemy = 13,
    UseSequentialAbility = 14,
    Flank = 15,
    Evade = 16,
    Advance = 17,
    ThrowGrenade = 18,
    SuppressiveFire = 19,
    Escape = 20,
    Ambush = 21,
    Count = 22,
    EHumanCombatPlannerAction_MAX = 23,
};

enum class EHumanThreatAction {
    TurnHead = 0,
    MoveToThreatLocation = 1,
    MoveToLocationSprintNoWeapon = 2,
    Flee = 3,
    SearchEnemy = 4,
    Idle = 5,
    PrepareWeapon = 6,
    ForgetThreat = 7,
    BookCorpse = 8,
    LootCorpse = 9,
    Count = 10,
    EHumanThreatAction_MAX = 11,
};

enum class EIgnoreDamageType {
    None = 1,
    Unkillable = 2,
    Unfocusable = 4,
    IgnorePSY = 8,
    IgnoreFallDamage = 16,
    ImmuneToEmission = 32,
    UnkillableByALife = 64,
    IgnoreMeleeDamage = 128,
    InvulnerableInteract = 256,
    Invulnerable = 6,
    EIgnoreDamageType_MAX = 257,
};

enum class EImageFormats {
    JPG = 0,
    PNG = 1,
    BMP = 2,
    ICO = 3,
    EXR = 4,
    ICNS = 5,
    EImageFormats_MAX = 6,
};

enum class EImpactResourceType {
    Sound = 0,
    VFX = 1,
    Decal = 2,
    EImpactResourceType_MAX = 3,
};

enum class EInputAxisType {
    None = 0,
    XY = 1,
    Rotate2D = 2,
    Rotate2DInertia = 3,
    Jump = 4,
    EInputAxisType_MAX = 5,
};

enum class EInputContextAdditionalFlags {
    None = 0,
    Falling = 1,
    CanBeStanding = 2,
    HasMovementInput = 4,
    CanWalk = 8,
    CanRun = 16,
    CanSprint = 32,
    HasClimbTarget = 64,
    HasInteractTarget = 128,
    CanJump = 256,
    HasCorpse = 512,
    VaultingInProgress = 1024,
    Immobilized = 2048,
    CanCrouch = 4096,
    CanHarmUnfocusable = 8192,
    UnderbarrelAttachMode = 16384,
    InteractWithCorpse = 32768,
    HasInstantInteract = 65536,
    HasInteractWithAnim = 131072,
    HasFlashlightAnimation = 262144,
    HasFireSwitchAnimation = 524288,
    HasDragWeaponAnimation = 1048576,
    HasForwardMovementInput = 2097152,
    EInputContextAdditionalFlags_MAX = 2097153,
};

enum class EInputController {
    KeyboardAndMouse = 0,
    Dualshock4 = 1,
    XboxSeriesXPad = 2,
    EInputController_MAX = 3,
};

enum class EInputDeviceType {
    None = 0,
    Keyboard = 1,
    Mouse = 2,
    Gamepad = 3,
    EInputDeviceType_MAX = 4,
};

enum class EInputIconsType {
    WindowsDefault = 0,
    WindowsDisabled = 1,
    EInputIconsType_MAX = 2,
};

enum class EInputKey {
    None = 0,
    Forward = 1,
    Backward = 2,
    Right = 3,
    Left = 4,
    UpArrow = 5,
    DownArrow = 6,
    LeftArrow = 7,
    RightArrow = 8,
    Turn = 9,
    LookUp = 10,
    Fire = 11,
    Aim = 12,
    Reload = 13,
    ChangeAmmoType = 14,
    Jump = 15,
    Walk = 16,
    Sprint = 17,
    Crouch = 18,
    MainHandEquipKnife = 19,
    MainHandEquipPistol = 20,
    MainHandEquipPrimaryWeapon = 21,
    MainHandEquipSecondaryWeapon = 22,
    MainHandEquipGrenade = 23,
    MainHandEquipBolt = 24,
    MainHandEquipDetector = 25,
    MainHandEquipBinoculars = 26,
    DPadOpenUp = 27,
    DPadOpenDown = 28,
    DPadRight = 29,
    DPadLeft = 30,
    ChangeFireType = 31,
    ToggleAttachMode = 32,
    Interact = 33,
    Inventory = 34,
    WorldMap = 35,
    Journal = 36,
    Notes = 37,
    Bestiary = 38,
    Statistics = 39,
    MouseWheelUp = 40,
    MouseWheelDown = 41,
    DropItemInHands = 42,
    Ctrl = 43,
    PersonViewSwitcher = 44,
    DeveloperSpectatorSwitcher = 45,
    TeleportToSpectator = 46,
    Esc = 47,
    QuickSlot1 = 48,
    QuickSlot2 = 49,
    QuickSlot3 = 50,
    QuickSlot4 = 51,
    QuickSave = 52,
    QuickLoad = 53,
    LeanLeft = 54,
    LeanRight = 55,
    MeleeAttack = 56,
    Flashlight = 57,
    TacticalFlashlight = 58,
    SwitchWeapon = 59,
    AutoWalk = 60,
    Square = 61,
    Cross = 62,
    Circle = 63,
    Triangle = 64,
    LeftShoulder = 65,
    LeftTrigger = 66,
    LeftThumbstickButton = 67,
    RightShoulder = 68,
    RightTrigger = 69,
    RightThumbstickButton = 70,
    Select = 71,
    Start = 72,
    TouchpadButton = 73,
    DPadXYAxis = 74,
    ItemSelector = 75,
    GetCount = 76,
    EInputKey_MAX = 77,
};

enum class EInputMappingContextPriority {
    Lowest = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    Exclusive = 4,
    EInputMappingContextPriority_MAX = 5,
};

enum class EInputTypeForButtons {
    Both = 0,
    Gamepad = 1,
    Keyboard = 2,
    EInputTypeForButtons_MAX = 3,
};

enum class EInteractFXType {
    None = 0,
    LadderIdle = 2,
    LadderMovementHand = 4,
    LadderMovementFoot = 8,
    LadderMovementJump = 16,
    LadderMovementFast = 32,
    LadderStartInteractBottom = 64,
    LadderEndInteractTop = 128,
    LadderStartInteractTop = 256,
    LadderEndInteractBot = 512,
    LadderMevementFastEnd = 1024,
    Ladder = 2046,
    EInteractFXType_MAX = 2047,
};

enum class EInteractHintType {
    Main = 0,
    Optional = 1,
    EInteractHintType_MAX = 2,
};

enum class EInteractLengthType {
    None = 0,
    Regular = 1,
    WithAnim = 2,
    Instant = 3,
    EInteractLengthType_MAX = 4,
};

enum class EInteractableType {
    None = 0,
    Body = 1,
    CodeLock = 2,
    Door = 3,
    ItemContainer = 4,
    Lever = 5,
    Look = 6,
    Sleep = 7,
    Artifact = 8,
    NPC = 9,
    ToggleButton = 10,
    Ladder = 11,
    Custom = 12,
    EInteractableType_MAX = 13,
};

enum class EInteractionSystemNotificationsType {
    None = 0,
    Cache = 1,
    Note = 2,
    Audio = 3,
    Encyclopedia = 4,
    Region = 5,
    Inspect = 6,
    Blueprint = 7,
    EInteractionSystemNotificationsType_MAX = 8,
};

enum class EInteractionTypeIcon {
    None = 0,
    Lock = 1,
    Key = 2,
    LowHealth = 3,
    Max = 4,
};

enum class EInterruptionState {
    ShouldInterrupt = 0,
    Interrupting = 1,
    Interrupted = 2,
    EInterruptionState_MAX = 3,
};

enum class EInventoryEquipmentSlot {
    None = 0,
    PrimaryWeapon = 1,
    SecondaryWeapon = 2,
    Pistol = 3,
    Detector = 4,
    Head = 5,
    Body = 6,
    Artifact1 = 7,
    Artifact2 = 8,
    Artifact3 = 9,
    Artifact4 = 10,
    Artifact5 = 11,
    Knife = 12,
    Bolt = 13,
    Grenade = 14,
    GetCount = 15,
    EInventoryEquipmentSlot_MAX = 16,
};

enum class EItemCacheGenerationType {
    Random = 0,
    PlayerBasedStats = 1,
    Preset = 2,
    Mixed = 3,
    EItemCacheGenerationType_MAX = 4,
};

enum class EItemCacheRarity {
    Common = 0,
    Uncommon = 1,
    Rare = 2,
    Epic = 3,
    EItemCacheRarity_MAX = 4,
};

enum class EItemCacheType {
    Stash = 0,
    PackOfItems = 1,
    Destructible = 2,
    EItemCacheType_MAX = 3,
};

enum class EItemCacheVisibilityType {
    ClueRequired = 0,
    AlwaysAvailable = 1,
    EItemCacheVisibilityType_MAX = 2,
};

enum class EItemContainerMesh {
    None = 0,
    Box = 1,
    GetCount = 2,
    EItemContainerMesh_MAX = 3,
};

enum class EItemContainerType {
    None = 0,
    Inventory = 1,
    Trader = 2,
    Stash = 3,
    PlayerBuyCart = 4,
    PlayerSellCart = 5,
    SingleItem = 6,
    PackOfItems = 7,
    Dummy = 8,
    GetCount = 9,
    EItemContainerType_MAX = 10,
};

enum class EItemGenerationCategory {
    None = 0,
    Ammo = 1,
    Artifact = 2,
    Attach = 3,
    BodyArmor = 4,
    Consumable = 5,
    Detector = 6,
    Head = 7,
    Junk = 8,
    Mask = 9,
    SubItemGenerator = 10,
    WeaponPistol = 11,
    WeaponPrimary = 12,
    WeaponSecondary = 13,
    GetCount = 14,
    EItemGenerationCategory_MAX = 15,
};

enum class EItemInHandType {
    None = 0,
    Guitar = 1,
    Consumable = 2,
    Grenade = 3,
    AdditionalItem = 4,
    EItemInHandType_MAX = 5,
};

enum class EItemPreconditionType {
    InventoryItem = 0,
    MeshGenerator = 1,
    EItemPreconditionType_MAX = 2,
};

enum class EItemSelectorSlotStateType {
    None = 0,
    Hovered = 1,
    Selected = 2,
    EItemSelectorSlotStateType_MAX = 3,
};

enum class EItemType {
    None = -1,
    Weapon = 0,
    Armor = 1,
    Artifact = 2,
    Attach = 3,
    Consumable = 4,
    Ammo = 5,
    Detector = 6,
    Grenade = 7,
    Other = 8,
    GetCount = 9,
    EItemType_MAX = 10,
};

enum class EJamStateTag {
    None = 0,
    WeaponJammed = 1,
    WasJammed = 2,
    WasReloaded = 4,
    JamNextShot = 8,
    GetCount = 9,
    EJamStateTag_MAX = 10,
};

enum class EJamType {
    Jam = 0,
    Misfire = 1,
    FirstShotMisfire = 2,
    EJamType_MAX = 3,
};

enum class EJournalAction {
    Start = 0,
    Finish = 1,
    Fail = 2,
    Cancel = 3,
    ChangeStageDescription = 4,
    EJournalAction_MAX = 5,
};

enum class EJournalEntity {
    Quest = 0,
    QuestStage = 1,
    EJournalEntity_MAX = 2,
};

enum class EJournalQuestRewardCategory {
    None = 0,
    Ammunition = 1,
    Artifact = 2,
    Attach = 3,
    BodyArmor = 4,
    Medicine = 5,
    Detector = 6,
    Food = 7,
    Helmet = 8,
    Money = 9,
    Weapon = 10,
    Other = 11,
    GetCount = 12,
    EJournalQuestRewardCategory_MAX = 13,
};

enum class EJournalState {
    Pending = 0,
    Active = 1,
    Finished = 2,
    Failed = 3,
    Cancelled = 4,
    EJournalState_MAX = 5,
};

enum class EJumpState {
    StartJump = 0,
    EndJump = 1,
    EJumpState_MAX = 2,
};

enum class EKeyCategory {
    Movement = 0,
    Weapon = 1,
    PDA = 2,
    General = 3,
    Developer = 4,
    GetCount = 5,
    EKeyCategory_MAX = 6,
};

enum class EKeyState {
    InitialHoldInProgress = 0,
    PressedEvent = 1,
    HoldEventStarted = 2,
    Holding = 3,
    Released = 4,
    Processed = 5,
    EKeyState_MAX = 6,
};

enum class EKillTargetType {
    NPCTarget = 0,
    PlayerTarget = 1,
    AreaTarget = 2,
    EKillTargetType_MAX = 3,
};

enum class EKnockedDownState {
    NotKnockedDown = 0,
    KnockedDown = 1,
    EKnockedDownState_MAX = 2,
};

enum class ELadderType {
    Blockout = 0,
    Wood = 1,
    MetalCorner = 2,
    MetalPipe = 3,
    MetalClip = 4,
    ELadderType_MAX = 5,
};

enum class ELairPreferredSpawnType {
    TerritoryVolume = 0,
    CoreVolume = 1,
    ELairPreferredSpawnType_MAX = 2,
};

enum class ELairType {
    ALifeLair = 0,
    RestingLair = 1,
    GetCount = 2,
    ELairType_MAX = 3,
};

enum class ELayerSlotType {
    Defoult = 0,
    Grenade = 1,
    Weapon = 2,
    ELayerSlotType_MAX = 3,
};

enum class ELineDirection {
    None = 0,
    Left = 1,
    Right = 2,
    ELineDirection_MAX = 3,
};

enum class ELineNavigation {
    None = 0,
    Up = 1,
    Left = 2,
    Down = 3,
    Right = 4,
    ELineNavigation_MAX = 5,
};

enum class ELoadingDestination {
    None = 0,
    MainMenu = 1,
    NewGame = 2,
    LoadGame = 3,
    FastTravel = 4,
    BridgeBetweenCutscenes = 5,
    Teleport = 6,
    QuestTeleport = 7,
    IntroductionLogo = 8,
    DefaultTeleport = 9,
    WhiteBridgeBetweenCutscenes = 10,
    ELoadingDestination_MAX = 11,
};

enum class ELoadingStep {
    InitializingManagers = 0,
    InitializingNewGame = 1,
    StartingScripts = 2,
    SpawningPlaceholders = 3,
    InitializingWeather = 4,
    LoadingNecessaryModels = 5,
    LoadingNecessaryActors = 6,
    LoadingStart = 7,
    LoadingModelsData = 8,
    LoadingManagersData = 9,
    FinishingUp = 10,
    Complete = 11,
    GetCount = 12,
    ELoadingStep_MAX = 13,
};

enum class ELocalizationLanguage {
    Ukrainian = 0,
    English = 1,
    German = 2,
    French = 3,
    SpanishEuropean = 4,
    Italian = 5,
    Polish = 6,
    Czech = 7,
    Turkish = 8,
    Serbian = 9,
    PortugalBrazilian = 10,
    SpanishLatinoAmerican = 11,
    Arabic = 12,
    ChineseSimplified = 13,
    ChineseTraditional = 14,
    Japanese = 15,
    Korean = 16,
    Russian = 17,
    GetCount = 18,
    GetAudioCount = 2,
    ELocalizationLanguage_MAX = 19,
};

enum class ELongIdleType {
    Default = 0,
    Inaction = 1,
    ELongIdleType_MAX = 2,
};

enum class ELookAtAction {
    Start = 0,
    Restrict = 1,
    ChangeOwnerState = 2,
    ELookAtAction_MAX = 3,
};

enum class ELookAtOwnerState {
    Empty = 0,
    RelaxStand = 1,
    RelaxARStand = 2,
    CombatStand = 3,
    CombatCrouch = 4,
    CombatLowCrouch = 5,
    CoverIdleStand = 6,
    CoverIdleCrouch = 7,
    CoverIdleLowCrouch = 8,
    CoverStandBlindLeft = 9,
    CoverCrouchBlindLeft = 10,
    CoverCrouchBlindTop = 11,
    ZeroRotations = 12,
    EnterContextualAction = 13,
    CAWomanSitChair = 14,
    CAWomanSitChairItemManipulation = 15,
    CAWomanStandBartable = 16,
    CAWomanStandBartableItemManipulation = 17,
    CADefault = 18,
    CASitGround = 19,
    CASitBartable = 20,
    CASitChair = 21,
    CASitLegsDandling = 22,
    CASitTable = 23,
    CAStand = 24,
    CAStandAgainstWall = 25,
    CAStandAgainstWallRight = 26,
    CAStandAgainstWallLeft = 27,
    CAStandBartable = 28,
    CASitGroundEatDrinkSmoke = 29,
    CASitGroundItemManipulation = 30,
    CASitGroundSurroundingInteract = 31,
    CASitGroundWounded = 32,
    CASitBartableEatDrinkSmoke = 33,
    CASitBartableSurroundingInteract = 34,
    CASitChairEatDrinkSmoke = 35,
    CASitChairItemManipulation = 36,
    CASitChairSurroundingInteract = 37,
    CASitLegsDandlingEatDrinkSmoke = 38,
    CASitLegsDandlingItemManipulation = 39,
    CASitLegsDandlingSurroundingInteract = 40,
    CASitTableEatDrinkSmoke = 41,
    CASitTableItemManipulation = 42,
    CASitTableSurroundingInteract = 43,
    CAStandEatDrinkSmoke = 44,
    CAStandItemManipulation = 45,
    CAStandSurroundingInteract = 46,
    CAStandAgainstWallEatDrinkSmoke = 47,
    CAStandAgainstWallItemManipulation = 48,
    CAStandAgainstWallSurroundingInteract = 49,
    CAStandBartableEatDrinkSmoke = 50,
    CAStandBartableItemManipulation = 51,
    CAStandBartableSurroundingInteract = 52,
    CAQuestBatyaSidorovych = 53,
    CAQuestBatyaSitChair = 54,
    CAQuestAgatha = 55,
    CAQuestAgathaSmoke = 56,
    CAQuestHarpia = 57,
    CAQuestDoroznuk = 58,
    CAQuestBereza = 59,
    CAQuestKalina = 60,
    CAQuestSolomia = 61,
    CAQuestKorshunov = 62,
    CAQuestBartender = 63,
    SitGround = 31,
    SitBartable = 55,
    SitChair = 63,
    SitLegsDandling = 63,
    SitTable = 63,
    Stand = 63,
    StandAgainstWall = 63,
    StandBartable = 63,
    ELookAtOwnerState_MAX = 64,
};

enum class EMagazineMeshType {
    Full = 0,
    Empty = 1,
    RightEmpty = 2,
    LeftEmpty = 3,
    EMagazineMeshType_MAX = 4,
};

enum class EMainHandEquipmentType {
    None = 0,
    Pistol = 1,
    PrimaryWeapon = 2,
    SecondaryWeapon = 3,
    Knife = 4,
    Grenade = 5,
    Bolt = 6,
    Item = 7,
    GetCount = 8,
    EMainHandEquipmentType_MAX = 9,
};

enum class EMainSoundClass {
    All = 0,
    Music = 1,
    SFX = 2,
    Ambient = 3,
    Player = 4,
    Weapon = 5,
    UI = 6,
    NPC = 7,
    GetCount = 8,
    EMainSoundClass_MAX = 9,
};

enum class EMappingContext {
    None = 0,
    Exploration = 1,
    Inventory = 2,
    Trade = 3,
    ItemSelector = 4,
    AttachSelector = 5,
    Dialogue = 6,
    DialogueOnTheGo = 7,
    ImportantChoice = 8,
    Debug = 9,
    PDA = 10,
    Map = 11,
    Journal = 12,
    Note = 13,
    Sleep = 14,
    Ladder = 15,
    NoInput = 16,
    Upgrades = 17,
    UpgradesPopup = 18,
    UpgradesNavigation = 19,
    Codelock = 20,
    Menu = 21,
    Aiming = 22,
    Bolt = 23,
    Grenade = 24,
    Knife = 25,
    PDA_Encyclopedia = 26,
    PDA_Stats = 27,
    DeathScreen = 28,
    Cutscene = 29,
    QuestNotification = 30,
    SystemNotifications = 31,
    StealthKill = 32,
    Interactivity = 33,
    Popup = 34,
    PDATutorial = 35,
    MenuSettings = 36,
    PlayMovie = 37,
    Subtitle = 38,
    Presentation = 39,
    EULA = 40,
    PlayerContextualAction = 41,
    InspectArtifact = 42,
    ModBrowser = 43,
    StackSplitMenu = 44,
    RightClickContextualMenu = 45,
    Guitar = 46,
    EditSafeZone = 47,
    LoadingScreen = 48,
    GetCount = 49,
    EMappingContext_MAX = 50,
};

enum class EMarkerPosition {
    Top = 0,
    Right = 1,
    Left = 2,
    Bottom = 3,
    EMarkerPosition_MAX = 4,
};

enum class EMarkerState {
    Hidden = 0,
    Default = 1,
    Discovered = 2,
    Explored = 3,
    EMarkerState_MAX = 4,
};

enum class EMarkerType {
    None = 0,
    QuestMain = 1,
    QuestSecondary = 2,
    QuestGiverMain = 3,
    QuestGiverSecondary = 4,
    FollowLandmark = 5,
    PlayerLandmarkDanger = 6,
    PlayerLandmarkRadiation = 7,
    PlayerLandmarkLoot = 8,
    PlayerLandmarkAnomaly = 9,
    Enemy = 10,
    QuestMainTargetEnemy = 11,
    QuestSecondaryTargetEnemy = 12,
    Hub = 13,
    DeadBody = 14,
    Cache = 15,
    CacheOpened = 16,
    Trader = 17,
    Technician = 18,
    Guide = 19,
    Bed = 20,
    PlayerStorage = 21,
    AnomalyArea = 22,
    SearchPoint = 23,
    ArchAnomaly = 24,
    Location = 25,
    RegionMarker = 26,
    QuestEnemy = 27,
    Medic = 28,
    PartyLeader = 29,
    HubLeader = 30,
    GetCount = 31,
    EMarkerType_MAX = 32,
};

enum class EMeshSubType {
    None = 0,
    Static = 1,
    Skeletal = 2,
    GetCount = 3,
    EMeshSubType_MAX = 4,
};

enum class EMidleDisplayType {
    None = 0,
    OnlyText = 1,
    Weapons = 2,
    Grenade = 3,
    EMidleDisplayType_MAX = 4,
};

enum class EModifiedCharacterParam {
    HP = 0,
    HPPercent = 1,
    SP = 2,
    Bleeding = 3,
    HungerPoints = 4,
    Sleepiness = 5,
    Radiation = 6,
    Money = 7,
    RewardMainLineMoney = 8,
    RewardSideLineMoney = 9,
    Rank = 10,
    InventoryWeight = 11,
    IgnoreDamageType = 12,
    Zombie = 13,
    EModifiedCharacterParam_MAX = 14,
};

enum class EModifyAbilitySequenceQuestNodeMode {
    AddAbility = 0,
    RemoveAbility = 1,
    EModifyAbilitySequenceQuestNodeMode_MAX = 2,
};

enum class EModioFirstFilter {
    None = 0,
    Browse = 1,
    Subscribed = 2,
    Count = 3,
    EModioFirstFilter_MAX = 4,
};

enum class EModioSecondFilter {
    None = 0,
    MostPopular = 1,
    HighestRated = 2,
    RecentlyAdded = 3,
    Count = 4,
    EModioSecondFilter_MAX = 5,
};

enum class EMovementBehaviour {
    None = 0,
    Idle = 1,
    Walk = 2,
    Run = 3,
    Sprint = 4,
    GetCount = 5,
    EMovementBehaviour_MAX = 6,
};

enum class EMovementTarget {
    Path_Legacy = 0,
    Path = 1,
    DynamicObject = 2,
    EMovementTarget_MAX = 3,
};

enum class EMusicState {
    Region = 0,
    Location = 1,
    NoMusic = 2,
    Combat = 3,
    CombatEnd = 4,
    EMusicState_MAX = 5,
};

enum class EMutantAttackType {
    None = 0,
    ClawAttack = 1,
    RunAttack = 2,
    JumpAttack = 3,
    EMutantAttackType_MAX = 4,
};

enum class ENPCType {
    None = 0,
    Trader = 1,
    Technician = 2,
    Repairman = 3,
    Guide = 4,
    GetCount = 5,
    ENPCType_MAX = 6,
};

enum class ENestingIndex {
    Settings = 0,
    PCMapping = 1,
    GamepadMapping = 2,
    ENestingIndex_MAX = 3,
};

enum class ENiagaraProviderType {
    None = 0,
    WindProvider = 1,
    TimeOfDayProvider = 2,
    PlayerLocationProvider = 3,
    EyeAdaptationProvider = 4,
    TerrainOffsetProvider = 5,
    GetCount = 6,
    ENiagaraProviderType_MAX = 7,
};

enum class ENoteType {
    Flash = 0,
    Data = 1,
    Notes = 2,
    Audio = 3,
    GetCount = 4,
    ENoteType_MAX = 5,
};

enum class ENotificationQuestWidgetType {
    QuestStart = 0,
    QuestFinish = 1,
    QuestFail = 2,
    QuestCancel = 3,
    ENotificationQuestWidgetType_MAX = 4,
};

enum class ENotifyDialogAction {
    EndDialogIdle = 0,
    ENotifyDialogAction_MAX = 1,
};

enum class ENotifyGuitarAction {
    StrumUp = 0,
    StrumDown = 1,
    ExitCompleted = 2,
    EnterCompleted = 3,
    ShowGuitarMesh = 4,
    OnStrumComplete = 5,
    ENotifyGuitarAction_MAX = 6,
};

enum class ENotifyTriggerType {
    Default = 0,
    DefaultOnInterrupted = 1,
    ReverseOnInterrupted = 2,
    ENotifyTriggerType_MAX = 3,
};

enum class EObjAnim {
    None = 0,
    Actor = 1,
    GetCount = 2,
    EObjAnim_MAX = 3,
};

enum class EObjFloatParams {
    None = 0,
    Wetness = 1,
    AimAlpha = 2,
    GetCount = 3,
    EObjFloatParams_MAX = 4,
};

enum class EObjMesh {
    None = 0,
    Actor = 1,
    GetCount = 2,
    EObjMesh_MAX = 3,
};

enum class EObjSkeletalMeshTraceBone {
    None = 0,
    Head = 1,
    Chest = 2,
    RArm = 4,
    LArm = 8,
    Pelvis = 16,
    RKnee = 32,
    LKnee = 64,
    RLeg = 128,
    LLeg = 256,
    Arms = 12,
    Knees = 96,
    Legs = 384,
    UpperBody = 15,
    LowerBody = 496,
    EveryBone = 511,
    GetCount = 512,
    EObjSkeletalMeshTraceBone_MAX = 513,
};

enum class EObjSpawnStage {
    HasModel = 0,
    HasBlueprintActor = 1,
    MeshGenerationStarted = 2,
    ProcessedFlashlight = 3,
    CheckingPlayerVisiblity = 4,
    FinishedSpawn = 5,
    EObjSpawnStage_MAX = 6,
};

enum class EObjType {
    NPC = 0,
    Anomaly = 1,
    AnomalySpawner = 2,
    ArtifactSpawner = 3,
    Marker = 4,
    Squad = 5,
    Item = 6,
    ItemContainer = 7,
    Grenade = 8,
    Lair = 9,
    ContextualAction = 10,
    Zone = 11,
    DestructibleObject = 12,
    Patrol = 13,
    Searchpoint = 14,
    Door = 15,
    InteractableObject = 16,
    Bed = 17,
    ALifeScenarioModel = 18,
    WanderingLights = 19,
    VortexArchAnomaly = 20,
    VolumeForEffects = 21,
    MistArchianomaly = 22,
    PoppyFieldArchanomaly = 23,
    FireBreathArchAnomaly = 24,
    BulbArchAnomaly = 25,
    Invalid = 26,
    GetCount = 26,
    EObjType_MAX = 27,
};

enum class EOpasityState {
    None = 0,
    FullFast = 1,
    FullToHalf = 2,
    NoneToHalf = 3,
    FullToNone = 4,
    EOpasityState_MAX = 5,
};

enum class EOutputDeviceEffect {
    Full = 0,
    Medium = 1,
    Narrow = 2,
    Count = 3,
    EOutputDeviceEffect_MAX = 4,
};

enum class EOverrideDialogTopic {
    None = 0,
    Hello = 1,
    Bye = 2,
    Info = 3,
    Defeat = 4,
    DefeatComment = 5,
    CallPlayerComment = 6,
    Resume = 7,
    Busy = 8,
    Trade = 9,
    Upgrade = 10,
    Travel = 11,
    Forced = 12,
    GetCount = 13,
    EOverrideDialogTopic_MAX = 14,
};

enum class EOverrideLifeGridVisionRadius {
    None = 0,
    Low = 40,
    Default = 75,
    High = 120,
    EOverrideLifeGridVisionRadius_MAX = 121,
};

enum class EOverweightLock {
    NoLock = 0,
    Partial = 1,
    Full = 2,
    EOverweightLock_MAX = 3,
};

enum class EPDAPageType {
    Map = 0,
    Journal = 1,
    Notes = 2,
    Upgrades = 3,
    Statistic = 4,
    Bestiary = 5,
    Tutorial = 6,
    GetCount = 7,
    EPDAPageType_MAX = 8,
};

enum class EPDASignalStrength {
    Minimal = 0,
    Low = 1,
    Normal = 2,
    Full = 3,
    None = 4,
    EPDASignalStrength_MAX = 5,
};

enum class EPDATutorialCategory {
    Navigation = 0,
    Fight = 1,
    Survival = 2,
    Earning = 3,
    GetCount = 4,
    EPDATutorialCategory_MAX = 5,
};

enum class EPageOpenMethod {
    Unknown = 0,
    FromDialog = 1,
    ByHotkey = 2,
    BySwitchingTabs = 3,
    EPageOpenMethod_MAX = 4,
};

enum class EParticleAction {
    AttachParticle = 0,
    RemoveParticle = 1,
    EParticleAction_MAX = 2,
};

enum class EPassiveDetectorType {
    None = 0,
    Anomaly = 1,
    Searchpoint = 2,
    EPassiveDetectorType_MAX = 3,
};

enum class EPathBuilderPathType {
    FewCircles = 0,
    Circle = 1,
    ExpensiveActor = 2,
    ShortPath = 3,
    GameGraph = 4,
    EPathBuilderPathType_MAX = 5,
};

enum class EPathControlPointType {
    Regular = 0,
    Avoidance = 1,
    GetCount = 2,
    EPathControlPointType_MAX = 3,
};

enum class EPathFollowingMode {
    None = 0,
    PreferAnimElseProcedural = 1,
    PreferProceduralElseAnim = 2,
    PreferProceduralElseStop = 3,
    GetCount = 4,
    EPathFollowingMode_MAX = 5,
};

enum class EPerformanceBoostDLSSFGMode {
    Off = 0,
    On = 1,
    Auto = 2,
    EPerformanceBoostDLSSFGMode_MAX = 3,
};

enum class EPerformanceBoostFFXFIMode {
    Off = 0,
    On = 1,
    EPerformanceBoostFFXFIMode_MAX = 2,
};

enum class EPerformanceBoostFeatureSupport {
    Supported = 0,
    NotSupported = 1,
    NotSupported_IncompatibleHardware = 2,
    NotSupported_DriverOutOfDate = 3,
    NotSupported_OperatingSystemOutOfDate = 4,
    NotSupported_HardwareSchedulingDisabled = 5,
    NotSupported_ByRHI = 6,
    NotSupported_ByPlatformAtBuildTime = 7,
    NotSupported_IncompatibleAPICaptureToolActive = 8,
    EPerformanceBoostFeatureSupport_MAX = 9,
};

enum class EPerformanceBoostInputLatencyReflex {
    Off = 0,
    On = 1,
    OnPlusBoost = 2,
    EPerformanceBoostInputLatencyReflex_MAX = 3,
};

enum class EPerformanceBoostUpscalingMethod {
    Unknown = 0,
    None = 1,
    TAA = 2,
    TSR = 3,
    FSR = 4,
    DLSS = 5,
    XeSS = 6,
    Max = 6,
};

enum class EPerformanceBoostUpscalingQuality {
    Unknown = 0,
    EPerformanceBoostUpscalingQuality_MAX = 1,
};

enum class EPhysicalMaterialType {
    Default = 0,
    Dirt = 1,
    Grass = 2,
    Brick = 3,
    Glass = 4,
    Sand = 5,
    Rock = 6,
    Asphalt = 7,
    Cloth = 8,
    Leather = 9,
    Rubber = 10,
    Paper = 11,
    Plastic = 12,
    Flesh = 13,
    FleshCloth = 14,
    FleshMetal = 15,
    FleshRubber = 16,
    WoodThin = 17,
    WoodSolid = 18,
    MetalThin = 19,
    MetalSolid = 20,
    MetalGrid = 21,
    Slate = 22,
    Water = 23,
    Chemical = 24,
    Bread = 25,
    Meat = 26,
    Vegetable = 27,
    Tree = 28,
    ForestGrass = 29,
    Puddle = 30,
    Gravel = 31,
    BrokenGlass = 32,
    Ground = 33,
    ForestPine = 34,
    Artifact = 35,
    Leaves = 36,
    Ceramic = 37,
    TreeNoParticles = 38,
    GlassNoParticles = 39,
    Bone = 40,
    ClothCorpses = 41,
    FleshCorpses = 42,
    ArmoredGlass = 43,
    AirPoltergeist = 44,
    FaustInvulnerable = 45,
    GetCount = 46,
    EPhysicalMaterialType_MAX = 47,
};

enum class EPillowAnomalyBiomeType {
    None = 0,
    Rock = 1,
    Forest = 2,
    Urban = 3,
    RedForest = 4,
    Industrial = 5,
    Paper = 6,
    EPillowAnomalyBiomeType_MAX = 7,
};

enum class EPlayerActionInputModifier {
    None = 0,
    DeadZone = 1,
    Scalar = 2,
    ScaleByDeltaTime = 3,
    SwizzleAxis = 4,
    Negate = 5,
    Smooth = 6,
    ResponseCurveExponential = 7,
    GetCount = 8,
    EPlayerActionInputModifier_MAX = 9,
};

enum class EPlayerActionInputTrigger {
    None = 0,
    Down = 1,
    Pressed = 2,
    Released = 3,
    Tap = 4,
    Hold = 5,
    HoldAndRelease = 6,
    Pulse = 7,
    ChordAction = 8,
    ChordBlocker = 9,
    TriggerCombo = 10,
    HoldWithActivationDelay = 11,
    GetCount = 12,
    EPlayerActionInputTrigger_MAX = 13,
};

enum class EPlayerActionInputTypeCustom {
    ToggleOrHold = 0,
    HoldOnly = 1,
    ToggleOnly = 2,
    EPlayerActionInputTypeCustom_MAX = 3,
};

enum class EPlayerActionResult {
    End = 0,
    Interrupt = 1,
    EPlayerActionResult_MAX = 2,
};

enum class EPlayerActionTriggerState {
    Activate = 0,
    Deactivate = 1,
    EPlayerActionTriggerState_MAX = 2,
};

enum class EPlayerAnimDamageSource {
    None = 0,
    BleedingRadiationHunger = 1,
    EmmisionPSY = 2,
    Water = 3,
    Fall = 4,
    Bullet = 5,
    Explosion = 6,
    Chemical = 7,
    Fire = 8,
    Electro = 9,
    PoppyField = 10,
    BulbCarouselExpulsion = 11,
    DiamondIronWind = 12,
    Mutant = 13,
    GetCount = 14,
    EPlayerAnimDamageSource_MAX = 15,
};

enum class EPlayerConditionType {
    None = 0,
    CurrentHealth = 1,
    CurrentAmmo = 2,
    ItemCount = 3,
    EPlayerConditionType_MAX = 4,
};

enum class EPlayerMovementType {
    None = 0,
    Walk = 1,
    Jump = 2,
    Crouch = 4,
    All = 7,
    EPlayerMovementType_MAX = 8,
};

enum class EPlayerTriggerState {
    None = 0,
    MainTrigger = 1,
    AimTrigger = 2,
    MeleeTrigger = 4,
    ChangeAmmoTypeTrigger = 8,
    ChangeFireTypeTrigger = 16,
    ReloadTrigger = 32,
    UnjamTrigger = 64,
    JumpTrigger = 128,
    LeanLeftTrigger = 256,
    LeanRightTrigger = 512,
    CrouchTrigger = 1024,
    WalkTrigger = 2048,
    SprintTrigger = 4096,
    DropItemTrigger = 8192,
    PickUpLeftHandTrigger = 16384,
    PickUpRightHandTrigger = 32768,
    InteractRightHandTrigger = 65536,
    InteractLeftHandTrigger = 131072,
    UseItemLeftHandTrigger = 262144,
    UseItemRightHandTrigger = 524288,
    RemoveLeftHandFromMainItemTrigger = 1048576,
    ReturnLeftHandOnMainItemTrigger = 2097152,
    AutoCoverTrigger = 4194304,
    PrepareMainItemUseTrigger = 8388608,
    KnockDownTrigger = 16777216,
    InstallAttachTrigger = 33554432,
    ThrowWithoutEquipTrigger = 67108864,
    VaultTrigger = 134217728,
    EquipBothHandsTrigger = 268435456,
    ToggleFlashlightTrigger = 536870912,
    UseBackpackTrigger = 1073741824,
    LimpTrigger = 2147483648,
    ToggleShootingAttach = 4294967296,
    ItemSelectorTrigger = 8589934592,
    ThrowStrongTrigger = 17179869184,
    ThrowWeakTrigger = 34359738368,
    SwapWeaponTrigger = 68719476736,
    AttachSelectorTrigger = 137438953472,
    InteractTrigger = 274877906944,
    PickUpTrigger = 549755813888,
    HoldBreathTrigger = 1099511627776,
    UsePDATrigger = 2199023255552,
    UnloadTrigger = 4398046511104,
    InspectArtifactTrigger = 8796093022208,
    InspectArtifactWithBackpackTrigger = 17592186044416,
    RestoreCrouchTrigger = 35184372088832,
    PlayGuitarTrigger = 70368744177664,
    SprintStartedTrigger = 140737488355328,
    LadderSprintTrigger = 281474976710656,
    DodgeTrigger = 562949953421312,
    PrepareAmmoTypeChangeTrigger = 1125899906842624,
    TakeNextItemTrigger = 2251799813685248,
    EPlayerTriggerState_MAX = 2251799813685249,
};

enum class EPlayerUIEvent {
    PlayerDied = 0,
    EPlayerUIEvent_MAX = 1,
};

enum class EPostEffectProcessorType {
    None = 0,
    Constant = 1,
    Lerp = 2,
    FloatProvider = 3,
    Raw = 4,
    Cyclical = 5,
    GetCount = 6,
    EPostEffectProcessorType_MAX = 7,
};

enum class EPostProcessParam {
    Anomaly = 0,
    RadiationNoise = 1,
    RadiationSepia = 2,
    PoppyField = 3,
    SleepinessVignette = 4,
    DamageBloodIntensity = 5,
    BloodTopMaskIntensity = 6,
    BloodRightMaskIntensity = 7,
    BloodBottomMaskIntensity = 8,
    BloodLeftMaskIntensity = 9,
    PulsationIntensityMin = 10,
    PulsationIntensityMax = 11,
    LeakingBloodIntensity = 12,
    LeakingBloodPulsationIntensityMin = 13,
    LeakingBloodPulsationIntensityMax = 14,
    RainIntensity = 15,
    GaussianBlur = 16,
    PsyFieldSepia = 17,
    ChemicalIntensity = 18,
    ExpulsionCompletion = 19,
    CarouselIntensity = 20,
    BurnIntensity = 21,
    DrunknessIntensity = 22,
    SuppressionGaussianBlur = 23,
    GetCount = 24,
    EPostProcessParam_MAX = 25,
};

enum class EPreviousStateMode {
    None = 0,
    SavePrevious = 1,
    UsePrevious = 2,
    EPreviousStateMode_MAX = 3,
};

enum class EProficiencyLevel {
    Novice = 0,
    Regular = 1,
    Veteran = 2,
    Elite = 3,
    GetCount = 4,
    EProficiencyLevel_MAX = 5,
};

enum EProgressDialogType {
    empty = 0,
    Answer = 1,
    Sequence = 4,
    Speech = 8,
    EProgressDialogType_MAX = 9,
};

enum class EProjectileBlueprint {
    None = 0,
    MM768 = 1,
    MM556 = 2,
    GetCount = 3,
    EProjectileBlueprint_MAX = 4,
};

enum class EProjectileMesh {
    None = 0,
    Building = 1,
    Barrel = 2,
    GetCount = 3,
    EProjectileMesh_MAX = 4,
};

enum class EProjectilePropagation {
    None = 0,
    FlyFixedAngle = 1,
    FlyFixedSpeed = 2,
    FlyFixedPoint = 3,
    FlyFixedDirection = 4,
    FollowTarget = 5,
    FlyRandomDirection = 6,
    GetCount = 7,
    EProjectilePropagation_MAX = 8,
};

enum class EPrototypeClass {
    Ability = 0,
    ALifeDirectorScenario = 1,
    ALifePopulationManagerFaction = 2,
    Anomaly = 3,
    PassiveDetector = 4,
    AnomalyOverlap = 5,
    ArtifactSpawner = 6,
    AudioRoom = 7,
    AudioScatterer = 8,
    BarbedWire = 9,
    BodyMesh = 10,
    BodyMeshSimulatePhysics = 11,
    Bolt = 12,
    Corpse = 13,
    ContextualActionBlueprint = 14,
    ContextualActionNode = 15,
    ContextualActionDialogSettings = 16,
    ContextualActionBodyParts = 17,
    CoverEvaluator = 18,
    DamageSource = 19,
    DailySchedule = 20,
    DestructibleObject = 21,
    DialogChain = 22,
    Dialog = 23,
    DialogPool = 24,
    Difficulty = 25,
    Door = 26,
    Effect = 27,
    EffectSourcePriority = 28,
    Emission = 29,
    Explosion = 30,
    FastTravel = 31,
    FastTravelLocation = 32,
    Flashlight = 33,
    GlobalVariable = 34,
    GroomGenerator = 35,
    HearingSensor = 36,
    ImpactPhysicalMaterial = 37,
    Infotopic = 38,
    InputMappingContext = 39,
    Item = 40,
    ItemContainer = 41,
    ItemGenerator = 42,
    JournalQuest = 43,
    Lair = 44,
    LevelStreaming = 45,
    Marker = 46,
    Mesh = 47,
    MeshGenerator = 48,
    MusicManager = 49,
    MovementFX = 50,
    MeleeWeapon = 51,
    PhysicsInteraction = 52,
    Note = 53,
    NPC = 54,
    NPCNeedsPreset = 55,
    Obj = 56,
    PackOfItemsGroup = 57,
    Projectile = 58,
    Relation = 59,
    Quest = 60,
    QuestNode = 61,
    SmartCover = 62,
    SpawnActor = 63,
    Stash = 64,
    Threat = 65,
    Upgrade = 66,
    VisionScanner = 67,
    WeatherSelection = 68,
    WeatherChain = 69,
    WeaponAttributes = 70,
    WeaponGeneralSetup = 71,
    CharacterWeaponSettings = 72,
    PostEffectProcessor = 73,
    RegionMusic = 74,
    ObjSleepParams = 75,
    ObjHoldBreathParams = 76,
    ObjWeightParams = 77,
    ObjEffectMaxParams = 78,
    HappyHours = 79,
    CameraShake = 80,
    CameraShakeGroup = 81,
    MovementSensor = 82,
    FlairSensor = 83,
    VisionTick = 84,
    Constraint = 85,
    GroomBlockingMapping = 86,
    FaceBlockingBlendMask = 87,
    PostProcessMaterial = 88,
    PostProcessParam = 89,
    FloatProvider = 90,
    BoolProvider = 91,
    ObjWeatherParams = 92,
    ObjCrouchParams = 93,
    ObjOnHitParams = 94,
    ObjCustomAbilityDialog = 95,
    EnemyEvaluator = 96,
    AimAssistCone = 97,
    AimAssistPreset = 98,
    AimAssistWeights = 99,
    VoiceModulator = 100,
    CorpseClueStash = 101,
    TeleportGroup = 102,
    AnimationBudget = 103,
    Teleport = 104,
    Trade = 105,
    PDATutorial = 106,
    Backpack = 107,
    GreetingsPopup = 108,
    ObjAimAssistParams = 109,
    GetCount = 110,
    EPrototypeClass_MAX = 111,
};

enum class EPsyNPCType {
    None = 0,
    PsyNPC = 1,
    PsyPhantom = 2,
    EPsyNPCType_MAX = 3,
};

enum class EQuestAnimationType {
    None = 0,
    AfterPDA = 1,
    Show = 2,
    Hidden = 3,
    EQuestAnimationType_MAX = 4,
};

enum class EQuestConditionType {
    HP = 0,
    HPPercent = 1,
    Stamina = 2,
    Radiation = 3,
    Bleeding = 4,
    Psy = 5,
    HungerPoints = 6,
    Money = 7,
    InventoryWeight = 8,
    IsAlive = 9,
    IsOnline = 10,
    FactionRelationship = 11,
    PersonalRelationship = 12,
    Rank = 13,
    Effect = 14,
    Awareness = 15,
    Note = 16,
    ItemInInventory = 17,
    AITarget = 18,
    GlobalVariable = 19,
    Trigger = 20,
    DistanceToNPC = 21,
    DistanceToPoint = 22,
    LookAtAngle = 23,
    Bridge = 24,
    ItemInContainer = 25,
    EquipmentInHands = 26,
    IsAiming = 27,
    CorpseCarry = 28,
    JournalState = 29,
    IsCreated = 30,
    Emission = 31,
    PlayerOverload = 32,
    IsWounded = 33,
    ContextualAction = 34,
    IsDialogMemberValid = 35,
    Weather = 36,
    IsEnoughAmmo = 37,
    IsWeaponJammed = 38,
    HasItemInQuickSlot = 39,
    ArmorState = 40,
    Random = 41,
    FastTravelMoney = 42,
    NodeState = 43,
    Last = 255,
    EQuestConditionType_MAX = 256,
};

enum class EQuestEventType {
    None = 0,
    OnAbilityUsed = 1,
    OnBecomeEnemy = 2,
    OnBecomeFriend = 3,
    OnCacheOpened = 4,
    OnCombatStarted = 5,
    OnCombatFinished = 6,
    OnRelationshipChanged = 7,
    OnDialogFinished = 8,
    OnEmissionFinished = 9,
    OnEmissionStarted = 10,
    OnEmissionStageFinished = 11,
    OnEmissionStageStarted = 12,
    OnFactionBecomeEnemy = 13,
    OnFactionBecomeFriend = 14,
    OnFactionRelationshipChanged = 15,
    OnGlobalVariableChanged = 16,
    OnItemContainerLoot = 17,
    OnItemContainerLootFinished = 18,
    OnQuestInteractionFinish = 19,
    OnInteract = 20,
    OnHit = 21,
    OnInteractEnabled = 22,
    OnJournalQuestStart = 23,
    OnJournalQuestFinish = 24,
    OnJournalQuestFail = 25,
    OnJournalQuestCancel = 26,
    OnJournalQuestStageStart = 27,
    OnJournalQuestStageFinish = 28,
    OnJournalQuestStageFail = 29,
    OnJournalQuestStageCancel = 30,
    OnLocationDiscovered = 31,
    OnLookAtEnded = 32,
    OnMoneyAmountReached = 33,
    OnNotesChanged = 34,
    OnModelCreate = 35,
    OnModelUnhide = 36,
    OnObjCreate = 37,
    OnObjDeath = 38,
    OnObjDefeat = 39,
    OnObjViewCreate = 40,
    OnObjViewDestroy = 41,
    OnPlayerSetupFinished = 42,
    OnPlayerGetItem = 43,
    OnPlayerLostItem = 44,
    OnPlayerNoticed = 45,
    OnPlayerRankReached = 46,
    OnResetAI = 47,
    OnSaveLockRemoved = 48,
    OnScenarioManagerTickStarted = 49,
    OnSetupALifeQuestScenarioGroup = 50,
    OnSetEmotionalStatePerformed = 51,
    OnSetEmotionalStateFinished = 52,
    OnSignalReceiverBeginPlay = 53,
    OnSignalReceived = 54,
    OnQuestFinish = 55,
    OnQuestNodeChangeState = 56,
    OnTick = 57,
    OnTriggerEnter = 58,
    OnTriggerExit = 59,
    OnItemContainerEmpty = 60,
    OnDayStarted = 61,
    OnNightStarted = 62,
    OnDialogExit = 63,
    OnDialogEntered = 64,
    OnPlayerEnterShelter = 65,
    OnPlayerExitShelter = 66,
    OnUpdateALifeQuestZoneData = 67,
    OnWeatherChanged = 68,
    OnPDATutorialChanged = 69,
    OnGetCompatibleAttachment = 70,
    OnAbilityEnded = 71,
    OnInteractionCommentFinished = 72,
    OnUpgradeInstall = 73,
    OnObjHeal = 74,
    GetCount = 75,
    EQuestEventType_MAX = 76,
};

enum class EQuestHintState {
    None = 0,
    OpenJournal = 1,
    Track = 2,
    Untrack = 3,
    EQuestHintState_MAX = 4,
};

enum class EQuestNodeState {
    None = 0,
    Activated = 1,
    Excluded = 2,
    Finished = 3,
    EQuestNodeState_MAX = 4,
};

enum class EQuestNodeType {
    AchievementUnlock = 0,
    ActivateAnomaly = 1,
    ActivateInteractableObject = 2,
    ActivateRestrictor = 3,
    AddNote = 4,
    AddOrRemoveFromSquad = 5,
    AddTechnicianSkillOrUpgrade = 6,
    ALifeDirectorZoneSwitch = 7,
    BridgeCleanUp = 8,
    CancelAllSideQuests = 9,
    ChangeRelationships = 10,
    ChangeFaction = 11,
    Condition = 12,
    Container = 13,
    DeactivateZone = 14,
    Despawn = 15,
    DisableNPCBark = 16,
    DisableNPCInteraction = 17,
    EmissionScheduleControl = 18,
    EmissionStart = 19,
    End = 20,
    Event = 21,
    GiveCache = 22,
    If = 23,
    ItemAdd = 24,
    ItemRemove = 25,
    EnableDataLayer = 26,
    FlashlightOnOff = 27,
    ForceInteract = 28,
    HideTutorial = 29,
    LookAt = 30,
    MoveInventory = 31,
    NPCBark = 32,
    PlayEffect = 33,
    PlayPostProcess = 34,
    PlaySound = 35,
    ReputationLocker = 36,
    ResetAI = 37,
    RestrictionArea = 38,
    Random = 39,
    ScheduledContainer = 40,
    SearchPoint = 41,
    SendSignal = 42,
    SetAIBehavior = 43,
    SetCharacterEffect = 44,
    SetCharacterParam = 45,
    SetDialog = 46,
    SetDurabilityParam = 47,
    SetEmotionalState = 48,
    SetFactionRestriction = 49,
    SetGlobalVariable = 50,
    SetHubOwner = 51,
    SetItemGenerator = 52,
    SetJournal = 53,
    SetLocationName = 54,
    SetMeshGenerator = 55,
    SetName = 56,
    SetNPCSequentialAbility = 57,
    SetPersonalRestriction = 58,
    SetQuestGiver = 59,
    SetSpaceRestrictor = 60,
    SetTime = 61,
    SetTimer = 62,
    SetWeather = 63,
    SetWounded = 64,
    ShowFadeScreen = 65,
    ShowMarker = 66,
    ShowTutorialWidget = 67,
    Spawn = 68,
    SequenceStart = 69,
    SwitchQuestItemState = 70,
    Technical = 71,
    TeleportCharacter = 72,
    TimeLock = 73,
    ToggleNPCHidden = 74,
    ToggleLairActivity = 75,
    EquipItemInHands = 76,
    Trigger = 77,
    SaveGame = 78,
    RestrictSave = 79,
    StartQuestStage = 80,
    ProtectLairNPCSquadItem = 81,
    SpawnAnomaly = 82,
    SpawnAnomalySpawner = 83,
    SpawnArtifactSpawner = 84,
    SpawnContextualAction = 85,
    SpawnDeadBody = 86,
    SpawnGuardZone = 87,
    SpawnHub = 88,
    SpawnItemContainer = 89,
    SpawnLair = 90,
    SpawnSafeZone = 91,
    SpawnSingleObj = 92,
    SpawnShelter = 93,
    SpawnSquad = 94,
    SpawnTrigger = 95,
    BridgeEvent = 96,
    OnAbilityUsedEvent = 97,
    OnEmissionStageActivated = 98,
    OnEmissionStageFinished = 99,
    OnEmissionStartEvent = 100,
    OnEmissionFinishEvent = 101,
    OnFactionBecomeFriendEvent = 102,
    OnFactionBecomeEnemyEvent = 103,
    OnGetCompatibleAttachEvent = 104,
    OnHitEvent = 105,
    OnInteractEvent = 106,
    OnJournalQuestEvent = 107,
    OnKillerCheckEvent = 108,
    OnMoneyAmountReachedEvent = 109,
    OnNPCBecomeEnemyEvent = 110,
    OnNPCBecomeFriendEvent = 111,
    OnNPCCreateEvent = 112,
    OnNPCDeathEvent = 113,
    OnNPCDefeatEvent = 114,
    OnPlayerGetItemEvent = 115,
    OnPlayerLostItemEvent = 116,
    OnPlayerNoticedEvent = 117,
    OnPlayerRankReachedEvent = 118,
    OnSignalReceived = 119,
    OnTickEvent = 120,
    OnTriggerEnterEvent = 121,
    OnTriggerExitEvent = 122,
    OnInfotopicFinishEvent = 123,
    TrackShelter = 124,
    TrackJournal = 125,
    StartBenchmark = 126,
    ConsoleCommand = 127,
    PlayVideo = 128,
    ShowLoadingScreen = 129,
    LoadAsset = 130,
    HideLoadingScreen = 131,
    OnAbilityEndedEvent = 132,
    OnUpgradeInstallEvent = 133,
    SpawnMarker = 134,
    OnDialogStartEvent = 135,
    GetCount = 136,
    EQuestNodeType_MAX = 137,
};

enum class EQuestRewardSource {
    None = 0,
    MainLine = 1,
    SideLine = 2,
    GetCount = 3,
    EQuestRewardSource_MAX = 4,
};

enum class EQuestRewardType {
    Random = 0,
    Money = 1,
    Helmet = 2,
    Armor = 3,
    Weapon = 4,
    Detector = 5,
    Artifact = 6,
    Ammo = 7,
    Attach = 8,
    Medkit = 9,
    Food = 10,
    EQuestRewardType_MAX = 11,
};

enum class EQuestState {
    None = 0,
    New = 1,
    Active = 2,
    Finished = 3,
    Cancelled = 4,
    Failed = 5,
    EQuestState_MAX = 6,
};

enum class EQuestTaskAnimationType {
    None = 0,
    TaskStart = 1,
    TaskFinish = 2,
    TaskFail = 3,
    TaskCancel = 4,
    EQuestTaskAnimationType_MAX = 5,
};

enum class ERadiationInnerOffsetPreset {
    None = 0,
    Half = 1,
    Full = 2,
    Custom = 3,
    GetCount = 4,
    ERadiationInnerOffsetPreset_MAX = 5,
};

enum class ERadiationPreset {
    None = 0,
    Light = 1,
    Medium = 2,
    Strong = 3,
    Deadly = 4,
    RadBlock = 5,
    Custom = 6,
    Topaz = 7,
    GetCount = 8,
    ERadiationPreset_MAX = 9,
};

enum class ERagdollAction {
    StartWoundedRagdoll = 0,
    StartRagdollLying = 1,
    EndWoundedWakeUp = 2,
    ERagdollAction_MAX = 3,
};

enum class ERank {
    Newbie = 0,
    Experienced = 1,
    Veteran = 2,
    Master = 3,
    GetCount = 4,
    ERank_MAX = 5,
};

enum class ERecalcFieldsFlag {
    None = 0,
    BuffData = 1,
    MaxInventoryMass = 2,
    MovementParams = 4,
    Significance = 8,
    Vitals = 16,
    WeaponData = 32,
    BlockedAnimationActionTypes = 64,
    BulletSpeedSlowdown = 128,
    StaminaActionTypes = 256,
    Everything = 511,
    GetCount = 512,
    ERecalcFieldsFlag_MAX = 513,
};

enum class EReflectionUpdatePriority {
    High = 0,
    Medium = 1,
    Low = 2,
    Minimal = 3,
    GetCount = 4,
    EReflectionUpdatePriority_MAX = 5,
};

enum class ERegion {
    Zone = 0,
    MalayaZona = 1,
    Svalka = 2,
    ChemZavod = 3,
    DickyOstrov = 4,
    Zaton = 5,
    Bolota = 6,
    NIICHAZ = 7,
    Gradirni = 8,
    Malahit = 9,
    Duga = 10,
    Rostock = 11,
    Yantar = 12,
    GoreliyLes = 13,
    Kordon = 14,
    RizhyLes = 15,
    Yanov = 16,
    Jupiter = 17,
    Pripyat = 18,
    ZheleznyLes = 19,
    CHAES = 20,
    Generatory = 21,
    ZementniyZavod = 22,
    GetCount = 23,
    None = 24,
    ERegion_MAX = 25,
};

enum class ERelationChangingEvent {
    Damage = 0,
    Wounded = 1,
    KillWounded = 2,
    Kill = 3,
    Heal = 4,
    Grenade = 5,
    FractionDamage = 6,
    Melee = 7,
    Count = 8,
    ERelationChangingEvent_MAX = 9,
};

enum class ERelationLevel {
    Enemy = 0,
    Disaffection = 1,
    Neutral = 2,
    Friend = 3,
    Self = 4,
    Count = 5,
    ERelationLevel_MAX = 6,
};

enum class EReloadState {
    Started = 0,
    Finished = 1,
    Interrupted = 2,
    EReloadState_MAX = 3,
};

enum class EReloadingCases {
    None = 0,
    PerBullet = 1,
    Unload = 2,
    EReloadingCases_MAX = 3,
};

enum class ERepetitions {
    Infinity = 0,
    TimeInSeconds = 1,
    PlayCount = 2,
    ERepetitions_MAX = 3,
};

enum class ERequiredSquadMembers {
    AllMembers = 0,
    AnyMember = 1,
    ERequiredSquadMembers_MAX = 2,
};

enum class ERightClickMenu {
    Use = 0,
    Take = 1,
    TakeAll = 2,
    EquipToArtifactSlot = 3,
    Equip = 4,
    Unequip = 5,
    Sell = 6,
    SellAll = 7,
    Buy = 8,
    BuyAll = 9,
    Return = 10,
    UnloadAmmo = 11,
    InspectArtifact = 12,
    EquipToQuickSlot = 13,
    AttachToWeapon = 14,
    Remove = 15,
    ReturnAll = 16,
    Put = 17,
    PutAll = 18,
    Drop = 19,
    DropAll = 20,
    DetachAttach = 21,
    DetachAllAttaches = 22,
    Repair = 23,
    RepairAll = 24,
    Compare = 25,
    ChangeWeaponAmmo = 26,
    GetCount = 27,
    ERightClickMenu_MAX = 28,
};

enum class ERotationPartType {
    Eyes = 0,
    Head = 1,
    UpperBody = 2,
    FullBody = 3,
    ERotationPartType_MAX = 4,
};

enum class ERumbleType {
    None = 0,
    LeftTrigger = 1,
    RightTrigger = 2,
    Triggers = 3,
    LeftGrip = 4,
    RightGrip = 8,
    Grips = 12,
    LeftSide = 5,
    RightSide = 10,
    RightTop = 11,
    RightBottom = 14,
    LeftTop = 7,
    LeftBottop = 13,
    PartiallyLeft = 6,
    PartiallyRight = 9,
    All = 15,
    ERumbleType_MAX = 16,
};

enum class ESaveLoadResult {
    Success = 0,
    InvalidCampaign = 1,
    NoFreeSaveSlots = 2,
    CantOverwriteSave = 3,
    DataSaveFailed = 4,
    LoadFileDoesNotExist = 5,
    LoadFileReadingFailed = 6,
    CampaignsSaveFailed = 7,
    CampaignsFileReadingFailed = 8,
    SaveDoesNotExist = 9,
    SaveDeleteFailed = 10,
    ThumbnailDeleteFailed = 11,
    NoFreeCampaignSlots = 12,
    NoSavesToLoad = 13,
    CantAutosave = 14,
    SavingRestricted = 15,
    GenericError = 16,
    SaveInProgress = 17,
    GetCount = 18,
    ESaveLoadResult_MAX = 19,
};

enum class ESaveType {
    Manual = 0,
    Auto = 1,
    Quick = 2,
    Quest = 3,
    GetCount = 4,
    ESaveType_MAX = 5,
};

enum class EScalabilityQuality {
    Low = 0,
    Medium = 1,
    High = 2,
    Epic = 3,
    Cinematic = 4,
    XSX_Quality = 5,
    XSX_Performance = 6,
    XSS_Quality = 7,
    XSS_Performance = 8,
    GCin = 9,
    GNar = 10,
    GLev = 11,
    GEC = 12,
    GTemp = 13,
    GDefault = 14,
    GetCount = 15,
    EScalabilityQuality_MAX = 16,
};

enum class EScalabilitySetting {
    ResolutionQuality = 0,
    ViewDistanceQuality = 1,
    AntiAliasingQuality = 2,
    ShadowQuality = 3,
    GlobalIlluminationQuality = 4,
    ReflectionQuality = 5,
    PostProcessQuality = 6,
    TextureQuality = 7,
    EffectsQuality = 8,
    FoliageQuality = 9,
    ShadingQuality = 10,
    HairQuality = 11,
    ObjectDetailQuality = 12,
    VolumetricFogQuality = 13,
    VolumetricCloudsQuality = 14,
    SkyQuality = 15,
    MaterialQuality = 16,
    MotionBlurQuality = 17,
    DOFQuality = 18,
    GetCount = 19,
    EScalabilitySetting_MAX = 20,
};

enum class EScenarioBranch {
    None = 0,
    Spark = 1,
    Varta = 2,
    Strelok = 3,
    Skif = 4,
    Stalker = 5,
    Noon = 6,
    EScenarioBranch_MAX = 7,
};

enum class EScenarioCategory {
    Combat = 0,
    Peaceful = 1,
    EScenarioCategory_MAX = 2,
};

enum class EScriptVariableType {
    None = 0,
    BoolVar = 1,
    Int32Var = 2,
    Int64Var = 3,
    FloatVar = 4,
    DoubleVar = 5,
    FStringVar = 6,
    GetCount = 7,
    EScriptVariableType_MAX = 8,
};

enum class ESecondarySoundClass {
    HitMark = 0,
    FTS = 1,
    Equip = 2,
    ImpactFrom = 3,
    Breath = 4,
    P_Gun = 5,
    P_Fire = 6,
    P_Tail = 7,
    Frag = 8,
    Impact = 9,
    Handling = 10,
    Gun = 11,
    Fire = 12,
    Tail = 13,
    Human = 14,
    Creature = 15,
    Polter = 16,
    Menu = 17,
    Inventory = 18,
    Calm = 19,
    Fight = 20,
    Suspicious = 21,
    Anomaly = 22,
    Drone = 23,
    Destruct = 24,
    Int_Props = 25,
    Unassign = 26,
    WeatherBioms = 27,
    InternalsScatter = 28,
    Transition = 29,
    Props = 30,
    DayScatter = 31,
    NightScatter = 32,
    GetCount = 33,
    ESecondarySoundClass_MAX = 34,
};

enum class ESetRelationType {
    Default = 0,
    Force = 1,
    Count = 2,
    ESetRelationType_MAX = 3,
};

enum class ESettingCategoryType {
    None = 0,
    Gameplay = 1,
    Input = 2,
    InputMappings = 3,
    UI = 4,
    Audio = 5,
    Graphics = 6,
    Display = 7,
    Accessibility = 8,
    FirstTime = 9,
    Debug = 10,
    All = 11,
    GetCount = 12,
    ESettingCategoryType_MAX = 13,
};

enum class EShieldState {
    Enabled = 0,
    Disabled = 1,
    EShieldState_MAX = 2,
};

enum class EShootingAvailability {
    None = 0,
    Available = 1,
    Blocked = 2,
    NoAmmoLoaded = 3,
    NoAmmo = 4,
    Jammed = 5,
    NoWeapon = 6,
    NoInventory = 7,
    ShootingCooldown = 8,
    GetCount = 9,
    EShootingAvailability_MAX = 10,
};

enum class EShootingRadiusType {
    None = 0,
    RecoilRadius = 1,
    DispersionRadius = 2,
    DispersionRadiusAI = 4,
    EShootingRadiusType_MAX = 5,
};

enum class EShotDistanceType {
    Short = 0,
    Medium = 1,
    Long = 2,
    GetCount = 3,
    EShotDistanceType_MAX = 4,
};

enum class EShutterState {
    None = 0,
    ReadyToShoot = 1,
    FirstBarrelShot = 2,
    LastShot = 3,
    EShutterState_MAX = 4,
};

enum class ESignificanceFlags {
    None = 0,
    Distance = 1,
    LastRender = 2,
    ScreenSize = 4,
    GetCount = 5,
    ESignificanceFlags_MAX = 6,
};

enum class ESleepAvailability {
    Available = 0,
    NotTired = 1,
    Emission = 2,
    NegativeEffect = 3,
    InBattle = 4,
    ESleepAvailability_MAX = 5,
};

enum class ESlotDirection {
    Up = 0,
    Right = 1,
    Down = 2,
    Left = 3,
    None = 4,
    ESlotDirection_MAX = 5,
};

enum class ESmartCoverActionType {
    Blind = 0,
    LookOut = 1,
    ThrowGrenade = 2,
    ESmartCoverActionType_MAX = 3,
};

enum class ESmartCoverAnimationActionType {
    EnterCover = 0,
    LeaveCover = 1,
    StayBehindCover = 2,
    PoseTransition = 3,
    LookFromCover = 4,
    HideBehindCover = 5,
    Shoot = 6,
    ThrowGrenade = 7,
    Count = 8,
    ESmartCoverAnimationActionType_MAX = 9,
};

enum class ESmartCoverType {
    NoCover = 0,
    NoShootingPosition = 1,
    Generic = 2,
    BehindTreeCover = 3,
    Low = 4,
    High = 5,
    Count = 6,
    ESmartCoverType_MAX = 7,
};

enum class ESortGroup {
    None = -1,
    Up = 0,
    Down = 1,
    Left = 2,
    Right = 3,
    HP = 4,
    Bleeding = 5,
    Radiations = 6,
    Stamina = 7,
    Buff = 8,
    Hunger = 9,
    GetCount = 10,
    ESortGroup_MAX = 11,
};

enum class ESoundEffectSubtype {
    None = 0,
    SetState = 1,
    SetSwitch = 2,
    SetParameter = 3,
    SetGlobalParameter = 4,
    PlaySoundAttached = 5,
    StopInfiniteSound = 6,
    GetCount = 7,
    ESoundEffectSubtype_MAX = 8,
};

enum class ESoundEventType {
    None = 0,
    Shot = 1,
    Reload = 2,
    Steps = 4,
    Jump = 8,
    Voice = 16,
    AnomalyActivated = 32,
    Explosion = 64,
    BulletFlyby = 128,
    PhysObjectImpact = 256,
    Interactable = 512,
    DoorKnockedOut = 1024,
    Bolt = 2048,
    StealthKill = 4096,
    BulletHit = 8192,
    GrenadeHit = 16384,
    Guitar = 32768,
    Count = 16,
    ESoundEventType_MAX = 32769,
};

enum class ESpaceRestrictionType {
    None = 0,
    In = 1,
    Out = 2,
    ESpaceRestrictionType_MAX = 3,
};

enum class ESpawnDataState {
    None = 0,
    ProbabilityAccumulation = 1,
    SpawnPointPick = 2,
    ActivateParticle = 3,
    ActiveParticle = 4,
    InactiveParticle = 5,
    ESpawnDataState_MAX = 6,
};

enum class ESpawnNiagaraAtLocation {
    BlahBlah = 0,
    CigaretteAshLocation = 1,
    SmokingMouth = 2,
    ESpawnNiagaraAtLocation_MAX = 3,
};

enum class ESpawnNodeExcludeType {
    SeamlessDespawn = 0,
    ForceDespawn = 1,
    KillSpawnedObj = 2,
    ESpawnNodeExcludeType_MAX = 3,
};

enum class ESpawnSource {
    Quest = 0,
    ALife = 1,
    ALifeDirector = 2,
    SummonAbility = 3,
    Debug = 4,
    ESpawnSource_MAX = 5,
};

enum class ESpawnType {
    None = 0,
    ALifeGroup = 1,
    Anomaly = 2,
    AnomalySpawner = 3,
    ArtifactSpawner = 4,
    DeadBody = 5,
    ElectroAnomaly = 6,
    FlashlightOnZone = 7,
    DailyScheduleZone = 8,
    GuardZone = 9,
    Item = 10,
    ItemContainer = 11,
    FogVolume = 12,
    LairSpawner = 13,
    LightningBallAnomaly = 14,
    MoveToPath = 15,
    Marker = 16,
    Obj = 17,
    PackOfItems = 18,
    PillowAnomaly = 19,
    PsyAnomaly = 20,
    PSYControllerAnomaly = 21,
    Patrol = 22,
    ContextualAction = 23,
    Radiation = 24,
    SafeZone = 25,
    Searchpoint = 26,
    Shelter = 27,
    SoapBubbleAnomaly = 28,
    Hub = 29,
    Squad = 30,
    Trigger = 31,
    DestructibleObject = 32,
    WeatherSelection = 33,
    TeleportPoint = 34,
    ClickerAnomaly = 35,
    OnlineModifierZone = 36,
    ESpawnType_MAX = 37,
};

enum class ESpeechRequestMode {
    Flexible = 0,
    Forced = 1,
    Queued = 2,
    GetCount = 3,
    ESpeechRequestMode_MAX = 4,
};

enum class ESpeechState {
    None = 0,
    Load = 1,
    Play = 2,
    Pause = 3,
    Finish = 4,
    ESpeechState_MAX = 5,
};

enum class ESplitStackTypeDirection {
    None = 0,
    Take = 1,
    PutDown = 2,
    Drop = 3,
    ESplitStackTypeDirection_MAX = 4,
};

enum class EStageUI {
    None = 0,
    Show = 1,
    Update = 2,
    Hide = 4,
    PermanentHide = 8,
    ShowUpdate = 3,
    ShowHide = 5,
    ShowPermanentHide = 9,
    UpdateHide = 6,
    UpdatePermanentHide = 10,
    HidePermanentHide = 12,
    ShowUpdateHide = 7,
    ShowUpdatePermanentHide = 11,
    ShowHidePermanentHide = 13,
    UpdateHidePermanentHide = 14,
    ShowUpdateHidePermanentHide = 15,
    GetCount = 16,
    EStageUI_MAX = 17,
};

enum class EStaminaAction {
    None = 0,
    Walk = 1,
    Run = 2,
    Sprint = 3,
    Crouch = 4,
    LowCrouch = 5,
    Climb = 6,
    Jump = 7,
    MeleeNormal = 8,
    MeleeStrong = 9,
    MeleeButstock = 10,
    Vault = 11,
    GetCount = 12,
    EStaminaAction_MAX = 13,
};

enum class EStartDialogType {
    CanStart = 0,
    CanStartWaitingForContextualAction = 1,
    CanNotStart = 2,
    EStartDialogType_MAX = 3,
};

enum class EStashActionType {
    Open = 0,
    Close = 1,
    EStashActionType_MAX = 2,
};

enum class EStashClueSource {
    None = 0,
    QuestReward = 1,
    Loot = 2,
    GetCount = 3,
    EStashClueSource_MAX = 4,
};

enum class EStatSlotStates {
    None = 0,
    Weak = 1,
    Medium = 2,
    Strong = 3,
    EStatSlotStates_MAX = 4,
};

enum class EStateTag {
    None = 0,
    ShouldWalk = 1,
    ShouldRun = 2,
    ShouldSprint = 4,
    ShouldAim = 8,
    Sprint = 16,
    Walk = 32,
    Run = 64,
    MoveForward = 128,
    MoveBack = 256,
    Strafe = 512,
    Crouch = 1024,
    Climb = 2048,
    Jump = 4096,
    Aim = 8192,
    Drunk = 16384,
    Sleep = 32768,
    Sit = 65536,
    Interact = 131072,
    LeanLeft = 262144,
    LeanRight = 524288,
    LayDown = 1048576,
    HoldBreath = 2097152,
    Psycho = 8388608,
    Vault = 16777216,
    Limp = 33554432,
    ZombieReadyToEquipWeapon = 67108864,
    ZombieIsStandingUp = 134217728,
    EquipItem = 268435456,
    AimingActive = 536870912,
    SlowRun = 1073741824,
    MovementTypes = 112,
    IsMovingXAxis = 384,
    IsMoving = 896,
    WalkInPlaceAim = 8224,
    WalkMove = 160,
    WalkMoveAim = 8352,
    WalkStrafe = 544,
    WalkStrafeAim = 8736,
    WalkBack = 288,
    WalkBackAim = 8480,
    RunMove = 192,
    RunAim = 8384,
    RunStrafeAim = 8768,
    RunBack = 320,
    RunBackAim = 8512,
    SprintMove = 144,
    SprintStrafe = 528,
    SprintBack = 272,
    JumpWalkInPlace = 4128,
    JumpWalkInPlaceAim = 12320,
    JumpWalkMove = 4256,
    JumpWalkMoveAim = 12448,
    JumpWalkStrafe = 4640,
    JumpWalkStrafeAim = 12832,
    JumpWalkBack = 4384,
    JumpWalkBackAim = 12576,
    JumpRunInPlaceAim = 12288,
    JumpRunMove = 4224,
    JumpRunMoveAim = 12416,
    JumpRunStrafe = 4608,
    JumpRunStrafeAim = 12800,
    JumpRunBack = 4352,
    JumpRunBackAim = 12544,
    JumpSprintInPlace = 4112,
    JumpSprintMove = 4240,
    JumpSprintStrafe = 4624,
    JumpSprintBack = 4368,
    LowCrouchInPlace = 1056,
    LowCrouchInPlaceAim = 9248,
    LowCrouchMove = 1184,
    LowCrouchMoveAim = 9376,
    LowCrouchStrafe = 1568,
    LowCrouchStrafeAim = 9760,
    LowCrouchBack = 1312,
    LowCrouchBackAim = 9504,
    CrouchInPlaceAim = 9216,
    CrouchMove = 1152,
    CrouchMoveAim = 9344,
    CrouchStrafe = 1536,
    CrouchStrafeAim = 9728,
    CrouchBack = 1280,
    CrouchBackAim = 9472,
    FastDescend = 2320,
    GetCount = 65535,
    EStateTag_MAX = 1073741825,
};

enum class EStaticParticleType {
    None = 0,
    Dust = 1,
    FallingDust = 2,
    Embers = 3,
    FlyingGarbage = 4,
    FireBarrel = 5,
    Bonfire = 6,
    OvenFire = 7,
    PipeSmoke = 8,
    Smoke = 9,
    Fog = 10,
    WaterFog = 11,
    LowLandFog = 12,
    WaterLeaks = 13,
    Sparks = 14,
    Water = 15,
    Insects = 16,
    Flies = 17,
    Fireflies = 18,
    ElectricField = 19,
    RustyGeyser = 20,
    DugaElectricField = 21,
    Steam = 22,
    Wildlife = 23,
    FlyingCrows = 24,
    CreepyCrawlyCoalition = 25,
    EStaticParticleType_MAX = 26,
};

enum class EStayBehaviorType {
    Animation = 0,
    ContextualAction = 1,
    Idle = 2,
    EStayBehaviorType_MAX = 3,
};

enum class ESubgraphBlendTypes {
    None = 0,
    WeaponHide = 1,
    WeaponShow = 2,
    DetectorHide = 3,
    DetectorShow = 4,
    OneHandedConsumableShow = 5,
    OneHandedConsumableHide = 6,
    TwoHandedConsumableHide = 7,
    TwoHandedConsumableShow = 8,
    ESubgraphBlendTypes_MAX = 9,
};

enum class ESubtitlesSize {
    Small = 0,
    Standart = 1,
    Big = 2,
    GetCount = 3,
    ESubtitlesSize_MAX = 4,
};

enum class ESummonSpawnOrientation {
    Identity = 0,
    MatchOwner = 1,
    LookAtOwner = 2,
    LookAtEnemy = 3,
    LookFromOwner = 4,
    ESummonSpawnOrientation_MAX = 5,
};

enum class ESwarmInstanceStates {
    NavMoving = 0,
    Flocking = 1,
    Attacking = 2,
    Idle = 3,
    Dying = 4,
    Count = 5,
    ESwarmInstanceStates_MAX = 6,
};

enum class ESystemNotificationIconType {
    Item = 0,
    Blueprint = 1,
    Money = 2,
    Note = 3,
    Cache = 4,
    AudioNote = 5,
    Region = 6,
    ESystemNotificationIconType_MAX = 7,
};

enum class ETextListType {
    None = 0,
    Point = 1,
    Numeric = 2,
    ETextListType_MAX = 3,
};

enum class EThreatActionType {
    None = 0,
    TurnHead = 1,
    MoveToLocation = 2,
    CallAllies = 4,
    SearchEnemy = 8,
    Count = 4,
    EThreatActionType_MAX = 9,
};

enum class EThreatAwareness {
    None = 0,
    Calm = 1,
    TurnHead = 2,
    SearchEnemy = 3,
    MoveToLocation = 4,
    CallAllies = 5,
    Battle = 6,
    EThreatAwareness_MAX = 7,
};

enum class EThreatSensor {
    None = 0,
    Vision = 1,
    Hearing = 2,
    Smell = 4,
    MovementDetection = 8,
    EThreatSensor_MAX = 9,
};

enum class EThreatType {
    None = 0,
    Corpse = 1,
    Sound = 2,
    PhysicsTouch = 3,
    Hit = 4,
    Flashlight = 5,
    CharacterTouch = 6,
    UnidentifiedEnemy = 7,
    IdentifiedEnemy = 8,
    Explosive = 9,
    EThreatType_MAX = 10,
};

enum class ETickSlicingGroup {
    SkipTick = 0,
    HighestPriority = 1,
    HighPriority = 2,
    MediumPriority = 3,
    LowPriority = 4,
    GetCount = 5,
    ETickSlicingGroup_MAX = 6,
};

enum class EToggleType {
    Open = 0,
    DotOpen = 1,
    Close = 2,
    EToggleType_MAX = 3,
};

enum class ETooltipItemCategory {
    Armor = 0,
    Weapon = 1,
    Consumable = 2,
    Artifact = 3,
    GetCount = 4,
    ETooltipItemCategory_MAX = 5,
};

enum class ETopazScannerState {
    None = 0,
    Inactive = 1,
    Placing = 2,
    Active = 3,
    Done = 4,
    Collected = 5,
    GetCount = 6,
    ETopazScannerState_MAX = 7,
};

enum class ETracePhase {
    HorizontalTracePhase = 0,
    VerticalUpTracePhase = 1,
    VerticalDownTracePhase = 2,
    VerticalTraces = 3,
    ETracePhase_MAX = 4,
};

enum class ETrackGroup {
    MainQuest = 0,
    SideQuest = 1,
    PlayerLandmark = 2,
    Other = 3,
    ETrackGroup_MAX = 4,
};

enum class ETriggerReact {
    ReactOnAlive = 0,
    ReactOnDead = 1,
    ReactBoth = 2,
    ETriggerReact_MAX = 3,
};

enum class ETriggerShape {
    Box = 0,
    Sphere = 1,
    Cylinder = 2,
    Freeform = 3,
    ETriggerShape_MAX = 4,
};

enum ETutorialWidgetType {
    Autonomic = 0,
    Reference = 1,
    ReferenceLeft = 2,
    PointOfNoreturn = 3,
    ETutorialWidgetType_MAX = 4,
};

enum class EUISound {
    None = -1,
    OnShowReferenceTutorial = 0,
    OnShowSplashTutorial = 1,
    CloseInventory = 2,
    UnloadAmmoInventory = 3,
    WearEquipment = 4,
    TakeOffEquipment = 5,
    UseConsumableSausage = 6,
    UseConsumableBread = 7,
    UseConsumableVodka = 8,
    UseConsumableEnergetic = 9,
    UseConsumableWater = 10,
    UseConsumableBeer = 11,
    UseConsumableMilk = 12,
    UseConsumableCannedFood = 13,
    UseConsumableMedkit = 14,
    UseConsumableArmyMedkit = 15,
    UseConsumableEcoMedkit = 16,
    UseConsumableBandage = 17,
    UseConsumableAntiRad = 18,
    UseConsumableHercules = 19,
    UseConsumableBarvinok = 20,
    UseConsumablePsyBlocker = 21,
    UseConsumableCinnamon = 22,
    UpgradeItem = 23,
    RepairArmor = 24,
    RepairWeapon = 25,
    UpgradeItemCancel = 26,
    UpgradeItemModification = 27,
    UpgradeItemSelect = 28,
    DisassembleItem = 29,
    Click = 30,
    SectionSwitch = 31,
    JournalTabSwitch = 32,
    ScrollQuest = 33,
    SystemNotificationObjective = 34,
    SystemNotificationNews = 35,
    SystemNotificationTip = 36,
    SystemNotificationNewArea = 37,
    SystemNotificationNewAudio = 38,
    ItemSelectorGrenade = 39,
    ItemSelectorFireMode = 40,
    ItemSelectorClose = 41,
    ItemSelectorHover = 42,
    ItemSelectorOpen = 43,
    AcceptTrade = 44,
    CancelTrade = 45,
    OpenTrade = 46,
    CloseTrade = 47,
    JournalTrackQuest = 48,
    JournalUntrackQuest = 49,
    MainQuestAdded = 50,
    MainQuestCompleted = 51,
    SecondaryQuestAdded = 52,
    SecondaryQuestCompleted = 53,
    QuestFailed = 54,
    QuestCancelled = 55,
    QuestStageUpdated = 56,
    QuestStageFailed = 57,
    SettingsApply = 58,
    SettingsBack = 59,
    SettingsSlotHover = 60,
    SettingsSlotState = 61,
    SettingsTabSwitch = 62,
    PDATutorialTabSwitch = 63,
    PDATutorialScrol = 64,
    NoteStartPlayAudiologSound = 65,
    NoteStopPlayAudiologSound = 66,
    IdleScreen = 67,
    MainMenuMusicStart = 68,
    MainMenuMusicEnd = 69,
    MainMenuHover = 70,
    MainMenuSelect = 71,
    MainMenuNewGame = 72,
    PauseMenuOn = 73,
    PauseMenuOff = 74,
    AttachSelectorActivateAttach = 75,
    AttachSelectorDeactivateAttach = 76,
    AttachSelectorOpened = 77,
    AttachSelectorClosed = 78,
    AttachSelectorSlotSwitched = 79,
    AttachSelectorSlotHovered = 80,
    AttachSelectorDeactivateAllAttaches = 81,
    MapZoomIn = 82,
    MapZoomOut = 83,
    MapMarkerTrack = 84,
    MapMarkerUntrack = 85,
    MapUserMarkerSet = 86,
    MapUserMarkerRemove = 87,
    MapMarkerMenuOpen = 88,
    MapMarkerMenuClose = 89,
    MapMarkerMenuSwitch = 90,
    MapMarkerMenuDenied = 91,
    SpecificReward = 92,
    PickItem = 93,
    PlaceItem = 94,
    TakeAllLoot = 95,
    Count = 96,
    EUISound_MAX = 97,
};

enum class EUpdateBulletSource {
    Shoot = 0,
    Reload = 1,
    EUpdateBulletSource_MAX = 2,
};

enum class EUpdateGeneration {
    None = 0,
    Reputation = 1,
    Time = 2,
    TimeDays = 4,
    Rank = 8,
    Difficulty = 16,
    EUpdateGeneration_MAX = 17,
};

enum class EUpdateSource {
    Reload = 0,
    Shift = 1,
    Upgrade = 2,
    Spawn = 3,
    EUpdateSource_MAX = 4,
};

enum class EUpgradeAvailability {
    Unavailable = 0,
    Available = 1,
    Purchased = 2,
    Blocked = 3,
    BlockedHidden = 4,
    PurchasedModuleOn = 5,
    PurchasedModuleOff = 6,
    GetCount = 7,
    EUpgradeAvailability_MAX = 8,
};

enum class EUpgradeScheme {
    None = 0,
    GetCount = 1,
    EUpgradeScheme_MAX = 2,
};

enum class EUpgradeTargetPartType {
    None = 0,
    Stock = 1,
    Body = 2,
    Handguard = 3,
    Barrel = 4,
    PistolGrip = 5,
    GetCount = 6,
    EUpgradeTargetPartType_MAX = 7,
};

enum class EUpgradeVerticalPosition {
    None = 0,
    Top = 1,
    Down = 2,
    GetCount = 3,
    EUpgradeVerticalPosition_MAX = 4,
};

enum class EUseAbsoluteOrDelta {
    Absolute = 0,
    Delta = 1,
    Count = 2,
    EUseAbsoluteOrDelta_MAX = 3,
};

enum class EValveState {
    OpenInFirst = 0,
    OpenIn = 1,
    CloseIn = 2,
    EValveState_MAX = 3,
};

enum class EVaultState {
    None = 0,
    VaultingOver = 1,
    VaultingOnTop = 2,
    EVaultState_MAX = 3,
};

enum class EVitalState {
    Alive = 0,
    Dead = 1,
    Zombie = 2,
    EVitalState_MAX = 3,
};

enum class EVitalType {
    None = 0,
    HP = 1,
    SP = 2,
    HungerPoints = 3,
    ThirstPoints = 4,
    SleepinessPoints = 5,
    Bleeding = 6,
    Radiation = 7,
    PoppyFieldSleepiness = 8,
    SuppressionPoints = 9,
    PsyPoints = 10,
    Drunkness = 11,
    OverDrunkness = 12,
    FallHeight = 13,
    GetCount = 14,
    EVitalType_MAX = 15,
};

enum class EVoiceCommand {
    None = 0,
    AttackLaunch = 1,
    AttackLaunchAgainstPlayer = 2,
    BattleRoar = 3,
    BattleRoarAgainstPlayer = 4,
    RequestCoverFire = 5,
    RequestFlank = 6,
    Wounded = 7,
    DeathRattle = 8,
    EnemyKilled = 9,
    EnemyCriticalHit = 10,
    EnemyLost = 11,
    EnemySearching = 12,
    EnemyDetected = 13,
    EnemyNearby = 14,
    EnemyFarAway = 15,
    FriendDeath = 16,
    FriendCriticalHit = 17,
    FriendlyFire = 18,
    GrenadeNearby = 19,
    GrenadeThrowRequest = 20,
    Reloading = 21,
    EVoiceCommand_MAX = 22,
};

enum class EWanderingLightsSimulationState {
    Disabled = 0,
    WakingUp = 1,
    Idle = 2,
    HasTarget = 3,
    Active = 4,
    ShuttingDown = 5,
    EWanderingLightsSimulationState_MAX = 6,
};

enum class EWaterImmersionLevel {
    None = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    Deadly = 4,
    GetCount = 5,
    EWaterImmersionLevel_MAX = 6,
};

enum class EWeaponAction {
    ToggleTwinMagazineShift = 0,
    JamRepaired = 1,
    TryForceJam = 2,
    ChangeFireType = 3,
    AddAmmo = 4,
    FinishReload = 5,
    PerBulletReloading = 6,
    PerBulletAmmoCountSection = 7,
    Unloading = 8,
    SwitchAttachMode = 9,
    OnPullCotter = 10,
    ForceShutterState = 11,
    BulletMeshesVisibility = 12,
    UnlockLeftHandIdle = 13,
    EWeaponAction_MAX = 14,
};

enum class EWeaponCustomAdditionalIdle {
    None = 0,
    EWeaponCustomAdditionalIdle_MAX = 1,
};

enum class EWeaponFireResult {
    None = 0,
    Fired = 1,
    NotEnoughAmmo = 2,
    Jammed = 3,
    Interrupted = 4,
    GetCount = 5,
    EWeaponFireResult_MAX = 6,
};

enum class EWeaponGenerationFlags {
    None = 0,
    RequireMagazineAmmo = 1,
    RequireAdditionalAmmo = 2,
    RequireWeapon = 4,
    RequireAllAmmo = 3,
    RequireAll = 7,
    RequireWeaponWithMagazine = 5,
    RequireWeaponWithAdditionalAmmo = 6,
    EWeaponGenerationFlags_MAX = 8,
};

enum class EWeaponIdleState {
    ShutterState = 0,
    JamState = 1,
    UnderbarrelState = 2,
    AimState = 3,
    CustomAdditionalState = 4,
    EWeaponIdleState_MAX = 5,
};

enum class EWeaponIdleType {
    Default = 0,
    GrenLauncher = 1,
    GrenLauncherAction = 2,
    BuckLauncher = 3,
    BuckLauncherAction = 4,
    Grip = 5,
    EWeaponIdleType_MAX = 6,
};

enum class EWeaponState {
    NoWeapon = 0,
    Relax = 1,
    Combat = 2,
    EWeaponState_MAX = 3,
};

enum class EWeaponType {
    None = 0,
    Pistol = 1,
    Rifle = 2,
    Shotgun = 3,
    GetCount = 4,
    EWeaponType_MAX = 5,
};

enum class EWeather {
    Clearly = 0,
    Cloudy = 1,
    Fogy = 2,
    Stormy = 3,
    LightRainy = 4,
    Rainy = 5,
    Thundery = 6,
    Emission = 7,
    CalmBeforeEmission = 8,
    Count = 9,
    EWeather_MAX = 10,
};

enum class EWeatherCurveAtlas {
    Default = 0,
    Sunny = 1,
    Cloud = 2,
    GetCount = 3,
    EWeatherCurveAtlas_MAX = 4,
};

enum class EWeatherParam {
    None = 0,
    RainIntensity = 1,
    GetCount = 2,
    EWeatherParam_MAX = 3,
};

enum class EWeightStatus {
    Normal = 0,
    Heavy = 1,
    Overweight = 2,
    GetCount = 3,
    EWeightStatus_MAX = 4,
};

enum class EWidgetNameEx {
    None = -1,
    MainMenu = 0,
    Inventory = 1,
    Interact = 2,
    InteractDots = 3,
    DebugHUD = 4,
    ItemSelector = 5,
    AttachSelector = 6,
    FastDialog = 7,
    ImportantDialogue = 8,
    Dialog = 9,
    Subtitle = 10,
    PDA = 11,
    FadeView = 12,
    GamePauseMenu = 13,
    SleepView = 14,
    Trade = 15,
    Upgrade = 16,
    DeathScreen = 17,
    HUD = 18,
    AutonomicTutorial = 19,
    ReferenceTutorial = 20,
    ReferenceTutorialLeft = 21,
    SplashTutorial = 22,
    IdleScreen = 23,
    FirstTimeSettings = 24,
    EULA = 25,
    InspectArtifactView = 26,
    NewDLCPopup = 27,
    GuitarPlayView = 28,
    SkipHint = 29,
    Count = 30,
    EWidgetNameEx_MAX = 31,
};

enum class EWoundedAnimState {
    NotWounded = 0,
    Falling = 1,
    RagdollLying = 2,
    RagdollWaking = 3,
    ReceiveHeal = 4,
    WakingUp = 5,
    EWoundedAnimState_MAX = 6,
};

enum class EWoundedState {
    None = 0,
    Falling = 1,
    Fallen = 2,
    Reviving = 3,
    EWoundedState_MAX = 4,
};

enum class EWoundedType {
    NotWounded = 0,
    GenericWounded = 1,
    QuestWounded = 2,
    EWoundedType_MAX = 3,
};

enum class EZeroBoundsFilter {
    None = 0,
    OnlyGroupActors = 1,
    OnlyPrefabActors = 2,
    OnlyStaticMeshActors = 3,
    EZeroBoundsFilter_MAX = 4,
};

enum class EZombieCombatAction {
    MoveToTarget = 0,
    ShootInTarget = 1,
    ValidateLostEnemy = 2,
    Reload = 3,
    PerformAbility = 4,
    Count = 5,
    EZombieCombatAction_MAX = 6,
};

enum class EZombificationType {
    AliveHuman = 0,
    CorpseHuman = 1,
    EZombificationType_MAX = 2,
};

enum class EZombifiedPreconditionType {
    ZombieOnly = 0,
    AliveOnly = 1,
    EZombifiedPreconditionType_MAX = 2,
};

enum class StartSelectFolderType {
    ToTop = 0,
    ToBottom = 1,
    StartSelectFolderType_MAX = 2,
};

enum class StyleManagerActionType {
    ChangeOnlyColour = 0,
    ChangeIcon = 1,
    ChangeIconAndColour = 2,
    StyleManagerActionType_MAX = 3,
};

enum class UIWorningType {
    TextLenght = 0,
    TextRow = 1,
    UIWorningType_MAX = 2,
};

