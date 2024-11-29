#pragma once
#include "CoreMinimal.h"
#include "WorldSubsystem.h"
#include "RainWetnessSubsystem.generated.h"

class UTexture2D;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class ENGINE_API URainWetnessSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* RainRipplesTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* RainPuddleNoiseTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* RainSpotsNoiseTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RainShadowMapRT;
    
public:
    URainWetnessSubsystem();

};

