#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "GlobalLoadingSubsystem.generated.h"

class UGlobal;

UCLASS(Blueprintable)
class STALKER2_API UGlobalLoadingSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGlobal* GameInstance;
    
public:
    UGlobalLoadingSubsystem();

};

