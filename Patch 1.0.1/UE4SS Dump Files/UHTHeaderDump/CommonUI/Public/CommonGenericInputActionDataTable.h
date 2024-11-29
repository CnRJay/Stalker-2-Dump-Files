#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTable -FallbackName=DataTable
#include "CommonGenericInputActionDataTable.generated.h"

UCLASS(Blueprintable)
class COMMONUI_API UCommonGenericInputActionDataTable : public UDataTable {
    GENERATED_BODY()
public:
    UCommonGenericInputActionDataTable();

};

