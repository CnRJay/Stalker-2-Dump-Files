#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SpeechComponent.generated.h"

UCLASS(Abstract, Blueprintable)
class USpeechComponent : public UObject {
    GENERATED_BODY()
public:
    USpeechComponent();

};

