#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MatchXPScreenWidget.MatchXPScreenWidget_C
// (None)

class UClass* UMatchXPScreenWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatchXPScreenWidget_C");

	return Clss;
}


// MatchXPScreenWidget_C MatchXPScreenWidget.Default__MatchXPScreenWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMatchXPScreenWidget_C* UMatchXPScreenWidget_C::GetDefaultObj()
{
	static class UMatchXPScreenWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatchXPScreenWidget_C*>(UMatchXPScreenWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.Is Showing Match Stats
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Is_Showing                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMatchXPScreenWidget_C::Is_Showing_Match_Stats(bool* Is_Showing, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "Is Showing Match Stats");

	Params::UMatchXPScreenWidget_C_Is_Showing_Match_Stats_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Is_Showing != nullptr)
		*Is_Showing = Parms.Is_Showing;

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.OnComplete_5CAD590142B3D878B2EFDA880F8D43B2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPScreenWidget_C::OnComplete_5CAD590142B3D878B2EFDA880F8D43B2(class UUserWidget* UserWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "OnComplete_5CAD590142B3D878B2EFDA880F8D43B2");

	Params::UMatchXPScreenWidget_C_OnComplete_5CAD590142B3D878B2EFDA880F8D43B2_Params Parms{};

	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.OnComplete_1F07F3BB4539F8ABF08580925D18D5DF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPScreenWidget_C::OnComplete_1F07F3BB4539F8ABF08580925D18D5DF(class UUserWidget* UserWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "OnComplete_1F07F3BB4539F8ABF08580925D18D5DF");

	Params::UMatchXPScreenWidget_C_OnComplete_1F07F3BB4539F8ABF08580925D18D5DF_Params Parms{};

	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.BndEvt__SkewButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPScreenWidget_C::BndEvt__SkewButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "BndEvt__SkewButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UMatchXPScreenWidget_C_BndEvt__SkewButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPScreenWidget_C::BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UMatchXPScreenWidget_C_BndEvt__Button_Spectate_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.OnGoToSpectating
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMatchXPScreenWidget_C::OnGoToSpectating()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "OnGoToSpectating");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.BndEvt__Button_ReturnToLobby_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPScreenWidget_C::BndEvt__Button_ReturnToLobby_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "BndEvt__Button_ReturnToLobby_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UMatchXPScreenWidget_C_BndEvt__Button_ReturnToLobby_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.On Ready Up Clicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMatchXPScreenWidget_C::On_Ready_Up_Clicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "On Ready Up Clicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.Return To Lobby
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMatchXPScreenWidget_C::Return_To_Lobby()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "Return To Lobby");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.BndEvt__Button_ReturnToLobby_BottomBar_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPScreenWidget_C::BndEvt__Button_ReturnToLobby_BottomBar_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "BndEvt__Button_ReturnToLobby_BottomBar_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::UMatchXPScreenWidget_C_BndEvt__Button_ReturnToLobby_BottomBar_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.BndEvt__Button_NextMatch_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPScreenWidget_C::BndEvt__Button_NextMatch_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "BndEvt__Button_NextMatch_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	Params::UMatchXPScreenWidget_C_BndEvt__Button_NextMatch_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.Update Ready Up Vis
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMatchXPScreenWidget_C::Update_Ready_Up_Vis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "Update Ready Up Vis");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.Update Recap Vis
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMatchXPScreenWidget_C::Update_Recap_Vis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "Update Recap Vis");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.BndEvt__Button_Cancel_1_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPScreenWidget_C::BndEvt__Button_Cancel_1_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "BndEvt__Button_Cancel_1_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::UMatchXPScreenWidget_C_BndEvt__Button_Cancel_1_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.EventPresentTotals
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMatchXPScreenWidget_C::EventPresentTotals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "EventPresentTotals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.BndEvt__Button_Cancel_1_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPScreenWidget_C::BndEvt__Button_Cancel_1_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "BndEvt__Button_Cancel_1_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");

	Params::UMatchXPScreenWidget_C_BndEvt__Button_Cancel_1_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.SetEndMatchXPValues
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              CombatXp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SurvivalXp                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BonusMedalXp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MatchXp                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalXpGained                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPScreenWidget_C::SetEndMatchXPValues(int32 CombatXp, int32 SurvivalXp, int32 BonusMedalXp, int32 MatchXp, int32 TotalXpGained)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "SetEndMatchXPValues");

	Params::UMatchXPScreenWidget_C_SetEndMatchXPValues_Params Parms{};

	Parms.CombatXp = CombatXp;
	Parms.SurvivalXp = SurvivalXp;
	Parms.BonusMedalXp = BonusMedalXp;
	Parms.MatchXp = MatchXp;
	Parms.TotalXpGained = TotalXpGained;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.AllMedalsPlaced
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMatchXPScreenWidget_C::AllMedalsPlaced()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "AllMedalsPlaced");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.SetInputEnabled
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewInputEnabled                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMatchXPScreenWidget_C::SetInputEnabled(bool bNewInputEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "SetInputEnabled");

	Params::UMatchXPScreenWidget_C_SetInputEnabled_Params Parms{};

	Parms.bNewInputEnabled = bNewInputEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.OnMatchMakingButtonEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMatchXPScreenWidget_C::OnMatchMakingButtonEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "OnMatchMakingButtonEnabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.SetEndOfMatchXPValueData
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              XP                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BonusPct                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPScreenWidget_C::SetEndOfMatchXPValueData(const struct FGameplayTag& Tag, int32 XP, int32 BonusPct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "SetEndOfMatchXPValueData");

	Params::UMatchXPScreenWidget_C_SetEndOfMatchXPValueData_Params Parms{};

	Parms.Tag = Tag;
	Parms.XP = XP;
	Parms.BonusPct = BonusPct;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.BndEvt__Button_ReportPlayer_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPScreenWidget_C::BndEvt__Button_ReportPlayer_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "BndEvt__Button_ReportPlayer_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature");

	Params::UMatchXPScreenWidget_C_BndEvt__Button_ReportPlayer_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.Report Player Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMatchXPScreenWidget_C::Report_Player_Pressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "Report Player Pressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.Update PrevNext Vis
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMatchXPScreenWidget_C::Update_PrevNext_Vis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "Update PrevNext Vis");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.UpdateAllVisibility
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMatchXPScreenWidget_C::UpdateAllVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "UpdateAllVisibility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.BndEvt__Button_PrevTeam_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPScreenWidget_C::BndEvt__Button_PrevTeam_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "BndEvt__Button_PrevTeam_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature");

	Params::UMatchXPScreenWidget_C_BndEvt__Button_PrevTeam_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.BndEvt__Button_NextTeam_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPScreenWidget_C::BndEvt__Button_NextTeam_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "BndEvt__Button_NextTeam_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature");

	Params::UMatchXPScreenWidget_C_BndEvt__Button_NextTeam_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.BndEvt__Button_ItemShop_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPScreenWidget_C::BndEvt__Button_ItemShop_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "BndEvt__Button_ItemShop_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature");

	Params::UMatchXPScreenWidget_C_BndEvt__Button_ItemShop_K2Node_ComponentBoundEvent_10_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.Update Item Shop Button Viz
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMatchXPScreenWidget_C::Update_Item_Shop_Button_Viz()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "Update Item Shop Button Viz");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMatchXPScreenWidget_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.BndEvt__Button_Back_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPScreenWidget_C::BndEvt__Button_Back_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "BndEvt__Button_Back_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature");

	Params::UMatchXPScreenWidget_C_BndEvt__Button_Back_K2Node_ComponentBoundEvent_12_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.On Stat Button Pressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMatchXPScreenWidget_C::On_Stat_Button_Pressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "On Stat Button Pressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MatchXPScreenWidget.MatchXPScreenWidget_C.ExecuteUbergraph_MatchXPScreenWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaGamePhase        CallFunc_GetGamePhase_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_CustomEvent_UserWidget                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUserWidget*                 Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPostGameHUDState       Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPostGameHUDState       Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_11                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_10                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_9                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonUISubsystem*          CallFunc_GetContext_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_8                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Temp_object_Variable_1                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_7                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatablePanel*     K2Node_DynamicCast_AsCommon_Activatable_Panel                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_CustomEvent_UserWidget_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AllowInGameMatchmaking_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_6                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMatchXPTotalEntry_C*        K2Node_DynamicCast_AsMatch_XPTotal_Entry                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_CombatXp                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_SurvivalXp                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_BonusMedalXp                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_MatchXp                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_TotalXpGained                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bNewInputEnabled                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMatchMakingButtonEnabled_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                K2Node_Event_Tag                                                 (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Xp                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_BonusPct                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue             (None)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPostGameHUDState       K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CreateWidgetAsync*CallFunc_CreateWidgetAsync_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_3                                          (None)
