#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=SizeBox -FallbackName=SizeBox
#include "CommonVisualAttachment.generated.h"

UCLASS(Blueprintable)
class COMMONUI_API UCommonVisualAttachment : public USizeBox {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ContentAnchor;
    
    UCommonVisualAttachment();

};

