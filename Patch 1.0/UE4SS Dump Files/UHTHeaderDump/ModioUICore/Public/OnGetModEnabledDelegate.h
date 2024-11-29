#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModID -FallbackName=ModioModID
#include "OnGetModEnabledDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_RetVal_OneParam(bool, FOnGetModEnabled, FModioModID, Mod);

