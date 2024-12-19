#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GSCLoadingScreenSettingsWrapper.generated.h"

class UGSCLoadingScreenSettings;

UCLASS(Blueprintable)
class GSCLOADINGSCREEN_API UGSCLoadingScreenSettingsWrapper : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGSCLoadingScreenSettings* Settings;
    
    UGSCLoadingScreenSettingsWrapper();

};

