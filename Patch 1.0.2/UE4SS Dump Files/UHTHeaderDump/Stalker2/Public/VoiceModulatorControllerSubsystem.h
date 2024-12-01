#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "VoiceModulatorControllerSubsystem.generated.h"

UCLASS(Blueprintable)
class UVoiceModulatorControllerSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UVoiceModulatorControllerSubsystem();

};

