#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "OnFadeScreenEndedSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnFadeScreenEndedSignature, bool, bFadeOut, FLinearColor, FadeTargetColor, float, FadeAmount, float, FadeTime);

