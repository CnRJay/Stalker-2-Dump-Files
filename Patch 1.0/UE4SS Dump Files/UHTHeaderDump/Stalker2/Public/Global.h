#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstance -FallbackName=GameInstance
#include "Global.generated.h"

class UMapSettingsAsset;

UCLASS(Blueprintable, NonTransient)
class STALKER2_API UGlobal : public UGameInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMapSettingsAsset* PA_MapSettings;
    
    UGlobal();

    UFUNCTION(BlueprintCallable, Exec)
    void GoToMap(const FName MapName) const;
    
};

