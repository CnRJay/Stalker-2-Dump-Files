#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "CreditsImage.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UCreditsImage : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image;
    
public:
    UCreditsImage();

};

