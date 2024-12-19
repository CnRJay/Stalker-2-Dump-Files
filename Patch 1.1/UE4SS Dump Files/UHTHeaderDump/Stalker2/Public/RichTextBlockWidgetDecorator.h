#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=RichTextBlockDecorator -FallbackName=RichTextBlockDecorator
#include "RichTextBlockWidgetDecorator.generated.h"

class UDataTable;
class UUserWidget;

UCLASS(Abstract, Blueprintable)
class STALKER2_API URichTextBlockWidgetDecorator : public URichTextBlockDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UUserWidget*> ChachedWidgetsCreatedByDecorator;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* WidgetSet;
    
public:
    URichTextBlockWidgetDecorator();

};

