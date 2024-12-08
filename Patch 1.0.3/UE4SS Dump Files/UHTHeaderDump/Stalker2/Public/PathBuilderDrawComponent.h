#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugDrawComponent -FallbackName=DebugDrawComponent
#include "PathBuilderDrawComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UPathBuilderDrawComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    UPathBuilderDrawComponent(const FObjectInitializer& ObjectInitializer);

};

