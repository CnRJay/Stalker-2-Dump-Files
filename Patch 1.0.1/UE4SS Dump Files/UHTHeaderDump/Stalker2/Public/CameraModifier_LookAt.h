#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraModifier -FallbackName=CameraModifier
#include "CameraModifier_LookAt.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class UCameraModifier_LookAt : public UCameraModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
public:
    UCameraModifier_LookAt();

};

