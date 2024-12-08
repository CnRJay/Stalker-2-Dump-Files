#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HairCardGenerationSettings.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class HAIRSTRANDSCORE_API UHairCardGenerationSettings : public UObject {
    GENERATED_BODY()
public:
    UHairCardGenerationSettings();

};

