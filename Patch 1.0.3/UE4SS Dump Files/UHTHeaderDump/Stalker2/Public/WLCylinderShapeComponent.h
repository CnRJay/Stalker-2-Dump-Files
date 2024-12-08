#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugDrawComponent -FallbackName=DebugDrawComponent
#include "WLCylinderShapeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UWLCylinderShapeComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    UWLCylinderShapeComponent(const FObjectInitializer& ObjectInitializer);

};

