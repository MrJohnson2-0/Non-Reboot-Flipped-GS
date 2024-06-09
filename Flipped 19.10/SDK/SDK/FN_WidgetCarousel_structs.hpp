#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4D8 (0x4E0 - 0x8)
// ScriptStruct WidgetCarousel.WidgetCarouselNavigationButtonStyle
struct FWidgetCarouselNavigationButtonStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_3D28[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          InnerButtonStyle;                                  // 0x10(0x370)(NativeAccessSpecifierPublic)
	struct FSlateBrush                           NavigationButtonLeftImage;                         // 0x380(0xB0)(NativeAccessSpecifierPublic)
	struct FSlateBrush                           NavigationButtonRightImage;                        // 0x430(0xB0)(NativeAccessSpecifierPublic)
};

// 0xB08 (0xB10 - 0x8)
// ScriptStruct WidgetCarousel.WidgetCarouselNavigationBarStyle
struct FWidgetCarouselNavigationBarStyle : public FSlateWidgetStyle
{
public:
	uint8                                        Pad_3D60[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           HighlightBrush;                                    // 0x10(0xB0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          LeftButtonStyle;                                   // 0xC0(0x370)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          CenterButtonStyle;                                 // 0x430(0x370)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FButtonStyle                          RightButtonStyle;                                  // 0x7A0(0x370)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

}


