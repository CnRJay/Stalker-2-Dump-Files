#pragma once
#include "CoreMinimal.h"
#include "WorldSubsystem.h"
#include "CollisionStreamingSubsystem.generated.h"

UCLASS(Blueprintable)
class ENGINE_API UCollisionStreamingSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UCollisionStreamingSubsystem();

};

