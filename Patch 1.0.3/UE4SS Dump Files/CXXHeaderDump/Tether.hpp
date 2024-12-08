#ifndef UE4SS_SDK_Tether_HPP
#define UE4SS_SDK_Tether_HPP

#include "Tether_enums.hpp"

struct FBasicMeshGenerationOptions
{
    int32 NumSides;                                                                   // 0x0000 (size: 0x4)
    bool bOverrideCableWidth;                                                         // 0x0004 (size: 0x1)
    float CableMeshWidth;                                                             // 0x0008 (size: 0x4)
    bool bAutoTile;                                                                   // 0x000C (size: 0x1)
    bool bSnapToNearestFullTile;                                                      // 0x000D (size: 0x1)
    float TileUVs;                                                                    // 0x0010 (size: 0x4)

}; // Size: 0x14

struct FBasicMeshProperties
{
    float LoopResolution;                                                             // 0x0000 (size: 0x4)
    float CurveSimplificationMultiplier;                                              // 0x0004 (size: 0x4)
    FBasicMeshGenerationOptions MeshGenerationOptions;                                // 0x0008 (size: 0x14)

}; // Size: 0x1C

struct FCableMeshGenerationCurveDescription
{
    TArray<FCableMeshGenerationPoint> Points;                                         // 0x0000 (size: 0x10)
    FVector StartTangent;                                                             // 0x0010 (size: 0x18)
    FVector EndTangent;                                                               // 0x0028 (size: 0x18)

}; // Size: 0x40

struct FCableMeshGenerationPoint
{
    FVector Location;                                                                 // 0x0000 (size: 0x18)
    FQuat Rotation;                                                                   // 0x0020 (size: 0x20)
    FCableMeshGenerationPointInfo Info;                                               // 0x0040 (size: 0x18)

}; // Size: 0x60

