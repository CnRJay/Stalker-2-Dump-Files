#ifndef UE4SS_SDK_WidgetCarousel_HPP
#define UE4SS_SDK_WidgetCarousel_HPP

struct FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle
{
    FSlateBrush HighlightBrush;                                                       // 0x0010 (size: 0xF0)
    FButtonStyle LeftButtonStyle;                                                     // 0x0100 (size: 0x470)
    FButtonStyle CenterButtonStyle;                                                   // 0x0570 (size: 0x470)
    FButtonStyle RightButtonStyle;                                                    // 0x09E0 (size: 0x470)

}; // Size: 0xE50

struct FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle
{
    FButtonStyle InnerButtonStyle;                                                    // 0x0010 (size: 0x470)
    FSlateBrush NavigationButtonLeftImage;                                            // 0x0480 (size: 0xF0)
    FSlateBrush NavigationButtonRightImage;                                           // 0x0570 (size: 0xF0)

}; // Size: 0x660

#endif
