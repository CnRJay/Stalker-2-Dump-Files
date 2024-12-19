#ifndef UE4SS_SDK_BP_ExpulsionAnomaly_HPP
#define UE4SS_SDK_BP_ExpulsionAnomaly_HPP

class ABP_ExpulsionAnomaly_C : public AExpulsionAnomaly
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E8 (size: 0x8)
    class UNiagaraComponent* Niagara;                                                 // 0x03F0 (size: 0x8)
    class URotatingMovementComponent* RotatingMovement;                               // 0x03F8 (size: 0x8)
    float Timeline_0_FarIdle_1DE6E5CC4A6ABF51FBA511ABB5B74CDE;                        // 0x0400 (size: 0x4)
    float Timeline_0_Far_1DE6E5CC4A6ABF51FBA511ABB5B74CDE;                            // 0x0404 (size: 0x4)
    float Timeline_0_BaseRefractionIdle_1DE6E5CC4A6ABF51FBA511ABB5B74CDE;             // 0x0408 (size: 0x4)
    float Timeline_0_SpeedAlembic_1DE6E5CC4A6ABF51FBA511ABB5B74CDE;                   // 0x040C (size: 0x4)
    float Timeline_0_NewTrack_1_1DE6E5CC4A6ABF51FBA511ABB5B74CDE;                     // 0x0410 (size: 0x4)
    float Timeline_0_NewTrack_0_1DE6E5CC4A6ABF51FBA511ABB5B74CDE;                     // 0x0414 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_1DE6E5CC4A6ABF51FBA511ABB5B74CDE; // 0x0418 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0420 (size: 0x8)
    float Timeline_FarIdle_1EA71BC34CCEDEE583A0D0AC49B14668;                          // 0x0428 (size: 0x4)
    float Timeline_Far_1EA71BC34CCEDEE583A0D0AC49B14668;                              // 0x042C (size: 0x4)
    float Timeline_BaseRefractionIdle_1EA71BC34CCEDEE583A0D0AC49B14668;               // 0x0430 (size: 0x4)
    float Timeline_SpeedAlembic_1EA71BC34CCEDEE583A0D0AC49B14668;                     // 0x0434 (size: 0x4)
    float Timeline_NewTrack_1_1EA71BC34CCEDEE583A0D0AC49B14668;                       // 0x0438 (size: 0x4)
    float Timeline_NewTrack_0_1EA71BC34CCEDEE583A0D0AC49B14668;                       // 0x043C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline__Direction_1EA71BC34CCEDEE583A0D0AC49B14668; // 0x0440 (size: 0x1)
    class UTimelineComponent* Timeline;                                               // 0x0448 (size: 0x8)

    void UserConstructionScript();
    void Timeline__FinishedFunc();
    void Timeline__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void OnBoltCollided(const FVector& LocalPoint);
    void OnActivationStateStarted();
    void OnActiveStateStarted();
    void OnIdleStateStarted();
    void ExecuteUbergraph_BP_ExpulsionAnomaly(int32 EntryPoint);
}; // Size: 0x450

#endif
