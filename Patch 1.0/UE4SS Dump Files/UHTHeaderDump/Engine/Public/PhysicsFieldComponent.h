#pragma once
#include "CoreMinimal.h"
#include "SceneComponent.h"
#include "PhysicsFieldComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ENGINE_API UPhysicsFieldComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPhysicsFieldComponent(const FObjectInitializer& ObjectInitializer);

};

