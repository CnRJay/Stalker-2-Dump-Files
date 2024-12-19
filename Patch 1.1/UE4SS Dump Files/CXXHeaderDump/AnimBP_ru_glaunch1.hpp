#ifndef UE4SS_SDK_AnimBP_ru_glaunch1_HPP
#define UE4SS_SDK_AnimBP_ru_glaunch1_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_28;                                                          // 0x0004 (size: 0x8)
    class UAnimSequenceBase* __AnimSequenceBase_29;                                   // 0x0010 (size: 0x8)
    class UBlendProfile* __BlendProfile_30;                                           // 0x0018 (size: 0x8)
    class UCurveFloat* __CurveFloat_31;                                               // 0x0020 (size: 0x8)
    EAlphaBlendOption __EnumProperty_32;                                              // 0x0028 (size: 0x1)
    EBlendListTransitionType __EnumProperty_33;                                       // 0x0029 (size: 0x1)
    TArray<float> __ArrayProperty_34;                                                 // 0x0030 (size: 0x10)
    TArray<int32> __ArrayProperty_35;                                                 // 0x0040 (size: 0x10)
    FAnimNodeFunctionRef __StructProperty_36;                                         // 0x0050 (size: 0x20)
    TEnumAsByte<ESequenceEvalReinit::Type> __ByteProperty_37;                         // 0x0070 (size: 0x1)
    bool __BoolProperty_38;                                                           // 0x0071 (size: 0x1)
    float __FloatProperty_39;                                                         // 0x0074 (size: 0x4)
    class UAnimSequenceBase* __AnimSequenceBase_40;                                   // 0x0078 (size: 0x8)
    bool __BoolProperty_41;                                                           // 0x0080 (size: 0x1)
    EAnimSyncMethod __EnumProperty_42;                                                // 0x0081 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_43;                              // 0x0082 (size: 0x1)
    FName __NameProperty_44;                                                          // 0x0084 (size: 0x8)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0090 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x0110 (size: 0x18)

}; // Size: 0x128

struct FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{
    uint8 __ByteProperty;                                                             // 0x0001 (size: 0x1)

}; // Size: 0x2

class UAnimBP_ru_glaunch1_C : public UAnimInstancePlayerWeaponAttach
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0440 (size: 0x8)
    FAnimBlueprintGeneratedMutableData __AnimBlueprintMutables;                       // 0x0448 (size: 0x2)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x0450 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x0458 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x0460 (size: 0x20)
    FAnimNode_Slot AnimGraphNode_Slot;                                                // 0x0480 (size: 0x48)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_1;                    // 0x04C8 (size: 0x40)
    FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum;                          // 0x0508 (size: 0x48)
    FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator;                      // 0x0550 (size: 0x40)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_AnimBP_ru_glaunch1(int32 EntryPoint);
}; // Size: 0x590

#endif
