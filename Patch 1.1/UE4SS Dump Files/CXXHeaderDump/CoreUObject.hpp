#ifndef UE4SS_SDK_CoreUObject_HPP
#define UE4SS_SDK_CoreUObject_HPP

#include "CoreUObject_enums.hpp"

struct FARFilter
{
    TArray<FName> PackageNames;                                                       // 0x0000 (size: 0x10)
    TArray<FName> PackagePaths;                                                       // 0x0010 (size: 0x10)
    TArray<FName> AssetNames;                                                         // 0x0020 (size: 0x10)
    TArray<FSoftObjectPath> SoftObjectPaths;                                          // 0x0030 (size: 0x10)
    TArray<FName> ClassNames;                                                         // 0x0040 (size: 0x10)
    TArray<FTopLevelAssetPath> ClassPaths;                                            // 0x0050 (size: 0x10)
    TSet<FName> RecursiveClassesExclusionSet;                                         // 0x00B0 (size: 0x50)
    TSet<FTopLevelAssetPath> RecursiveClassPathsExclusionSet;                         // 0x0100 (size: 0x50)
    bool bRecursivePaths;                                                             // 0x0150 (size: 0x1)
    bool bRecursiveClasses;                                                           // 0x0151 (size: 0x1)
    bool bIncludeOnlyOnDiskAssets;                                                    // 0x0152 (size: 0x1)

}; // Size: 0x160

