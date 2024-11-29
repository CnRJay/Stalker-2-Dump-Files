#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialExpression.h"
#include "MaterialExpressionLightmassReplace.generated.h"

UCLASS(Blueprintable)
class UMaterialExpressionLightmassReplace : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput RealTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FExpressionInput Lightmass;
    
    UMaterialExpressionLightmassReplace();

};

