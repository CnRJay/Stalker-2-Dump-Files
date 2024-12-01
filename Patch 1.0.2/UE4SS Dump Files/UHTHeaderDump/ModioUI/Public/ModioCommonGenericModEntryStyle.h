#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Templates/SubclassOf.h"
#include "ModioCommonGenericModEntryStyle.generated.h"

class UModioCommonGenericModEntryStateStyle;

UCLASS(Abstract, Blueprintable)
class MODIOUI_API UModioCommonGenericModEntryStyle : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonGenericModEntryStateStyle> NormalStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UModioCommonGenericModEntryStateStyle> SelectedStyle;
    
    UModioCommonGenericModEntryStyle();

};

