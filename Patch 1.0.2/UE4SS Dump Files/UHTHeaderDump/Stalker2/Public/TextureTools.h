#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "TextureTools.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UTextureTools : public UActorComponent {
    GENERATED_BODY()
public:
    UTextureTools(const FObjectInitializer& ObjectInitializer);

};

