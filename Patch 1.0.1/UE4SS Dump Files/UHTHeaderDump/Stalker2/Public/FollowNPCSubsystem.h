#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "FollowNPCSubsystem.generated.h"

UCLASS(Blueprintable)
class UFollowNPCSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UFollowNPCSubsystem();

};

