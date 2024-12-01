#ifndef UE4SS_SDK_WwiseNiagara_HPP
#define UE4SS_SDK_WwiseNiagara_HPP

class UNiagaraDataInterfaceWwiseEvent : public UNiagaraDataInterface
{
    class UAkAudioEvent* EventToPost;                                                 // 0x0038 (size: 0x8)
    TArray<class UAkRtpc*> GameParameters;                                            // 0x0040 (size: 0x10)
    bool bLimitPostsPerTick;                                                          // 0x0050 (size: 0x1)
    int32 MaxPostsPerTick;                                                            // 0x0054 (size: 0x4)
    bool bStopWhenComponentIsDestroyed;                                               // 0x0058 (size: 0x1)
    float OcclusionRefreshInterval;                                                   // 0x005C (size: 0x4)

}; // Size: 0x60

#endif
