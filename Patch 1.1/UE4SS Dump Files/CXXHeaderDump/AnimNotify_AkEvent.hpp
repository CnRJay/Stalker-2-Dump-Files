#ifndef UE4SS_SDK_AnimNotify_AkEvent_HPP
#define UE4SS_SDK_AnimNotify_AkEvent_HPP

class UAnimNotify_AkEvent_C : public UAnimNotify_RetargetedAkEvent
{
    FString Attach Name;                                                              // 0x0038 (size: 0x10)
    class UAkAudioEvent* Event;                                                       // 0x0048 (size: 0x8)
    bool Follow;                                                                      // 0x0050 (size: 0x1)
    FString EventName;                                                                // 0x0058 (size: 0x10)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference);
}; // Size: 0x68

#endif
