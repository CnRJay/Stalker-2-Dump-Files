#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugDrawComponent -FallbackName=DebugDrawComponent
#include "SmartCoverRenderingComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API USmartCoverRenderingComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    USmartCoverRenderingComponent(const FObjectInitializer& ObjectInitializer);

};

