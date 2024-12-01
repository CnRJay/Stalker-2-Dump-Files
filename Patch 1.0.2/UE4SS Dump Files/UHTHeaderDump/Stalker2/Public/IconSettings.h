#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "StyleManagerActionType.h"
#include "IconSettings.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FIconSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    StyleManagerActionType StyleAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIconCheckPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Brush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableResize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D IconSize;
    
    FIconSettings();
};

