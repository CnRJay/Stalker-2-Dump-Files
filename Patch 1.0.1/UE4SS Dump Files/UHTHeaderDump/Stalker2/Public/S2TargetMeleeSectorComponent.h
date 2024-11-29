#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SectorSelector -ObjectName=TargetMeleeSectorComponent -FallbackName=TargetMeleeSectorComponent
#include "S2TargetMeleeSectorComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class US2TargetMeleeSectorComponent : public UTargetMeleeSectorComponent {
    GENERATED_BODY()
public:
    US2TargetMeleeSectorComponent(const FObjectInitializer& ObjectInitializer);

};

