#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIUserAvatarDownloadCompletedReceiver -FallbackName=ModioUIUserAvatarDownloadCompletedReceiver
//CROSS-MODULE INCLUDE V2: -ModuleName=ModioUICore -ObjectName=ModioUIUserChangedReceiver -FallbackName=ModioUIUserChangedReceiver
#include "ModioCommonDynamicImage.h"
#include "ModioCommonProfileImage.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonProfileImage : public UModioCommonDynamicImage, public IModioUIUserChangedReceiver, public IModioUIUserAvatarDownloadCompletedReceiver {
    GENERATED_BODY()
public:
    UModioCommonProfileImage();


    // Fix for true pure virtual functions not being implemented
};

