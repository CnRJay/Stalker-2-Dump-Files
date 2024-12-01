#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=EAkCallbackType -FallbackName=EAkCallbackType
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "OnAKEventFinished_Proxy.generated.h"

class UAkCallbackInfo;

UCLASS(Blueprintable)
class UOnAKEventFinished_Proxy : public UObject {
    GENERATED_BODY()
public:
    UOnAKEventFinished_Proxy();

    UFUNCTION(BlueprintCallable)
    void OnSoundFinished(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
};

