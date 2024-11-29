#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "RazerChromaSubsystem.generated.h"

class URazerChromaCinematicEventTracker;
class URazerChromaEventTracker;

UCLASS(Blueprintable)
class URazerChromaSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URazerChromaEventTracker* EventTracker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URazerChromaCinematicEventTracker* CinematicEventTracker;
    
public:
    URazerChromaSubsystem();

};

