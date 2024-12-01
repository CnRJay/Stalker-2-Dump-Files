#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "EditorMaterialParameterConfig.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UEditorMaterialParameterConfig : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath TexturePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UEditorMaterialParameterConfig();

};

