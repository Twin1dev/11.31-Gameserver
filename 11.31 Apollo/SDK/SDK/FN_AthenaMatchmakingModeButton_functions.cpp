#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C
// (None)

class UClass* UAthenaMatchmakingModeButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaMatchmakingModeButton_C");

	return Clss;
}


// AthenaMatchmakingModeButton_C AthenaMatchmakingModeButton.Default__AthenaMatchmakingModeButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaMatchmakingModeButton_C* UAthenaMatchmakingModeButton_C::GetDefaultObj()
{
	static class UAthenaMatchmakingModeButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaMatchmakingModeButton_C*>(UAthenaMatchmakingModeButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.RefreshLimitedPoolWarning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCrossplayEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingModeButton_C::RefreshLimitedPoolWarning(bool IsCrossplayEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingModeButton_C", "RefreshLimitedPoolWarning");

	Params::UAthenaMatchmakingModeButton_C_RefreshLimitedPoolWarning_Params Parms{};

	Parms.IsCrossplayEnabled = IsCrossplayEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.RefreshFillText
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingModeButton_C::RefreshFillText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingModeButton_C", "RefreshFillText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetSquadFillText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bFill                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingModeButton_C::SetSquadFillText(bool bFill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingModeButton_C", "SetSquadFillText");

	Params::UAthenaMatchmakingModeButton_C_SetSquadFillText_Params Parms{};

	Parms.bFill = bFill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.PlaylistChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlaylistAthena*         NewPlaylist                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        OverrideName                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaMatchmakingModeButton_C::PlaylistChanged(class UFortPlaylistAthena* NewPlaylist, class FText OverrideName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingModeButton_C", "PlaylistChanged");

	Params::UAthenaMatchmakingModeButton_C_PlaylistChanged_Params Parms{};

	Parms.NewPlaylist = NewPlaylist;
	Parms.OverrideName = OverrideName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetTabLabelInfo
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortTabButtonLabelInfo     TabLabelInfo                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaMatchmakingModeButton_C::SetTabLabelInfo(struct FFortTabButtonLabelInfo& TabLabelInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingModeButton_C", "SetTabLabelInfo");

	Params::UAthenaMatchmakingModeButton_C_SetTabLabelInfo_Params Parms{};

	Parms.TabLabelInfo = TabLabelInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaMatchmakingModeButton_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingModeButton_C", "OnMouseEnter");

	Params::UAthenaMatchmakingModeButton_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaMatchmakingModeButton_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingModeButton_C", "OnMouseLeave");

	Params::UAthenaMatchmakingModeButton_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.ExecuteUbergraph_AthenaMatchmakingModeButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortTabButtonLabelInfo     K2Node_Event_TabLabelInfo                                        (ConstParm)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)

void UAthenaMatchmakingModeButton_C::ExecuteUbergraph_AthenaMatchmakingModeButton(int32 EntryPoint, bool CallFunc_GetIsEnabled_ReturnValue, const struct FFortTabButtonLabelInfo& K2Node_Event_TabLabelInfo, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const struct FPointerEvent& K2Node_Event_MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMatchmakingModeButton_C", "ExecuteUbergraph_AthenaMatchmakingModeButton");

	Params::UAthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.K2Node_Event_TabLabelInfo = K2Node_Event_TabLabelInfo;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}

}


