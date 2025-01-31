#pragma once
#include "CoreMinimal.h"
#include "TextureMipGenSettings.generated.h"

UENUM(BlueprintType)
enum TextureMipGenSettings {
    TMGS_FromTextureGroup,
    TMGS_SimpleAverage,
    TMGS_Sharpen0,
    TMGS_Sharpen1,
    TMGS_Sharpen2,
    TMGS_Sharpen3,
    TMGS_Sharpen4,
    TMGS_Sharpen5,
    TMGS_Sharpen6,
    TMGS_Sharpen7,
    TMGS_Sharpen8,
    TMGS_Sharpen9,
    TMGS_Sharpen10,
    TMGS_NoMipmaps,
    TMGS_LeaveExistingMips,
    TMGS_Blur1,
    TMGS_Blur2,
    TMGS_Blur3,
    TMGS_Blur4,
    TMGS_Blur5,
    TMGS_Unfiltered,
    TMGS_Angular,
};

