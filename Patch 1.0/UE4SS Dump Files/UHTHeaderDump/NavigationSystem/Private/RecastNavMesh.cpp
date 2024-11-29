#include "RecastNavMesh.h"
#include "ERuntimeGenerationType.h"
#include "Templates/SubclassOf.h"

ARecastNavMesh::ARecastNavMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RuntimeGeneration = ERuntimeGenerationType::Dynamic;
    this->bDrawNavBoundsIntersection = false;
    this->bDrawNavBounds = false;
    this->bDrawDirtyTilesBB = false;
    this->bDrawTriangleEdges = false;
    this->bDrawPolyEdges = false;
    this->bDrawFilledPolys = true;
    this->bDrawNavMeshEdges = true;
    this->bDrawTileBounds = false;
    this->bDrawPathCollidingGeometry = false;
    this->bDrawTileLabels = false;
    this->bDrawPolygonLabels = false;
    this->bDrawDefaultPolygonCost = false;
    this->bDrawPolygonFlags = false;
    this->bDrawLabelsOnPathNodes = false;
    this->bDrawNavLinks = true;
    this->bDrawFailedNavLinks = false;
    this->bDrawClusters = false;
    this->bDrawOctree = false;
    this->bDrawOctreeDetails = true;
    this->bDrawMarkedForbiddenPolys = false;
    this->bDistinctlyDrawTilesBeingBuilt = true;
    this->DrawOffset = 10.00f;
    this->bFixedTilePoolSize = true;
    this->TilePoolSize = 80000;
    this->TileSizeUU = 1016.00f;
    this->CellSize = 8.00f;
    this->CellHeight = 20.00f;
    this->AgentRadius = 34.00f;
    this->AgentHeight = 115.00f;
    this->AgentMaxSlope = 44.00f;
    this->AgentMaxStepHeight = 21.00f;
    this->MinRegionArea = 0.00f;
    this->MergeRegionSize = 400.00f;
    this->MaxSimplificationError = 1.30f;
    this->MaxSimultaneousTileGenerationJobsCount = 1024;
    this->MaxAsyncBuildTasksEditor = 50;
    this->MaxAsyncBuildTasksGameThread = 30;
    this->TileNumberHardLimit = 16777216;
    this->PolyRefTileBits = 24;
    this->PolyRefNavPolyBits = 32;
    this->PolyRefSaltBits = 8;
    this->DefaultDrawDistance = 5000.00f;
    this->DefaultMaxSearchNodes = 2048.00f;
    this->DefaultMaxHierarchicalSearchNodes = 2048.00f;
    this->RegionPartitioning = ERecastPartitioning::Watershed;
    this->LayerPartitioning = ERecastPartitioning::Watershed;
    this->RegionChunkSplits = 2;
    this->LayerChunkSplits = 2;
    this->bSortNavigationAreasByCost = true;
    this->bIsWorldPartitioned = false;
    this->bGenerateDetailedMesh = true;
    this->bPerformVoxelFiltering = true;
    this->bMarkLowHeightAreas = false;
    this->bUseExtraTopCellWhenMarkingAreas = true;
    this->bFilterLowSpanSequences = false;
    this->bFilterLowSpanFromTileCache = false;
    this->bDoFullyAsyncNavDataGathering = true;
    this->bUseBetterOffsetsFromCorners = true;
    this->bStoreEmptyTileLayers = false;
    this->bUseVirtualFilters = true;
    this->bUseVirtualGeometryFilteringAndDirtying = false;
    this->bAllowNavLinkAsPathEnd = false;
    this->TimeSliceFilterLedgeSpansMaxYProcess = 13;
    this->TimeSliceLongDurationDebug = 0.00f;
    this->bUseVoxelCache = false;
    this->TileSetUpdateInterval = 1.00f;
    this->HeuristicScale = 1.00f;
    this->VerticalDeviationFromGroundCompensation = 0.00f;
}

bool ARecastNavMesh::K2_ReplaceAreaInTileBounds(FBox Bounds, TSubclassOf<UNavArea> OldArea, TSubclassOf<UNavArea> NewArea, bool ReplaceLinks) {
    return false;
}


