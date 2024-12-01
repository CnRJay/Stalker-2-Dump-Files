#ifndef UE4SS_SDK_SlateCore_HPP
#define UE4SS_SDK_SlateCore_HPP

#include "SlateCore_enums.hpp"

struct FAnalogInputEvent : public FKeyEvent
{
}; // Size: 0x48

struct FButtonStyle : public FSlateWidgetStyle
{
    FSlateBrush Normal;                                                               // 0x0010 (size: 0xF0)
    FSlateBrush Hovered;                                                              // 0x0100 (size: 0xF0)
    FSlateBrush Pressed;                                                              // 0x01F0 (size: 0xF0)
    FSlateBrush Disabled;                                                             // 0x02E0 (size: 0xF0)
    FSlateColor NormalForeground;                                                     // 0x03D0 (size: 0x14)
    FSlateColor HoveredForeground;                                                    // 0x03E4 (size: 0x14)
    FSlateColor PressedForeground;                                                    // 0x03F8 (size: 0x14)
    FSlateColor DisabledForeground;                                                   // 0x040C (size: 0x14)
    FMargin NormalPadding;                                                            // 0x0420 (size: 0x10)
    FMargin PressedPadding;                                                           // 0x0430 (size: 0x10)
    FSlateSound PressedSlateSound;                                                    // 0x0440 (size: 0x18)
    FSlateSound HoveredSlateSound;                                                    // 0x0458 (size: 0x18)

}; // Size: 0x470

struct FCaptureLostEvent
{
}; // Size: 0x8

struct FCharacterEvent : public FInputEvent
{
}; // Size: 0x28

struct FCheckBoxStyle : public FSlateWidgetStyle
{
    TEnumAsByte<ESlateCheckBoxType::Type> CheckBoxType;                               // 0x0008 (size: 0x1)
    FSlateBrush UncheckedImage;                                                       // 0x0010 (size: 0xF0)
    FSlateBrush UncheckedHoveredImage;                                                // 0x0100 (size: 0xF0)
    FSlateBrush UncheckedPressedImage;                                                // 0x01F0 (size: 0xF0)
    FSlateBrush CheckedImage;                                                         // 0x02E0 (size: 0xF0)
    FSlateBrush CheckedHoveredImage;                                                  // 0x03D0 (size: 0xF0)
    FSlateBrush CheckedPressedImage;                                                  // 0x04C0 (size: 0xF0)
    FSlateBrush UndeterminedImage;                                                    // 0x05B0 (size: 0xF0)
    FSlateBrush UndeterminedHoveredImage;                                             // 0x06A0 (size: 0xF0)
    FSlateBrush UndeterminedPressedImage;                                             // 0x0790 (size: 0xF0)
    FMargin Padding;                                                                  // 0x0880 (size: 0x10)
    FSlateBrush BackgroundImage;                                                      // 0x0890 (size: 0xF0)
    FSlateBrush BackgroundHoveredImage;                                               // 0x0980 (size: 0xF0)
    FSlateBrush BackgroundPressedImage;                                               // 0x0A70 (size: 0xF0)
    FSlateColor ForegroundColor;                                                      // 0x0B60 (size: 0x14)
    FSlateColor HoveredForeground;                                                    // 0x0B74 (size: 0x14)
    FSlateColor PressedForeground;                                                    // 0x0B88 (size: 0x14)
    FSlateColor CheckedForeground;                                                    // 0x0B9C (size: 0x14)
    FSlateColor CheckedHoveredForeground;                                             // 0x0BB0 (size: 0x14)
    FSlateColor CheckedPressedForeground;                                             // 0x0BC4 (size: 0x14)
    FSlateColor UndeterminedForeground;                                               // 0x0BD8 (size: 0x14)
    FSlateColor BorderBackgroundColor;                                                // 0x0BEC (size: 0x14)
    FSlateSound CheckedSlateSound;                                                    // 0x0C00 (size: 0x18)
    FSlateSound UncheckedSlateSound;                                                  // 0x0C18 (size: 0x18)
    FSlateSound HoveredSlateSound;                                                    // 0x0C30 (size: 0x18)

}; // Size: 0xC50

