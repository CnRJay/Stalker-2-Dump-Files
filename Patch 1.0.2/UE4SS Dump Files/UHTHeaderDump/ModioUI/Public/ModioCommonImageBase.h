#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CommonUI -ObjectName=CommonUserWidget -FallbackName=CommonUserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=EModioAvatarSize -FallbackName=EModioAvatarSize
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=EModioGallerySize -FallbackName=EModioGallerySize
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=EModioLogoSize -FallbackName=EModioLogoSize
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioImageWrapper -FallbackName=ModioImageWrapper
//CROSS-MODULE INCLUDE V2: -ModuleName=Modio -ObjectName=ModioModID -FallbackName=ModioModID
#include "ModioCommonImageBase.generated.h"

class UTexture2DDynamic;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MODIOUI_API UModioCommonImageBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnImageLoadedDynamicDelegate, bool, bSuccess);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnImageLoadedDynamicDelegate OnImageLoadedDynamic;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLoadFailed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsLoading;
    
public:
    UModioCommonImageBase();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetImageTexture(UTexture2DDynamic* Texture);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartLoadNewImage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLoadNewImageError();
    
    UFUNCTION(BlueprintCallable)
    void LoadImageFromLogo(FModioModID ModId, EModioLogoSize LogoSize);
    
    UFUNCTION(BlueprintCallable)
    void LoadImageFromGallery(FModioModID ModId, EModioGallerySize GallerySize, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void LoadImageFromFileAsync(FModioImageWrapper ImageLoader);
    
    UFUNCTION(BlueprintCallable)
    void LoadImageFromAvatar(FModioModID ModId, EModioAvatarSize AvatarSize);
    
};

