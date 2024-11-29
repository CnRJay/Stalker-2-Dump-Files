#pragma once
#include "CoreMinimal.h"
#include "ExpressionInput.h"
#include "MaterialAttributesInput.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FMaterialAttributesInput : public FExpressionInput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint64 PropertyConnectedBitmask;
    
    ENGINE_API FMaterialAttributesInput();
};

