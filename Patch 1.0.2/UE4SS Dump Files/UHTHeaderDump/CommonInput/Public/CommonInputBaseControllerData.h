#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CommonInputKeyBrushConfiguration.h"
#include "CommonInputKeySetBrushConfiguration.h"
#include "ECommonInputType.h"
#include "InputDeviceIdentifierPair.h"
#include "CommonInputBaseControllerData.generated.h"

class UTexture2D;

UCLASS(Abstract, Blueprintable)
class COMMONINPUT_API UCommonInputBaseControllerData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputType InputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GamepadName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GamepadDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GamepadCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText GamepadPlatformName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputDeviceIdentifierPair> GamepadHardwareIdMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ControllerTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ControllerButtonMaskTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommonInputKeyBrushConfiguration> InputBrushDataMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCommonInputKeySetBrushConfiguration> InputBrushKeySets;
    
    UCommonInputBaseControllerData();

    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetRegisteredGamepads();
    
};

