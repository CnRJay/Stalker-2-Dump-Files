#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimAlphaInputType -FallbackName=EAnimAlphaInputType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputAlphaBoolBlend -FallbackName=InputAlphaBoolBlend
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputScaleBias -FallbackName=InputScaleBias
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InputScaleBiasClamp -FallbackName=InputScaleBiasClamp
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseLink -FallbackName=PoseLink
#include "AnimNode_CurveBlend_GSC.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FAnimNode_CurveBlend_GSC : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink SourcePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink A;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseLink B;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CurveArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAnimAlphaInputType AlphaInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlphaBoolEnabled: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bResetChildOnActivation: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Alpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputScaleBias AlphaScaleBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputAlphaBoolBlend AlphaBoolBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AlphaCurveName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputScaleBiasClamp AlphaScaleBiasClamp;
    
    FAnimNode_CurveBlend_GSC();
};

