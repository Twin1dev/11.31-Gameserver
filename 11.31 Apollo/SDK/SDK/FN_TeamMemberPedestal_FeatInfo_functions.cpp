#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C
// (None)

class UClass* UTeamMemberPedestal_FeatInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TeamMemberPedestal_FeatInfo_C");

	return Clss;
}


// TeamMemberPedestal_FeatInfo_C TeamMemberPedestal_FeatInfo.Default__TeamMemberPedestal_FeatInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTeamMemberPedestal_FeatInfo_C* UTeamMemberPedestal_FeatInfo_C::GetDefaultObj()
{
	static class UTeamMemberPedestal_FeatInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeamMemberPedestal_FeatInfo_C*>(UTeamMemberPedestal_FeatInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTeamMemberPedestal_FeatInfo_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamMemberPedestal_FeatInfo_C", "OnAnimationFinished");

	Params::UTeamMemberPedestal_FeatInfo_C_OnAnimationFinished_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TeamMemberPedestal_FeatInfo.TeamMemberPedestal_FeatInfo_C.OnFeatDefinitionSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UTeamMemberPedestal_FeatInfo_C::OnFeatDefinitionSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamMemberPedestal_FeatInfo_C", "OnFeatDefinitionSet");



	UObject::ProcessEvent(Func, nullptr);

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TeamMemberPedestal_FeatInfo_C", "ExecuteUbergraph_TeamMemberPedestal_FeatInfo");

	Params::UTeamMemberPedestal_FeatInfo_C_ExecuteUbergraph_TeamMemberPedestal_FeatInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Animation = K2Node_Event_Animation;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


