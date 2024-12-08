#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "SkipKeyHint.generated.h"

class UHintControllerBase;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API USkipKeyHint : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHintControllerBase* InputController;
    
public:
    USkipKeyHint();

};

