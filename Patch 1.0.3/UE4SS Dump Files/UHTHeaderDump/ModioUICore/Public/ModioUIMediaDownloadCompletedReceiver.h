#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=EModioLogoSize -FallbackName=EModioLogoSize
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioErrorCode -FallbackName=ModioErrorCode
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModID -FallbackName=ModioModID
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioOptionalImage -FallbackName=ModioOptionalImage
#include "ModioUIMediaDownloadCompletedReceiver.generated.h"

UINTERFACE(Blueprintable)
class MODIOUICORE_API UModioUIMediaDownloadCompletedReceiver : public UInterface {
    GENERATED_BODY()
};

class MODIOUICORE_API IModioUIMediaDownloadCompletedReceiver : public IInterface {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModLogoDownloadCompleted(FModioModID ModId, FModioErrorCode ec, FModioOptionalImage Image, EModioLogoSize LogoSize);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModGalleryImageDownloadCompleted(FModioModID ModId, FModioErrorCode ec, int32 ImageIndex, FModioOptionalImage Image);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnModCreatorAvatarDownloadCompleted(FModioModID ModId, FModioErrorCode ec, FModioOptionalImage Image);
    
};

