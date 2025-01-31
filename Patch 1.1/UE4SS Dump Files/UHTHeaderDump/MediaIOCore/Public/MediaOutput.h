#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MediaOutput.generated.h"

class UMediaCapture;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MEDIAIOCORE_API UMediaOutput : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfTextureBuffers;
    
    UMediaOutput();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool Validate(FString& OutFailureReason) const;
    
    UFUNCTION(BlueprintCallable)
    UMediaCapture* CreateMediaCapture();
    
};

