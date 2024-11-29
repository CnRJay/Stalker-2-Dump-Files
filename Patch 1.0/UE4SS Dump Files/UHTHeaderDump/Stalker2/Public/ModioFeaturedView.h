#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUI -ObjectName=ModioCommonFeaturedView -FallbackName=ModioCommonFeaturedView
#include "ModioFeaturedView.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UModioFeaturedView : public UModioCommonFeaturedView {
    GENERATED_BODY()
public:
    UModioFeaturedView();

};

