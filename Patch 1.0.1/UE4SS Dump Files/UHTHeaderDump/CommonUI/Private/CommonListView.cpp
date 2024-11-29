#include "CommonListView.h"

UCommonListView::UCommonListView() : UListView(FObjectInitializer::Get()) {
    this->bEnableScrollAnimation = true;
}

void UCommonListView::SetEntrySpacing(float InEntrySpacing) {
}


