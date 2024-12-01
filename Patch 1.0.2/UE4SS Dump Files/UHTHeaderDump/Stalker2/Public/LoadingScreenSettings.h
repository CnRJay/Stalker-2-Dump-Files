#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateFontInfo -FallbackName=SlateFontInfo
#include "ELoadingDestination.h"
#include "InfoScreenSettings.h"
#include "LoadingScreenBehaviourSettings.h"
#include "LoadingScreenSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class STALKER2_API ULoadingScreenSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ELoadingDestination, FLoadingScreenBehaviourSettings> LoadingScreenBehaviourSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo DescriptionFont;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo TitleFont;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo WaitForUserInputTextStyle;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextColor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ContentPadding;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin TipsTitleTextPadding;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin TipsTextPadding;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin LoadArrowPadding;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LoadArrowRotation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WaitForUserInputTextPos;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TipsRangeMax;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText WaitForUserInputText;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath LoadingScreenIndicatorBackground;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LoadingScreenIndicatorBackgroundSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath LoadingIndicatorArrow;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath ForegroundImage;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SlidingDirtMaterialPtrTopLeft;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SlidingDirtMaterialPtrTopRight;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SlidingDirtMaterialPtrBottomLeft;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath SlidingDirtMaterialPtrBottomRight;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInfoScreenSettings> InfoScreenSettingsData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SlidingDirtMaterialSize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeTillShowingLoadingIndicator;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeTillHidingLoadingScreen;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath CustomTeleportMediaSource;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath IntroductionLogoMediaSource;
    
    ULoadingScreenSettings();

};

