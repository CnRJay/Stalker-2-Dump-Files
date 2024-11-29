#include "CommonLazyWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility

UCommonLazyWidget::UCommonLazyWidget() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->Content = NULL;
}

void UCommonLazyWidget::SetLazyContent(const TSoftClassPtr<UUserWidget> SoftWidget) {
}

bool UCommonLazyWidget::IsLoading() const {
    return false;
}

UUserWidget* UCommonLazyWidget::GetContent() const {
    return NULL;
}


