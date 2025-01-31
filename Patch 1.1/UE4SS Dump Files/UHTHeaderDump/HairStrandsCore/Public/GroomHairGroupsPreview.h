#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GroomHairGroupPreview.h"
#include "GroomHairGroupsPreview.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class HAIRSTRANDSCORE_API UGroomHairGroupsPreview : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGroomHairGroupPreview> Groups;
    
    UGroomHairGroupsPreview();

};

