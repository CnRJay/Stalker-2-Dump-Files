#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModTagInfo -FallbackName=ModioModTagInfo
#include "ModioTagInfoUI.generated.h"

UCLASS(Blueprintable)
class MODIOUICORE_API UModioTagInfoUI : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModioModTagInfo Underlying;
    
    UModioTagInfoUI();

};

