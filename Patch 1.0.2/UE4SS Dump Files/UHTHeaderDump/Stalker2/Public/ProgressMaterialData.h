#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "ProgressMaterialData.generated.h"

USTRUCT(BlueprintType)
struct FProgressMaterialData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush ProgressMaterialBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialParameterName;
    
    STALKER2_API FProgressMaterialData();
};

