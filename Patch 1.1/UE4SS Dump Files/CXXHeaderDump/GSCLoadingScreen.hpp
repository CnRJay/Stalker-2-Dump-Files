#ifndef UE4SS_SDK_GSCLoadingScreen_HPP
#define UE4SS_SDK_GSCLoadingScreen_HPP

#include "GSCLoadingScreen_enums.hpp"

struct FDisclaimerData
{
    class USlateBrushAsset* BackgroundBrush;                                          // 0x0000 (size: 0x8)
    class USlateBrushAsset* HealthFooterLineBrushPath;                                // 0x0008 (size: 0x8)
    class USlateBrushAsset* HealthFooterImageBrushPath;                               // 0x0010 (size: 0x8)
    class USlateBrushAsset* HealthHeaderLineBrushPath;                                // 0x0018 (size: 0x8)
    class USlateWidgetStyleAsset* HealthTitleFont;                                    // 0x0020 (size: 0x8)
    class USlateWidgetStyleAsset* HealthTitle2Font;                                   // 0x0028 (size: 0x8)
    class USlateWidgetStyleAsset* HealthDescFont;                                     // 0x0030 (size: 0x8)
    class USlateWidgetStyleAsset* HealthDesc2Font;                                    // 0x0038 (size: 0x8)
    FString TitleSID;                                                                 // 0x0040 (size: 0x10)
    FString Title2SID;                                                                // 0x0050 (size: 0x10)
    FString ContentSID;                                                               // 0x0060 (size: 0x10)
    FString Content2SID;                                                              // 0x0070 (size: 0x10)
    ECustomDisclaimerType CustomDisclaimerType;                                       // 0x0080 (size: 0x1)

}; // Size: 0x88

struct FScreenData
{
    float MaxShowTime;                                                                // 0x0000 (size: 0x4)
    float MinShowTime;                                                                // 0x0004 (size: 0x4)
    bool bIsSkippable;                                                                // 0x0008 (size: 0x1)
    FSoftObjectPath Image;                                                            // 0x0010 (size: 0x20)

}; // Size: 0x30

struct FScreenOrder
{
    ESplashScreenType ScreenType;                                                     // 0x0000 (size: 0x1)
    int32 ScreenOrderID;                                                              // 0x0004 (size: 0x4)
    bool bIsSkippable;                                                                // 0x0008 (size: 0x1)
    FSoftObjectPath Image;                                                            // 0x0010 (size: 0x20)

}; // Size: 0x30

class UDisclaimerWidget : public UWidget
{
}; // Size: 0x1B0

class UGSCLoadingScreenSettings : public UDeveloperSettings
{
    TArray<FScreenData> ScreenDataList;                                               // 0x0038 (size: 0x10)
    TArray<FScreenOrder> ScreenOrder;                                                 // 0x0048 (size: 0x10)
    TArray<FDisclaimerData> DisclaimerScreens;                                        // 0x0058 (size: 0x10)
    int32 CurrentDisclaimerID;                                                        // 0x0068 (size: 0x4)
    float FadeInDuration;                                                             // 0x006C (size: 0x4)
    float FadeOutDuration;                                                            // 0x0070 (size: 0x4)
    float MinShowTime;                                                                // 0x0074 (size: 0x4)
    FSoftObjectPath Arrow;                                                            // 0x0078 (size: 0x20)
    FSoftObjectPath Background;                                                       // 0x0098 (size: 0x20)
    FVector2D LoadingScreenIndicatorBackgroundSize;                                   // 0x00B8 (size: 0x10)
    FMargin LoadArrowPadding;                                                         // 0x00C8 (size: 0x10)
    FVector2D LoadArrowRotation;                                                      // 0x00D8 (size: 0x10)

}; // Size: 0xE8

class UGSCLoadingScreenSettingsWrapper : public UObject
{
    class UGSCLoadingScreenSettings* Settings;                                        // 0x0028 (size: 0x8)

}; // Size: 0x30

#endif
