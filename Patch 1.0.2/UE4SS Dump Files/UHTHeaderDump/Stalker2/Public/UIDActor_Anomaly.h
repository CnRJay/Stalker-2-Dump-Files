#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "ObjBase.h"
#include "UIDActor_Anomaly.generated.h"

UCLASS(Abstract, Blueprintable)
class STALKER2_API AUIDActor_Anomaly : public AActor, public IObjBase {
    GENERATED_BODY()
public:
    AUIDActor_Anomaly(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

