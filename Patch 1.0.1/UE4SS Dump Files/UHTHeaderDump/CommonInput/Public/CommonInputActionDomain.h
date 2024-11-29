#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMouseCaptureMode -FallbackName=EMouseCaptureMode
#include "ECommonInputEventFlowBehavior.h"
#include "ECommonInputMode.h"
#include "CommonInputActionDomain.generated.h"

UCLASS(Blueprintable)
class COMMONINPUT_API UCommonInputActionDomain : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputEventFlowBehavior Behavior;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputEventFlowBehavior InnerBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseActionDomainDesiredInputConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommonInputMode InputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMouseCaptureMode MouseCaptureMode;
    
    UCommonInputActionDomain();

};

