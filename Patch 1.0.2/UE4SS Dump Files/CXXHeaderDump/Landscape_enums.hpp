enum class EFoliageGeneratorBiome {
    Unselected = 0,
    Biome_0 = 1,
    Biome_1 = 2,
    Biome_2 = 3,
    Biome_3 = 4,
    Biome_4 = 5,
    Biome_5 = 6,
    Biome_6 = 7,
    Biome_7 = 8,
    Biome_8 = 9,
    Biome_9 = 10,
    Biome_10 = 11,
    Biome_11 = 12,
    Biome_12 = 13,
    Biome_13 = 14,
    Biome_14 = 15,
    Biome_15 = 16,
    Biome_16 = 17,
    Biome_17 = 18,
    Biome_18 = 19,
    Biome_19 = 20,
    Biome_20 = 21,
    Biome_21 = 22,
    Biome_22 = 23,
    Biome_23 = 24,
    Biome_24 = 25,
    Biome_25 = 26,
    Biome_26 = 27,
    Biome_27 = 28,
    Biome_28 = 29,
    Biome_29 = 30,
    Biome_30 = 31,
    Biome_31 = 32,
    EFoliageGeneratorBiome_MAX = 33,
};

enum class EFoliageGeneratorFoliageMapLayer {
    Unselected = 0,
    FoliageMapLayer_0 = 1,
    FoliageMapLayer_1 = 2,
    FoliageMapLayer_2 = 3,
    FoliageMapLayer_3 = 4,
    FoliageMapLayer_4 = 5,
    FoliageMapLayer_5 = 6,
    FoliageMapLayer_6 = 7,
    FoliageMapLayer_7 = 8,
    FoliageMapLayer_8 = 9,
    FoliageMapLayer_9 = 10,
    FoliageMapLayer_10 = 11,
    FoliageMapLayer_11 = 12,
    FoliageMapLayer_12 = 13,
    FoliageMapLayer_13 = 14,
    FoliageMapLayer_14 = 15,
    FoliageMapLayer_15 = 16,
    EFoliageGeneratorFoliageMapLayer_MAX = 17,
};

enum class EFoliageGeneratorGrassLayer {
    Unselected = 0,
    GrassLayer_0 = 1,
    GrassLayer_1 = 2,
    GrassLayer_2 = 3,
    GrassLayer_3 = 4,
    GrassLayer_4 = 5,
    GrassLayer_5 = 6,
    GrassLayer_6 = 7,
    GrassLayer_7 = 8,
    EFoliageGeneratorGrassLayer_MAX = 9,
};

enum class EGrassScaling {
    Uniform = 0,
    Free = 1,
    LockXY = 2,
    EGrassScaling_MAX = 3,
};

enum class EHeightmapRTType {
    HeightmapRT_CombinedAtlas = 0,
    HeightmapRT_CombinedNonAtlas = 1,
    HeightmapRT_Scratch1 = 2,
    HeightmapRT_Scratch2 = 3,
    HeightmapRT_Scratch3 = 4,
    HeightmapRT_Mip1 = 5,
    HeightmapRT_Mip2 = 6,
    HeightmapRT_Mip3 = 7,
    HeightmapRT_Mip4 = 8,
    HeightmapRT_Mip5 = 9,
    HeightmapRT_Mip6 = 10,
    HeightmapRT_Mip7 = 11,
    HeightmapRT_Count = 12,
    HeightmapRT_MAX = 13,
};

enum ELandscapeBlendMode {
    LSBM_AdditiveBlend = 0,
    LSBM_AlphaBlend = 1,
    LSBM_MAX = 2,
};

enum ELandscapeClearMode {
    Clear_Weightmap = 1,
    Clear_Heightmap = 2,
    Clear_All = 3,
    Clear_MAX = 4,
};

enum ELandscapeCustomizedCoordType {
    LCCT_None = 0,
    LCCT_CustomUV0 = 1,
    LCCT_CustomUV1 = 2,
    LCCT_CustomUV2 = 3,
    LCCT_WeightMapUV = 4,
    LCCT_MAX = 5,
};

enum class ELandscapeFoliageType {
    Trees = 0,
    Bushes = 1,
    Grass = 2,
    LowGrass = 3,
    ELandscapeFoliageType_MAX = 4,
};

enum ELandscapeGizmoType {
    LGT_None = 0,
    LGT_Height = 1,
    LGT_Weight = 2,
    LGT_MAX = 3,
};

enum class ELandscapeImportAlphamapType {
    Additive = 0,
    Layered = 1,
    ELandscapeImportAlphamapType_MAX = 2,
};

namespace ELandscapeLODFalloff {
    enum Type {
        Linear = 0,
        SquareRoot = 1,
        ELandscapeLODFalloff_MAX = 2,
    };
}

enum ELandscapeLayerBlendType {
    LB_WeightBlend = 0,
    LB_AlphaBlend = 1,
    LB_HeightBlend = 2,
    LB_MAX = 3,
};

enum class ELandscapeLayerDisplayMode {
    Default = 0,
    Alphabetical = 1,
    UserSpecific = 2,
    ELandscapeLayerDisplayMode_MAX = 3,
};

enum class ELandscapeLayerPaintingRestriction {
    None = 0,
    UseMaxLayers = 1,
    ExistingOnly = 2,
    UseComponentAllowList = 3,
    ELandscapeLayerPaintingRestriction_MAX = 4,
};

enum class ELandscapeResizeMode {
    Resample = 0,
    Clip = 1,
    Expand = 2,
    ELandscapeResizeMode_MAX = 3,
};

enum ELandscapeSetupErrors {
    LSE_None = 0,
    LSE_NoLandscapeInfo = 1,
    LSE_CollsionXY = 2,
    LSE_NoLayerInfo = 3,
    LSE_MAX = 4,
};

enum class ERTDrawingType {
    RTAtlas = 0,
    RTAtlasToNonAtlas = 1,
    RTNonAtlasToAtlas = 2,
    RTNonAtlas = 3,
    RTMips = 4,
    ERTDrawingType_MAX = 5,
};

enum class EScaleMode {
    Uniform = 0,
    HorizontalUniform = 1,
    NonUniform = 2,
    EScaleMode_MAX = 3,
};

enum class ESplineModulationColorMask {
    Red = 0,
    Green = 1,
    Blue = 2,
    Alpha = 3,
    ESplineModulationColorMask_MAX = 4,
};

enum ETerrainCoordMappingType {
    TCMT_Auto = 0,
    TCMT_XY = 1,
    TCMT_XZ = 2,
    TCMT_YZ = 3,
    TCMT_MAX = 4,
};

enum class ETreeType {
    Unknown = 0,
    InnerTree = 1,
    OuterTree = 2,
    ETreeType_MAX = 3,
};

enum class EWeightmapRTType {
    WeightmapRT_Scratch_RGBA = 0,
    WeightmapRT_Scratch1 = 1,
    WeightmapRT_Scratch2 = 2,
    WeightmapRT_Scratch3 = 3,
    WeightmapRT_Mip0 = 4,
    WeightmapRT_Mip1 = 5,
    WeightmapRT_Mip2 = 6,
    WeightmapRT_Mip3 = 7,
    WeightmapRT_Mip4 = 8,
    WeightmapRT_Mip5 = 9,
    WeightmapRT_Mip6 = 10,
    WeightmapRT_Mip7 = 11,
    WeightmapRT_Count = 12,
    WeightmapRT_MAX = 13,
};

enum LandscapeSplineMeshOrientation {
    LSMO_XUp = 0,
    LSMO_YUp = 1,
    LSMO_MAX = 2,
};

