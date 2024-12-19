#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=PerPlatformSettings -FallbackName=PerPlatformSettings
#include "GameInputDeviceConfiguration.h"
#include "GameInputDeveloperSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Input)
class GAMEINPUTBASE_API UGameInputDeveloperSettings : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameInputDeviceConfiguration> DeviceConfigurations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformSettings PlatformSpecificSettings;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDoNotProcessDuplicateCapabilitiesForSingleUser;
    
    UGameInputDeveloperSettings();

};

