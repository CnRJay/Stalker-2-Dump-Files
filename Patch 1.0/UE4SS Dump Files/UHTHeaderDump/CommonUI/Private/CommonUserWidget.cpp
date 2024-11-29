#include "CommonUserWidget.h"

UCommonUserWidget::UCommonUserWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->bDisplayInActionBar = false;
    this->bConsumePointerInput = false;
}

void UCommonUserWidget::SetConsumePointerInput(bool bInConsumePointerInput) {
}


