#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Templates/SubclassOf.h"
#include "ModioCommonModGalleryViewStyle.generated.h"

class UModioCommonDynamicImageStyle;

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonModGalleryViewStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonDynamicImageStyle> GalleryImageStyle;
    
    UModioCommonModGalleryViewStyle();

};

