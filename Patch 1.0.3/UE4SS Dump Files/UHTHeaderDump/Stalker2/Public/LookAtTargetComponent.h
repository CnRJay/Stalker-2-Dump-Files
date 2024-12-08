#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "LookAtTargetComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API ULookAtTargetComponent : public USceneComponent {
    GENERATED_BODY()
public:
    ULookAtTargetComponent(const FObjectInitializer& ObjectInitializer);

};

