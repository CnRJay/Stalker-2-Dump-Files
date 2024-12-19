#include "CommonWidgetCarouselNavBar.h"

UCommonWidgetCarouselNavBar::UCommonWidgetCarouselNavBar() {
    this->ButtonWidgetType = NULL;
    this->LinkedCarousel = NULL;
    this->ButtonGroup = NULL;
}

void UCommonWidgetCarouselNavBar::SetLinkedCarousel(UCommonWidgetCarousel* CommonCarousel) {
}

void UCommonWidgetCarouselNavBar::HandlePageChanged(UCommonWidgetCarousel* CommonCarousel, int32 PageIndex) {
}

void UCommonWidgetCarouselNavBar::HandleButtonClicked(UCommonButtonBase* AssociatedButton, int32 ButtonIndex) {
}


