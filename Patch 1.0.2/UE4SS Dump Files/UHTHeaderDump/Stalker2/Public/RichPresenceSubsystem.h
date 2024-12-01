#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayerSubsystem -FallbackName=LocalPlayerSubsystem
#include "RichPresenceSubsystem.generated.h"

UCLASS(Blueprintable)
class URichPresenceSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    URichPresenceSubsystem();

};