struct FComboBoxStyle : public FSlateWidgetStyle
{
    FComboButtonStyle ComboButtonStyle;                                               // 0x0010 (size: 0x6C0)
    FSlateSound PressedSlateSound;                                                    // 0x06D0 (size: 0x18)
    FSlateSound SelectionChangeSlateSound;                                            // 0x06E8 (size: 0x18)
    FMargin ContentPadding;                                                           // 0x0700 (size: 0x10)
    FMargin MenuRowPadding;                                                           // 0x0710 (size: 0x10)

}; // Size: 0x720

struct FComboButtonStyle : public FSlateWidgetStyle
{
    FButtonStyle ButtonStyle;                                                         // 0x0010 (size: 0x470)
    FSlateBrush DownArrowImage;                                                       // 0x0480 (size: 0xF0)
    FVector2D ShadowOffset;                                                           // 0x0570 (size: 0x10)
    FLinearColor ShadowColorAndOpacity;                                               // 0x0580 (size: 0x10)
    FSlateBrush MenuBorderBrush;                                                      // 0x0590 (size: 0xF0)
    FMargin MenuBorderPadding;                                                        // 0x0680 (size: 0x10)
    FMargin ContentPadding;                                                           // 0x0690 (size: 0x10)
    FMargin DownArrowPadding;                                                         // 0x06A0 (size: 0x10)
    TEnumAsByte<EVerticalAlignment> DownArrowAlign;                                   // 0x06B0 (size: 0x1)

}; // Size: 0x6C0

struct FCompositeFallbackFont
{
    FTypeface Typeface;                                                               // 0x0000 (size: 0x10)
    float ScalingFactor;                                                              // 0x0010 (size: 0x4)

}; // Size: 0x18

