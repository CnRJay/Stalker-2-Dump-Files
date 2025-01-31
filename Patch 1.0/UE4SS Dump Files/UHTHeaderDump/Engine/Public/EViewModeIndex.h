#pragma once
#include "CoreMinimal.h"
#include "EViewModeIndex.generated.h"

UENUM(BlueprintType)
enum EViewModeIndex {
    VMI_BrushWireframe,
    VMI_Wireframe,
    VMI_Unlit,
    VMI_Lit,
    VMI_Lit_DetailLighting,
    VMI_LightingOnly,
    VMI_LightComplexity,
    VMI_ShaderComplexity = 8,
    VMI_LightmapDensity,
    VMI_LitLightmapDensity,
    VMI_ReflectionOverride,
    VMI_VisualizeBuffer,
    VMI_StationaryLightOverlap = 14,
    VMI_CollisionPawn,
    VMI_CollisionVisibility,
    VMI_LODColoration = 18,
    VMI_QuadOverdraw,
    VMI_PrimitiveDistanceAccuracy,
    VMI_MeshUVDensityAccuracy,
    VMI_ShaderComplexityWithQuadOverdraw,
    VMI_HLODColoration,
    VMI_GroupLODColoration,
    VMI_MaterialTextureScaleAccuracy,
    VMI_RequiredTextureResolution,
    VMI_PathTracing,
    VMI_RayTracingDebug,
    VMI_VisualizeNanite,
    VMI_VirtualTexturePendingMips,
    VMI_VisualizeLumen,
    VMI_VisualizeVirtualShadowMap,
    VMI_VisualizeGPUSkinCache,
    VMI_Max UMETA(Hidden),
    VMI_Unknown = 255,
};

