#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DeimosTypeInfo.DeimosTypeInfo_C
// (None)

class UClass* IDeimosTypeInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DeimosTypeInfo_C");

	return Clss;
}


// DeimosTypeInfo_C DeimosTypeInfo.Default__DeimosTypeInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IDeimosTypeInfo_C* IDeimosTypeInfo_C::GetDefaultObj()
{
	static class IDeimosTypeInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IDeimosTypeInfo_C*>(IDeimosTypeInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DeimosTypeInfo.DeimosTypeInfo_C.GetEnemyColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IDeimosTypeInfo_C::GetEnemyColor(struct FLinearColor* Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DeimosTypeInfo_C", "GetEnemyColor");

	Params::IDeimosTypeInfo_C_GetEnemyColor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}

}


