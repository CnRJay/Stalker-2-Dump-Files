#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GroomBindingAssetList.generated.h"

class UGroomBindingAsset;

UCLASS(Blueprintable)
class HAIRSTRANDSCORE_API UGroomBindingAssetList : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGroomBindingAsset*> Bindings;
    
    UGroomBindingAssetList();

};

