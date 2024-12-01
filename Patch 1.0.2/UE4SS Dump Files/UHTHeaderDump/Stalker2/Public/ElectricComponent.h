#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OnEndEMIEventDelegate.h"
#include "OnStartEMIEventDelegate.h"
#include "ElectricComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UElectricComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartEMIEvent OnStartEMIEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEndEMIEvent OnEndEMIEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTurnedOn;
    
public:
    UElectricComponent(const FObjectInitializer& ObjectInitializer);

};

