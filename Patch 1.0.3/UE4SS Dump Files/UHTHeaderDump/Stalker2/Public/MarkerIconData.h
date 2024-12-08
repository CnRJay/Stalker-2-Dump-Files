#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EMarkerState.h"
#include "MarkerStateIconsData.h"
#include "MarkerIconData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FMarkerIconData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMarkerState, FMarkerStateIconsData> MarkerStateIcons;
    
    FMarkerIconData();
};

