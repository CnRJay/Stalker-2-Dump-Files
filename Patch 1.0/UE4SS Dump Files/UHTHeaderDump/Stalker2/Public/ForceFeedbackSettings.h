#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "ForceFeedbackSettings.generated.h"

class UForceFeedbackDataAsset;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class STALKER2_API UForceFeedbackSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UForceFeedbackDataAsset> FeedbackDataAsset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StopAllPriority;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopCurrentProcessor;
    
public:
    UForceFeedbackSettings();

};

