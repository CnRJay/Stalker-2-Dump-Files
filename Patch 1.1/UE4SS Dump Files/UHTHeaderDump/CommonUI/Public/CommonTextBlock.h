#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=TextBlock -FallbackName=TextBlock
#include "Templates/SubclassOf.h"
#include "CommonTextBlock.generated.h"

class UCommonStyleSheet;
class UCommonTextScrollStyle;
class UCommonTextStyle;

UCLASS(Blueprintable, DefaultConfig, Config=CommonUI)
class COMMONUI_API UCommonTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonTextStyle> Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonTextScrollStyle> ScrollStyle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonStyleSheet* StyleSheet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScrollingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisplayAllCaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCollapseWithEmptyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MobileFontSizeMultiplier;
    
public:
    UCommonTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetWrapTextWidth(int32 InWrapTextAt);
    
    UFUNCTION(BlueprintCallable)
    void SetTextCase(bool bUseAllCaps);
    
    UFUNCTION(BlueprintCallable)
    void SetStyle(TSubclassOf<UCommonTextStyle> InStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetScrollingEnabled(bool bInIsScrollingEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetMargin(const FMargin& InMargin);
    
    UFUNCTION(BlueprintCallable)
    void SetLineHeightPercentage(float InLineHeightPercentage);
    
    UFUNCTION(BlueprintCallable)
    void ResetScrollState();
    
    UFUNCTION(BlueprintCallable)
    FMargin GetMargin();
    
};

