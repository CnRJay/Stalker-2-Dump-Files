#ifndef UE4SS_SDK_AnimBP_int_chest_HPP
#define UE4SS_SDK_AnimBP_int_chest_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_81;                                                          // 0x0004 (size: 0x8)
    FName __NameProperty_82;                                                          // 0x000C (size: 0x8)
    int32 __IntProperty_83;                                                           // 0x0014 (size: 0x4)
    FName __NameProperty_84;                                                          // 0x0018 (size: 0x8)
    int32 __IntProperty_85;                                                           // 0x0020 (size: 0x4)
    FName __NameProperty_86;                                                          // 0x0024 (size: 0x8)
    int32 __IntProperty_87;                                                           // 0x002C (size: 0x4)
    bool __BoolProperty_88;                                                           // 0x0030 (size: 0x1)
    float __FloatProperty_89;                                                         // 0x0034 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_90;                                // 0x0038 (size: 0x2C)
    float __FloatProperty_91;                                                         // 0x0064 (size: 0x4)
    bool __BoolProperty_92;                                                           // 0x0068 (size: 0x1)
    EAnimSyncMethod __EnumProperty_93;                                                // 0x0069 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_94;                              // 0x006A (size: 0x1)
    FName __NameProperty_95;                                                          // 0x006C (size: 0x8)
    FName __NameProperty_96;                                                          // 0x0074 (size: 0x8)
    int32 __IntProperty_97;                                                           // 0x007C (size: 0x4)
    FAnimNodeFunctionRef __StructProperty_98;                                         // 0x0080 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00A0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0120 (size: 0x18)

}; // Size: 0x138

class UAnimBP_int_chest_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0378 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0380 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0388 (size: 0x20)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;                      // 0x03A8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;                      // 0x03D0 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;                      // 0x03F8 (size: 0x28)
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;                        // 0x0420 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;                          // 0x0448 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_3;                                // 0x0490 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;                          // 0x04B0 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_2;                                // 0x04F8 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;                          // 0x0518 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult_1;                                // 0x0560 (size: 0x20)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x0580 (size: 0x48)
    FAnimNode_StateResult AnimGraphNode_StateResult;                                  // 0x05C8 (size: 0x20)
    FAnimNode_StateMachine AnimGraphNode_StateMachine;                                // 0x05E8 (size: 0xC8)
    bool bOpen;                                                                       // 0x06B0 (size: 0x1)

    void AnimGraph(FPoseLink& AnimGraph);
    void Open();
    void Close();
    void ExecuteUbergraph_AnimBP_int_chest(int32 EntryPoint);
}; // Size: 0x6B1

#endif
