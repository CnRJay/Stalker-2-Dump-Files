#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EModioAuthenticationProvider.h"
#include "EModioPlatformName.h"
#include "EModioPortal.h"
#include "ModioPlatformHelpersLibrary.generated.h"

UCLASS(Blueprintable)
class MODIO_API UModioPlatformHelpersLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModioPlatformHelpersLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EModioPortal GetDefaultPortalForCurrentPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EModioAuthenticationProvider GetDefaultAuthProviderForCurrentPlatform();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EModioPlatformName GetCurrentPlatform();
    
};

