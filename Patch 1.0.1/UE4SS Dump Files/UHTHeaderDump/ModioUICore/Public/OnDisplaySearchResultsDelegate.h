#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioFilterParams -FallbackName=ModioFilterParams
#include "OnDisplaySearchResultsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FOnDisplaySearchResults, FModioFilterParams, Params);

