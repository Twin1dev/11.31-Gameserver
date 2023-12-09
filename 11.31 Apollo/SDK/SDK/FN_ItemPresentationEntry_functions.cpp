#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemPresentationEntry.ItemPresentationEntry_C
// (None)

class UClass* UItemPresentationEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemPresentationEntry_C");

	return Clss;
}


// ItemPresentationEntry_C ItemPresentationEntry.Default__ItemPresentationEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemPresentationEntry_C* UItemPresentationEntry_C::GetDefaultObj()
{
	static class UItemPresentationEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemPresentationEntry_C*>(UItemPresentationEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemPresentationEntry.ItemPresentationEntry_C.HandelDeselectedAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaSeasonItemRewardIcon_C*K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemPresentationEntry_C::HandelDeselectedAnim(class UAthenaSeasonItemRewardIcon_C* K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationEntry_C", "HandelDeselectedAnim");

	Params::UItemPresentationEntry_C_HandelDeselectedAnim_Params Parms{};

	Parms.K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon = K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.HandleSelectedAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSeasonItemRewardIcon_C*K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemPresentationEntry_C::HandleSelectedAnim(float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UAthenaSeasonItemRewardIcon_C* K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationEntry_C", "HandleSelectedAnim");

	Params::UItemPresentationEntry_C_HandleSelectedAnim_Params Parms{};

	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon = K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.HandleUnhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSeasonItemRewardIcon_C*K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemPresentationEntry_C::HandleUnhover(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UAthenaSeasonItemRewardIcon_C* K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationEntry_C", "HandleUnhover");

	Params::UItemPresentationEntry_C_HandleUnhover_Params Parms{};

	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon = K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.HandleHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSeasonItemRewardIcon_C*K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemPresentationEntry_C::HandleHover(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UAthenaSeasonItemRewardIcon_C* K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationEntry_C", "HandleHover");

	Params::UItemPresentationEntry_C_HandleHover_Params Parms{};

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon = K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemPresentationEntry_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationEntry_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemPresentationEntry_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationEntry_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemPresentationEntry_C::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationEntry_C", "BP_OnSelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemPresentationEntry_C::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationEntry_C", "BP_OnDeselected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.DelayIntroAnimation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationEntry_C::DelayIntroAnimation(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationEntry_C", "DelayIntroAnimation");

	Params::UItemPresentationEntry_C_DelayIntroAnimation_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemPresentationEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.OnInitialIconAnimation
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemPresentationEntry_C::OnInitialIconAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationEntry_C", "OnInitialIconAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemPresentationEntry.ItemPresentationEntry_C.ExecuteUbergraph_ItemPresentationEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Delay                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemPresentationEntry_C::ExecuteUbergraph_ItemPresentationEntry(int32 EntryPoint, float K2Node_CustomEvent_Delay, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemPresentationEntry_C", "ExecuteUbergraph_ItemPresentationEntry");

	Params::UItemPresentationEntry_C_ExecuteUbergraph_ItemPresentationEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Delay = K2Node_CustomEvent_Delay;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


