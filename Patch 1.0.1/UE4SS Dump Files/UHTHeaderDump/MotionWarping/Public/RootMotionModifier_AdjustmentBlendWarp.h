#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimSequenceTrackContainer -FallbackName=AnimSequenceTrackContainer
#include "RootMotionModifier_Warp.h"
#include "RootMotionModifier_AdjustmentBlendWarp.generated.h"

UCLASS(Blueprintable, EditInlineNew, HideDropdown)
class MOTIONWARPING_API URootMotionModifier_AdjustmentBlendWarp : public URootMotionModifier_Warp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarpIKBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> IKBones;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CachedMeshTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CachedMeshRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform CachedRootMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimSequenceTrackContainer Result;
    
public:
    URootMotionModifier_AdjustmentBlendWarp();

};

