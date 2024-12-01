#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
#include "ModioCommonModGalleryParamsSettings.generated.h"

USTRUCT(BlueprintType)
struct MODIOUI_API FModioCommonModGalleryParamsSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle PreviousImageInputAction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NextImageInputAction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SubscribeInputAction;
    
    FModioCommonModGalleryParamsSettings();
};

