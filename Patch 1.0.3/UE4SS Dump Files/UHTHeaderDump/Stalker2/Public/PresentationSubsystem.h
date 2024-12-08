#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "PresentationSubsystem.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UPresentationSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPresentationSubsystem();

    UFUNCTION(BlueprintCallable)
    void ResumeGame();
    
    UFUNCTION(BlueprintCallable)
    void GoToMainMenu();
    
};

