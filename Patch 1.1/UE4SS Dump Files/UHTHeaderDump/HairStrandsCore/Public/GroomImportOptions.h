#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GroomConversionSettings.h"
#include "HairGroupsInterpolation.h"
#include "GroomImportOptions.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class HAIRSTRANDSCORE_API UGroomImportOptions : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroomConversionSettings ConversionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHairGroupsInterpolation> InterpolationSettings;
    
    UGroomImportOptions();

};

