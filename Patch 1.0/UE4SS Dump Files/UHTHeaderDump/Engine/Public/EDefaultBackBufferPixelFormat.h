#pragma once
#include "CoreMinimal.h"
#include "EDefaultBackBufferPixelFormat.generated.h"

UENUM(BlueprintType)
namespace EDefaultBackBufferPixelFormat {
    enum Type {
        DBBPF_B8G8R8A8,
        DBBPF_A16B16G16R16_DEPRECATED,
        DBBPF_FloatRGB_DEPRECATED,
        DBBPF_FloatRGBA,
        DBBPF_A2B10G10R10,
    };
}

