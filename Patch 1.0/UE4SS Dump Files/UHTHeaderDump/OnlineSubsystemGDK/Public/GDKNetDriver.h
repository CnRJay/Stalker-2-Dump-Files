#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=IpNetDriver -FallbackName=IpNetDriver
#include "GDKNetDriver.generated.h"

UCLASS(Blueprintable, NonTransient)
class UGDKNetDriver : public UIpNetDriver {
    GENERATED_BODY()
public:
    UGDKNetDriver();

};

