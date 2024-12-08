#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUI -ObjectName=ModioCommonTermsOfUseViewBase -FallbackName=ModioCommonTermsOfUseViewBase
#include "ModioTermsOfUsePopup.generated.h"

class UHyperlinkButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioTermsOfUsePopup : public UModioCommonTermsOfUseViewBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHyperlinkButton* PrivacyPolicyButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHyperlinkButton* TermsOfUseButton;
    
public:
    UModioTermsOfUsePopup();

};

