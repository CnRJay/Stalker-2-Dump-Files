#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugDrawComponent -FallbackName=DebugDrawComponent
#include "DrawGSCDebug.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UDrawGSCDebug : public UDebugDrawComponent {
    GENERATED_BODY()
public:
    UDrawGSCDebug(const FObjectInitializer& ObjectInitializer);

};