struct FCompositeFont
{
    FTypeface DefaultTypeface;                                                        // 0x0000 (size: 0x10)
    FCompositeFallbackFont FallbackTypeface;                                          // 0x0010 (size: 0x18)
    TArray<FCompositeSubFont> SubTypefaces;                                           // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FCompositeSubFont : public FCompositeFallbackFont
{
    TArray<FInt32Range> CharacterRanges;                                              // 0x0018 (size: 0x10)
    FString Cultures;                                                                 // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FDockTabStyle : public FSlateWidgetStyle
{
    FButtonStyle CloseButtonStyle;                                                    // 0x0010 (size: 0x470)
    FSlateBrush NormalBrush;                                                          // 0x0480 (size: 0xF0)
    FSlateBrush ColorOverlayTabBrush;                                                 // 0x0570 (size: 0xF0)
    FSlateBrush ColorOverlayIconBrush;                                                // 0x0660 (size: 0xF0)
    FSlateBrush ForegroundBrush;                                                      // 0x0750 (size: 0xF0)
    FSlateBrush HoveredBrush;                                                         // 0x0840 (size: 0xF0)
    FSlateBrush ContentAreaBrush;                                                     // 0x0930 (size: 0xF0)
    FSlateBrush TabWellBrush;                                                         // 0x0A20 (size: 0xF0)
    FTextBlockStyle TabTextStyle;                                                     // 0x0B10 (size: 0x3A0)
    FMargin TabPadding;                                                               // 0x0EB0 (size: 0x10)
    FVector2D IconSize;                                                               // 0x0EC0 (size: 0x10)
    float OverlapWidth;                                                               // 0x0ED0 (size: 0x4)
    FSlateColor FlashColor;                                                           // 0x0ED4 (size: 0x14)
    FSlateColor NormalForegroundColor;                                                // 0x0EE8 (size: 0x14)
    FSlateColor HoveredForegroundColor;                                               // 0x0EFC (size: 0x14)
    FSlateColor ActiveForegroundColor;                                                // 0x0F10 (size: 0x14)
    FSlateColor ForegroundForegroundColor;                                            // 0x0F24 (size: 0x14)
    float IconBorderPadding;                                                          // 0x0F38 (size: 0x4)

}; // Size: 0xF40

struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundImageNormal;                                                // 0x0010 (size: 0xF0)
    FSlateBrush BackgroundImageHovered;                                               // 0x0100 (size: 0xF0)
    FSlateBrush BackgroundImageFocused;                                               // 0x01F0 (size: 0xF0)
    FSlateBrush BackgroundImageReadOnly;                                              // 0x02E0 (size: 0xF0)
    FMargin Padding;                                                                  // 0x03D0 (size: 0x10)
    FTextBlockStyle TextStyle;                                                        // 0x03E0 (size: 0x3A0)
    FSlateColor ForegroundColor;                                                      // 0x0780 (size: 0x14)
    FSlateColor BackgroundColor;                                                      // 0x0794 (size: 0x14)
    FSlateColor ReadOnlyForegroundColor;                                              // 0x07A8 (size: 0x14)
    FSlateColor FocusedForegroundColor;                                               // 0x07BC (size: 0x14)
    FMargin HScrollBarPadding;                                                        // 0x07D0 (size: 0x10)
    FMargin VScrollBarPadding;                                                        // 0x07E0 (size: 0x10)
    FScrollBarStyle ScrollBarStyle;                                                   // 0x07F0 (size: 0x890)

}; // Size: 0x1080

struct FEditableTextStyle : public FSlateWidgetStyle
{
    FSlateFontInfo Font;                                                              // 0x0008 (size: 0x58)
    FSlateColor ColorAndOpacity;                                                      // 0x0060 (size: 0x14)
    FSlateBrush BackgroundImageSelected;                                              // 0x0080 (size: 0xF0)
    FSlateBrush BackgroundImageComposing;                                             // 0x0170 (size: 0xF0)
    FSlateBrush CaretImage;                                                           // 0x0260 (size: 0xF0)

}; // Size: 0x350

struct FExpandableAreaStyle : public FSlateWidgetStyle
{
    FSlateBrush CollapsedImage;                                                       // 0x0010 (size: 0xF0)
    FSlateBrush ExpandedImage;                                                        // 0x0100 (size: 0xF0)
    float RolloutAnimationSeconds;                                                    // 0x01F0 (size: 0x4)

}; // Size: 0x200

struct FFocusEvent
{
}; // Size: 0x8

struct FFontData
{
    FString FontFilename;                                                             // 0x0000 (size: 0x10)
    EFontHinting Hinting;                                                             // 0x0014 (size: 0x1)
    EFontLoadingPolicy LoadingPolicy;                                                 // 0x0015 (size: 0x1)
    int32 SubFaceIndex;                                                               // 0x0018 (size: 0x4)
    class UObject* FontFaceAsset;                                                     // 0x0020 (size: 0x8)

}; // Size: 0x28

struct FFontOutlineSettings
{
    int32 OutlineSize;                                                                // 0x0000 (size: 0x4)
    bool bSeparateFillAlpha;                                                          // 0x0004 (size: 0x1)
    bool bApplyOutlineToDropShadows;                                                  // 0x0005 (size: 0x1)
    class UObject* OutlineMaterial;                                                   // 0x0008 (size: 0x8)
    FLinearColor OutlineColor;                                                        // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FGeometry
{
}; // Size: 0x40

struct FHeaderRowStyle : public FSlateWidgetStyle
{
    FTableColumnHeaderStyle ColumnStyle;                                              // 0x0010 (size: 0x880)
    FTableColumnHeaderStyle LastColumnStyle;                                          // 0x0890 (size: 0x880)
    FSplitterStyle ColumnSplitterStyle;                                               // 0x1110 (size: 0x1F0)
    float SplitterHandleSize;                                                         // 0x1300 (size: 0x4)
    FSlateBrush BackgroundBrush;                                                      // 0x1310 (size: 0xF0)
    FSlateColor ForegroundColor;                                                      // 0x1400 (size: 0x14)
    FSlateBrush HorizontalSeparatorBrush;                                             // 0x1420 (size: 0xF0)
    float HorizontalSeparatorThickness;                                               // 0x1510 (size: 0x4)

}; // Size: 0x1520

struct FHyperlinkStyle : public FSlateWidgetStyle
{
    FButtonStyle UnderlineStyle;                                                      // 0x0010 (size: 0x470)
    FTextBlockStyle TextStyle;                                                        // 0x0480 (size: 0x3A0)
    FMargin Padding;                                                                  // 0x0820 (size: 0x10)

}; // Size: 0x830

struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
    FEditableTextBoxStyle EditableTextBoxStyle;                                       // 0x0010 (size: 0x1080)
    FTextBlockStyle TextStyle;                                                        // 0x1090 (size: 0x3A0)

}; // Size: 0x1430

struct FInlineTextImageStyle : public FSlateWidgetStyle
{
    FSlateBrush Image;                                                                // 0x0010 (size: 0xF0)
    int16 Baseline;                                                                   // 0x0100 (size: 0x2)

}; // Size: 0x110

struct FInputEvent
{
}; // Size: 0x20

struct FKeyEvent : public FInputEvent
{
}; // Size: 0x40

struct FMargin
{
    float Left;                                                                       // 0x0000 (size: 0x4)
    float Top;                                                                        // 0x0004 (size: 0x4)
    float Right;                                                                      // 0x0008 (size: 0x4)
    float Bottom;                                                                     // 0x000C (size: 0x4)

}; // Size: 0x10

struct FMotionEvent : public FInputEvent
{
}; // Size: 0x80

struct FNavigationEvent : public FInputEvent
{
}; // Size: 0x28

struct FPointerEvent : public FInputEvent
{
}; // Size: 0x98

struct FProgressBarStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundImage;                                                      // 0x0010 (size: 0xF0)
    FSlateBrush FillImage;                                                            // 0x0100 (size: 0xF0)
    FSlateBrush MarqueeImage;                                                         // 0x01F0 (size: 0xF0)
    bool EnableFillAnimation;                                                         // 0x02E0 (size: 0x1)

}; // Size: 0x2F0

