#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "MediaIOCoreSubsystem.generated.h"

UCLASS(Blueprintable)
class MEDIAIOCORE_API UMediaIOCoreSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    UMediaIOCoreSubsystem();

};

