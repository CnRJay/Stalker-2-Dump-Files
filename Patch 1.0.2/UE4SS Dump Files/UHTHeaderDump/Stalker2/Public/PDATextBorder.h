#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "WidgetBase.h"
#include "PDATextBorder.generated.h"

class UImage;
class UTextWidget;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UPDATextBorder : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* LeftBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* RightBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextWidget* BorderText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SizeLine;
    
    UPDATextBorder();

};