struct FScrollBarStyle : public FSlateWidgetStyle
{
    FSlateBrush HorizontalBackgroundImage;                                            // 0x0010 (size: 0xF0)
    FSlateBrush VerticalBackgroundImage;                                              // 0x0100 (size: 0xF0)
    FSlateBrush VerticalTopSlotImage;                                                 // 0x01F0 (size: 0xF0)
    FSlateBrush HorizontalTopSlotImage;                                               // 0x02E0 (size: 0xF0)
    FSlateBrush VerticalBottomSlotImage;                                              // 0x03D0 (size: 0xF0)
    FSlateBrush HorizontalBottomSlotImage;                                            // 0x04C0 (size: 0xF0)
    FSlateBrush NormalThumbImage;                                                     // 0x05B0 (size: 0xF0)
    FSlateBrush HoveredThumbImage;                                                    // 0x06A0 (size: 0xF0)
    FSlateBrush DraggedThumbImage;                                                    // 0x0790 (size: 0xF0)
    float Thickness;                                                                  // 0x0880 (size: 0x4)

}; // Size: 0x890

struct FScrollBorderStyle : public FSlateWidgetStyle
{
    FSlateBrush TopShadowBrush;                                                       // 0x0010 (size: 0xF0)
    FSlateBrush BottomShadowBrush;                                                    // 0x0100 (size: 0xF0)

}; // Size: 0x1F0

struct FScrollBoxStyle : public FSlateWidgetStyle
{
    float BarThickness;                                                               // 0x0008 (size: 0x4)
    FSlateBrush TopShadowBrush;                                                       // 0x0010 (size: 0xF0)
    FSlateBrush BottomShadowBrush;                                                    // 0x0100 (size: 0xF0)
    FSlateBrush LeftShadowBrush;                                                      // 0x01F0 (size: 0xF0)
    FSlateBrush RightShadowBrush;                                                     // 0x02E0 (size: 0xF0)

}; // Size: 0x3D0

