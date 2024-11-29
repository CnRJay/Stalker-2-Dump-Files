#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ModioModCategoryParams.h"
#include "ModioModCategoryParamsUI.generated.h"

UCLASS(Blueprintable)
class MODIOUICORE_API UModioModCategoryParamsUI : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioModCategoryParams Underlying;
    
    UModioModCategoryParamsUI();

};

