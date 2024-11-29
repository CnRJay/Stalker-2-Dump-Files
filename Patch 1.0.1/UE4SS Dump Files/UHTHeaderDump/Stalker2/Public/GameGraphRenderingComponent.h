#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=BoxSphereBounds -FallbackName=BoxSphereBounds
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugDrawComponent -FallbackName=DebugDrawComponent
#include "GameGraphSceneProxyDrawParams.h"
#include "GameGraphRenderingComponent.generated.h"

class UMaterialInstance;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGameGraphRenderingComponent : public UDebugDrawComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 ShowComponentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameGraphSceneProxyDrawParams DrawParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* GameGraphMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoxSphereBounds GameGraphBoundsBox;
    
public:
    UGameGraphRenderingComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void ShowAllComponents();
    
};

