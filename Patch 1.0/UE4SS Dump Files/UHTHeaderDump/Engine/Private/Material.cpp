#include "Material.h"

UMaterial::UMaterial() {
    this->PhysMaterial = NULL;
    this->PhysMaterialMask = NULL;
    this->PhysicalMaterialMap[0] = NULL;
    this->PhysicalMaterialMap[1] = NULL;
    this->PhysicalMaterialMap[2] = NULL;
    this->PhysicalMaterialMap[3] = NULL;
    this->PhysicalMaterialMap[4] = NULL;
    this->PhysicalMaterialMap[5] = NULL;
    this->PhysicalMaterialMap[6] = NULL;
    this->PhysicalMaterialMap[7] = NULL;
    this->MaterialDomain = MD_Surface;
    this->BlendMode = BLEND_Opaque;
    this->StrataBlendMode = SBM_Opaque;
    this->DecalBlendMode = DBM_Translucent;
    this->MaterialDecalResponse = MDR_ColorNormalRoughness;
    this->CachedConnectedInputs = 0;
    this->ShadingModel = MSM_DefaultLit;
    this->bCastDynamicShadowAsMasked = false;
    this->OpacityMaskClipValue = 0.33f;
    this->bEnableSeparateTranslucency = true;
    this->bEnableResponsiveAA = false;
    this->bScreenSpaceReflections = false;
    this->bContactShadows = false;
    this->TwoSided = false;
    this->DitheredLODTransition = false;
    this->DitherOpacityMask = false;
    this->bAllowNegativeEmissiveColor = false;
    this->TranslucencyPass = MTP_AfterDOF;
    this->TranslucencyLightingMode = TLM_VolumetricNonDirectional;
    this->bAffectedByTranslucencyLighting = true;
    this->bEnableMobileSeparateTranslucency = false;
    this->NumCustomizedUVs = 0;
    this->TranslucencyDirectionalLightingIntensity = 1.00f;
    this->TranslucentShadowDensityScale = 0.50f;
    this->TranslucentSelfShadowDensityScale = 2.00f;
    this->TranslucentSelfShadowSecondDensityScale = 10.00f;
    this->TranslucentSelfShadowSecondOpacity = 0.00f;
    this->TranslucentBackscatteringExponent = 30.00f;
    this->TranslucentShadowStartOffset = 100.00f;
    this->bDisableDepthTest = false;
    this->bWriteOnlyAlpha = false;
    this->bGenerateSphericalParticleNormals = false;
    this->bTangentSpaceNormal = true;
    this->bUseEmissiveForDynamicAreaLighting = false;
    this->bUsedAsSpecialEngineMaterial = false;
    this->bUsedWithSkeletalMesh = false;
    this->bUsedWithEditorCompositing = false;
    this->bUsedWithParticleSprites = false;
    this->bUsedWithBeamTrails = false;
    this->bUsedWithMeshParticles = false;
    this->bUsedWithNiagaraSprites = false;
    this->bUsedWithNiagaraRibbons = false;
    this->bUsedWithNiagaraMeshParticles = false;
    this->bUsedWithGeometryCache = false;
    this->bUsedWithStaticLighting = false;
    this->bUsedWithMorphTargets = false;
    this->bUsedWithSplineMeshes = false;
    this->bUsedWithInstancedStaticMeshes = false;
    this->bUsedWithGeometryCollections = false;
    this->bUsesDistortion = false;
    this->bUsedWithClothing = false;
    this->bUsedWithWater = false;
    this->bUsedWithHairStrands = false;
    this->bUsedWithLidarPointCloud = false;
    this->bUsedWithVirtualHeightfieldMesh = false;
    this->bUsedWithNanite = false;
    this->bUsedWithVolumetricCloud = false;
    this->bUsedWithUI = false;
    this->bAutomaticallySetUsageInEditor = true;
    this->bFullyRough = false;
    this->bUseFullPrecision = false;
    this->FloatPrecisionMode = MFPM_Default;
    this->bUseLightmapDirectionality = true;
    this->bMobileEnableHighQualityBRDF = false;
    this->bUseAlphaToCoverage = false;
    this->bForwardRenderUsePreintegratedGFForSimpleIBL = false;
    this->bUseHQForwardReflections = false;
    this->bForwardBlendsSkyLightCubemaps = false;
    this->bUsePlanarForwardReflections = false;
    this->bNormalCurvatureToRoughness = false;
    this->AllowTranslucentCustomDepthWrites = false;
    this->Wireframe = false;
    this->ShadingRate = MSR_1x1;
    this->bCanMaskedBeAssumedOpaque = false;
    this->bIsMasked = false;
    this->bIsPreviewMaterial = false;
    this->bIsFunctionPreviewMaterial = false;
    this->bUseMaterialAttributes = false;
    this->bEnableExecWire = false;
    this->bEnableNewHLSLGenerator = false;
    this->bAllowDynamicBranching = false;
    this->bAllowDynamicIf = false;
    this->bCastRayTracedShadows = true;
    this->bUseTranslucencyVertexFog = true;
    this->bApplyCloudFogging = false;
    this->bIsSky = false;
    this->bComputeFogPerPixel = false;
    this->bOutputTranslucentVelocity = false;
    this->bAllowDevelopmentShaderCompile = true;
    this->bIsMaterialEditorStatsMaterial = false;
    this->BlendableLocation = BL_AfterTonemapping;
    this->BlendableOutputAlpha = false;
    this->bEnableStencilTest = false;
    this->StencilCompare = MSC_Less;
    this->StencilRefValue = 0;
    this->RefractionMode = RM_IndexOfRefraction;
    this->BlendablePriority = 0;
    this->bIsBlendable = true;
    this->UsageFlagWarnings = 0;
    this->RefractionDepthBias = 0.00f;
}


