#pragma once
#include "CoreMinimal.h"
#include "CellLockUser.generated.h"

USTRUCT(BlueprintType)
struct FCellLockUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Workstation;
    
    ENGINE_API FCellLockUser();
};

