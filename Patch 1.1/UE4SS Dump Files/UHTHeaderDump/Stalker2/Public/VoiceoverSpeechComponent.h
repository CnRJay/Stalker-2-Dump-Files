#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=EAkCallbackType -FallbackName=EAkCallbackType
#include "SpeechComponent.h"
#include "VoiceoverSpeechComponent.generated.h"

class UAkCallbackInfo;
class UAkComponent;

UCLASS(Blueprintable)
class UVoiceoverSpeechComponent : public USpeechComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* AkVoiceoverSpeakerComponent;
    
public:
    UVoiceoverSpeechComponent();

private:
    UFUNCTION(BlueprintCallable)
    void OnAKEventFinished(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
};

