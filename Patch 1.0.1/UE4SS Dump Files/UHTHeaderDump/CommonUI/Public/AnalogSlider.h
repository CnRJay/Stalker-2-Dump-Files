#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=OnFloatValueChangedEvent__DelegateSignature -FallbackName=OnFloatValueChangedEventDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Slider -FallbackName=Slider
#include "AnalogSlider.generated.h"

UCLASS(Blueprintable)
class COMMONUI_API UAnalogSlider : public USlider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFloatValueChangedEvent OnAnalogCapture;
    
    UAnalogSlider();

};

