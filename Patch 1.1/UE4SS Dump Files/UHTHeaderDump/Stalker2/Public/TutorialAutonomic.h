#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "TutorialBase.h"
#include "TutorialAutonomic.generated.h"

class UBorder;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UTutorialAutonomic : public UTutorialBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* TextBackgroundBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin PaddingWithHint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin PaddingWithoutHint;
    
public:
    UTutorialAutonomic();

};

