#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "VirtualCursorFunctionLibrary.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class GAMEPADUMGPLUGIN_API UVirtualCursorFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UVirtualCursorFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsCursorOverInteractableWidget();
    
    UFUNCTION(BlueprintCallable)
    static void EnableVirtualCursor(APlayerController* PC);
    
    UFUNCTION(BlueprintCallable)
    static void DisableVirtualCursor(APlayerController* PC);
    
};

