#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GAPlayerProcessorInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class UGAPlayerProcessorInterface : public UObject {
    GENERATED_BODY()
public:
    UGAPlayerProcessorInterface();

};

