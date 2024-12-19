#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "GarbageCollectionSubsystem.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UGarbageCollectionSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UGarbageCollectionSubsystem();

};

