#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GroomCacheImportSettings.h"
#include "GroomCacheImportOptions.generated.h"

UCLASS(Blueprintable)
class HAIRSTRANDSCORE_API UGroomCacheImportOptions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroomCacheImportSettings ImportSettings;
    
    UGroomCacheImportOptions();

};

