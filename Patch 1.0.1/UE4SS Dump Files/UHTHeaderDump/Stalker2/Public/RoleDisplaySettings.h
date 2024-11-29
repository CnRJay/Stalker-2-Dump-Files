#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "RoleDisplaySettings.generated.h"

USTRUCT(BlueprintType)
struct FRoleDisplaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin Margin;
    
    STALKER2_API FRoleDisplaySettings();
};

