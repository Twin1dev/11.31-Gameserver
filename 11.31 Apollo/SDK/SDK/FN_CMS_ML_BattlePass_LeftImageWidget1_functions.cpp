#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CMS_ML_BattlePass_LeftImageWidget1.CMS_ML_BattlePass_LeftImageWidget1_C
// (None)

class UClass* UCMS_ML_BattlePass_LeftImageWidget1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CMS_ML_BattlePass_LeftImageWidget1_C");

	return Clss;
}


// CMS_ML_BattlePass_LeftImageWidget1_C CMS_ML_BattlePass_LeftImageWidget1.Default__CMS_ML_BattlePass_LeftImageWidget1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCMS_ML_BattlePass_LeftImageWidget1_C* UCMS_ML_BattlePass_LeftImageWidget1_C::GetDefaultObj()
{
	static class UCMS_ML_BattlePass_LeftImageWidget1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCMS_ML_BattlePass_LeftImageWidget1_C*>(UCMS_ML_BattlePass_LeftImageWidget1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CMS_ML_BattlePass_LeftImageWidget1.CMS_ML_BattlePass_LeftImageWidget1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCMS_ML_BattlePass_LeftImageWidget1_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CMS_ML_BattlePass_LeftImageWidget1_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CMS_ML_BattlePass_LeftImageWidget1.CMS_ML_BattlePass_LeftImageWidget1_C.ExecuteUbergraph_CMS_ML_BattlePass_LeftImageWidget1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaAccountContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCurrentChapterAndSeasonText_ReturnValue              (None)

void UCMS_ML_BattlePass_LeftImageWidget1_C::ExecuteUbergraph_CMS_ML_BattlePass_LeftImageWidget1(int32 EntryPoint, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetCurrentChapterAndSeasonText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CMS_ML_BattlePass_LeftImageWidget1_C", "ExecuteUbergraph_CMS_ML_BattlePass_LeftImageWidget1");

	Params::UCMS_ML_BattlePass_LeftImageWidget1_C_ExecuteUbergraph_CMS_ML_BattlePass_LeftImageWidget1_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentChapterAndSeasonText_ReturnValue = CallFunc_GetCurrentChapterAndSeasonText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


