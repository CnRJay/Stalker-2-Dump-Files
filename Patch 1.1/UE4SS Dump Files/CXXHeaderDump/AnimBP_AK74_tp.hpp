#ifndef UE4SS_SDK_AnimBP_AK74_tp_HPP
#define UE4SS_SDK_AnimBP_AK74_tp_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    class UAnimSequenceBase* __AnimSequenceBase_50;                                   // 0x0008 (size: 0x8)
    class UAnimSequenceBase* __AnimSequenceBase_51;                                   // 0x0010 (size: 0x8)
    class UBlendProfile* __BlendProfile_52;                                           // 0x0018 (size: 0x8)
    class UCurveFloat* __CurveFloat_53;                                               // 0x0020 (size: 0x8)
    EAlphaBlendOption __EnumProperty_54;                                              // 0x0028 (size: 0x1)
    EBlendListTransitionType __EnumProperty_55;                                       // 0x0029 (size: 0x1)
    TArray<float> __ArrayProperty_56;                                                 // 0x0030 (size: 0x10)
    TEnumAsByte<ESequenceEvalReinit::Type> __ByteProperty_57;                         // 0x0040 (size: 0x1)
    bool __BoolProperty_58;                                                           // 0x0041 (size: 0x1)
    float __FloatProperty_59;                                                         // 0x0044 (size: 0x4)
    class UAnimSequenceBase* __AnimSequenceBase_60;                                   // 0x0048 (size: 0x8)
    bool __BoolProperty_61;                                                           // 0x0050 (size: 0x1)
    EAnimSyncMethod __EnumProperty_62;                                                // 0x0051 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_63;                              // 0x0052 (size: 0x1)
    FAnimNodeFunctionRef __StructProperty_64;                                         // 0x0058 (size: 0x20)
    FName __NameProperty_65;                                                          // 0x0078 (size: 0x8)
    FName __NameProperty_66;                                                          // 0x0080 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0088 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0108 (size: 0x18)

}; // Size: 0x120

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    bool __BoolProperty_0;                                                            // 0x0002 (size: 0x1)

}; // Size: 0x3

class UAnimBP_AK74_tp_C : public UAnimInstanceHumanFirearm
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0690 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0698 (size: 0x3)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x06A0 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x06A8 (size: 0x8)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x06B0 (size: 0x48)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;                    // 0x06F8 (size: 0x40)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x0738 (size: 0x48)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;                    // 0x0780 (size: 0x40)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x07C0 (size: 0x48)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x0808 (size: 0x40)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0848 (size: 0x20)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_AnimBP_AK74_tp(int32 EntryPoint);
}; // Size: 0x868

#endif
