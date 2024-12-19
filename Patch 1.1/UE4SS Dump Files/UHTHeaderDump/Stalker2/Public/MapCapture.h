#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=IntVector2 -FallbackName=IntVector2
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCapture2D -FallbackName=SceneCapture2D
#include "CaptureConfig.h"
#include "MapCapture.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class STALKER2_API AMapCapture : public ASceneCapture2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector2 StartCaptureLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector2 EyeAdaptationTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector2 DebugCaptureLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCaptureConfig CaptureConfig;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
public:
    AMapCapture(const FObjectInitializer& ObjectInitializer);

};

