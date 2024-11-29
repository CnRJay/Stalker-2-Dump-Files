#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=PlatformSettings -FallbackName=PlatformSettings
#include "ECommonInputType.h"
#include "Templates/SubclassOf.h"
#include "CommonInputPlatformSettings.generated.h"

class UCommonInputBaseControllerData;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class COMMONINPUT_API UCommonInputPlatformSettings : public UPlatformSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputType DefaultInputType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsMouseAndKeyboard;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsTouch;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsGamepad;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultGamepadName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanChangeGamepadType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UCommonInputBaseControllerData>> ControllerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCommonInputBaseControllerData>> ControllerDataClasses;
    
public:
    UCommonInputPlatformSettings();

};

