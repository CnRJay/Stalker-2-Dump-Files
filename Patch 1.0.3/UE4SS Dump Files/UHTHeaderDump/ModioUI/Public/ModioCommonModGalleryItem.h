#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModInfo -FallbackName=ModioModInfo
#include "ModioCommonModGalleryItem.generated.h"

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonModGalleryItem : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioModInfo ModInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ImageGalleryIndex;
    
    UModioCommonModGalleryItem();

};

