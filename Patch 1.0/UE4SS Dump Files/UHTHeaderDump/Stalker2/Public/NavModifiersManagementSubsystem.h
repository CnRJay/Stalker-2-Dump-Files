#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "NavModifiersManagementSubsystem.generated.h"

class AGSCNavModifierVolume;
class ARecastNavMesh;

UCLASS(Blueprintable)
class UNavModifiersManagementSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGuid, AGSCNavModifierVolume*> VolumesMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ARecastNavMesh* CachedDefaultRecast;
    
public:
    UNavModifiersManagementSubsystem();

};

