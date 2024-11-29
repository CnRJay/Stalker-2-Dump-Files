#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "GSCCustomActorValidatorInterface.h"
#include "RuntimeVirtualTextureVolume.generated.h"

class URuntimeVirtualTextureComponent;

UCLASS(Blueprintable, MinimalAPI)
class ARuntimeVirtualTextureVolume : public AActor, public IGSCCustomActorValidatorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URuntimeVirtualTextureComponent* VirtualTextureComponent;
    
    ARuntimeVirtualTextureVolume(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

