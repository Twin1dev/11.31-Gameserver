#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Solaris.SolarisArrayLibrary
// (None)

class UClass* USolarisArrayLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarisArrayLibrary");

	return Clss;
}


// SolarisArrayLibrary Solaris.Default__SolarisArrayLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarisArrayLibrary* USolarisArrayLibrary::GetDefaultObj()
{
	static class USolarisArrayLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarisArrayLibrary*>(USolarisArrayLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Solaris.SolarisArrayLibrary.Num
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TArray<int32>                      Array                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisArrayLibrary::Num(TArray<int32>& Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisArrayLibrary", "Num");

	Params::USolarisArrayLibrary_Num_Params Parms{};

	Parms.Array = Array;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisArrayLibrary.Add
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// TArray<int32>                      Array                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              New_item                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisArrayLibrary::Add(TArray<int32>& Array, int32& New_item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisArrayLibrary", "Add");

	Params::USolarisArrayLibrary_Add_Params Parms{};

	Parms.Array = Array;
	Parms.New_item = New_item;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Solaris.SolarisMathLibrary_Bool
// (None)

class UClass* USolarisMathLibrary_Bool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarisMathLibrary_Bool");

	return Clss;
}


// SolarisMathLibrary_Bool Solaris.Default__SolarisMathLibrary_Bool
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarisMathLibrary_Bool* USolarisMathLibrary_Bool::GetDefaultObj()
{
	static class USolarisMathLibrary_Bool* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarisMathLibrary_Bool*>(USolarisMathLibrary_Bool::StaticClass()->DefaultObject);

	return Default;
}


// Function Solaris.SolarisMathLibrary_Bool.logical_xor
// (Final, Native, Static, Public)
// Parameters:
// bool                               LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Bool::Logical_xor(bool LHS, bool RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Bool", "logical_xor");

	Params::USolarisMathLibrary_Bool_Logical_xor_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Bool.logical_not
// (Final, Native, Static, Public)
// Parameters:
// bool                               Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Bool::Logical_not(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Bool", "logical_not");

	Params::USolarisMathLibrary_Bool_Logical_not_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Bool.assign
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// bool                               LHS                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Bool::Assign(bool* LHS, bool RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Bool", "assign");

	Params::USolarisMathLibrary_Bool_Assign_Params Parms{};

	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LHS != nullptr)
		*LHS = Parms.LHS;

	return Parms.ReturnValue;

}


// Class Solaris.SolarisMathLibrary_Int
// (None)

class UClass* USolarisMathLibrary_Int::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarisMathLibrary_Int");

	return Clss;
}


// SolarisMathLibrary_Int Solaris.Default__SolarisMathLibrary_Int
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarisMathLibrary_Int* USolarisMathLibrary_Int::GetDefaultObj()
{
	static class USolarisMathLibrary_Int* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarisMathLibrary_Int*>(USolarisMathLibrary_Int::StaticClass()->DefaultObject);

	return Default;
}


// Function Solaris.SolarisMathLibrary_Int.Subtract
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::Subtract(int32 LHS, int32 RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "Subtract");

	Params::USolarisMathLibrary_Int_Subtract_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.not_equal
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::Not_equal(int32 LHS, int32 RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "not_equal");

	Params::USolarisMathLibrary_Int_Not_equal_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.negate
// (Final, Native, Static, Public)
// Parameters:
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::Negate(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "negate");

	Params::USolarisMathLibrary_Int_Negate_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.Multiply
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::Multiply(int32 LHS, int32 RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "Multiply");

	Params::USolarisMathLibrary_Int_Multiply_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.min
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::Min(int32 LHS, int32 RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "min");

	Params::USolarisMathLibrary_Int_Min_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.max
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::Max(int32 LHS, int32 RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "max");

	Params::USolarisMathLibrary_Int_Max_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.less_equal
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::Less_equal(int32 LHS, int32 RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "less_equal");

	Params::USolarisMathLibrary_Int_Less_equal_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.less
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::Less(int32 LHS, int32 RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "less");

	Params::USolarisMathLibrary_Int_Less_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.greater_equal
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::Greater_equal(int32 LHS, int32 RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "greater_equal");

	Params::USolarisMathLibrary_Int_Greater_equal_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.greater
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::Greater(int32 LHS, int32 RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "greater");

	Params::USolarisMathLibrary_Int_Greater_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.equal
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Int::Equal(int32 LHS, int32 RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "equal");

	Params::USolarisMathLibrary_Int_Equal_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.Divide
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::Divide(int32 LHS, int32 RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "Divide");

	Params::USolarisMathLibrary_Int_Divide_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.assign
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// int32                              LHS                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::Assign(int32* LHS, int32 RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "assign");

	Params::USolarisMathLibrary_Int_Assign_Params Parms{};

	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LHS != nullptr)
		*LHS = Parms.LHS;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.Add
