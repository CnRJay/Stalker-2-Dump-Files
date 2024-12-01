#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "WidgetBase.h"
#include "DialogueSpeaker.generated.h"

class UImage;
class URichTextWidget;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UDialogueSpeaker : public UWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextWidget* SpeakerText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Background;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldResetTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* BackgrounTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MoveWidgetOffset;
    
    UDialogueSpeaker();

};

