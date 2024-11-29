#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=EAkCallbackType -FallbackName=EAkCallbackType
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PlaySoundQuestNodeListener.generated.h"

class UAkCallbackInfo;

UCLASS(Blueprintable)
class STALKER2_API UPlaySoundQuestNodeListener : public UObject {
    GENERATED_BODY()
public:
    UPlaySoundQuestNodeListener();

    UFUNCTION(BlueprintCallable)
    void OnSoundFinished(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
};