// (Final, Native, Static, Public)
// Parameters:
// int32                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::Add(int32 LHS, int32 RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "Add");

	Params::USolarisMathLibrary_Int_Add_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Int.abs
// (Final, Native, Static, Public)
// Parameters:
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USolarisMathLibrary_Int::Abs(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Int", "abs");

	Params::USolarisMathLibrary_Int_Abs_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Solaris.SolarisMathLibrary_Real
// (None)

class UClass* USolarisMathLibrary_Real::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarisMathLibrary_Real");

	return Clss;
}


// SolarisMathLibrary_Real Solaris.Default__SolarisMathLibrary_Real
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarisMathLibrary_Real* USolarisMathLibrary_Real::GetDefaultObj()
{
	static class USolarisMathLibrary_Real* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarisMathLibrary_Real*>(USolarisMathLibrary_Real::StaticClass()->DefaultObject);

	return Default;
}


// Function Solaris.SolarisMathLibrary_Real.Subtract
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Real::Subtract(float LHS, float RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Real", "Subtract");

	Params::USolarisMathLibrary_Real_Subtract_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Real.not_equal
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Real::Not_equal(float LHS, float RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Real", "not_equal");

	Params::USolarisMathLibrary_Real_Not_equal_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Real.negate
// (Final, Native, Static, Public)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Real::Negate(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Real", "negate");

	Params::USolarisMathLibrary_Real_Negate_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Real.Multiply
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Real::Multiply(float LHS, float RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Real", "Multiply");

	Params::USolarisMathLibrary_Real_Multiply_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Real.min
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Real::Min(float LHS, float RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Real", "min");

	Params::USolarisMathLibrary_Real_Min_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Real.max
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Real::Max(float LHS, float RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Real", "max");

	Params::USolarisMathLibrary_Real_Max_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Real.less_equal
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Real::Less_equal(float LHS, float RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Real", "less_equal");

	Params::USolarisMathLibrary_Real_Less_equal_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Real.less
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Real::Less(float LHS, float RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Real", "less");

	Params::USolarisMathLibrary_Real_Less_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Real.greater_equal
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Real::Greater_equal(float LHS, float RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Real", "greater_equal");

	Params::USolarisMathLibrary_Real_Greater_equal_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Real.greater
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Real::Greater(float LHS, float RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Real", "greater");

	Params::USolarisMathLibrary_Real_Greater_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Real.equal
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USolarisMathLibrary_Real::Equal(float LHS, float RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Real", "equal");

	Params::USolarisMathLibrary_Real_Equal_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Real.Divide
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Real::Divide(float LHS, float RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Real", "Divide");

	Params::USolarisMathLibrary_Real_Divide_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Real.assign
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// float                              LHS                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Real::Assign(float* LHS, float RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Real", "assign");

	Params::USolarisMathLibrary_Real_Assign_Params Parms{};

	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LHS != nullptr)
		*LHS = Parms.LHS;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Real.Add
// (Final, Native, Static, Public)
// Parameters:
// float                              LHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RHS                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Real::Add(float LHS, float RHS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Real", "Add");

	Params::USolarisMathLibrary_Real_Add_Params Parms{};

	Parms.LHS = LHS;
	Parms.RHS = RHS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Solaris.SolarisMathLibrary_Real.abs
// (Final, Native, Static, Public)
// Parameters:
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USolarisMathLibrary_Real::Abs(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SolarisMathLibrary_Real", "abs");

	Params::USolarisMathLibrary_Real_Abs_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class Solaris.SolarisGameSettings
// (None)

class UClass* USolarisGameSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SolarisGameSettings");

	return Clss;
}


// SolarisGameSettings Solaris.Default__SolarisGameSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USolarisGameSettings* USolarisGameSettings::GetDefaultObj()
{
	static class USolarisGameSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USolarisGameSettings*>(USolarisGameSettings::StaticClass()->DefaultObject);

	return Default;
}

}


