#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "FileObjPrototypesEditor.generated.h"

class UObjPrototypeEditor;

UCLASS(Blueprintable)
class STALKER2_API UFileObjPrototypesEditor : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObjPrototypeEditor*> ObjPrototypes;
    
public:
    UFileObjPrototypesEditor();

};

