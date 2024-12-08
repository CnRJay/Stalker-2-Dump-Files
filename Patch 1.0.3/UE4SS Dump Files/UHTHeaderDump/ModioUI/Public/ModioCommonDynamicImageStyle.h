#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "ModioCommonImageStyle.h"
#include "ModioCommonDynamicImageStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonDynamicImageStyle : public UModioCommonImageStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ImageLoadingBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ImageUnavailableBrush;
    
    UModioCommonDynamicImageStyle();

};

