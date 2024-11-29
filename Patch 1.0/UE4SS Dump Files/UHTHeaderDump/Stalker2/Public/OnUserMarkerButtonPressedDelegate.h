#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EMarkerType.h"
#include "OnUserMarkerButtonPressedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnUserMarkerButtonPressed, EMarkerType, HoveredButton, const FVector&, InvokeCoordinates);

