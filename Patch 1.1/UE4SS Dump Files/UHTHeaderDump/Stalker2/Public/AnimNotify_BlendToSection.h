#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AlphaBlend -FallbackName=AlphaBlend
#include "AnimNotifyBase.h"
#include "AnimNotify_BlendToSection.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class UAnimNotify_BlendToSection : public UAnimNotifyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlend BlendOption;
    
    UAnimNotify_BlendToSection();

};

