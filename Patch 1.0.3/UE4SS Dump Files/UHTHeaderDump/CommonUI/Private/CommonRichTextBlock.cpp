#include "CommonRichTextBlock.h"

UCommonRichTextBlock::UCommonRichTextBlock() : URichTextBlock(FObjectInitializer::Get()) {
    this->InlineIconDisplayMode = ERichTextInlineIconDisplayMode::IconOnly;
    this->bTintInlineIcon = false;
    this->DefaultTextStyleOverrideClass = NULL;
    this->MobileTextBlockScale = 1.00f;
    this->ScrollStyle = NULL;
    this->bIsScrollingEnabled = true;
    this->bDisplayAllCaps = false;
    this->bAutoCollapseWithEmptyText = false;
}

void UCommonRichTextBlock::SetScrollingEnabled(bool bInIsScrollingEnabled) {
}


