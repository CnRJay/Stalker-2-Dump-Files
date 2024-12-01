#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "AnimPlayerCameraData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerCameraData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform TargetCameraTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraTransformAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DetectorCameraShakeAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClampedControlPitch;
    
    FAnimPlayerCameraData();
};

