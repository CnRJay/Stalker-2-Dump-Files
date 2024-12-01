#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PlayerExternalAnimations.h"
#include "PlayerInternalAnimations.h"
#include "PlayerAnimCollection.generated.h"

class UPlayerAnimCollection;

UCLASS(Blueprintable)
class STALKER2_API UPlayerAnimCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerExternalAnimations ExternalAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerInternalAnimations InternalAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerAnimCollection* ParentAnimCollection;
    
public:
    UPlayerAnimCollection();

};

