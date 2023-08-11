#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function CMS_ML_BattlePass_LeftImageWidget1.CMS_ML_BattlePass_LeftImageWidget1_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCMS_ML_BattlePass_LeftImageWidget1_C::Construct()
{
	static auto Func = Class->GetFunction("CMS_ML_BattlePass_LeftImageWidget1_C", "Construct");

	Params::UCMS_ML_BattlePass_LeftImageWidget1_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CMS_ML_BattlePass_LeftImageWidget1.CMS_ML_BattlePass_LeftImageWidget1_C.ExecuteUbergraph_CMS_ML_BattlePass_LeftImageWidget1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaAccountContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCurrentChapterAndSeasonText_ReturnValue              ()

void UCMS_ML_BattlePass_LeftImageWidget1_C::ExecuteUbergraph_CMS_ML_BattlePass_LeftImageWidget1(int32 EntryPoint, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetCurrentChapterAndSeasonText_ReturnValue)
{
	static auto Func = Class->GetFunction("CMS_ML_BattlePass_LeftImageWidget1_C", "ExecuteUbergraph_CMS_ML_BattlePass_LeftImageWidget1");

	Params::UCMS_ML_BattlePass_LeftImageWidget1_C_ExecuteUbergraph_CMS_ML_BattlePass_LeftImageWidget1_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentChapterAndSeasonText_ReturnValue = CallFunc_GetCurrentChapterAndSeasonText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
