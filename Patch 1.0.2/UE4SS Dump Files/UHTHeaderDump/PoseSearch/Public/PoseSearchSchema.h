#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReferenceSkeletonProvider -FallbackName=BoneReferenceSkeletonProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "EPoseSearchDataPreprocessor.h"
#include "PoseSearchSchemaColorPreset.h"
#include "PoseSearchSchema.generated.h"

class UMirrorDataTable;
class UPoseSearchFeatureChannel;
class USkeleton;

UCLASS(Blueprintable)
class POSESEARCH_API UPoseSearchSchema : public UDataAsset, public IBoneReferenceSkeletonProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeleton* Skeleton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPoseSearchFeatureChannel*> Channels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMirrorDataTable* MirrorDataTable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPoseSearchDataPreprocessor DataPreprocessor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SchemaCardinality;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoneReference> BoneReferences;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint16> BoneIndices;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint16> BoneIndicesWithParents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContinuingPoseCostBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseCostBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MirrorMismatchCostBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SequenceEndExlusionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPoseSearchSchemaColorPreset> ColorPresets;
    
    UPoseSearchSchema();


    // Fix for true pure virtual functions not being implemented
};

