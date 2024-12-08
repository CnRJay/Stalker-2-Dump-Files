#include "CommonLoadGuard.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility

UCommonLoadGuard::UCommonLoadGuard() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->ThrobberAlignment = HAlign_Center;
    this->LoadingText = FText::FromString(TEXT("Loading..."));
    this->TextStyle = NULL;
}

void UCommonLoadGuard::SetLoadingText(const FText& InLoadingText) {
}

void UCommonLoadGuard::SetIsLoading(bool bInIsLoading) {
}

bool UCommonLoadGuard::IsLoading() const {
    return false;
}

void UCommonLoadGuard::BP_GuardAndLoadAsset(const TSoftObjectPtr<UObject>& InLazyAsset, const UCommonLoadGuard::FOnAssetLoaded& OnAssetLoaded) {
}


