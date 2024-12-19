#ifndef UE4SS_SDK_AnimBP_bucket_tp_HPP
#define UE4SS_SDK_AnimBP_bucket_tp_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_106;                                                         // 0x0004 (size: 0x8)
    class UAnimSequenceBase* __AnimSequenceBase_107;                                  // 0x0010 (size: 0x8)
    TArray<float> __ArrayProperty_108;                                                // 0x0018 (size: 0x10)
    class UAnimSequenceBase* __AnimSequenceBase_109;                                  // 0x0028 (size: 0x8)
    class UAnimSequenceBase* __AnimSequenceBase_110;                                  // 0x0030 (size: 0x8)
    class UAnimSequenceBase* __AnimSequenceBase_111;                                  // 0x0038 (size: 0x8)
    TArray<float> __ArrayProperty_112;                                                // 0x0040 (size: 0x10)
    TArray<int32> __ArrayProperty_113;                                                // 0x0050 (size: 0x10)
    class UBlendProfile* __BlendProfile_114;                                          // 0x0060 (size: 0x8)
    class UCurveFloat* __CurveFloat_115;                                              // 0x0068 (size: 0x8)
    EAlphaBlendOption __EnumProperty_116;                                             // 0x0070 (size: 0x1)
    EBlendListTransitionType __EnumProperty_117;                                      // 0x0071 (size: 0x1)
    TArray<float> __ArrayProperty_118;                                                // 0x0078 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_119;                                        // 0x0088 (size: 0x20)
    TEnumAsByte<ESequenceEvalReinit::Type> __ByteProperty_120;                        // 0x00A8 (size: 0x1)
    bool __BoolProperty_121;                                                          // 0x00A9 (size: 0x1)
    float __FloatProperty_122;                                                        // 0x00AC (size: 0x4)
    class UAnimSequenceBase* __AnimSequenceBase_123;                                  // 0x00B0 (size: 0x8)
    bool __BoolProperty_124;                                                          // 0x00B8 (size: 0x1)
    EAnimSyncMethod __EnumProperty_125;                                               // 0x00B9 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_126;                             // 0x00BA (size: 0x1)
    FName __NameProperty_127;                                                         // 0x00BC (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00C8 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0148 (size: 0x18)

}; // Size: 0x160

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    bool __BoolProperty_0;                                                            // 0x0002 (size: 0x1)
    uint8 __ByteProperty_1;                                                           // 0x0003 (size: 0x1)
    bool __BoolProperty_2;                                                            // 0x0004 (size: 0x1)

}; // Size: 0x5

class UAnimBP_bucket_tp_C : public UAnimInstanceHumanFirearm
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0690 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0698 (size: 0x5)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x06A0 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x06A8 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x06B0 (size: 0x20)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_5;                    // 0x06D0 (size: 0x40)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0710 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x0758 (size: 0x48)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_4;                    // 0x07A0 (size: 0x40)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x07E0 (size: 0x48)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3;                    // 0x0828 (size: 0x40)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;                    // 0x0868 (size: 0x40)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;                    // 0x08A8 (size: 0x40)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;                          // 0x08E8 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0930 (size: 0x48)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x0978 (size: 0x40)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_AnimBP_bucket_tp(int32 EntryPoint);
}; // Size: 0x9B8

#endif
