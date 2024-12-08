#pragma once
#include "CoreMinimal.h"
#include "InputDeviceIdentifierPair.generated.h"

USTRUCT(BlueprintType)
struct FInputDeviceIdentifierPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputDeviceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HardwareDeviceIdentifier;
    
    COMMONINPUT_API FInputDeviceIdentifierPair();
};

