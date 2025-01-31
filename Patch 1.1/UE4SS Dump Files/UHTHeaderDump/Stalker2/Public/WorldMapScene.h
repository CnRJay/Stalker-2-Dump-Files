#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "WorldMapScene.generated.h"

UCLASS(Blueprintable)
class STALKER2_API AWorldMapScene : public AActor {
    GENERATED_BODY()
public:
    AWorldMapScene(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetScale(float InScale);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetOffset(FVector2D InOffset);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNotSelectedAreaBrightness(float InBrightness);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMouseUV(FVector InUV);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCaptureEveryFrame(bool bIsEnabled);
    
};

