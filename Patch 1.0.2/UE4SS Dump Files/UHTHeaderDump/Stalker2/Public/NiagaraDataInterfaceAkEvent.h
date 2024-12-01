#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraDataInterface -FallbackName=NiagaraDataInterface
#include "NiagaraDataInterfaceAkEvent.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, EditInlineNew)
class STALKER2_API UNiagaraDataInterfaceAkEvent : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopEvent;
    
    UNiagaraDataInterfaceAkEvent();

};

