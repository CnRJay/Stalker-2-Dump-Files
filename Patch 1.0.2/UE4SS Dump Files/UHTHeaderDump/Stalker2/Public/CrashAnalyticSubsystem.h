#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "CrashAnalyticSubsystem.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UCrashAnalyticSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UCrashAnalyticSubsystem();

};