struct FCableMeshGenerationPointInfo
{
    float DistanceToNearestContactPoint;                                              // 0x0000 (size: 0x4)
    float Looseness;                                                                  // 0x0004 (size: 0x4)
    float DistanceToSegmentLine;                                                      // 0x0008 (size: 0x4)
    float SlackRatio;                                                                 // 0x000C (size: 0x4)
    float SegmentLength;                                                              // 0x0010 (size: 0x4)
    float SegmentLineDistance;                                                        // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FCustomMeshProperties
{
    TSoftObjectPtr<UStaticMesh> SourceMeshReference;                                  // 0x0000 (size: 0x30)
    float OffsetRotation;                                                             // 0x0030 (size: 0x4)
    int32 NumInstances;                                                               // 0x0034 (size: 0x4)
    bool bFitToCableWidth;                                                            // 0x0038 (size: 0x1)
    bool bAutoTile;                                                                   // 0x0039 (size: 0x1)
    bool bSnapToNearestFullTile;                                                      // 0x003A (size: 0x1)
    float TileUVs;                                                                    // 0x003C (size: 0x4)

}; // Size: 0x40

struct FSplineSegmentInfo
{
    FVector StartLocation;                                                            // 0x0000 (size: 0x18)
    FVector StartLeaveTangent;                                                        // 0x0018 (size: 0x18)
    FVector EndLocation;                                                              // 0x0030 (size: 0x18)
    FVector EndArriveTangent;                                                         // 0x0048 (size: 0x18)

}; // Size: 0x60

struct FTetherCableProperties
{
    float CableWidth;                                                                 // 0x0000 (size: 0x4)
    FTetherCableSimulationOptions SimulationOptions;                                  // 0x0004 (size: 0x30)
    ECableMeshGenerationType MeshType;                                                // 0x0034 (size: 0x1)
    FBasicMeshProperties BasicMeshProperties;                                         // 0x0038 (size: 0x1C)
    FCustomMeshProperties CustomMeshProperties;                                       // 0x0058 (size: 0x40)
    TArray<class UMaterialInterface*> Materials;                                      // 0x0098 (size: 0x10)

}; // Size: 0xA8

struct FTetherCableSimulationOptions
{
    float SimulationDuration;                                                         // 0x0000 (size: 0x4)
    float SubstepTime;                                                                // 0x0004 (size: 0x4)
    bool bEnableStiffness;                                                            // 0x0008 (size: 0x1)
    int32 StiffnessSolverIterations;                                                  // 0x000C (size: 0x4)
    float Drag;                                                                       // 0x0010 (size: 0x4)
    bool bEnableCollision;                                                            // 0x0014 (size: 0x1)
    bool bEnableSelfCollision;                                                        // 0x0015 (size: 0x1)
    FCollisionProfileName CollisionProfile;                                           // 0x0018 (size: 0x8)
    float CollisionWidthScale;                                                        // 0x0020 (size: 0x4)
    float CollisionFriction;                                                          // 0x0024 (size: 0x4)
    float ParticleDistanceScale;                                                      // 0x0028 (size: 0x4)
    float ConstraintsEaseInTime;                                                      // 0x002C (size: 0x4)

}; // Size: 0x30

struct FTetherProxySimulationSegmentSeries : public FTetherSimulationSegmentSeries
{
}; // Size: 0x18

struct FTetherSegmentSimulationOptions
{
    bool bFixedAnchorPoint;                                                           // 0x0000 (size: 0x1)
    bool bUseSplineTangents;                                                          // 0x0001 (size: 0x1)

}; // Size: 0x2

struct FTetherSegmentSimulationParams
{
    bool bShouldSimulateSegment;                                                      // 0x0000 (size: 0x1)
    FTetherSegmentSimulationOptions SimulationOptions;                                // 0x0001 (size: 0x2)

}; // Size: 0x3

struct FTetherSimulationInstanceResources
{
    bool bIsInitialized;                                                              // 0x0000 (size: 0x1)
    TWeakObjectPtr<class UWorld> World;                                               // 0x0004 (size: 0x8)
    class UBodySetup* BodySetup;                                                      // 0x0010 (size: 0x8)

}; // Size: 0x28

struct FTetherSimulationModel : public FTetherSimulationSegmentSeries
{
    FTransform SimulationBaseWorldTransform;                                          // 0x0010 (size: 0x60)
    TArray<FTetherSimulationSegment> Segments;                                        // 0x0070 (size: 0x10)

}; // Size: 0x80

struct FTetherSimulationParams
{
    TWeakObjectPtr<class UWorld> World;                                               // 0x0000 (size: 0x8)
    FString SimulationName;                                                           // 0x0008 (size: 0x10)
    ETetherSimulationTimingMode TimingMode;                                           // 0x0018 (size: 0x1)
    float CollisionWidth;                                                             // 0x001C (size: 0x4)
    float DesiredParticleDistance;                                                    // 0x0020 (size: 0x4)
    FVector CableForce;                                                               // 0x0028 (size: 0x18)
    FTetherCableSimulationOptions SimulationOptions;                                  // 0x0040 (size: 0x30)
    TArray<FTetherSegmentSimulationParams> SegmentParams;                             // 0x0070 (size: 0x10)

}; // Size: 0x110

struct FTetherSimulationParticle
{
    uint32 ParticleUniqueId;                                                          // 0x0000 (size: 0x4)
    bool bFree;                                                                       // 0x0004 (size: 0x1)
    FVector position;                                                                 // 0x0008 (size: 0x18)
    FVector OldPosition;                                                              // 0x0020 (size: 0x18)

}; // Size: 0x38

struct FTetherSimulationSegment
{
    uint32 SegmentUniqueId;                                                           // 0x0000 (size: 0x4)
    FSplineSegmentInfo SplineSegmentInfo;                                             // 0x0008 (size: 0x60)
    float Length;                                                                     // 0x0068 (size: 0x4)
    TArray<FTetherSimulationParticle> Particles;                                      // 0x0070 (size: 0x10)
    float SimulationTime;                                                             // 0x0080 (size: 0x4)
    bool bInvalidated;                                                                // 0x0084 (size: 0x1)

}; // Size: 0x88

struct FTetherSimulationSegmentSeries
{
}; // Size: 0x8

class ATetherCableActor : public AActor
{
    FTetherCableProperties CableProperties;                                           // 0x0298 (size: 0xA8)
    bool bLockCurrentState;                                                           // 0x0340 (size: 0x1)
    bool bSynchronousRealtime;                                                        // 0x0341 (size: 0x1)
    float RealtimeInEditorTimeDilation;                                               // 0x0344 (size: 0x4)
    bool bDebugVisualizeSimulationParticles;                                          // 0x0348 (size: 0x1)
    bool bDebugVisualizeSimulationCollision;                                          // 0x0349 (size: 0x1)
    bool bDebugVisualizeBuiltStaticMeshPoints;                                        // 0x034A (size: 0x1)
    bool bDebugVisualizeContactPoints;                                                // 0x034B (size: 0x1)
    bool bDebugVisualizeComponentLocations;                                           // 0x034C (size: 0x1)
    bool bDebugVisualizeTangents;                                                     // 0x034D (size: 0x1)
    bool bVisible;                                                                    // 0x034E (size: 0x1)
    class USceneComponent* SceneRoot;                                                 // 0x0350 (size: 0x8)
    class UStaticMeshComponent* StaticMeshComponent;                                  // 0x0358 (size: 0x8)
    FDateTime TimeCreated;                                                            // 0x0360 (size: 0x8)
    class UTetherGuideSplineComponent* GuideSpline;                                   // 0x0368 (size: 0x8)
    FTetherSimulationModel ActiveSimulationModel;                                     // 0x0370 (size: 0x80)
    class UStaticMesh* StaticMesh;                                                    // 0x03F0 (size: 0x8)
    FCableMeshGenerationCurveDescription BuiltCurveDescriptionLocalSpaceSimplified;   // 0x03F8 (size: 0x40)
    class UTetherCableMeshComponent* DynamicPreviewMesh;                              // 0x0438 (size: 0x8)
    class UTetherMeshGenerator* MeshGenerator;                                        // 0x0440 (size: 0x8)

}; // Size: 0x450

class UTMG_Basic : public UTetherMeshGenerator
{
    FBasicMeshProperties Properties;                                                  // 0x0028 (size: 0x1C)

}; // Size: 0x48

class UTMG_CustomMesh : public UTetherMeshGenerator
{
    FCustomMeshProperties Properties;                                                 // 0x0028 (size: 0x40)

}; // Size: 0x68

class UTetherCableMeshComponent : public UMeshComponent
{
}; // Size: 0x5F0

class UTetherGuideSplineComponent : public USplineComponent
{
    class UTetherGuideSplineMetadata* MetaData;                                       // 0x06A8 (size: 0x8)

}; // Size: 0x6B0

class UTetherGuideSplineMetadata : public USplineMetadata
{
    TArray<class UTetherPointSegmentDefinition*> PointSegmentDefinitions;             // 0x0028 (size: 0x10)

}; // Size: 0x38

class UTetherMeshGenerator : public UObject
{
}; // Size: 0x28

class UTetherPointSegmentDefinition : public UObject
{
    float Slack;                                                                      // 0x0028 (size: 0x4)
    FTetherSegmentSimulationOptions SimulationOptions;                                // 0x002C (size: 0x2)

}; // Size: 0x30

#endif
