#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraModifier -FallbackName=CameraModifier
#include "CameraModifier_ResetRelativeRotation.generated.h"

UCLASS(Blueprintable)
class UCameraModifier_ResetRelativeRotation : public UCameraModifier {
    GENERATED_BODY()
public:
    UCameraModifier_ResetRelativeRotation();

};

