#pragma once
#include "CoreMinimal.h"
#include "SimpleButtonBaseGroupDelegateDelegate.generated.h"

class UCommonButtonBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSimpleButtonBaseGroupDelegate, UCommonButtonBase*, AssociatedButton, int32, ButtonIndex);

