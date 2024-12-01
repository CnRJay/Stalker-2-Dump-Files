#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateColor -FallbackName=SlateColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
#include "ModioCommonEditableTextBoxStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonEditableTextBoxStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTextLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText HintText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush NormalBackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush HoveredBackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush FocusedBackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ReadOnlyBackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Padding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ForegroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor BackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ReadOnlyForegroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor FocusedForegroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush NormalBorderBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush HoveredBorderBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ErrorBorderBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowHintIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush HintIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin HintIconPadding;
    
    UModioCommonEditableTextBoxStyle();

};

