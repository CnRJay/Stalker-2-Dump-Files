#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "GSC_RelationColors.generated.h"

USTRUCT(BlueprintType)
struct STALKER2_API FGSC_RelationColors : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ColourStyleID;
    
    FGSC_RelationColors();
};

