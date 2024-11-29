#pragma once
#include "CoreMinimal.h"
#include "AnimNode_Base.h"
#include "EExternalPoseUse.h"
#include "PoseLink.h"
#include "AnimNode_CachePoseExternal_GSC.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct ENGINE_API FAnimNode_CachePoseExternal_GSC : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink InputPose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EExternalPoseUse ExternalPoseUse;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMeshComponent;
    
public:
    FAnimNode_CachePoseExternal_GSC();
};

