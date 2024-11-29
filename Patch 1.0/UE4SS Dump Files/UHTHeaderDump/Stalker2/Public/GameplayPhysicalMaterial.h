#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=PhysicalMaterial -FallbackName=PhysicalMaterial
#include "EPhysicalMaterialType.h"
#include "GameplayPhysicalMaterial.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class STALKER2_API UGameplayPhysicalMaterial : public UPhysicalMaterial {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowCustomPhysicalMaterialType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPhysicalMaterialType CustomPhysicalMaterialType;
    
public:
    UGameplayPhysicalMaterial();

};

