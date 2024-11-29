#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "TextureAddress.h"
#include "PhysicalMaterialMask.generated.h"

class UPhysicalMaterial;

UCLASS(Blueprintable, CollapseCategories)
class ENGINE_API UPhysicalMaterialMask : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UVChannelIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TextureAddress> AddressX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<TextureAddress> AddressY;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> CompressedData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PhysicalMaterials[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaskSizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaskSizeY;
    
public:
    UPhysicalMaterialMask();

};

