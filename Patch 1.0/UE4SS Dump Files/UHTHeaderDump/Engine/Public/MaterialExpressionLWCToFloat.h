#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionLWCToFloat.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionLWCToFloat : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Input;
    
    UMaterialExpressionLWCToFloat();

};

