#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "InitialBodyModifier.h"
#include "InitialCharacterControls.h"
#include "InitialPhysicsControl.h"
#include "PhysicsControlInitializerComponent.generated.h"

class UPhysicsControlComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PHYSICSCONTROL_API UPhysicsControlInitializerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInitialCharacterControls InitialCharacterControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FInitialPhysicsControl> InitialControls;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FInitialBodyModifier> InitialBodyModifiers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateControlsAtBeginPlay;
    
    UPhysicsControlInitializerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void CreateControls(UPhysicsControlComponent* PhysicsControlComponent);
    
};