// class UWidget*                     CallFunc_FindParentWidgetOfType_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPostGameScreenArray_C*      K2Node_DynamicCast_AsPost_Game_Screen_Array                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default_4                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanFollowNextOrPreviousTeammate_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerGameplay*K2Node_DynamicCast_AsFort_Player_Controller_Gameplay             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerGameplay*K2Node_DynamicCast_AsFort_Player_Controller_Gameplay_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowItemShopButton_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CreateWidgetAsync*CallFunc_CreateWidgetAsync_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Is_Showing_Match_Stats_Is_Showing                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMatchMakingButtonEnabled_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMatchXPScreenWidget_C::ExecuteUbergraph_MatchXPScreenWidget(int32 EntryPoint, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, enum class EAthenaGamePhase CallFunc_GetGamePhase_ReturnValue, class FText Temp_text_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText Temp_text_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, class UUserWidget* K2Node_CustomEvent_UserWidget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* Temp_object_Variable, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_2, enum class EPostGameHUDState Temp_byte_Variable_4, int32 Temp_int_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, enum class EPostGameHUDState Temp_byte_Variable_5, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_11, class UCommonButton* K2Node_ComponentBoundEvent_Button_10, class UCommonButton* K2Node_ComponentBoundEvent_Button_9, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UCommonUISubsystem* CallFunc_GetContext_ReturnValue_3, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue_4, class UCommonButton* K2Node_ComponentBoundEvent_Button_8, class UUserWidget* Temp_object_Variable_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_7, class UCommonActivatablePanel* K2Node_DynamicCast_AsCommon_Activatable_Panel, bool K2Node_DynamicCast_bSuccess_1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class UUserWidget* K2Node_CustomEvent_UserWidget_1, bool CallFunc_AllowInGameMatchmaking_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Not_PreBool_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_6, bool CallFunc_BooleanAND_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_5, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue_5, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_6, int32 Temp_int_Array_Index_Variable, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class UMatchXPTotalEntry_C* K2Node_DynamicCast_AsMatch_XPTotal_Entry, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 K2Node_Event_CombatXp, int32 K2Node_Event_SurvivalXp, int32 K2Node_Event_BonusMedalXp, int32 K2Node_Event_MatchXp, int32 K2Node_Event_TotalXpGained, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_bNewInputEnabled, bool CallFunc_IsMatchMakingButtonEnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FGameplayTag& K2Node_Event_Tag, int32 K2Node_Event_Xp, int32 K2Node_Event_BonusPct, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_4, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_6, enum class EPostGameHUDState K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_7, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1, int32 K2Node_Select_Default_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText K2Node_Select_Default_3, class UWidget* CallFunc_FindParentWidgetOfType_ReturnValue, class UPostGameScreenArray_C* K2Node_DynamicCast_AsPost_Game_Screen_Array, bool K2Node_DynamicCast_bSuccess_4, bool Temp_bool_Variable_4, class UWidget* K2Node_Select_Default_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, bool CallFunc_CanFollowNextOrPreviousTeammate_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_8, bool CallFunc_BooleanAND_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_5, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, class AFortPlayerControllerGameplay* K2Node_DynamicCast_AsFort_Player_Controller_Gameplay, bool K2Node_DynamicCast_bSuccess_5, class AFortPlayerControllerGameplay* K2Node_DynamicCast_AsFort_Player_Controller_Gameplay_1, bool K2Node_DynamicCast_bSuccess_6, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_ShouldShowItemShopButton_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_9, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default_6, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_5, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_1, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena_1, bool K2Node_DynamicCast_bSuccess_7, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsActivated_ReturnValue, bool CallFunc_Is_Showing_Match_Stats_Is_Showing, bool Temp_bool_Variable_5, enum class ESlateVisibility K2Node_Select_Default_7, bool CallFunc_IsMatchMakingButtonEnabled_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPScreenWidget_C", "ExecuteUbergraph_MatchXPScreenWidget");

	Params::UMatchXPScreenWidget_C_ExecuteUbergraph_MatchXPScreenWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetGamePhase_ReturnValue = CallFunc_GetGamePhase_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_CustomEvent_UserWidget = K2Node_CustomEvent_UserWidget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_ComponentBoundEvent_Button_11 = K2Node_ComponentBoundEvent_Button_11;
	Parms.K2Node_ComponentBoundEvent_Button_10 = K2Node_ComponentBoundEvent_Button_10;
	Parms.K2Node_ComponentBoundEvent_Button_9 = K2Node_ComponentBoundEvent_Button_9;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue_3 = CallFunc_GetContext_ReturnValue_3;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_4 = CallFunc_GetContext_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_Button_8 = K2Node_ComponentBoundEvent_Button_8;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_ComponentBoundEvent_Button_7 = K2Node_ComponentBoundEvent_Button_7;
	Parms.K2Node_DynamicCast_AsCommon_Activatable_Panel = K2Node_DynamicCast_AsCommon_Activatable_Panel;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.K2Node_CustomEvent_UserWidget_1 = K2Node_CustomEvent_UserWidget_1;
	Parms.CallFunc_AllowInGameMatchmaking_ReturnValue = CallFunc_AllowInGameMatchmaking_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_6 = K2Node_ComponentBoundEvent_Button_6;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_5 = CallFunc_GetContext_ReturnValue_5;
	Parms.CallFunc_GetContext_ReturnValue_6 = CallFunc_GetContext_ReturnValue_6;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsMatch_XPTotal_Entry = K2Node_DynamicCast_AsMatch_XPTotal_Entry;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Event_CombatXp = K2Node_Event_CombatXp;
	Parms.K2Node_Event_SurvivalXp = K2Node_Event_SurvivalXp;
	Parms.K2Node_Event_BonusMedalXp = K2Node_Event_BonusMedalXp;
	Parms.K2Node_Event_MatchXp = K2Node_Event_MatchXp;
	Parms.K2Node_Event_TotalXpGained = K2Node_Event_TotalXpGained;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_bNewInputEnabled = K2Node_Event_bNewInputEnabled;
	Parms.CallFunc_IsMatchMakingButtonEnabled_ReturnValue = CallFunc_IsMatchMakingButtonEnabled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Event_Tag = K2Node_Event_Tag;
	Parms.K2Node_Event_Xp = K2Node_Event_Xp;
	Parms.K2Node_Event_BonusPct = K2Node_Event_BonusPct;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.CallFunc_CreateWidgetAsync_ReturnValue = CallFunc_CreateWidgetAsync_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_FindParentWidgetOfType_ReturnValue = CallFunc_FindParentWidgetOfType_ReturnValue;
	Parms.K2Node_DynamicCast_AsPost_Game_Screen_Array = K2Node_DynamicCast_AsPost_Game_Screen_Array;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.CallFunc_CanFollowNextOrPreviousTeammate_ReturnValue = CallFunc_CanFollowNextOrPreviousTeammate_ReturnValue;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_3 = CallFunc_GetOwningPlayer_ReturnValue_3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_4 = CallFunc_GetOwningPlayer_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Gameplay = K2Node_DynamicCast_AsFort_Player_Controller_Gameplay;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Gameplay_1 = K2Node_DynamicCast_AsFort_Player_Controller_Gameplay_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_ShouldShowItemShopButton_ReturnValue = CallFunc_ShouldShowItemShopButton_ReturnValue;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_5 = CallFunc_GetOwningPlayer_ReturnValue_5;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue_1 = CallFunc_GetRuntimeOptions_ReturnValue_1;
	Parms.CallFunc_CreateWidgetAsync_ReturnValue_1 = CallFunc_CreateWidgetAsync_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena_1 = K2Node_DynamicCast_AsFort_Player_Controller_Athena_1;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.CallFunc_Is_Showing_Match_Stats_Is_Showing = CallFunc_Is_Showing_Match_Stats_Is_Showing;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_IsMatchMakingButtonEnabled_ReturnValue_1 = CallFunc_IsMatchMakingButtonEnabled_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


