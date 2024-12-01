#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "TickOnlyInEditorActor.generated.h"

UCLASS(Blueprintable)
class PREFABASSET_API ATickOnlyInEditorActor : public AActor {
    GENERATED_BODY()
public:
    ATickOnlyInEditorActor(const FObjectInitializer& ObjectInitializer);

};

