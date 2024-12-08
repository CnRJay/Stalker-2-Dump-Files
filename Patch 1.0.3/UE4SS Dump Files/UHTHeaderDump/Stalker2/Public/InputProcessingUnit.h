#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InputBufferIPUStruct.h"
#include "InputProcessingUnit.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UInputProcessingUnit : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInputBufferIPUStruct> InputBuffer;
    
public:
    UInputProcessingUnit();

};

