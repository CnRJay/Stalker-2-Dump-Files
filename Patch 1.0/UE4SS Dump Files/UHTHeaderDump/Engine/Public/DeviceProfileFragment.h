#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DeviceProfileFragment.generated.h"

UCLASS(Blueprintable, PerObjectConfig, Config=DeviceProfiles)
class ENGINE_API UDeviceProfileFragment : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CVars;
    
    UDeviceProfileFragment();

};

