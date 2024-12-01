#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AnimPlayerWeaponSwingData.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FAnimPlayerWeaponSwingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator ItemTotalRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ItemTotalShift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ItemSocketTotalShift;
    
    FAnimPlayerWeaponSwingData();
};

