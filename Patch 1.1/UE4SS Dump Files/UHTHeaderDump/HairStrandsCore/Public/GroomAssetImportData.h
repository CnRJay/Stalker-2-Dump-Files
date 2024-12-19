#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetImportData -FallbackName=AssetImportData
#include "GroomAssetImportData.generated.h"

class UGroomImportOptions;

UCLASS(Blueprintable, EditInlineNew)
class HAIRSTRANDSCORE_API UGroomAssetImportData : public UAssetImportData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGroomImportOptions* ImportOptions;
    
    UGroomAssetImportData();

};

