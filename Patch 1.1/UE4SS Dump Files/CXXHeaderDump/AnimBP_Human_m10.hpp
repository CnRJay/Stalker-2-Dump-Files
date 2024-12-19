#ifndef UE4SS_SDK_AnimBP_Human_m10_HPP
#define UE4SS_SDK_AnimBP_Human_m10_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_101;                                                         // 0x0004 (size: 0x8)
    class UAnimSequenceBase* __AnimSequenceBase_102;                                  // 0x0010 (size: 0x8)
    class UAnimSequenceBase* __AnimSequenceBase_103;                                  // 0x0018 (size: 0x8)
    TArray<float> __ArrayProperty_104;                                                // 0x0020 (size: 0x10)
    class UAnimSequenceBase* __AnimSequenceBase_105;                                  // 0x0030 (size: 0x8)
    TEnumAsByte<ESequenceEvalReinit::Type> __ByteProperty_106;                        // 0x0038 (size: 0x1)
    bool __BoolProperty_107;                                                          // 0x0039 (size: 0x1)
    float __FloatProperty_108;                                                        // 0x003C (size: 0x4)
    class UAnimSequenceBase* __AnimSequenceBase_109;                                  // 0x0040 (size: 0x8)
    EAnimSyncMethod __EnumProperty_110;                                               // 0x0048 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_111;                             // 0x0049 (size: 0x1)
    FName __NameProperty_112;                                                         // 0x004C (size: 0x8)
    class UBlendProfile* __BlendProfile_113;                                          // 0x0058 (size: 0x8)
    class UCurveFloat* __CurveFloat_114;                                              // 0x0060 (size: 0x8)
    bool __BoolProperty_115;                                                          // 0x0068 (size: 0x1)
    EAlphaBlendOption __EnumProperty_116;                                             // 0x0069 (size: 0x1)
    EBlendListTransitionType __EnumProperty_117;                                      // 0x006A (size: 0x1)
    TArray<float> __ArrayProperty_118;                                                // 0x0070 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_119;                                        // 0x0080 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00A0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0120 (size: 0x18)

}; // Size: 0x138

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    bool __BoolProperty_0;                                                            // 0x0002 (size: 0x1)
    bool __BoolProperty_1;                                                            // 0x0003 (size: 0x1)

}; // Size: 0x4

class UAnimBP_Human_m10_C : public UAnimInstanceHuman
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x11F0 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x11F8 (size: 0x4)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x1200 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x1208 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x1210 (size: 0x20)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2;                        // 0x1230 (size: 0x48)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3;                    // 0x1278 (size: 0x40)
    FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive;            // 0x12B8 (size: 0xD0)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;                    // 0x1388 (size: 0x40)
    FAnimNode_CopyBone AnimGraphNode_CopyBone;                                        // 0x13C8 (size: 0xF0)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x14B8 (size: 0x20)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x14D8 (size: 0x108)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;                            // 0x15E0 (size: 0x28)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x1608 (size: 0xC8)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x16D0 (size: 0x28)
    FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive;                              // 0x16F8 (size: 0xC8)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x17C0 (size: 0x48)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;                    // 0x1808 (size: 0x40)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x1848 (size: 0x28)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x1870 (size: 0xE0)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x1950 (size: 0x40)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x1990 (size: 0x48)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x19D8 (size: 0x20)

    void AnimGraph(FPoseLink Locomotion, FPoseLink& AnimGraph);
    void ExecuteUbergraph_AnimBP_Human_m10(int32 EntryPoint);
}; // Size: 0x19F8

#endif
