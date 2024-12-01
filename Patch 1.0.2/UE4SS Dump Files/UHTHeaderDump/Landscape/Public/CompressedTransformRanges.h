#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator3f -FallbackName=Rotator3f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
#include "EScaleMode.h"
#include "CompressedTransformRanges.generated.h"

USTRUCT(BlueprintType)
struct FCompressedTransformRanges {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator3f MinRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator3f MaxRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f MinScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f MaxScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f MinPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3f MaxPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScaleMode ScaleMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsHeight8Bit;
    
    LANDSCAPE_API FCompressedTransformRanges();
};

