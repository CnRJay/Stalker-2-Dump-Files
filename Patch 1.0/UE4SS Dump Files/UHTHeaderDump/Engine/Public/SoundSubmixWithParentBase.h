#pragma once
#include "CoreMinimal.h"
#include "SoundSubmixBase.h"
#include "SoundSubmixWithParentBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ENGINE_API USoundSubmixWithParentBase : public USoundSubmixBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundSubmixBase* ParentSubmix;
    
    USoundSubmixWithParentBase();

};

