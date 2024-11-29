#ifndef UE4SS_SDK_PrefabAsset_HPP
#define UE4SS_SDK_PrefabAsset_HPP

#include "PrefabAsset_enums.hpp"

struct FPrefabVariantRule
{
    FName Scope;                                                                      // 0x0000 (size: 0x8)
    FString Rule;                                                                     // 0x0008 (size: 0x10)
    TEnumAsByte<EPrefabVariantRuleType> RuleType;                                     // 0x0018 (size: 0x1)
    bool bEnable;                                                                     // 0x0019 (size: 0x1)

}; // Size: 0x20

class APrefabActor : public AActor
{
    class UPrefabComponent* PrefabComponent;                                          // 0x0298 (size: 0x8)

    void SetPrefab(class UPrefabAsset* NewPrefab, bool bForceRevertEvenDisconnected);
    void SetMobility(TEnumAsByte<EComponentMobility::Type> InMobility);
    void SetLockSelection(bool bInLocked);
    class UPrefabAsset* GetPrefab();
    bool GetLockSelection();
    void DestroyPrefabActor(bool bDestroyAttachedChildren);
}; // Size: 0x2A0

class APrefabRelativePositionCustomPrimitiveDataUpdatingActor : public ATickOnlyInEditorActor
{
    uint32 CustomDataIndex;                                                           // 0x0298 (size: 0x4)

}; // Size: 0x2A0

class ATerraVolume : public AVolume
{
    TArray<uint16> CapturedHData;                                                     // 0x02D8 (size: 0x10)
    TMap<FIntPoint, uint16> AppliedAlignHMap;                                         // 0x02E8 (size: 0x50)
    TMap<FIntPoint, uint16> AppliedCaptureDeltaHMap;                                  // 0x0338 (size: 0x50)
    FVector4 CurrentBounds;                                                           // 0x0390 (size: 0x20)
    FIntPoint CapturedSize;                                                           // 0x03B0 (size: 0x8)
    FVector CapturedBoxExtend0;                                                       // 0x03B8 (size: 0x18)
    FVector CapturedBoxExtend1;                                                       // 0x03D0 (size: 0x18)
    FVector CapturedBoxExtend2;                                                       // 0x03E8 (size: 0x18)
    FVector CapturedBoxExtend3;                                                       // 0x0400 (size: 0x18)
    bool bSkipRestoreOnDelete;                                                        // 0x0418 (size: 0x1)
    class ALandscapeProxy* CachedLandscape;                                           // 0x0420 (size: 0x8)
    bool bApplied;                                                                    // 0x0428 (size: 0x1)
    bool bKeepTerrainOnDestruction;                                                   // 0x0429 (size: 0x1)

}; // Size: 0x430

class ATickOnlyInEditorActor : public AActor
{
}; // Size: 0x298

class UPrefabAsset : public UObject
{
    TMap<class FString, class FSoftObjectPath> AssetReferences;                       // 0x0028 (size: 0x50)
    FSoftObjectPath GeneratedBlueprintAssetReference;                                 // 0x0078 (size: 0x20)
    FGuid PrefabId;                                                                   // 0x0098 (size: 0x10)
    FString PrefabContent;                                                            // 0x00A8 (size: 0x10)
    FString PrefabHash;                                                               // 0x00B8 (size: 0x10)
    int32 NumActors;                                                                  // 0x00C8 (size: 0x4)
    FVector PrefabPivot;                                                              // 0x00D0 (size: 0x18)
    class UGSCFoliagePrefab* FoliagePrefab;                                           // 0x00E8 (size: 0x8)

}; // Size: 0xF0

class UPrefabComponent : public UPrimitiveComponent
{
    uint8 bConnected;                                                                 // 0x0560 (size: 0x1)
    uint8 bLockSelection;                                                             // 0x0560 (size: 0x1)
    class UPrefabAsset* Prefab;                                                       // 0x0568 (size: 0x8)
    class UBlueprint* GeneratedBlueprint;                                             // 0x0570 (size: 0x8)
    TArray<FPrefabVariantRule> VariantRulesOverwrite;                                 // 0x0578 (size: 0x10)
    uint8 bTransient;                                                                 // 0x0588 (size: 0x1)

}; // Size: 0x590

class UPrefabExporter : public UExporter
{
}; // Size: 0x78

class UPrefabFunctionLibrary : public UBlueprintFunctionLibrary
{

    class APrefabActor* SpawnPrefab(const class UObject* WorldContextObject, class UPrefabAsset* PrefabAsset, const FTransform& SpawnTransform, TArray<class AActor*>& OutSpawnPrefabInstances, bool bSpawnInstancesOnly, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor* Owner);
}; // Size: 0x28

class UPrefabLevelExporter : public UPrefabExporter
{
}; // Size: 0x88

class UPrefabObjectExporterT3D : public UPrefabExporter
{
}; // Size: 0x78

