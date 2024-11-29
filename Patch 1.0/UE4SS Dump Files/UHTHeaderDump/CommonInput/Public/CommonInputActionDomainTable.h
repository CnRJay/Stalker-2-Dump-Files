#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMouseCaptureMode -FallbackName=EMouseCaptureMode
#include "ECommonInputMode.h"
#include "CommonInputActionDomainTable.generated.h"

class UCommonInputActionDomain;

UCLASS(Blueprintable)
class COMMONINPUT_API UCommonInputActionDomainTable : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCommonInputActionDomain*> ActionDomains;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputMode InputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMouseCaptureMode MouseCaptureMode;
    
    UCommonInputActionDomainTable();

};

