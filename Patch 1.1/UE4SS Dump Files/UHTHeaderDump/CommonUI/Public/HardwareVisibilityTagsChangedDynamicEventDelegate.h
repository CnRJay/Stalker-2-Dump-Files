#pragma once
#include "CoreMinimal.h"
#include "HardwareVisibilityTagsChangedDynamicEventDelegate.generated.h"

class UCommonUIVisibilitySubsystem;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHardwareVisibilityTagsChangedDynamicEvent, UCommonUIVisibilitySubsystem*, TagSubsystem);

