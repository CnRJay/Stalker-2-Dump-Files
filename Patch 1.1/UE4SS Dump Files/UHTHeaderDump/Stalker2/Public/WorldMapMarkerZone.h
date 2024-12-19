#pragma once
#include "CoreMinimal.h"
#include "WidgetBase.h"
#include "WorldMapMarkerZone.generated.h"

class UCanvasPanel;
class UCanvasPanelSlot;
class UImage;
class USizeBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UWorldMapMarkerZone : public UWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ZoneMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* SizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialScaleFieldName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialColorFieldName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanelSlot* ParentCanvasSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCanvasPanel* ZoneCanvas;
    
public:
    UWorldMapMarkerZone();

};