struct FAssetBundleData
{
    TArray<FAssetBundleEntry> Bundles;                                                // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FAssetBundleEntry
{
    FName BundleName;                                                                 // 0x0000 (size: 0x8)
    TArray<FTopLevelAssetPath> AssetPaths;                                            // 0x0008 (size: 0x10)

}; // Size: 0x18

struct FAssetData
{
    FName PackageName;                                                                // 0x0000 (size: 0x8)
    FName PackagePath;                                                                // 0x0008 (size: 0x8)
    FName AssetName;                                                                  // 0x0010 (size: 0x8)
    FName AssetClass;                                                                 // 0x0018 (size: 0x8)
    FTopLevelAssetPath AssetClassPath;                                                // 0x0020 (size: 0x10)

}; // Size: 0x68

struct FAutomationEvent
{
    EAutomationEventType Type;                                                        // 0x0000 (size: 0x1)
    FString message;                                                                  // 0x0008 (size: 0x10)
    FString Context;                                                                  // 0x0018 (size: 0x10)
    FGuid Artifact;                                                                   // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FAutomationExecutionEntry
{
    FAutomationEvent Event;                                                           // 0x0000 (size: 0x38)
    FString Filename;                                                                 // 0x0038 (size: 0x10)
    int32 LineNumber;                                                                 // 0x0048 (size: 0x4)
    FDateTime Timestamp;                                                              // 0x0050 (size: 0x8)

}; // Size: 0x58

struct FBox
{
    FVector Min;                                                                      // 0x0000 (size: 0x18)
    FVector Max;                                                                      // 0x0018 (size: 0x18)
    uint8 IsValid;                                                                    // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FBox2D
{
    FVector2D Min;                                                                    // 0x0000 (size: 0x10)
    FVector2D Max;                                                                    // 0x0010 (size: 0x10)
    uint8 bIsValid;                                                                   // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FBox2f
{
    FVector2f Min;                                                                    // 0x0000 (size: 0x8)
    FVector2f Max;                                                                    // 0x0008 (size: 0x8)
    uint8 bIsValid;                                                                   // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FBox3d
{
    FVector3d Min;                                                                    // 0x0000 (size: 0x18)
    FVector3d Max;                                                                    // 0x0018 (size: 0x18)
    uint8 IsValid;                                                                    // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FBox3f
{
    FVector3f Min;                                                                    // 0x0000 (size: 0xC)
    FVector3f Max;                                                                    // 0x000C (size: 0xC)
    uint8 IsValid;                                                                    // 0x0018 (size: 0x1)

}; // Size: 0x1C

struct FBoxSphereBounds
{
    FVector Origin;                                                                   // 0x0000 (size: 0x18)
    FVector BoxExtent;                                                                // 0x0018 (size: 0x18)
    double SphereRadius;                                                              // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FBoxSphereBounds3d
{
    FVector3d Origin;                                                                 // 0x0000 (size: 0x18)
    FVector3d BoxExtent;                                                              // 0x0018 (size: 0x18)
    double SphereRadius;                                                              // 0x0030 (size: 0x8)

}; // Size: 0x38

struct FBoxSphereBounds3f
{
    FVector3f Origin;                                                                 // 0x0000 (size: 0xC)
    FVector3f BoxExtent;                                                              // 0x000C (size: 0xC)
    float SphereRadius;                                                               // 0x0018 (size: 0x4)

}; // Size: 0x1C

struct FColor
{
    uint8 B;                                                                          // 0x0000 (size: 0x1)
    uint8 G;                                                                          // 0x0001 (size: 0x1)
    uint8 R;                                                                          // 0x0002 (size: 0x1)
    uint8 A;                                                                          // 0x0003 (size: 0x1)

}; // Size: 0x4

struct FDateTime
{
}; // Size: 0x8

struct FDefault__ScriptStruct
{
}; // Size: 0x0

struct FDirectoryPath
{
    FString Path;                                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FDoubleRange
{
    FDoubleRangeBound LowerBound;                                                     // 0x0000 (size: 0x10)
    FDoubleRangeBound UpperBound;                                                     // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FDoubleRangeBound
{
    TEnumAsByte<ERangeBoundTypes::Type> Type;                                         // 0x0000 (size: 0x1)
    double Value;                                                                     // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FFallbackStruct
{
}; // Size: 0x1

struct FFilePath
{
    FString FilePath;                                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FFloatInterval
{
    float Min;                                                                        // 0x0000 (size: 0x4)
    float Max;                                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FFloatRange
{
    FFloatRangeBound LowerBound;                                                      // 0x0000 (size: 0x8)
    FFloatRangeBound UpperBound;                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FFloatRangeBound
{
    TEnumAsByte<ERangeBoundTypes::Type> Type;                                         // 0x0000 (size: 0x1)
    float Value;                                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FFrameNumber
{
    int32 Value;                                                                      // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FFrameNumberRange
{
    FFrameNumberRangeBound LowerBound;                                                // 0x0000 (size: 0x8)
    FFrameNumberRangeBound UpperBound;                                                // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FFrameNumberRangeBound
{
    TEnumAsByte<ERangeBoundTypes::Type> Type;                                         // 0x0000 (size: 0x1)
    FFrameNumber Value;                                                               // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FFrameRate
{
    int32 Numerator;                                                                  // 0x0000 (size: 0x4)
    int32 Denominator;                                                                // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FFrameTime
{
    FFrameNumber FrameNumber;                                                         // 0x0000 (size: 0x4)
    float SubFrame;                                                                   // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FGuid
{
    int32 A;                                                                          // 0x0000 (size: 0x4)
    int32 B;                                                                          // 0x0004 (size: 0x4)
    int32 C;                                                                          // 0x0008 (size: 0x4)
    int32 D;                                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

struct FInputDeviceId
{
    int32 InternalId;                                                                 // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FInt32Interval
{
    int32 Min;                                                                        // 0x0000 (size: 0x4)
    int32 Max;                                                                        // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FInt32Point
{
    int32 X;                                                                          // 0x0000 (size: 0x4)
    int32 Y;                                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FInt32Range
{
    FInt32RangeBound LowerBound;                                                      // 0x0000 (size: 0x8)
    FInt32RangeBound UpperBound;                                                      // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FInt32RangeBound
{
    TEnumAsByte<ERangeBoundTypes::Type> Type;                                         // 0x0000 (size: 0x1)
    int32 Value;                                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FInt32Vector
{
    int32 X;                                                                          // 0x0000 (size: 0x4)
    int32 Y;                                                                          // 0x0004 (size: 0x4)
    int32 Z;                                                                          // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FInt32Vector2
{
    int32 X;                                                                          // 0x0000 (size: 0x4)
    int32 Y;                                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FInt32Vector4
{
    int32 X;                                                                          // 0x0000 (size: 0x4)
    int32 Y;                                                                          // 0x0004 (size: 0x4)
    int32 Z;                                                                          // 0x0008 (size: 0x4)
    int32 W;                                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

struct FInt64Point
{
    int64 X;                                                                          // 0x0000 (size: 0x8)
    int64 Y;                                                                          // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FInt64Vector
{
    int64 X;                                                                          // 0x0000 (size: 0x8)
    int64 Y;                                                                          // 0x0008 (size: 0x8)
    int64 Z;                                                                          // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FInt64Vector2
{
    int64 X;                                                                          // 0x0000 (size: 0x8)
    int64 Y;                                                                          // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FInt64Vector4
{
    int64 X;                                                                          // 0x0000 (size: 0x8)
    int64 Y;                                                                          // 0x0008 (size: 0x8)
    int64 Z;                                                                          // 0x0010 (size: 0x8)
    int64 W;                                                                          // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FIntPoint
{
    int32 X;                                                                          // 0x0000 (size: 0x4)
    int32 Y;                                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FIntVector
{
    int32 X;                                                                          // 0x0000 (size: 0x4)
    int32 Y;                                                                          // 0x0004 (size: 0x4)
    int32 Z;                                                                          // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FIntVector2
{
    int32 X;                                                                          // 0x0000 (size: 0x4)
    int32 Y;                                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FIntVector4
{
    int32 X;                                                                          // 0x0000 (size: 0x4)
    int32 Y;                                                                          // 0x0004 (size: 0x4)
    int32 Z;                                                                          // 0x0008 (size: 0x4)
    int32 W;                                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

struct FInterpCurveFloat
{
    TArray<FInterpCurvePointFloat> Points;                                            // 0x0000 (size: 0x10)
    bool bIsLooped;                                                                   // 0x0010 (size: 0x1)
    float LoopKeyOffset;                                                              // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FInterpCurveLinearColor
{
    TArray<FInterpCurvePointLinearColor> Points;                                      // 0x0000 (size: 0x10)
    bool bIsLooped;                                                                   // 0x0010 (size: 0x1)
    float LoopKeyOffset;                                                              // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FInterpCurvePointFloat
{
    float InVal;                                                                      // 0x0000 (size: 0x4)
    float OutVal;                                                                     // 0x0004 (size: 0x4)
    float ArriveTangent;                                                              // 0x0008 (size: 0x4)
    float LeaveTangent;                                                               // 0x000C (size: 0x4)
    TEnumAsByte<EInterpCurveMode> InterpMode;                                         // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FInterpCurvePointLinearColor
{
    float InVal;                                                                      // 0x0000 (size: 0x4)
    FLinearColor OutVal;                                                              // 0x0004 (size: 0x10)
    FLinearColor ArriveTangent;                                                       // 0x0014 (size: 0x10)
    FLinearColor LeaveTangent;                                                        // 0x0024 (size: 0x10)
    TEnumAsByte<EInterpCurveMode> InterpMode;                                         // 0x0034 (size: 0x1)

}; // Size: 0x38

struct FInterpCurvePointQuat
{
    float InVal;                                                                      // 0x0000 (size: 0x4)
    FQuat OutVal;                                                                     // 0x0010 (size: 0x20)
    FQuat ArriveTangent;                                                              // 0x0030 (size: 0x20)
    FQuat LeaveTangent;                                                               // 0x0050 (size: 0x20)
    TEnumAsByte<EInterpCurveMode> InterpMode;                                         // 0x0070 (size: 0x1)

}; // Size: 0x80

struct FInterpCurvePointTwoVectors
{
    float InVal;                                                                      // 0x0000 (size: 0x4)
    FTwoVectors OutVal;                                                               // 0x0008 (size: 0x30)
    FTwoVectors ArriveTangent;                                                        // 0x0038 (size: 0x30)
    FTwoVectors LeaveTangent;                                                         // 0x0068 (size: 0x30)
    TEnumAsByte<EInterpCurveMode> InterpMode;                                         // 0x0098 (size: 0x1)

}; // Size: 0xA0

struct FInterpCurvePointVector
{
    float InVal;                                                                      // 0x0000 (size: 0x4)
    FVector OutVal;                                                                   // 0x0008 (size: 0x18)
    FVector ArriveTangent;                                                            // 0x0020 (size: 0x18)
    FVector LeaveTangent;                                                             // 0x0038 (size: 0x18)
    TEnumAsByte<EInterpCurveMode> InterpMode;                                         // 0x0050 (size: 0x1)

}; // Size: 0x58

struct FInterpCurvePointVector2D
{
    float InVal;                                                                      // 0x0000 (size: 0x4)
    FVector2D OutVal;                                                                 // 0x0008 (size: 0x10)
    FVector2D ArriveTangent;                                                          // 0x0018 (size: 0x10)
    FVector2D LeaveTangent;                                                           // 0x0028 (size: 0x10)
    TEnumAsByte<EInterpCurveMode> InterpMode;                                         // 0x0038 (size: 0x1)

}; // Size: 0x40

struct FInterpCurveQuat
{
    TArray<FInterpCurvePointQuat> Points;                                             // 0x0000 (size: 0x10)
    bool bIsLooped;                                                                   // 0x0010 (size: 0x1)
    float LoopKeyOffset;                                                              // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FInterpCurveTwoVectors
{
    TArray<FInterpCurvePointTwoVectors> Points;                                       // 0x0000 (size: 0x10)
    bool bIsLooped;                                                                   // 0x0010 (size: 0x1)
    float LoopKeyOffset;                                                              // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FInterpCurveVector
{
    TArray<FInterpCurvePointVector> Points;                                           // 0x0000 (size: 0x10)
    bool bIsLooped;                                                                   // 0x0010 (size: 0x1)
    float LoopKeyOffset;                                                              // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FInterpCurveVector2D
{
    TArray<FInterpCurvePointVector2D> Points;                                         // 0x0000 (size: 0x10)
    bool bIsLooped;                                                                   // 0x0010 (size: 0x1)
    float LoopKeyOffset;                                                              // 0x0014 (size: 0x4)

}; // Size: 0x18

struct FLinearColor
{
    float R;                                                                          // 0x0000 (size: 0x4)
    float G;                                                                          // 0x0004 (size: 0x4)
    float B;                                                                          // 0x0008 (size: 0x4)
    float A;                                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

struct FMatrix
{
    FPlane XPlane;                                                                    // 0x0000 (size: 0x20)
    FPlane YPlane;                                                                    // 0x0020 (size: 0x20)
    FPlane ZPlane;                                                                    // 0x0040 (size: 0x20)
    FPlane WPlane;                                                                    // 0x0060 (size: 0x20)

}; // Size: 0x80

struct FMatrix44d
{
    FPlane4d XPlane;                                                                  // 0x0000 (size: 0x20)
    FPlane4d YPlane;                                                                  // 0x0020 (size: 0x20)
    FPlane4d ZPlane;                                                                  // 0x0040 (size: 0x20)
    FPlane4d WPlane;                                                                  // 0x0060 (size: 0x20)

}; // Size: 0x80

struct FMatrix44f
{
    FPlane4f XPlane;                                                                  // 0x0000 (size: 0x10)
    FPlane4f YPlane;                                                                  // 0x0010 (size: 0x10)
    FPlane4f ZPlane;                                                                  // 0x0020 (size: 0x10)
    FPlane4f WPlane;                                                                  // 0x0030 (size: 0x10)

}; // Size: 0x40

struct FOrientedBox
{
    FVector Center;                                                                   // 0x0000 (size: 0x18)
    FVector AxisX;                                                                    // 0x0018 (size: 0x18)
    FVector AxisY;                                                                    // 0x0030 (size: 0x18)
    FVector AxisZ;                                                                    // 0x0048 (size: 0x18)
    double ExtentX;                                                                   // 0x0060 (size: 0x8)
    double ExtentY;                                                                   // 0x0068 (size: 0x8)
    double ExtentZ;                                                                   // 0x0070 (size: 0x8)

}; // Size: 0x78

struct FPackedNormal
{
    uint8 X;                                                                          // 0x0000 (size: 0x1)
    uint8 Y;                                                                          // 0x0001 (size: 0x1)
    uint8 Z;                                                                          // 0x0002 (size: 0x1)
    uint8 W;                                                                          // 0x0003 (size: 0x1)

}; // Size: 0x4

struct FPackedRGB10A2N
{
    int32 Packed;                                                                     // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FPackedRGBA16N
{
    int32 XY;                                                                         // 0x0000 (size: 0x4)
    int32 ZW;                                                                         // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FPlane : public FVector
{
    double W;                                                                         // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FPlane4d : public FVector3d
{
    double W;                                                                         // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FPlane4f : public FVector3f
{
    float W;                                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

struct FPlatformInputDeviceState
{
    FPlatformUserId OwningPlatformUser;                                               // 0x0000 (size: 0x4)
    EInputDeviceConnectionState ConnectionState;                                      // 0x0004 (size: 0x1)

}; // Size: 0x8

struct FPlatformUserId
{
    int32 InternalId;                                                                 // 0x0000 (size: 0x4)

}; // Size: 0x4

struct FPolyglotTextData
{
    ELocalizedTextSourceCategory Category;                                            // 0x0000 (size: 0x1)
    FString NativeCulture;                                                            // 0x0008 (size: 0x10)
    FString Namespace;                                                                // 0x0018 (size: 0x10)
    FString Key;                                                                      // 0x0028 (size: 0x10)
    FString NativeString;                                                             // 0x0038 (size: 0x10)
    TMap<class FString, class FString> LocalizedStrings;                              // 0x0048 (size: 0x50)
    bool bIsMinimalPatch;                                                             // 0x0098 (size: 0x1)
    FText CachedText;                                                                 // 0x00A0 (size: 0x18)

}; // Size: 0xB8

struct FPrimaryAssetId
{
    FPrimaryAssetType PrimaryAssetType;                                               // 0x0000 (size: 0x8)
    FName PrimaryAssetName;                                                           // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FPrimaryAssetType
{
    FName Name;                                                                       // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FQualifiedFrameTime
{
    FFrameTime Time;                                                                  // 0x0000 (size: 0x8)
    FFrameRate rate;                                                                  // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FQuat
{
    double X;                                                                         // 0x0000 (size: 0x8)
    double Y;                                                                         // 0x0008 (size: 0x8)
    double Z;                                                                         // 0x0010 (size: 0x8)
    double W;                                                                         // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FQuat4d
{
    double X;                                                                         // 0x0000 (size: 0x8)
    double Y;                                                                         // 0x0008 (size: 0x8)
    double Z;                                                                         // 0x0010 (size: 0x8)
    double W;                                                                         // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FQuat4f
{
    float X;                                                                          // 0x0000 (size: 0x4)
    float Y;                                                                          // 0x0004 (size: 0x4)
    float Z;                                                                          // 0x0008 (size: 0x4)
    float W;                                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

struct FRandomStream
{
    int32 InitialSeed;                                                                // 0x0000 (size: 0x4)
    int32 Seed;                                                                       // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FRotator
{
    double Pitch;                                                                     // 0x0000 (size: 0x8)
    double Yaw;                                                                       // 0x0008 (size: 0x8)
    double Roll;                                                                      // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FRotator3d
{
    double Pitch;                                                                     // 0x0000 (size: 0x8)
    double Yaw;                                                                       // 0x0008 (size: 0x8)
    double Roll;                                                                      // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FRotator3f
{
    float Pitch;                                                                      // 0x0000 (size: 0x4)
    float Yaw;                                                                        // 0x0004 (size: 0x4)
    float Roll;                                                                       // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FSoftClassPath : public FSoftObjectPath
{
}; // Size: 0x20

struct FSoftObjectPath
{
    FTopLevelAssetPath AssetPath;                                                     // 0x0000 (size: 0x10)
    FString SubPathString;                                                            // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FTemplateString
{
    FString Template;                                                                 // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTestUninitializedScriptStructMembersTest
{
    class UObject* UninitializedObjectReference;                                      // 0x0000 (size: 0x8)
    class UObject* InitializedObjectReference;                                        // 0x0008 (size: 0x8)
    float UnusedValue;                                                                // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FTimecode
{
    int32 Hours;                                                                      // 0x0000 (size: 0x4)
    int32 Minutes;                                                                    // 0x0004 (size: 0x4)
    int32 Seconds;                                                                    // 0x0008 (size: 0x4)
    int32 Frames;                                                                     // 0x000C (size: 0x4)
    bool bDropFrameFormat;                                                            // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FTimespan
{
}; // Size: 0x8

struct FTopLevelAssetPath
{
    FName PackageName;                                                                // 0x0000 (size: 0x8)
    FName AssetName;                                                                  // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FTransform
{
    FQuat Rotation;                                                                   // 0x0000 (size: 0x20)
    FVector Translation;                                                              // 0x0020 (size: 0x18)
    FVector Scale3D;                                                                  // 0x0040 (size: 0x18)

}; // Size: 0x60

struct FTransform3d
{
    FQuat4d Rotation;                                                                 // 0x0000 (size: 0x20)
    FVector3d Translation;                                                            // 0x0020 (size: 0x18)
    FVector3d Scale3D;                                                                // 0x0040 (size: 0x18)

}; // Size: 0x60

struct FTransform3f
{
    FQuat4f Rotation;                                                                 // 0x0000 (size: 0x10)
    FVector3f Translation;                                                            // 0x0010 (size: 0xC)
    FVector3f Scale3D;                                                                // 0x0020 (size: 0xC)

}; // Size: 0x30

struct FTwoVectors
{
    FVector v1;                                                                       // 0x0000 (size: 0x18)
    FVector v2;                                                                       // 0x0018 (size: 0x18)

}; // Size: 0x30

struct FUint32Point
{
    int32 X;                                                                          // 0x0000 (size: 0x4)
    int32 Y;                                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FUint32Vector
{
    uint32 X;                                                                         // 0x0000 (size: 0x4)
    uint32 Y;                                                                         // 0x0004 (size: 0x4)
    uint32 Z;                                                                         // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FUint32Vector2
{
    uint32 X;                                                                         // 0x0000 (size: 0x4)
    uint32 Y;                                                                         // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FUint32Vector4
{
    uint32 X;                                                                         // 0x0000 (size: 0x4)
    uint32 Y;                                                                         // 0x0004 (size: 0x4)
    uint32 Z;                                                                         // 0x0008 (size: 0x4)
    uint32 W;                                                                         // 0x000C (size: 0x4)

}; // Size: 0x10

struct FUint64Point
{
    int64 X;                                                                          // 0x0000 (size: 0x8)
    int64 Y;                                                                          // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FUint64Vector
{
    uint64 X;                                                                         // 0x0000 (size: 0x8)
    uint64 Y;                                                                         // 0x0008 (size: 0x8)
    uint64 Z;                                                                         // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FUint64Vector2
{
    uint64 X;                                                                         // 0x0000 (size: 0x8)
    uint64 Y;                                                                         // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FUint64Vector4
{
    uint64 X;                                                                         // 0x0000 (size: 0x8)
    uint64 Y;                                                                         // 0x0008 (size: 0x8)
    uint64 Z;                                                                         // 0x0010 (size: 0x8)
    uint64 W;                                                                         // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FUintPoint
{
    int32 X;                                                                          // 0x0000 (size: 0x4)
    int32 Y;                                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FUintVector
{
    uint32 X;                                                                         // 0x0000 (size: 0x4)
    uint32 Y;                                                                         // 0x0004 (size: 0x4)
    uint32 Z;                                                                         // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FUintVector2
{
    uint32 X;                                                                         // 0x0000 (size: 0x4)
    uint32 Y;                                                                         // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FUintVector4
{
    uint32 X;                                                                         // 0x0000 (size: 0x4)
    uint32 Y;                                                                         // 0x0004 (size: 0x4)
    uint32 Z;                                                                         // 0x0008 (size: 0x4)
    uint32 W;                                                                         // 0x000C (size: 0x4)

}; // Size: 0x10

struct FVector
{
    double X;                                                                         // 0x0000 (size: 0x8)
    double Y;                                                                         // 0x0008 (size: 0x8)
    double Z;                                                                         // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FVector2D
{
    double X;                                                                         // 0x0000 (size: 0x8)
    double Y;                                                                         // 0x0008 (size: 0x8)

}; // Size: 0x10

struct FVector2f
{
    float X;                                                                          // 0x0000 (size: 0x4)
    float Y;                                                                          // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FVector3d
{
    double X;                                                                         // 0x0000 (size: 0x8)
    double Y;                                                                         // 0x0008 (size: 0x8)
    double Z;                                                                         // 0x0010 (size: 0x8)

}; // Size: 0x18

struct FVector3f
{
    float X;                                                                          // 0x0000 (size: 0x4)
    float Y;                                                                          // 0x0004 (size: 0x4)
    float Z;                                                                          // 0x0008 (size: 0x4)

}; // Size: 0xC

struct FVector4
{
    double X;                                                                         // 0x0000 (size: 0x8)
    double Y;                                                                         // 0x0008 (size: 0x8)
    double Z;                                                                         // 0x0010 (size: 0x8)
    double W;                                                                         // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FVector4d
{
    double X;                                                                         // 0x0000 (size: 0x8)
    double Y;                                                                         // 0x0008 (size: 0x8)
    double Z;                                                                         // 0x0010 (size: 0x8)
    double W;                                                                         // 0x0018 (size: 0x8)

}; // Size: 0x20

struct FVector4f
{
    float X;                                                                          // 0x0000 (size: 0x4)
    float Y;                                                                          // 0x0004 (size: 0x4)
    float Z;                                                                          // 0x0008 (size: 0x4)
    float W;                                                                          // 0x000C (size: 0x4)

}; // Size: 0x10

class IInterface : public UObject
{
}; // Size: 0x28

class UArrayProperty : public UProperty
{
}; // Size: 0x78

class UBoolProperty : public UProperty
{
}; // Size: 0x78

class UByteProperty : public UNumericProperty
{
}; // Size: 0x78

class UClass : public UStruct
{
}; // Size: 0x210

class UClassProperty : public UObjectProperty
{
}; // Size: 0x80

class UDefault__Class
{
}; // Size: 0x0

class UDefault__DynamicClass
{
}; // Size: 0x0

class UDefault__LinkerPlaceholderClass
{
}; // Size: 0x0

class UDelegateFunction : public UFunction
{
}; // Size: 0xE0

class UDelegateProperty : public UProperty
{
}; // Size: 0x78

class UDoubleProperty : public UNumericProperty
{
}; // Size: 0x70

class UDynamicClass : public UClass
{
}; // Size: 0x290

class UEnum : public UField
{
}; // Size: 0x68

class UEnumProperty : public UProperty
{
}; // Size: 0x80

class UField : public UObject
{
}; // Size: 0x30

class UFloatProperty : public UNumericProperty
{
}; // Size: 0x70

class UFunction : public UStruct
{
}; // Size: 0xE0

class UGCObjectReferencer : public UObject
{
}; // Size: 0x40

class UInt16Property : public UNumericProperty
{
}; // Size: 0x70

class UInt64Property : public UNumericProperty
{
}; // Size: 0x70

class UInt8Property : public UNumericProperty
{
}; // Size: 0x70

class UIntProperty : public UNumericProperty
{
}; // Size: 0x70

class UInterfaceProperty : public UProperty
{
}; // Size: 0x78

class ULazyObjectProperty : public UObjectPropertyBase
{
}; // Size: 0x78

class ULinkerPlaceholderClass : public UClass
{
}; // Size: 0x3D0

class ULinkerPlaceholderExportObject : public UObject
{
}; // Size: 0xF8

class ULinkerPlaceholderFunction : public UFunction
{
}; // Size: 0x2A0

class UMapProperty : public UProperty
{
}; // Size: 0x98

class UMetaData : public UObject
{
}; // Size: 0xC8

class UMulticastDelegateProperty : public UProperty
{
}; // Size: 0x78

class UMulticastDelegatePropertyWrapper : public UPropertyWrapper
{
}; // Size: 0x30

class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{
}; // Size: 0x78

class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper
{
}; // Size: 0x30

class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
{
}; // Size: 0x78

class UNameProperty : public UProperty
{
}; // Size: 0x70

class UNumericProperty : public UProperty
{
}; // Size: 0x70

class UObject
{

    void ExecuteUbergraph(int32 EntryPoint);
}; // Size: 0x28

class UObjectProperty : public UObjectPropertyBase
{
}; // Size: 0x78

class UObjectPropertyBase : public UProperty
{
}; // Size: 0x78

class UObjectRedirector : public UObject
{
}; // Size: 0x30

class UPackage : public UObject
{
}; // Size: 0x90

class UPackageMap : public UObject
{
}; // Size: 0xE0

class UProperty : public UField
{
}; // Size: 0x70

class UPropertyWrapper : public UObject
{
}; // Size: 0x30

class UScriptStruct : public UStruct
{
}; // Size: 0xC0

class USetProperty : public UProperty
{
}; // Size: 0x90

class USoftClassProperty : public USoftObjectProperty
{
}; // Size: 0x80

class USoftObjectProperty : public UObjectPropertyBase
{
}; // Size: 0x78

class USparseDelegateFunction : public UDelegateFunction
{
}; // Size: 0xF0

class UStrProperty : public UProperty
{
}; // Size: 0x70

class UStruct : public UField
{
}; // Size: 0xB0

class UStructProperty : public UProperty
{
}; // Size: 0x78

class UTextBuffer : public UObject
{
}; // Size: 0x50

class UTextProperty : public UProperty
{
}; // Size: 0x70

class UUInt16Property : public UNumericProperty
{
}; // Size: 0x70

class UUInt32Property : public UNumericProperty
{
}; // Size: 0x70

class UUInt64Property : public UNumericProperty
{
}; // Size: 0x70

class UWeakObjectProperty : public UObjectPropertyBase
{
}; // Size: 0x78

#endif
