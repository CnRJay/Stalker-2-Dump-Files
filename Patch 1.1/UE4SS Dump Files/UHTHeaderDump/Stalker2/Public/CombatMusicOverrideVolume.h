#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Volume -FallbackName=Volume
#include "CombatMusicOverrideVolume.generated.h"

class UAkSwitchValue;

UCLASS(Blueprintable)
class STALKER2_API ACombatMusicOverrideVolume : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UAkSwitchValue>> CombatTracks;
    
public:
    ACombatMusicOverrideVolume(const FObjectInitializer& ObjectInitializer);

};

