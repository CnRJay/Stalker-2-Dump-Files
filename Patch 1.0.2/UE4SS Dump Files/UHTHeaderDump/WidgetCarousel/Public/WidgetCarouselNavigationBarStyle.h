#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ButtonStyle -FallbackName=ButtonStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyle -FallbackName=SlateWidgetStyle
#include "WidgetCarouselNavigationBarStyle.generated.h"

USTRUCT(BlueprintType)
struct WIDGETCAROUSEL_API FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush HighlightBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle LeftButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle CenterButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonStyle RightButtonStyle;
    
    FWidgetCarouselNavigationBarStyle();
};

