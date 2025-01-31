#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EStreamlineSettingOverride.h"
#include "StreamlineOverrideSettings.generated.h"

UCLASS(Blueprintable, ProjectUserConfig, Config=Engine)
class STREAMLINERHI_API UStreamlineOverrideSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStreamlineSettingOverride EnableDLSSFGInPlayInEditorViewportsOverride;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStreamlineSettingOverride LoadDebugOverlayOverride;
    
    UStreamlineOverrideSettings();

};

