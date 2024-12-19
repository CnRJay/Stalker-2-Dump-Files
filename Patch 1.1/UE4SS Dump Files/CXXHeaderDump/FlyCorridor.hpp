#ifndef UE4SS_SDK_FlyCorridor_HPP
#define UE4SS_SDK_FlyCorridor_HPP

struct FFlyCorridorTracePoint
{
    FVector Location;                                                                 // 0x0000 (size: 0x18)
    float Time;                                                                       // 0x0018 (size: 0x4)

}; // Size: 0x20

class UAnimMetaData_FlyCorridor : public UAnimMetaData
{
    TArray<FFlyCorridorTracePoint> FlyCorridorAnimPoints;                             // 0x0028 (size: 0x10)
    FFlyCorridorTracePoint AnimHitPoint;                                              // 0x0038 (size: 0x20)
    FFloatCurve DistanceCurve;                                                        // 0x0058 (size: 0x98)
    bool bDoScaleZ;                                                                   // 0x00F0 (size: 0x1)
    FVector EndLocation;                                                              // 0x00F8 (size: 0x18)

}; // Size: 0x110

class UAnimNotifyState_Fly : public UAnimNotifyState_MotionWarping
{
    FName TrackBoneName;                                                              // 0x0038 (size: 0x8)
    FName RootBoneName;                                                               // 0x0040 (size: 0x8)

}; // Size: 0x48

class UAnimNotify_FlyHitPoint : public UAnimNotify
{
}; // Size: 0x38

class UFlyCorridorDebugComponent : public UDebugDrawComponent
{
    float CorridorFindingTime;                                                        // 0x05CC (size: 0x4)

    void ShowPassedPath();
    void ShowCorridor(const class UAnimMontage* AnimMontage, const FVector& StartLocation, const FVector& EndLocation, float DrawTime, double ZScale);
    void HidePassedPath();
    void HideCorridor();
}; // Size: 0x600

#endif