struct FSearchBoxStyle : public FSlateWidgetStyle
{
    FEditableTextBoxStyle TextBoxStyle;                                               // 0x0010 (size: 0x1080)
    FSlateFontInfo ActiveFontInfo;                                                    // 0x1090 (size: 0x58)
    FSlateBrush UpArrowImage;                                                         // 0x10F0 (size: 0xF0)
    FSlateBrush DownArrowImage;                                                       // 0x11E0 (size: 0xF0)
    FSlateBrush GlassImage;                                                           // 0x12D0 (size: 0xF0)
    FSlateBrush ClearImage;                                                           // 0x13C0 (size: 0xF0)
    FMargin ImagePadding;                                                             // 0x14B0 (size: 0x10)
    bool bLeftAlignButtons;                                                           // 0x14C0 (size: 0x1)
    bool bLeftAlignSearchResultButtons;                                               // 0x14C1 (size: 0x1)
    bool bLeftAlignGlassImageAndClearButton;                                          // 0x14C2 (size: 0x1)

}; // Size: 0x14D0

struct FSegmentedControlStyle : public FSlateWidgetStyle
{
    FCheckBoxStyle ControlStyle;                                                      // 0x0010 (size: 0xC50)
    FCheckBoxStyle FirstControlStyle;                                                 // 0x0C60 (size: 0xC50)
    FCheckBoxStyle LastControlStyle;                                                  // 0x18B0 (size: 0xC50)
    FSlateBrush BackgroundBrush;                                                      // 0x2500 (size: 0xF0)
    FMargin UniformPadding;                                                           // 0x25F0 (size: 0x10)

}; // Size: 0x2600

struct FSlateBrush
{
    uint8 bIsDynamicallyLoaded;                                                       // 0x0010 (size: 0x1)
    uint8 bHasUObject;                                                                // 0x0010 (size: 0x1)
    TEnumAsByte<ESlateBrushDrawType::Type> DrawAs;                                    // 0x0011 (size: 0x1)
    TEnumAsByte<ESlateBrushTileType::Type> Tiling;                                    // 0x0012 (size: 0x1)
    bool bOverrideTileSize;                                                           // 0x0013 (size: 0x1)
    double HorizontalTileSize;                                                        // 0x0018 (size: 0x8)
    double VerticalTileSize;                                                          // 0x0020 (size: 0x8)
    TEnumAsByte<ESlateBrushMirrorType::Type> Mirroring;                               // 0x0028 (size: 0x1)
    TEnumAsByte<ESlateBrushImageType::Type> ImageType;                                // 0x0029 (size: 0x1)
    FVector2D ImageSize;                                                              // 0x0030 (size: 0x10)
    FMargin Margin;                                                                   // 0x0040 (size: 0x10)
    FSlateColor TintColor;                                                            // 0x0050 (size: 0x14)
    FSlateBrushOutlineSettings OutlineSettings;                                       // 0x0070 (size: 0x40)
    class UObject* ResourceObject;                                                    // 0x00B0 (size: 0x8)
    FName ResourceName;                                                               // 0x00B8 (size: 0x8)
    FBox2f UVRegion;                                                                  // 0x00C0 (size: 0x14)

}; // Size: 0xF0

struct FSlateBrushOutlineSettings
{
    FVector4 CornerRadii;                                                             // 0x0000 (size: 0x20)
    FSlateColor Color;                                                                // 0x0020 (size: 0x14)
    float Width;                                                                      // 0x0034 (size: 0x4)
    TEnumAsByte<ESlateBrushRoundingType::Type> RoundingType;                          // 0x0038 (size: 0x1)
    bool bUseBrushTransparency;                                                       // 0x0039 (size: 0x1)

}; // Size: 0x40

struct FSlateColor
{
    FLinearColor SpecifiedColor;                                                      // 0x0000 (size: 0x10)
    ESlateColorStylingMode ColorUseRule;                                              // 0x0010 (size: 0x1)

}; // Size: 0x14

struct FSlateFontInfo
{
    class UObject* FontObject;                                                        // 0x0000 (size: 0x8)
    class UObject* FontMaterial;                                                      // 0x0008 (size: 0x8)
    FFontOutlineSettings OutlineSettings;                                             // 0x0010 (size: 0x20)
    FName TypefaceFontName;                                                           // 0x0040 (size: 0x8)
    int32 size;                                                                       // 0x0048 (size: 0x4)
    int32 LetterSpacing;                                                              // 0x004C (size: 0x4)
    float SkewAmount;                                                                 // 0x0050 (size: 0x4)

}; // Size: 0x58

