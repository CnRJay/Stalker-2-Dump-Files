#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AchievementTracker.generated.h"

UCLASS(Abstract, Blueprintable)
class UAchievementTracker : public UObject {
    GENERATED_BODY()
public:
    UAchievementTracker();

};

