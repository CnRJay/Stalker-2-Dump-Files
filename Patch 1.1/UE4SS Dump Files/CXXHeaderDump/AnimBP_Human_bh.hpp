#ifndef UE4SS_SDK_AnimBP_Human_bh_HPP
#define UE4SS_SDK_AnimBP_Human_bh_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_39;                                                          // 0x0004 (size: 0x8)
    TArray<float> __ArrayProperty_40;                                                 // 0x0010 (size: 0x10)
    class UBlendProfile* __BlendProfile_41;                                           // 0x0020 (size: 0x8)
    class UCurveFloat* __CurveFloat_42;                                               // 0x0028 (size: 0x8)
    EAlphaBlendOption __EnumProperty_43;                                              // 0x0030 (size: 0x1)
    EBlendListTransitionType __EnumProperty_44;                                       // 0x0031 (size: 0x1)
    TArray<float> __ArrayProperty_45;                                                 // 0x0038 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_46;                                         // 0x0048 (size: 0x20)
    bool __BoolProperty_47;                                                           // 0x0068 (size: 0x1)
    float __FloatProperty_48;                                                         // 0x006C (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_49;                                // 0x0070 (size: 0x2C)
    float __FloatProperty_50;                                                         // 0x009C (size: 0x4)
    bool __BoolProperty_51;                                                           // 0x00A0 (size: 0x1)
    EAnimSyncMethod __EnumProperty_52;                                                // 0x00A1 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_53;                              // 0x00A2 (size: 0x1)
    FName __NameProperty_54;                                                          // 0x00A4 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x00B0 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0130 (size: 0x18)

}; // Size: 0x148

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    bool __BoolProperty;                                                              // 0x0001 (size: 0x1)
    bool __BoolProperty_0;                                                            // 0x0002 (size: 0x1)

}; // Size: 0x3

class UAnimBP_Human_bh_C : public UAnimInstanceHuman
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x11F0 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x11F8 (size: 0x3)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x1200 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x1208 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x1210 (size: 0x20)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x1230 (size: 0xC8)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_1;                        // 0x12F8 (size: 0x48)
    FAnimNode_RandomPlayer AnimGraphNode_RandomPlayer;                                // 0x1340 (size: 0x78)
    FAnimNode_CopyBone AnimGraphNode_CopyBone;                                        // 0x13B8 (size: 0xF0)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x14A8 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x14C8 (size: 0x20)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x14E8 (size: 0x128)
    FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool;                          // 0x1610 (size: 0x48)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x1658 (size: 0x48)

    void AnimGraph(FPoseLink Locomotion, FPoseLink& AnimGraph);
    void ExecuteUbergraph_AnimBP_Human_bh(int32 EntryPoint);
}; // Size: 0x16A0

#endif
