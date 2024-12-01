#pragma once
#include "CoreMinimal.h"
#include "FootPlacementInterpolationSettings.generated.h"

USTRUCT(BlueprintType)
struct FFootPlacementInterpolationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnplantLinearStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnplantLinearDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnplantAngularStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UnplantAngularDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloorLinearStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloorLinearDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloorAngularStiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloorAngularDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFloorInterpolation;
    
    ANIMATIONWARPINGRUNTIME_API FFootPlacementInterpolationSettings();
};

