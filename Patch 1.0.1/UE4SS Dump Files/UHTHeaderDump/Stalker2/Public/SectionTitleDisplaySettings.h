#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EHorizontalAlignment -FallbackName=EHorizontalAlignment
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "SectionTitleDisplaySettings.generated.h"

USTRUCT(BlueprintType)
struct FSectionTitleDisplaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Margin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    STALKER2_API FSectionTitleDisplaySettings();
};

