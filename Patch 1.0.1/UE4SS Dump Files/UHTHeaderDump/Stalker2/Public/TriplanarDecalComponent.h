#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DecalComponent -FallbackName=DecalComponent
#include "TriplanarDecalComponent.generated.h"

class UTexture2D;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class STALKER2_API UTriplanarDecalComponent : public UDecalComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfTraces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* HeightMap;
    
public:
    UTriplanarDecalComponent(const FObjectInitializer& ObjectInitializer);

};

