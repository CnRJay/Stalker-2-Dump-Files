#ifndef UE4SS_SDK_SkinnedDecalComponent_HPP
#define UE4SS_SDK_SkinnedDecalComponent_HPP

#include "SkinnedDecalComponent_enums.hpp"

class USkinnedDecalInstance : public USceneComponent
{
    int32 Index;                                                                      // 0x02A0 (size: 0x4)
    int32 SubUV;                                                                      // 0x02A4 (size: 0x4)
    float size;                                                                       // 0x02A8 (size: 0x4)

    void UpdateDecal();
    class USkinnedDecalSampler* GetSampler();
}; // Size: 0x2B0

class USkinnedDecalSampler : public UActorComponent
{
    class USkeletalMeshComponent* Mesh;                                               // 0x00A0 (size: 0x8)
    TArray<FVector> DecalLocations;                                                   // 0x00A8 (size: 0x10)
    TArray<int32> EmptyIndexes;                                                       // 0x00B8 (size: 0x10)
    int32 LayerIndex;                                                                 // 0x00C8 (size: 0x4)
    TEnumAsByte<EMaterialParameterAssociation> Association;                           // 0x00CC (size: 0x1)
    TEnumAsByte<ESkinnedDecalAdditionalData> AdditionalData;                          // 0x00CD (size: 0x1)
    TArray<class UMaterialInstanceDynamic*> Materials;                                // 0x00D0 (size: 0x10)
    int32 LastDecalIndex;                                                             // 0x00E0 (size: 0x4)
    int32 MaxDecals;                                                                  // 0x00E4 (size: 0x4)
    float MinDecalDistance;                                                           // 0x00E8 (size: 0x4)
    bool TranslucentBlend;                                                            // 0x00EC (size: 0x1)
    class UMaterialInterface* TranslucentBlendMaterial;                               // 0x00F0 (size: 0x8)
    TMap<USkinnedDecalInstance*, int32> InstanceMap;                                  // 0x00F8 (size: 0x50)
    class UMaterialInstanceDynamic* TranslucentBlendMaterialDynamic;                  // 0x0148 (size: 0x8)
    TArray<class USkeletalMeshComponent*> RenderMeshes;                               // 0x0150 (size: 0x10)
    class UTextureRenderTarget2D* DataTarget;                                         // 0x0160 (size: 0x8)

    void UpdateInstance(class USkinnedDecalInstance* Instance);
    void UpdateAllDecals();
    int32 SpawnDecal(FVector Location, const FQuat Rotation, FName BoneName, float size, int32 SubUV, int32 Index);
    void SetupMaterials();
    void SetMeshComponent(class USkeletalMeshComponent* MeshComponent, bool Child);
    void RemoveDecal(const int32 Index);
    class UTextureRenderTarget2D* GetDataTarget();
    void CloneDecals(class USkinnedDecalSampler* Source);
    void ClearAllDecals();
}; // Size: 0x168

#endif
