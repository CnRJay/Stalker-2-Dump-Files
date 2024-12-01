#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "StreamlineSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class STREAMLINERHI_API UStreamlineSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableStreamlineD3D12;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableStreamlineD3D11;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableDLSSFGInPlayInEditorViewports;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadDebugOverlay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowOTAUpdate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NVIDIANGXApplicationId;
    
    UStreamlineSettings();

};