struct FSlateSound
{
    class UObject* ResourceObject;                                                    // 0x0000 (size: 0x8)

}; // Size: 0x18

struct FSlateWidgetStyle
{
}; // Size: 0x8

struct FSliderStyle : public FSlateWidgetStyle
{
    FSlateBrush NormalBarImage;                                                       // 0x0010 (size: 0xF0)
    FSlateBrush HoveredBarImage;                                                      // 0x0100 (size: 0xF0)
    FSlateBrush DisabledBarImage;                                                     // 0x01F0 (size: 0xF0)
    FSlateBrush NormalThumbImage;                                                     // 0x02E0 (size: 0xF0)
    FSlateBrush HoveredThumbImage;                                                    // 0x03D0 (size: 0xF0)
    FSlateBrush DisabledThumbImage;                                                   // 0x04C0 (size: 0xF0)
    float BarThickness;                                                               // 0x05B0 (size: 0x4)

}; // Size: 0x5C0

struct FSpinBoxStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundBrush;                                                      // 0x0010 (size: 0xF0)
    FSlateBrush ActiveBackgroundBrush;                                                // 0x0100 (size: 0xF0)
    FSlateBrush HoveredBackgroundBrush;                                               // 0x01F0 (size: 0xF0)
    FSlateBrush ActiveFillBrush;                                                      // 0x02E0 (size: 0xF0)
    FSlateBrush HoveredFillBrush;                                                     // 0x03D0 (size: 0xF0)
    FSlateBrush InactiveFillBrush;                                                    // 0x04C0 (size: 0xF0)
    FSlateBrush ArrowsImage;                                                          // 0x05B0 (size: 0xF0)
    FSlateColor ForegroundColor;                                                      // 0x06A0 (size: 0x14)
    FMargin TextPadding;                                                              // 0x06B4 (size: 0x10)
    FMargin InsetPadding;                                                             // 0x06C4 (size: 0x10)

}; // Size: 0x6E0

struct FSplitterStyle : public FSlateWidgetStyle
{
    FSlateBrush HandleNormalBrush;                                                    // 0x0010 (size: 0xF0)
    FSlateBrush HandleHighlightBrush;                                                 // 0x0100 (size: 0xF0)

}; // Size: 0x1F0

struct FStyleColorList
{
    FLinearColor StyleColors;                                                         // 0x0000 (size: 0x3D0)

}; // Size: 0x988

struct FStyleTheme
{
}; // Size: 0x48

struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
    FSlateBrush SortPrimaryAscendingImage;                                            // 0x0010 (size: 0xF0)
    FSlateBrush SortPrimaryDescendingImage;                                           // 0x0100 (size: 0xF0)
    FSlateBrush SortSecondaryAscendingImage;                                          // 0x01F0 (size: 0xF0)
    FSlateBrush SortSecondaryDescendingImage;                                         // 0x02E0 (size: 0xF0)
    FSlateBrush NormalBrush;                                                          // 0x03D0 (size: 0xF0)
    FSlateBrush HoveredBrush;                                                         // 0x04C0 (size: 0xF0)
    FSlateBrush MenuDropdownImage;                                                    // 0x05B0 (size: 0xF0)
    FSlateBrush MenuDropdownNormalBorderBrush;                                        // 0x06A0 (size: 0xF0)
    FSlateBrush MenuDropdownHoveredBorderBrush;                                       // 0x0790 (size: 0xF0)

}; // Size: 0x880

