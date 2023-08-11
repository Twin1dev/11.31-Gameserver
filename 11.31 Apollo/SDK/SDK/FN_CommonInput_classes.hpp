#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x190 (0x1B8 - 0x28)
// Class CommonInput.CommonInputSettings
class UCommonInputSettings : public UObject
{
public:
	TSoftClassPtr<class UCommonUIInputData>      InputData;                                         // 0x28(0x28)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FCommonInputPlatformData              CommonInputPlatformData[0x7];                      // 0x50(0x118)(Edit, Config, NativeAccessSpecifierPrivate)
	bool                                         bEnableInputMethodThrashingProtection;             // 0x168(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1872[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        InputMethodThrashingLimit;                         // 0x16C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                       InputMethodThrashingWindowInSeconds;               // 0x170(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                       InputMethodThrashingCooldownInSeconds;             // 0x178(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1873[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TSubclassOf<class UCommonUIInputData>        InputDataClass;                                    // 0x188(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FCommonInputPlatformData              CurrentPlatform;                                   // 0x190(0x28)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonInputSettings");
		return Clss;
	}

};

// 0xC0 (0xF0 - 0x30)
// Class CommonInput.CommonInputSubsystem
class UCommonInputSubsystem : public ULocalPlayerSubsystem
{
public:
	uint8                                        Pad_1874[0x20];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	UMulticastInlineDelegateProperty_            OnInputMethodChanged;                              // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	int32                                        NumberOfInputMethodChangesRecently;                // 0x60(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1875[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	double                                       LastInputMethodChangeTime;                         // 0x68(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                       LastTimeInputMethodThrashingBegan;                 // 0x70(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECommonInputType                  LastInputType;                                     // 0x78(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECommonInputType                  CurrentInputType;                                  // 0x79(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECommonGamepadType                GamepadInputType;                                  // 0x7A(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1876[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TMap<class FName, enum class ECommonInputType> CurrentInputLocks;                                 // 0x80(0x50)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1877[0x18];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	bool                                         bIsGamepadSimulatedClick;                          // 0xE8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1878[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonInputSubsystem");
		return Clss;
	}

	bool ShouldShowInputKeys();
	void SetGamepadInputType(enum class ECommonGamepadType InGamepadInputType);
	void SetCurrentInputType(enum class ECommonInputType NewInputType);
	bool IsUsingPointerInput();
	bool IsInputMethodActive(enum class ECommonInputType InputMethod);
	enum class ECommonInputType GetDefaultInputType();
	enum class ECommonInputType GetCurrentInputType();
	enum class ECommonGamepadType GetCurrentGamepadType();
};

// 0x20 (0x48 - 0x28)
// Class CommonInput.CommonUIInputData
class UCommonUIInputData : public UObject
{
public:
	struct FDataTableRowHandle                   DefaultClickAction;                                // 0x28(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   DefaultBackAction;                                 // 0x38(0x10)(Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUIInputData");
		return Clss;
	}

};

// 0x78 (0xA0 - 0x28)
// Class CommonInput.CommonInputControllerData
class UCommonInputControllerData : public UObject
{
public:
	enum class ECommonInputType                  InputType;                                         // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonGamepadType                GamepadType;                                       // 0x29(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1879[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TSoftObjectPtr<class UTexture2D>             ControllerTexture;                                 // 0x30(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             ControllerButtonMaskTexture;                       // 0x58(0x28)(Edit, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FCommonInputKeyBrushConfiguration> InputBrushDataMap;                                 // 0x80(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FCommonInputKeySetBrushConfiguration> InputBrushKeySets;                                 // 0x90(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonInputControllerData");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
