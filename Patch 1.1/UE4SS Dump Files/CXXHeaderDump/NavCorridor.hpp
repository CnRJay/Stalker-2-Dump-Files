#ifndef UE4SS_SDK_NavCorridor_HPP
#define UE4SS_SDK_NavCorridor_HPP

struct FNavCorridorParams
{
    float Width;                                                                      // 0x0000 (size: 0x4)
    float ObstacleTaperAngle;                                                         // 0x0004 (size: 0x4)
    float SmallSectorThreshold;                                                       // 0x0008 (size: 0x4)
    float LargeSectorThreshold;                                                       // 0x000C (size: 0x4)
    float SimplifyEdgeThreshold;                                                      // 0x0010 (size: 0x4)
    bool bSimplifyFlipPortals;                                                        // 0x0014 (size: 0x1)
    bool bSimplifyConvexPortals;                                                      // 0x0015 (size: 0x1)
    bool bSimplifyConcavePortals;                                                     // 0x0016 (size: 0x1)

}; // Size: 0x18

class ANavCorridorTestingActor : public AActor
{
    class UNavCorridorTestingComponent* DebugComp;                                    // 0x0298 (size: 0x8)

}; // Size: 0x2A0

class UNavCorridorTestingComponent : public UDebugDrawComponent
{
    FNavAgentProperties NavAgentProps;                                                // 0x05B0 (size: 0x38)
    TSubclassOf<class UNavigationQueryFilter> FilterClass;                            // 0x05E8 (size: 0x8)
    bool bFindCorridorToGoal;                                                         // 0x05F0 (size: 0x1)
    bool bFollowPathOnGoalCorridor;                                                   // 0x05F1 (size: 0x1)
    float FollowLookAheadDistance;                                                    // 0x05F4 (size: 0x4)
    class AActor* GoalActor;                                                          // 0x05F8 (size: 0x8)
    class ANavigationData* NavData;                                                   // 0x0600 (size: 0x8)
    FNavCorridorParams CorridorParams;                                                // 0x0608 (size: 0x18)
    bool bUpdateParametersFromWidth;                                                  // 0x0620 (size: 0x1)
    float PathOffset;                                                                 // 0x0624 (size: 0x4)
    float PathfindingTimeUs;                                                          // 0x0628 (size: 0x4)
    float CorridorTimeUs;                                                             // 0x062C (size: 0x4)

}; // Size: 0x6D0

#endif
