#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioFilterParams -FallbackName=ModioFilterParams
#include "ModioFilterParamsUI.generated.h"

UCLASS(Blueprintable)
class MODIOUICORE_API UModioFilterParamsUI : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioFilterParams Underlying;
    
    UModioFilterParamsUI();

};

