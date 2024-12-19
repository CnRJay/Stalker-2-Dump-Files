#ifndef UE4SS_SDK_AnimBP_Player_DeadBody_HPP
#define UE4SS_SDK_AnimBP_Player_DeadBody_HPP

struct FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{
    TEnumAsByte<ERefPoseType> __ByteProperty_81;                                      // 0x0001 (size: 0x1)
    FName __NameProperty_82;                                                          // 0x0004 (size: 0x8)
    bool __BoolProperty_83;                                                           // 0x000C (size: 0x1)
    float __FloatProperty_84;                                                         // 0x0010 (size: 0x4)
    FInputScaleBiasClampConstants __StructProperty_85;                                // 0x0014 (size: 0x2C)
    float __FloatProperty_86;                                                         // 0x0040 (size: 0x4)
    bool __BoolProperty_87;                                                           // 0x0044 (size: 0x1)
    EAnimSyncMethod __EnumProperty_88;                                                // 0x0045 (size: 0x1)
    TEnumAsByte<EAnimGroupRole::Type> __ByteProperty_89;                              // 0x0046 (size: 0x1)
    FName __NameProperty_90;                                                          // 0x0048 (size: 0x8)
    FAnimNodeFunctionRef __StructProperty_91;                                         // 0x0050 (size: 0x20)
    FAnimSubsystem_PropertyAccess AnimBlueprintExtension_PropertyAccess;              // 0x0070 (size: 0x80)
    FAnimSubsystem_Base AnimBlueprintExtension_Base;                                  // 0x00F0 (size: 0x18)

}; // Size: 0x108

class UAnimBP_Player_DeadBody_C : public UAnimInstancePlayer
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x1480 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_PropertyAccess;                     // 0x1488 (size: 0x8)
    FAnimSubsystemInstance AnimBlueprintExtension_Base;                               // 0x1490 (size: 0x8)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2;                        // 0x1498 (size: 0xC8)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_1;                        // 0x1560 (size: 0xC8)
    FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose;                          // 0x1628 (size: 0xC8)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3;                          // 0x16F0 (size: 0x108)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2;                          // 0x17F8 (size: 0x108)
    FAnimNode_LinkedAnimGraph AnimGraphNode_LinkedAnimGraph;                          // 0x1900 (size: 0xB8)
    FAnimNode_RefPose AnimGraphNode_IdentityPose_1;                                   // 0x19B8 (size: 0x10)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_1;                          // 0x19C8 (size: 0x108)
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;                            // 0x1AD0 (size: 0x108)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3;                            // 0x1BD8 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2;                            // 0x1C00 (size: 0x28)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;                            // 0x1C28 (size: 0x28)
    FAnimNode_RefPose AnimGraphNode_IdentityPose;                                     // 0x1C50 (size: 0x10)
    FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;       // 0x1C60 (size: 0x20)
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;       // 0x1C80 (size: 0x20)
    FAnimNode_Root AnimGraphNode_Root;                                                // 0x1CA0 (size: 0x20)
    FAnimNode_TwoBoneIK_GSC AnimGraphNode_TwoBoneIK_GSC;                              // 0x1CC0 (size: 0x178)
    FAnimNode_CopyBone AnimGraphNode_CopyBone_1;                                      // 0x1E38 (size: 0xF0)
    FAnimNode_CopyBone AnimGraphNode_CopyBone;                                        // 0x1F28 (size: 0xF0)
    FAnimNode_SmoothCopyBone_GSC AnimGraphNode_SmoothCopyBone_GSC;                    // 0x2018 (size: 0x160)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;                                  // 0x2178 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;                                  // 0x22A0 (size: 0x128)
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;                                    // 0x23C8 (size: 0x128)
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;                              // 0x24F0 (size: 0x28)
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;                            // 0x2518 (size: 0x48)
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;                        // 0x2560 (size: 0xE0)
    FAnimCutsceneData __CustomProperty_CutsceneData_7C281A534D7FB851623A079F48912BDE; // 0x2640 (size: 0x8)
    FAnimPlayerStealthData __CustomProperty_StealthData_7C281A534D7FB851623A079F48912BDE; // 0x2648 (size: 0x20)
    FAnimPlayerShadowData __CustomProperty_ShadowData_7C281A534D7FB851623A079F48912BDE; // 0x2668 (size: 0x30)
    FAnimPlayerVaultingData __CustomProperty_VaultingData_7C281A534D7FB851623A079F48912BDE; // 0x2698 (size: 0xB8)
    FAnimPlayerUnfocusableTargetData __CustomProperty_AnimPlayerUnfocusableTargetData_7C281A534D7FB851623A079F48912BDE; // 0x2750 (size: 0x1)
    FAnimPlayerDialogData __CustomProperty_DialogData_7C281A534D7FB851623A079F48912BDE; // 0x2754 (size: 0x8)
    FAnimPlayerDodgeData __CustomProperty_DodgeData_7C281A534D7FB851623A079F48912BDE; // 0x2760 (size: 0x68)
    FAnimPlayerGuitarData __CustomProperty_GuitarData_7C281A534D7FB851623A079F48912BDE; // 0x27C8 (size: 0x24)
    FAnimPlayerHitData __CustomProperty_HitData_7C281A534D7FB851623A079F48912BDE;     // 0x27F0 (size: 0x80)
    FAnimPlayerDetectorData __CustomProperty_DetectorData_7C281A534D7FB851623A079F48912BDE; // 0x2870 (size: 0x128)
    FAnimPlayerWeaponPushbackData __CustomProperty_WeaponPushbackData_7C281A534D7FB851623A079F48912BDE; // 0x2998 (size: 0x80)
    FAnimPlayerCollectionsData __CustomProperty_CollectionData_7C281A534D7FB851623A079F48912BDE; // 0x2A18 (size: 0x328)
    FAnimPlayerStateData __CustomProperty_StateData_7C281A534D7FB851623A079F48912BDE; // 0x2D40 (size: 0x40)
    FAnimPlayerWeaponData __CustomProperty_WeaponData_7C281A534D7FB851623A079F48912BDE; // 0x2D80 (size: 0x78)

    void AnimGraph(FPoseLink Idle, FPoseLink Moving, FPoseLink Look, FPoseLink& AnimGraph);
    void ExecuteUbergraph_AnimBP_Player_DeadBody(int32 EntryPoint);
}; // Size: 0x2DF8

#endif