class UPrefabToolSettings : public UObject
{
    bool bReplaceActorsWithCreatedPrefab;                                             // 0x0028 (size: 0x1)
    bool bAutoIncludeAttachedActorsWhenCreateNewPrefab;                               // 0x0029 (size: 0x1)
    bool bNestedPrefabSupport;                                                        // 0x002A (size: 0x1)
    bool bRestorePrefabActorCollapseStatusAfterPIE;                                   // 0x002B (size: 0x1)
    bool bCollapseAllPrefabActorsAfterMapOpened;                                      // 0x002C (size: 0x1)
    bool bMoveActorsInWorldAfterSetPrefabPivot;                                       // 0x002D (size: 0x1)
    bool bDuplicateNoRevertWithOffset;                                                // 0x002E (size: 0x1)
    FString NewPrefabNamePattern;                                                     // 0x0030 (size: 0x10)
    FString DuplicateLevelForPackagingPostfix;                                        // 0x0040 (size: 0x10)
    bool bSaveCurrentLevelBeforeDuplicate;                                            // 0x0050 (size: 0x1)
    EPTUITheme UITheme;                                                               // 0x0054 (size: 0x4)
    bool bUpdateAllPrefabActorsWhenOpenMap;                                           // 0x0058 (size: 0x1)
    bool bCheckPrefabChangeBeforeUpdateAllPrefabActorsWhenOpenMap;                    // 0x0059 (size: 0x1)
    bool bEnableRevertPrefabOnCellLoaded;                                             // 0x005A (size: 0x1)
    bool bUpdateAllPrefabActorsWhenApply;                                             // 0x005B (size: 0x1)
    bool bApplyToNestedPrefab;                                                        // 0x005C (size: 0x1)
    bool bEnableApplyFromDisconnectedPrefabActor;                                     // 0x005D (size: 0x1)
    bool bTryQuickApplyFirstWhenApply;                                                // 0x005E (size: 0x1)
    bool bAutoAddRemoveVariantActorPrefix;                                            // 0x005F (size: 0x1)
    FString VariantActorPrefix;                                                       // 0x0060 (size: 0x10)
    bool bEnablePrefabComponentVisualizer;                                            // 0x0070 (size: 0x1)
    EPrefabVisualizerType PrefabComponentVisualizerType;                              // 0x0071 (size: 0x1)
    bool bDisplayPrefabComponentVisualizerEvenNotSelected;                            // 0x0072 (size: 0x1)
    FColor PrefabViewVisualizerColor;                                                 // 0x0074 (size: 0x4)
    FColor TargetActorColor;                                                          // 0x0078 (size: 0x4)
    FColor UnLockedConnectedColor;                                                    // 0x007C (size: 0x4)
    FColor LockedConnectedColor;                                                      // 0x0080 (size: 0x4)
    FColor UnLockedDisConnectedColor;                                                 // 0x0084 (size: 0x4)
    FColor LockedDisConnectedColor;                                                   // 0x0088 (size: 0x4)
    FColor UnLockedNoPrefabAssignedColor;                                             // 0x008C (size: 0x4)
    FColor LockedNoPrefabAssignedColor;                                               // 0x0090 (size: 0x4)
    FSoftObjectPath PrefabMaterialPath;                                               // 0x0098 (size: 0x20)
    bool bShadedPrefabViewVisualizer;                                                 // 0x00E8 (size: 0x1)
    bool bLockPrefabSelectionByDefault;                                               // 0x00E9 (size: 0x1)
    bool bDisableLockPrefabSelectionFeature;                                          // 0x00EA (size: 0x1)
    bool bForceApplyPerInstanceVertexColor;                                           // 0x00EB (size: 0x1)
    bool bHideChildActorsInPIEIfHiddenInEditor;                                       // 0x00EC (size: 0x1)
    bool bCanToggleChildActorVisibilityInPIE;                                         // 0x00ED (size: 0x1)
    bool bIgnoreLayersInPrefab;                                                       // 0x00EF (size: 0x1)
    bool bSupportGenerateBlueprint;                                                   // 0x00F0 (size: 0x1)
    bool bHarvestComponentsWhenGeneratingBlueprint;                                   // 0x00F1 (size: 0x1)
    bool bUseActorNameAsVariableNameWhenGeneratingBlueprint;                          // 0x00F2 (size: 0x1)
    bool bForceMobilityToMovableWhenGeneratingBlueprint;                              // 0x00F3 (size: 0x1)
    TArray<class TSubclassOf<AActor>> IgnoreActorClassesWhenGeneratingBlueprint;      // 0x00F8 (size: 0x10)
    TArray<FName> IgnoreActorTagsWhenGeneratingBlueprint;                             // 0x0108 (size: 0x10)
    bool bFlashPrefabWindowForTargetPrefabActor;                                      // 0x0118 (size: 0x1)
    bool bEnablePrefabTextEditor;                                                     // 0x0119 (size: 0x1)
    bool bDebugMode;                                                                  // 0x011A (size: 0x1)
    bool bDisableThumbnailRender;                                                     // 0x011B (size: 0x1)
    bool bShowPrefabInstanceTagInPrefabToolWindow;                                    // 0x011C (size: 0x1)
    bool bSkipActorReferenceReplacement;                                              // 0x011D (size: 0x1)
    int32 RealtimeThumbnailThreshold;                                                 // 0x0120 (size: 0x4)
    bool bShouldDoApplyAfterGroupActorOperations;                                     // 0x0124 (size: 0x1)

}; // Size: 0x128

class UPrefabVariantAsset : public UPrefabAsset
{
    class UPrefabAsset* Parent;                                                       // 0x00F0 (size: 0x8)

}; // Size: 0xF8

#endif
