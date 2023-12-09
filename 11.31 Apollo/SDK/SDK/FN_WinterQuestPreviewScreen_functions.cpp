#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WinterQuestPreviewScreen.WinterQuestPreviewScreen_C
// (None)

class UClass* UWinterQuestPreviewScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WinterQuestPreviewScreen_C");

	return Clss;
}


// WinterQuestPreviewScreen_C WinterQuestPreviewScreen.Default__WinterQuestPreviewScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinterQuestPreviewScreen_C* UWinterQuestPreviewScreen_C::GetDefaultObj()
{
	static class UWinterQuestPreviewScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinterQuestPreviewScreen_C*>(UWinterQuestPreviewScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WinterQuestPreviewScreen.WinterQuestPreviewScreen_C.UpdateOfferOneText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        OfferText                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWinterQuestPreviewScreen_C::UpdateOfferOneText(class FText& OfferText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestPreviewScreen_C", "UpdateOfferOneText");

	Params::UWinterQuestPreviewScreen_C_UpdateOfferOneText_Params Parms{};

	Parms.OfferText = OfferText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuestPreviewScreen.WinterQuestPreviewScreen_C.UpdateOfferTwoText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        OfferText                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWinterQuestPreviewScreen_C::UpdateOfferTwoText(class FText& OfferText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestPreviewScreen_C", "UpdateOfferTwoText");

	Params::UWinterQuestPreviewScreen_C_UpdateOfferTwoText_Params Parms{};

	Parms.OfferText = OfferText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuestPreviewScreen.WinterQuestPreviewScreen_C.ExecuteUbergraph_WinterQuestPreviewScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USimpleFeatured_YellowButton_C*K2Node_DynamicCast_AsSimple_Featured_Yellow_Button               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_OfferText_1                                         (ConstParm)
// class FText                        K2Node_Event_OfferText                                           (ConstParm)
// class USimpleFeatured_YellowButton_C*K2Node_DynamicCast_AsSimple_Featured_Yellow_Button_1             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWinterQuestPreviewScreen_C::ExecuteUbergraph_WinterQuestPreviewScreen(int32 EntryPoint, class USimpleFeatured_YellowButton_C* K2Node_DynamicCast_AsSimple_Featured_Yellow_Button, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Event_OfferText_1, class FText K2Node_Event_OfferText, class USimpleFeatured_YellowButton_C* K2Node_DynamicCast_AsSimple_Featured_Yellow_Button_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuestPreviewScreen_C", "ExecuteUbergraph_WinterQuestPreviewScreen");

	Params::UWinterQuestPreviewScreen_C_ExecuteUbergraph_WinterQuestPreviewScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsSimple_Featured_Yellow_Button = K2Node_DynamicCast_AsSimple_Featured_Yellow_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_OfferText_1 = K2Node_Event_OfferText_1;
	Parms.K2Node_Event_OfferText = K2Node_Event_OfferText;
	Parms.K2Node_DynamicCast_AsSimple_Featured_Yellow_Button_1 = K2Node_DynamicCast_AsSimple_Featured_Yellow_Button_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


