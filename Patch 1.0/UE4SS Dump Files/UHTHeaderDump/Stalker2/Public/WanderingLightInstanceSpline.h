#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineComponent -FallbackName=SplineComponent
#include "WanderingLightInstanceSpline.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UWanderingLightInstanceSpline : public USplineComponent {
    GENERATED_BODY()
public:
    UWanderingLightInstanceSpline(const FObjectInitializer& ObjectInitializer);

};

