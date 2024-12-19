#ifndef UE4SS_SDK_BP_CarouselAnomaly_HPP
#define UE4SS_SDK_BP_CarouselAnomaly_HPP

class ABP_CarouselAnomaly_C : public ACarouselAnomaly
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0490 (size: 0x8)

    void OnActivationStateStarted();
    void OnIdleStateStarted();
    void ExecuteUbergraph_BP_CarouselAnomaly(int32 EntryPoint);
}; // Size: 0x498

#endif