struct FTableRowStyle : public FSlateWidgetStyle
{
    FSlateBrush SelectorFocusedBrush;                                                 // 0x0010 (size: 0xF0)
    FSlateBrush ActiveHoveredBrush;                                                   // 0x0100 (size: 0xF0)
    FSlateBrush ActiveBrush;                                                          // 0x01F0 (size: 0xF0)
    FSlateBrush InactiveHoveredBrush;                                                 // 0x02E0 (size: 0xF0)
    FSlateBrush InactiveBrush;                                                        // 0x03D0 (size: 0xF0)
    bool bUseParentRowBrush;                                                          // 0x04C0 (size: 0x1)
    FSlateBrush ParentRowBackgroundBrush;                                             // 0x04D0 (size: 0xF0)
    FSlateBrush ParentRowBackgroundHoveredBrush;                                      // 0x05C0 (size: 0xF0)
    FSlateBrush EvenRowBackgroundHoveredBrush;                                        // 0x06B0 (size: 0xF0)
    FSlateBrush EvenRowBackgroundBrush;                                               // 0x07A0 (size: 0xF0)
    FSlateBrush OddRowBackgroundHoveredBrush;                                         // 0x0890 (size: 0xF0)
    FSlateBrush OddRowBackgroundBrush;                                                // 0x0980 (size: 0xF0)
    FSlateColor TextColor;                                                            // 0x0A70 (size: 0x14)
    FSlateColor SelectedTextColor;                                                    // 0x0A84 (size: 0x14)
    FSlateBrush DropIndicator_Above;                                                  // 0x0AA0 (size: 0xF0)
    FSlateBrush DropIndicator_Onto;                                                   // 0x0B90 (size: 0xF0)
    FSlateBrush DropIndicator_Below;                                                  // 0x0C80 (size: 0xF0)
    FSlateBrush ActiveHighlightedBrush;                                               // 0x0D70 (size: 0xF0)
    FSlateBrush InactiveHighlightedBrush;                                             // 0x0E60 (size: 0xF0)

}; // Size: 0xF50

struct FTableViewStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundBrush;                                                      // 0x0010 (size: 0xF0)

}; // Size: 0x100

struct FTextBlockStyle : public FSlateWidgetStyle
{
    FSlateFontInfo Font;                                                              // 0x0008 (size: 0x58)
    FSlateColor ColorAndOpacity;                                                      // 0x0060 (size: 0x14)
    FVector2D ShadowOffset;                                                           // 0x0078 (size: 0x10)
    FLinearColor ShadowColorAndOpacity;                                               // 0x0088 (size: 0x10)
    FSlateColor SelectedBackgroundColor;                                              // 0x0098 (size: 0x14)
    FSlateColor HighlightColor;                                                       // 0x00AC (size: 0x14)
    FSlateBrush HighlightShape;                                                       // 0x00C0 (size: 0xF0)
    FSlateBrush StrikeBrush;                                                          // 0x01B0 (size: 0xF0)
    FSlateBrush UnderlineBrush;                                                       // 0x02A0 (size: 0xF0)
    ETextTransformPolicy TransformPolicy;                                             // 0x0390 (size: 0x1)
    ETextOverflowPolicy OverflowPolicy;                                               // 0x0391 (size: 0x1)

}; // Size: 0x3A0

struct FToolBarStyle : public FSlateWidgetStyle
{
    FSlateBrush BackgroundBrush;                                                      // 0x0010 (size: 0xF0)
    FSlateBrush ExpandBrush;                                                          // 0x0100 (size: 0xF0)
    FSlateBrush SeparatorBrush;                                                       // 0x01F0 (size: 0xF0)
    FTextBlockStyle LabelStyle;                                                       // 0x02E0 (size: 0x3A0)
    FEditableTextBoxStyle EditableTextStyle;                                          // 0x0680 (size: 0x1080)
    FCheckBoxStyle ToggleButton;                                                      // 0x1700 (size: 0xC50)
    FComboButtonStyle ComboButtonStyle;                                               // 0x2350 (size: 0x6C0)
    FButtonStyle SettingsButtonStyle;                                                 // 0x2A10 (size: 0x470)
    FComboButtonStyle SettingsComboButton;                                            // 0x2E80 (size: 0x6C0)
    FCheckBoxStyle SettingsToggleButton;                                              // 0x3540 (size: 0xC50)
    FButtonStyle ButtonStyle;                                                         // 0x4190 (size: 0x470)
    FMargin LabelPadding;                                                             // 0x4600 (size: 0x10)
    FMargin SeparatorPadding;                                                         // 0x4610 (size: 0x10)
    FMargin ComboButtonPadding;                                                       // 0x4620 (size: 0x10)
    FMargin ButtonPadding;                                                            // 0x4630 (size: 0x10)
    FMargin CheckBoxPadding;                                                          // 0x4640 (size: 0x10)
    FMargin BlockPadding;                                                             // 0x4650 (size: 0x10)
    FMargin IndentedBlockPadding;                                                     // 0x4660 (size: 0x10)
    FMargin BackgroundPadding;                                                        // 0x4670 (size: 0x10)
    FVector2D IconSize;                                                               // 0x4680 (size: 0x10)
    bool bShowLabels;                                                                 // 0x4690 (size: 0x1)

}; // Size: 0x46A0

