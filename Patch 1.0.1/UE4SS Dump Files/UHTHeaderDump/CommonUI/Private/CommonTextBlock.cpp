#include "CommonTextBlock.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "Templates/SubclassOf.h"

UCommonTextBlock::UCommonTextBlock() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->Style = NULL;
    this->ScrollStyle = NULL;
    this->StyleSheet = NULL;
    this->bIsScrollingEnabled = true;
    this->bDisplayAllCaps = false;
    this->bAutoCollapseWithEmptyText = false;
    this->MobileFontSizeMultiplier = 1.00f;
}

void UCommonTextBlock::SetWrapTextWidth(int32 InWrapTextAt) {
}

void UCommonTextBlock::SetTextCase(bool bUseAllCaps) {
}

void UCommonTextBlock::SetStyle(TSubclassOf<UCommonTextStyle> InStyle) {
}

void UCommonTextBlock::SetScrollingEnabled(bool bInIsScrollingEnabled) {
}

void UCommonTextBlock::SetMargin(const FMargin& InMargin) {
}

void UCommonTextBlock::SetLineHeightPercentage(float InLineHeightPercentage) {
}

void UCommonTextBlock::ResetScrollState() {
}

FMargin UCommonTextBlock::GetMargin() {
    return FMargin{};
}


