#ifndef UE4SS_SDK_AnimBP_player_dummy_HPP
#define UE4SS_SDK_AnimBP_player_dummy_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    FName __NameProperty_4;                                                           // 0x0004 (size: 0x8)
    FName __NameProperty_5;                                                           // 0x000C (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_6;                                          // 0x0018 (size: 0x20)
    TEnumAsByte<ERefPoseType> __ByteProperty_7;                                       // 0x0038 (size: 0x1)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0040 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00C0 (size: 0x18)

}; // Size: 0xD8

class UAnimBP_player_dummy_C : public UAnimInstancePlayer
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1480 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x1488 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x1490 (size: 0x8)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x1498 (size: 0x20)
    FAnimNode_RefPose AnimGraphNode_IdentityPose;                                     // 0x14B8 (size: 0x10)

    void AnimGraph(FPoseLink& AnimGraph);
    void ExecuteUbergraph_AnimBP_player_dummy(int32 EntryPoint);
}; // Size: 0x14C8

#endif
