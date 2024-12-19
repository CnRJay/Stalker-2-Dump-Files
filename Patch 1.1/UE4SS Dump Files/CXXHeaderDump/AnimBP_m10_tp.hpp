#ifndef UE4SS_SDK_AnimBP_m10_tp_HPP
#define UE4SS_SDK_AnimBP_m10_tp_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_53;                                                          // 0x0004 (size: 0x8)
    class UAnimSequenceBase* __AnimSequenceBase_54;                                   // 0x0010 (size: 0x8)
    class UAnimSequenceBase* __AnimSequenceBase_55;                                   // 0x0018 (size: 0x8)
    class UBlendProfile* __BlendProfile_56;                                           // 0x0020 (size: 0x8)
    class UCurveFloat* __CurveFloat_57;                                               // 0x0028 (size: 0x8)
    EAlphaBlendOption __EnumProperty_58;                                              // 0x0030 (size: 0x1)
    EBlendListTransitionType __EnumProperty_59;                                       // 0x0031 (size: 0x1)
    TArray<float> __ArrayProperty_60;                                                 // 0x0038 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_61;                                         // 0x0048 (size: 0x20)
    TEnumAsByte<ESequenceEvalReinit::Type> __ByteProperty_62;                         // 0x0068 (size: 0x1)
    bool __BoolProperty_63;                                                           // 0x0069 (size: 0x1)
    float __FloatProperty_64;                                                         // 0x006C (size: 0x4)
    class UAnimSequenceBase* __AnimSequenceBase_65;                                   // 0x0070 (size: 0x8)
    bool __BoolProperty_66;                                                           // 0x0078 (size: 0x1)
    EAnimSyncMethod __EnumProperty_67;                                                // 0x0079 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_68;                              // 0x007A (size: 0x1)
    FName __NameProperty_69;                                                          // 0x007C (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0088 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0108 (size: 0x18)

}; // Size: 0x120

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    bool __BoolProperty_0;                                                            // 0x0002 (size: 0x1)

}; // Size: 0x3

class UAnimBP_m10_tp_C : public UAnimInstanceHumanFirearm
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0690 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0698 (size: 0x3)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x06A0 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x06A8 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x06B0 (size: 0x20)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x06D0 (size: 0x48)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;                    // 0x0718 (size: 0x40)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x0758 (size: 0x48)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;                    // 0x07A0 (size: 0x40)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x07E0 (size: 0x48)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0828 (size: 0xE0)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x0908 (size: 0x40)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_AnimBP_m10_tp(int32 EntryPoint);
}; // Size: 0x948

#endif
