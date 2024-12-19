#ifndef UE4SS_SDK_AnimBP_Human_AK74_HPP
#define UE4SS_SDK_AnimBP_Human_AK74_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_110;                                                         // 0x0004 (size: 0x8)
    class UAnimSequenceBase* __AnimSequenceBase_111;                                  // 0x0010 (size: 0x8)
    class UAnimSequenceBase* __AnimSequenceBase_112;                                  // 0x0018 (size: 0x8)
    class UBlendProfile* __BlendProfile_113;                                          // 0x0020 (size: 0x8)
    class UCurveFloat* __CurveFloat_114;                                              // 0x0028 (size: 0x8)
    EAlphaBlendOption __EnumProperty_115;                                             // 0x0030 (size: 0x1)
    EBlendListTransitionType __EnumProperty_116;                                      // 0x0031 (size: 0x1)
    TArray<float> __ArrayProperty_117;                                                // 0x0038 (size: 0x10)
    class UAnimSequenceBase* __AnimSequenceBase_118;                                  // 0x0048 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_119;                                        // 0x0050 (size: 0x20)
    TEnumAsByte<ESequenceEvalReinit::Type> __ByteProperty_120;                        // 0x0070 (size: 0x1)
    bool __BoolProperty_121;                                                          // 0x0071 (size: 0x1)
    float __FloatProperty_122;                                                        // 0x0074 (size: 0x4)
    class UAnimSequenceBase* __AnimSequenceBase_123;                                  // 0x0078 (size: 0x8)
    bool __BoolProperty_124;                                                          // 0x0080 (size: 0x1)
    EAnimSyncMethod __EnumProperty_125;                                               // 0x0081 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_126;                             // 0x0082 (size: 0x1)
    FName __NameProperty_127;                                                         // 0x0084 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0090 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0110 (size: 0x18)

}; // Size: 0x128

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    bool __BoolProperty_0;                                                            // 0x0002 (size: 0x1)
    bool __BoolProperty_1;                                                            // 0x0003 (size: 0x1)
    bool __BoolProperty_2;                                                            // 0x0004 (size: 0x1)

}; // Size: 0x5

class UAnimBP_Human_AK74_C : public UAnimInstanceHuman
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x11F0 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x11F8 (size: 0x5)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x1200 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x1208 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x1210 (size: 0x20)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3;                        // 0x1230 (size: 0x48)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_4;                    // 0x1278 (size: 0x40)
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_1;          // 0x12B8 (size: 0xD0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x1388 (size: 0x48)
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;            // 0x13D0 (size: 0xD0)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x14A0 (size: 0x48)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3;                    // 0x14E8 (size: 0x40)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;                    // 0x1528 (size: 0x40)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x1568 (size: 0xC8)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x1630 (size: 0x108)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x1738 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x1760 (size: 0x28)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x1788 (size: 0x48)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;                    // 0x17D0 (size: 0x40)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x1810 (size: 0x40)

    void AnimGraph(FPoseLink Locomotion, FPoseLink& AnimGraph);
    void ExecuteUbergraph_AnimBP_Human_AK74(int32 EntryPoint);
}; // Size: 0x1850

#endif