struct FTypeface
{
    TArray<FTypefaceEntry> Fonts;                                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FTypefaceEntry
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FFontData Font;                                                                   // 0x0008 (size: 0x28)

}; // Size: 0x30

struct FVolumeControlStyle : public FSlateWidgetStyle
{
    FSliderStyle SliderStyle;                                                         // 0x0010 (size: 0x5C0)
    FSlateBrush HighVolumeImage;                                                      // 0x05D0 (size: 0xF0)
    FSlateBrush MidVolumeImage;                                                       // 0x06C0 (size: 0xF0)
    FSlateBrush LowVolumeImage;                                                       // 0x07B0 (size: 0xF0)
    FSlateBrush NoVolumeImage;                                                        // 0x08A0 (size: 0xF0)
    FSlateBrush MutedImage;                                                           // 0x0990 (size: 0xF0)

}; // Size: 0xA80

struct FWindowStyle : public FSlateWidgetStyle
{
    FButtonStyle MinimizeButtonStyle;                                                 // 0x0010 (size: 0x470)
    FButtonStyle MaximizeButtonStyle;                                                 // 0x0480 (size: 0x470)
    FButtonStyle RestoreButtonStyle;                                                  // 0x08F0 (size: 0x470)
    FButtonStyle CloseButtonStyle;                                                    // 0x0D60 (size: 0x470)
    FTextBlockStyle TitleTextStyle;                                                   // 0x11D0 (size: 0x3A0)
    FSlateBrush ActiveTitleBrush;                                                     // 0x1570 (size: 0xF0)
    FSlateBrush InactiveTitleBrush;                                                   // 0x1660 (size: 0xF0)
    FSlateBrush FlashTitleBrush;                                                      // 0x1750 (size: 0xF0)
    FSlateColor BackgroundColor;                                                      // 0x1840 (size: 0x14)
    FSlateBrush OutlineBrush;                                                         // 0x1860 (size: 0xF0)
    FSlateColor OutlineColor;                                                         // 0x1950 (size: 0x14)
    FSlateBrush BorderBrush;                                                          // 0x1970 (size: 0xF0)
    FSlateColor BorderColor;                                                          // 0x1A60 (size: 0x14)
    FSlateBrush BackgroundBrush;                                                      // 0x1A80 (size: 0xF0)
    FSlateBrush ChildBackgroundBrush;                                                 // 0x1B70 (size: 0xF0)
    int32 WindowCornerRadius;                                                         // 0x1C60 (size: 0x4)
    FMargin BorderPadding;                                                            // 0x1C64 (size: 0x10)

}; // Size: 0x1C80

class IFontFaceInterface : public IInterface
{
}; // Size: 0x28

class IFontProviderInterface : public IInterface
{
}; // Size: 0x28

class ISlateWidgetStyleContainerInterface : public IInterface
{
}; // Size: 0x28

class UFontBulkData : public UObject
{
}; // Size: 0x70

class USlateThemeManager : public UObject
{
    FGuid CurrentThemeId;                                                             // 0x0028 (size: 0x10)
    FStyleColorList ActiveColors;                                                     // 0x0038 (size: 0x988)

}; // Size: 0x9C0

class USlateTypes : public UObject
{
}; // Size: 0x28

class USlateWidgetStyleAsset : public UObject
{
    class USlateWidgetStyleContainerBase* CustomStyle;                                // 0x0028 (size: 0x8)

}; // Size: 0x30

class USlateWidgetStyleContainerBase : public UObject
{
}; // Size: 0x30

#endif
