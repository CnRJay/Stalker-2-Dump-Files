#include "GeneralProjectSettings.h"

UGeneralProjectSettings::UGeneralProjectSettings() {
    this->CompanyName = TEXT("GSC Game World");
    this->CompanyDistinguishedName = TEXT("GSC Game World");
    this->CopyrightNotice = TEXT("GSC Game World. Copyrights 2018-2024. All rights reserved.");
    this->Description = TEXT("Description goes here.");
    this->ProjectName = TEXT("S.T.A.L.K.E.R. 2");
    this->ProjectVersion = TEXT("1.0.5");
    this->SupportContact = TEXT("support@stalker2.com");
    this->ProjectDisplayedTitle = FText::FromString(TEXT("S.T.A.L.K.E.R. 2: Heart of Chornobyl"));
    this->bShouldWindowPreserveAspectRatio = true;
    this->bUseBorderlessWindow = false;
    this->bStartInVR = false;
    this->bAllowWindowResize = false;
    this->bAllowClose = true;
    this->bAllowMaximize = true;
    this->bAllowMinimize = true;
    this->EyeOffsetForFakeStereoRenderingDevice = 0.03f;
    this->FOVForFakeStereoRenderingDevice = 100.00f;
}


