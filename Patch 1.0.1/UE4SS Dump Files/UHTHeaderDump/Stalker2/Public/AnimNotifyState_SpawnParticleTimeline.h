#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "AnimNotifyState_SpawnParticleTimeline.generated.h"

class UFXSystemAsset;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAnimNotifyState_SpawnParticleTimeline : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFXSystemAsset* ParticlePFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneToSpawnOnName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAttachToBone;
    
    UAnimNotifyState_SpawnParticleTimeline();

};

