#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "CreditsSpacer.generated.h"

class USpacer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class STALKER2_API UCreditsSpacer : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpacer* Spacer;
    
public:
    UCreditsSpacer();

};

