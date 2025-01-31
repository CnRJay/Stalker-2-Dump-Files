#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DialogDoFComponent.generated.h"

class AWeatherController;
class UWorld;

UCLASS(Blueprintable, DefaultConfig, Config=DialogSystem)
class STALKER2_API UDialogDoFComponent : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AWeatherController> WeatherController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> CachedWorld;
    
public:
    UDialogDoFComponent();

};

