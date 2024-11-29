#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "Templates/SubclassOf.h"
#include "CommonInputPlatformBaseData.generated.h"

class UCommonInputBaseControllerData;

USTRUCT(BlueprintType)
struct COMMONINPUT_API FCommonInputPlatformBaseData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputType DefaultInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsMouseAndKeyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsGamepad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DefaultGamepadName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanChangeGamepadType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsTouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UCommonInputBaseControllerData>> ControllerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCommonInputBaseControllerData>> ControllerDataClasses;
    
public:
    FCommonInputPlatformBaseData();
};

