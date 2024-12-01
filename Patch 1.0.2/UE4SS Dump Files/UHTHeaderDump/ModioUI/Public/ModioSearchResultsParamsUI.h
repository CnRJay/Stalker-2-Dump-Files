#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioModCategoryParams -FallbackName=ModioModCategoryParams
#include "EModioCommonSearchViewType.h"
#include "ModioSearchResultsParamsUI.generated.h"

UCLASS(Blueprintable)
class MODIOUI_API UModioSearchResultsParamsUI : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioModCategoryParams FilterParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EModioCommonSearchViewType SearchType;
    
    UModioSearchResultsParamsUI();

};

