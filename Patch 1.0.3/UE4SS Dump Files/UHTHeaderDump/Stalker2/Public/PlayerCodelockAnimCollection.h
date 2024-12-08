#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CodelockInteractionAnimations.h"
#include "PlayerCodelockAnimCollection.generated.h"

UCLASS(Blueprintable)
class STALKER2_API UPlayerCodelockAnimCollection : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCodelockInteractionAnimations CodelockInteractionAnimations;
    
public:
    UPlayerCodelockAnimCollection();

};

