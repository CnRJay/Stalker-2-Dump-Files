#pragma once
#include "CoreMinimal.h"
#include "CommonButtonBaseClickedDelegate.generated.h"

class UCommonButtonBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCommonButtonBaseClicked, UCommonButtonBase*, Button);

