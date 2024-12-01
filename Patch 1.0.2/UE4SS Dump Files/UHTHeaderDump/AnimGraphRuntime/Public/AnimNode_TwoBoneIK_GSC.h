#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimationCore -ObjectName=Axis -FallbackName=Axis
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneReference -FallbackName=BoneReference
#include "AnimNode_SkeletalControlBase.h"
#include "AnimNode_TwoBoneIK_GSC.generated.h"

class USkeletalMeshComponent;

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_TwoBoneIK_GSC : public FAnimNode_SkeletalControlBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference IKBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartStretchRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStretchScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* WeaponSkeletalMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EffectorWeaponSocketName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference JointBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector JointBoneOffset;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoneReference WeaponBone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ExtraRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSocketRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAxis TwistAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowStretching: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowTwist: 1;
    
    FAnimNode_TwoBoneIK_GSC();
};

