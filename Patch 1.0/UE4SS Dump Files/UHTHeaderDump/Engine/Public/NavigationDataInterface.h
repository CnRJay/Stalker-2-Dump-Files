#pragma once
#include "CoreMinimal.h"
#include "GSCCustomActorValidatorInterface.h"
#include "NavigationDataInterface.generated.h"

UINTERFACE(MinimalAPI)
class UNavigationDataInterface : public UGSCCustomActorValidatorInterface {
    GENERATED_BODY()
};

class INavigationDataInterface : public IGSCCustomActorValidatorInterface {
    GENERATED_BODY()
public:
};

