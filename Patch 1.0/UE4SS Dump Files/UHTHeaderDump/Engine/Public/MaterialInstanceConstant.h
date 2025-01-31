#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "MaterialInstance.h"
#include "MaterialInstanceConstant.generated.h"

class UTexture;

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UMaterialInstanceConstant : public UMaterialInstance {
    GENERATED_BODY()
public:
    UMaterialInstanceConstant();

    UFUNCTION(BlueprintCallable)
    FLinearColor K2_GetVectorParameterValue(FName ParameterName);
    
    UFUNCTION(BlueprintCallable)
    UTexture* K2_GetTextureParameterValue(FName ParameterName);
    
    UFUNCTION(BlueprintCallable)
    float K2_GetScalarParameterValue(FName ParameterName);
    
};

