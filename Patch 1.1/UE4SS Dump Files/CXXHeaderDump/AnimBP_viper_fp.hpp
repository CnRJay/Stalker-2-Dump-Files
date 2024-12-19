#ifndef UE4SS_SDK_AnimBP_viper_fp_HPP
#define UE4SS_SDK_AnimBP_viper_fp_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_178;                                                         // 0x0004 (size: 0x8)
    class UAnimSequenceBase* __AnimSequenceBase_179;                                  // 0x0010 (size: 0x8)
    class UAnimSequenceBase* __AnimSequenceBase_180;                                  // 0x0018 (size: 0x8)
    class UAnimSequenceBase* __AnimSequenceBase_181;                                  // 0x0020 (size: 0x8)
    class UAnimSequenceBase* __AnimSequenceBase_182;                                  // 0x0028 (size: 0x8)
    class UAnimSequenceBase* __AnimSequenceBase_183;                                  // 0x0030 (size: 0x8)
    TArray<int32> __ArrayProperty_184;                                                // 0x0038 (size: 0x10)
    TArray<float> __ArrayProperty_185;                                                // 0x0048 (size: 0x10)
    TArray<float> __ArrayProperty_186;                                                // 0x0058 (size: 0x10)
    class UBlendProfile* __BlendProfile_187;                                          // 0x0068 (size: 0x8)
    class UCurveFloat* __CurveFloat_188;                                              // 0x0070 (size: 0x8)
    EAlphaBlendOption __EnumProperty_189;                                             // 0x0078 (size: 0x1)
    EBlendListTransitionType __EnumProperty_190;                                      // 0x0079 (size: 0x1)
    TArray<float> __ArrayProperty_191;                                                // 0x0080 (size: 0x10)
    TArray<int32> __ArrayProperty_192;                                                // 0x0090 (size: 0x10)
    class UAnimSequenceBase* __AnimSequenceBase_193;                                  // 0x00A0 (size: 0x8)
    class UAnimSequenceBase* __AnimSequenceBase_194;                                  // 0x00A8 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_195;                                        // 0x00B0 (size: 0x20)
    TEnumAsByte<ESequenceEvalReinit::Type> __ByteProperty_196;                        // 0x00D0 (size: 0x1)
    bool __BoolProperty_197;                                                          // 0x00D1 (size: 0x1)
    float __FloatProperty_198;                                                        // 0x00D4 (size: 0x4)
    class UAnimSequenceBase* __AnimSequenceBase_199;                                  // 0x00D8 (size: 0x8)
    bool __BoolProperty_200;                                                          // 0x00E0 (size: 0x1)
    EAnimSyncMethod __EnumProperty_201;                                               // 0x00E1 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_202;                             // 0x00E2 (size: 0x1)
    FName __NameProperty_203;                                                         // 0x00E4 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00F0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0170 (size: 0x18)

}; // Size: 0x188

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    float __FloatProperty;                                                            // 0x0004 (size: 0x4)
    float __FloatProperty_0;                                                          // 0x0008 (size: 0x4)
    uint8 __ByteProperty_1;                                                           // 0x000C (size: 0x1)
    int32 __IntProperty_2;                                                            // 0x0010 (size: 0x4)
    bool __BoolProperty_3;                                                            // 0x0014 (size: 0x1)
    uint8 __ByteProperty_4;                                                           // 0x0015 (size: 0x1)

}; // Size: 0x16

class UAnimBP_viper_fp_C : public UAnimInstancePlayerFirearm
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0470 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0478 (size: 0x18)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0490 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0498 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x04A0 (size: 0x20)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_9;                    // 0x04C0 (size: 0x40)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_8;                    // 0x0500 (size: 0x40)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_7;                    // 0x0540 (size: 0x40)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_6;                    // 0x0580 (size: 0x40)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_5;                    // 0x05C0 (size: 0x40)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_4;                    // 0x0600 (size: 0x40)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3;                    // 0x0640 (size: 0x40)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_1;                        // 0x0680 (size: 0x48)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x06C8 (size: 0x108)
    FAnimNode_Slot AnimGraphNode_Slot_1;                                              // 0x07D0 (size: 0x48)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;                            // 0x0818 (size: 0x28)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_1;                      // 0x0840 (size: 0xE0)
    FAnimNode_BlendListByInt AnimGraphNode_BlendListByInt;                            // 0x0920 (size: 0x48)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x0968 (size: 0x48)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x09B0 (size: 0x28)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;                          // 0x09D8 (size: 0x48)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x0A20 (size: 0xE0)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0B00 (size: 0x48)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x0B48 (size: 0x28)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2;                    // 0x0B70 (size: 0x40)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;                    // 0x0BB0 (size: 0x40)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x0BF0 (size: 0x40)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_AnimBP_viper_fp(int32 EntryPoint);
}; // Size: 0xC30

#endif
