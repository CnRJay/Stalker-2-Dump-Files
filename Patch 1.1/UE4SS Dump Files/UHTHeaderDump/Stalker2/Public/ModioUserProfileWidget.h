#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUI -ObjectName=ModioCommonUserProfileWidget -FallbackName=ModioCommonUserProfileWidget
#include "ModioUserProfileWidget.generated.h"

class UTextWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioUserProfileWidget : public UModioCommonUserProfileWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* NickNameText;
    
public:
    UModioUserProfileWidget();

};

