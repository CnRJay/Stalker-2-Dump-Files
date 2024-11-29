#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonBorder -FallbackName=CommonBorder
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Geometry -FallbackName=Geometry
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=PointerEvent -FallbackName=PointerEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=EventReply -FallbackName=EventReply
#include "ModioCommonBorder.generated.h"

UCLASS(Blueprintable)
class MODIOUI_API UModioCommonBorder : public UCommonBorder {
    GENERATED_BODY()
public:
    UModioCommonBorder();

protected:
    UFUNCTION(BlueprintCallable)
    FEventReply HandleOnMouseButtonDownEvent(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
};

