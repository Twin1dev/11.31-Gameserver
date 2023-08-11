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


// Function TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamMemberPedestal_FeatInfo_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static auto Func = Class->GetFunction("TeamMemberPedestal_FeatInfo_C", "OnAnimationFinished");

	Params::UTeamMemberPedestal_FeatInfo_C_OnAnimationFinished_Params Parms;

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C.OnFeatDefinitionSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTeamMemberPedestal_FeatInfo_C::OnFeatDefinitionSet()
{
	static auto Func = Class->GetFunction("TeamMemberPedestal_FeatInfo_C", "OnFeatDefinitionSet");

	Params::UTeamMemberPedestal_FeatInfo_C_OnFeatDefinitionSet_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C.ExecuteUbergraph_TeamMemberPedestal_FeatInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Event_Animation                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTeamMemberPedestal_FeatInfo_C::ExecuteUbergraph_TeamMemberPedestal_FeatInfo(int32 EntryPoint, class UWidgetAnimation* K2Node_Event_Animation, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static auto Func = Class->GetFunction("TeamMemberPedestal_FeatInfo_C", "ExecuteUbergraph_TeamMemberPedestal_FeatInfo");

	Params::UTeamMemberPedestal_FeatInfo_C_ExecuteUbergraph_TeamMemberPedestal_FeatInfo_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Animation = K2Node_Event_Animation;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
