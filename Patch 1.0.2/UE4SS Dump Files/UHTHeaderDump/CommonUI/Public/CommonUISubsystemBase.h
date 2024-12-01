#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonInput -ObjectName=ECommonInputType -FallbackName=ECommonInputType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "CommonUISubsystemBase.generated.h"

UCLASS(Blueprintable)
class COMMONUI_API UCommonUISubsystemBase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UCommonUISubsystemBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSlateBrush GetInputActionButtonIcon(const FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, const FName& GamepadName) const;
    
};

