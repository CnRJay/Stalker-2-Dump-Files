#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "GSCComponentReference.h"
#include "SignalToSend.generated.h"

USTRUCT(BlueprintType)
struct FSignalToSend {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGSCComponentReference ReceiverComponentRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ReceiverGuid;
    
    STALKER2_API FSignalToSend();
};

