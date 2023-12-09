#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisArrayLibrary
class USolarisArrayLibrary : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisArrayLibrary* GetDefaultObj();

	int32 Num(TArray<int32>& Array);
	int32 Add(TArray<int32>& Array, int32& New_item);
};

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisMathLibrary_Bool
class USolarisMathLibrary_Bool : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisMathLibrary_Bool* GetDefaultObj();

	bool Logical_xor(bool LHS, bool RHS);
	bool Logical_not(bool Value);
	bool Assign(bool* LHS, bool RHS);
};

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisMathLibrary_Int
class USolarisMathLibrary_Int : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisMathLibrary_Int* GetDefaultObj();

	int32 Subtract(int32 LHS, int32 RHS);
	bool Not_equal(int32 LHS, int32 RHS);
	int32 Negate(int32 Value);
	int32 Multiply(int32 LHS, int32 RHS);
	int32 Min(int32 LHS, int32 RHS);
	int32 Max(int32 LHS, int32 RHS);
	bool Less_equal(int32 LHS, int32 RHS);
	bool Less(int32 LHS, int32 RHS);
	bool Greater_equal(int32 LHS, int32 RHS);
	bool Greater(int32 LHS, int32 RHS);
	bool Equal(int32 LHS, int32 RHS);
	int32 Divide(int32 LHS, int32 RHS);
	int32 Assign(int32* LHS, int32 RHS);
	int32 Add(int32 LHS, int32 RHS);
	int32 Abs(int32 Value);
};

// 0x0 (0x28 - 0x28)
// Class Solaris.SolarisMathLibrary_Real
class USolarisMathLibrary_Real : public UObject
{
public:

	static class UClass* StaticClass();
	static class USolarisMathLibrary_Real* GetDefaultObj();

	float Subtract(float LHS, float RHS);
	bool Not_equal(float LHS, float RHS);
	float Negate(float Value);
	float Multiply(float LHS, float RHS);
	float Min(float LHS, float RHS);
	float Max(float LHS, float RHS);
	bool Less_equal(float LHS, float RHS);
	bool Less(float LHS, float RHS);
	bool Greater_equal(float LHS, float RHS);
	bool Greater(float LHS, float RHS);
	bool Equal(float LHS, float RHS);
	float Divide(float LHS, float RHS);
	float Assign(float* LHS, float RHS);
	float Add(float LHS, float RHS);
	float Abs(float Value);
};

// 0x18 (0x40 - 0x28)
// Class Solaris.SolarisGameSettings
class USolarisGameSettings : public UObject
{
public:
	TArray<class FString>                        Blacklist;                                         // 0x28(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPublic)
	int32                                        MaxAllowedSize;                                    // 0x38(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1637[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USolarisGameSettings* GetDefaultObj();

};

}


