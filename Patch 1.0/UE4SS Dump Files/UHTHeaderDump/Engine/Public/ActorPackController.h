#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "PackedActorBaseMetadata.h"
#include "PackedActorsRestoreData.h"
#include "ActorPackController.generated.h"

UCLASS(Blueprintable)
class ENGINE_API AActorPackController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPackedActorsRestoreData> PackedActorsRestoreDataList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPackedActorBaseMetadata> PackedSpawnedActors;
    
public:
    AActorPackController(const FObjectInitializer& ObjectInitializer);

};

