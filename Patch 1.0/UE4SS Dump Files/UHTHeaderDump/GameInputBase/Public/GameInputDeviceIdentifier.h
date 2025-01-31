#pragma once
#include "CoreMinimal.h"
#include "GameInputDeviceIdentifier.generated.h"

USTRUCT(BlueprintType)
struct GAMEINPUTBASE_API FGameInputDeviceIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 VendorId;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 ProductId;
    
    FGameInputDeviceIdentifier();
};

