#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CommonAnalogCursorSettings.h"
#include "UIInputAction.h"
#include "CommonUIInputSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=Input)
class UCommonUIInputSettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLinkCursorToGamepadFocus;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UIActionProcessingPriority;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIInputAction> InputActions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIInputAction> ActionOverrides;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonAnalogCursorSettings AnalogCursorSettings;
    
public:
    UCommonUIInputSettings();

};

