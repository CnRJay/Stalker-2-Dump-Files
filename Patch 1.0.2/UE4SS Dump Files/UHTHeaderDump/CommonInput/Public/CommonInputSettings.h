#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=PerPlatformSettings -FallbackName=PerPlatformSettings
#include "CommonInputPlatformBaseData.h"
#include "Templates/SubclassOf.h"
#include "CommonInputSettings.generated.h"

class UCommonInputActionDomainTable;
class UCommonUIInputData;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class COMMONINPUT_API UCommonInputSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UCommonUIInputData> InputData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformSettings PlatformInput;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCommonInputPlatformBaseData> CommonInputPlatformData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableInputMethodThrashingProtection;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InputMethodThrashingLimit;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double InputMethodThrashingWindowInSeconds;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double InputMethodThrashingCooldownInSeconds;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowOutOfFocusDeviceInput;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDefaultInputConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCommonInputActionDomainTable> ActionDomainTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonUIInputData> InputDataClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonInputActionDomainTable* ActionDomainTablePtr;
    
public:
    UCommonInputSettings();

};

