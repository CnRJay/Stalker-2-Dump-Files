#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Templates/SubclassOf.h"
#include "ModioCommonFeaturedViewStyle.generated.h"

class UModioCommonSearchResultsViewStyle;

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonFeaturedViewStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonSearchResultsViewStyle> SearchResultsViewStyle;
    
    UModioCommonFeaturedViewStyle();

};

