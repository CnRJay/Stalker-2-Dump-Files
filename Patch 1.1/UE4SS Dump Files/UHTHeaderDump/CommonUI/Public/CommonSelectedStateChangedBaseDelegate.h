#pragma once
#include "CoreMinimal.h"
#include "CommonSelectedStateChangedBaseDelegate.generated.h"

class UCommonButtonBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCommonSelectedStateChangedBase, UCommonButtonBase*, Button, bool, Selected);

