#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x370 (0x3A0 - 0x30)
// Class Slate.ButtonWidgetStyle
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FButtonStyle                          ButtonStyle;                                       // 0x30(0x370)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UButtonWidgetStyle* GetDefaultObj();

};

// 0x950 (0x980 - 0x30)
// Class Slate.CheckBoxWidgetStyle
class UCheckBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FCheckBoxStyle                        CheckBoxStyle;                                     // 0x30(0x950)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCheckBoxWidgetStyle* GetDefaultObj();

};

// 0x5A0 (0x5D0 - 0x30)
// Class Slate.ComboBoxWidgetStyle
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboBoxStyle                        ComboBoxStyle;                                     // 0x30(0x5A0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UComboBoxWidgetStyle* GetDefaultObj();

};

// 0x540 (0x570 - 0x30)
// Class Slate.ComboButtonWidgetStyle
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FComboButtonStyle                     ComboButtonStyle;                                  // 0x30(0x540)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UComboButtonWidgetStyle* GetDefaultObj();

};

// 0xA00 (0xA30 - 0x30)
// Class Slate.EditableTextBoxWidgetStyle
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextBoxStyle                 EditableTextBoxStyle;                              // 0x30(0xA00)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEditableTextBoxWidgetStyle* GetDefaultObj();

};

// 0x290 (0x2C0 - 0x30)
// Class Slate.EditableTextWidgetStyle
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FEditableTextStyle                    EditableTextStyle;                                 // 0x30(0x290)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UEditableTextWidgetStyle* GetDefaultObj();

};

// 0x230 (0x260 - 0x30)
// Class Slate.ProgressWidgetStyle
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FProgressBarStyle                     ProgressBarStyle;                                  // 0x30(0x230)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UProgressWidgetStyle* GetDefaultObj();

};

// 0x650 (0x680 - 0x30)
// Class Slate.ScrollBarWidgetStyle
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x30(0x650)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UScrollBarWidgetStyle* GetDefaultObj();

};

// 0x2D0 (0x300 - 0x30)
// Class Slate.ScrollBoxWidgetStyle
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FScrollBoxStyle                       ScrollBoxStyle;                                    // 0x30(0x2D0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UScrollBoxWidgetStyle* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class Slate.SlateSettings
class USlateSettings : public UObject
{
public:
	bool                                         bExplicitCanvasChildZOrder;                        // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_478A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USlateSettings* GetDefaultObj();

};

// 0x520 (0x550 - 0x30)
// Class Slate.SpinBoxWidgetStyle
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FSpinBoxStyle                         SpinBoxStyle;                                      // 0x30(0x520)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USpinBoxWidgetStyle* GetDefaultObj();

};

// 0x2E0 (0x310 - 0x30)
// Class Slate.TextBlockWidgetStyle
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase
{
public:
	struct FTextBlockStyle                       TextBlockStyle;                                    // 0x30(0x2E0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTextBlockWidgetStyle* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Slate.ToolMenuBase
class UToolMenuBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UToolMenuBase* GetDefaultObj();

};

}


