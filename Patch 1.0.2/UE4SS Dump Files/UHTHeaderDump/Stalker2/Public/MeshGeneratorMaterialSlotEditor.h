#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MeshGeneratorMaterialSlotEditor.generated.h"

class UCustomDataVariationsEditor;
class UMaterialGroupEditor;

UCLASS(Blueprintable)
class STALKER2_API UMeshGeneratorMaterialSlotEditor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialGroupEditor*> MaterialGroupArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomDataVariationsEditor*> CustomData;
    
public:
    UMeshGeneratorMaterialSlotEditor();

};

