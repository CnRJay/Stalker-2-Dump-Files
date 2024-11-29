#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntPoint -FallbackName=IntPoint
#include "EMediaIOStandardType.h"
#include "MediaIOMode.generated.h"

USTRUCT(BlueprintType)
struct MEDIAIOCORE_API FMediaIOMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRate FrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntPoint Resolution;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaIOStandardType Standard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DeviceModeIdentifier;
    
    FMediaIOMode();
};

