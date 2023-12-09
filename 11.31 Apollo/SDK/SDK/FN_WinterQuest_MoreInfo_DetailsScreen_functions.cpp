#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WinterQuest_MoreInfo_DetailsScreen.WinterQuest_MoreInfo_DetailsScreen_C
// (None)

class UClass* UWinterQuest_MoreInfo_DetailsScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WinterQuest_MoreInfo_DetailsScreen_C");

	return Clss;
}


// WinterQuest_MoreInfo_DetailsScreen_C WinterQuest_MoreInfo_DetailsScreen.Default__WinterQuest_MoreInfo_DetailsScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinterQuest_MoreInfo_DetailsScreen_C* UWinterQuest_MoreInfo_DetailsScreen_C::GetDefaultObj()
{
	static class UWinterQuest_MoreInfo_DetailsScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinterQuest_MoreInfo_DetailsScreen_C*>(UWinterQuest_MoreInfo_DetailsScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WinterQuest_MoreInfo_DetailsScreen.WinterQuest_MoreInfo_DetailsScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuest_MoreInfo_DetailsScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuest_MoreInfo_DetailsScreen_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinterQuest_MoreInfo_DetailsScreen.WinterQuest_MoreInfo_DetailsScreen_C.BndEvt__SoloButton_WinterFest_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuest_MoreInfo_DetailsScreen_C::BndEvt__SoloButton_WinterFest_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuest_MoreInfo_DetailsScreen_C", "BndEvt__SoloButton_WinterFest_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UWinterQuest_MoreInfo_DetailsScreen_C_BndEvt__SoloButton_WinterFest_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuest_MoreInfo_DetailsScreen.WinterQuest_MoreInfo_DetailsScreen_C.ExecuteUbergraph_WinterQuest_MoreInfo_DetailsScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuest_MoreInfo_DetailsScreen_C::ExecuteUbergraph_WinterQuest_MoreInfo_DetailsScreen(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuest_MoreInfo_DetailsScreen_C", "ExecuteUbergraph_WinterQuest_MoreInfo_DetailsScreen");

	Params::UWinterQuest_MoreInfo_DetailsScreen_C_ExecuteUbergraph_WinterQuest_MoreInfo_DetailsScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


