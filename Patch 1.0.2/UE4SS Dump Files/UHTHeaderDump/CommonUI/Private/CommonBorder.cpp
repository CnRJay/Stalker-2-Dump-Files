#include "CommonBorder.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "Templates/SubclassOf.h"

UCommonBorder::UCommonBorder() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->Style = NULL;
    this->bReducePaddingBySafezone = false;
}

void UCommonBorder::SetStyle(TSubclassOf<UCommonBorderStyle> InStyle) {
}


