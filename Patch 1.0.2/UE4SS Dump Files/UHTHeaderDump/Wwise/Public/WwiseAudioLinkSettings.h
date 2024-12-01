#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioLinkCore -ObjectName=AudioLinkSettingsAbstract -FallbackName=AudioLinkSettingsAbstract
#include "WwiseAudioLinkSettings.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, DefaultConfig, EditInlineNew, Config=Game)
class WWISE_API UWwiseAudioLinkSettings : public UAudioLinkSettingsAbstract {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> StartEvent;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldClearBufferOnReceipt;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProducerToConsumerBufferRatio;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialSilenceFillRatio;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StartEventResolved;
    
public:
    UWwiseAudioLinkSettings();

};

