#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Slate -ObjectName=ESelectionMode -FallbackName=ESelectionMode
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EOrientation -FallbackName=EOrientation
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ScrollBarStyle -FallbackName=ScrollBarStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=TableViewStyle -FallbackName=TableViewStyle
#include "ModioCommonListViewStyle.generated.h"

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonListViewStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTableViewStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScrollBarStyle ScrollBarStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESelectionMode::Type> SelectionMode;
    
    UModioCommonListViewStyle();

};

