#pragma once
#include "CoreMinimal.h"
#include "EDynamicIfReturnType.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionDynamicIf.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialExpressionDynamicIf : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput If;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Then;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Else;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDynamicIfReturnType> ReturnType;
    
    UMaterialExpressionDynamicIf();

};

