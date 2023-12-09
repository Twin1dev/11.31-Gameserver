#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C
// (None)

class UClass* UBattlePassDirectAcquisitionScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassDirectAcquisitionScreen_C");

	return Clss;
}


// BattlePassDirectAcquisitionScreen_C BattlePassDirectAcquisitionScreen.Default__BattlePassDirectAcquisitionScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassDirectAcquisitionScreen_C* UBattlePassDirectAcquisitionScreen_C::GetDefaultObj()
{
	static class UBattlePassDirectAcquisitionScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassDirectAcquisitionScreen_C*>(UBattlePassDirectAcquisitionScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.GetSeasonEndLabelText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Result                                                           (Parm, OutParm)
// class UAthenaAccountContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCurrentChapterAndSeasonText_ReturnValue              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBattlePassDirectAcquisitionScreen_C::GetSeasonEndLabelText(class FText* Result, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetCurrentChapterAndSeasonText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "GetSeasonEndLabelText");

	Params::UBattlePassDirectAcquisitionScreen_C_GetSeasonEndLabelText_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentChapterAndSeasonText_ReturnValue = CallFunc_GetCurrentChapterAndSeasonText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.Intro Anim "Header"
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassDirectAcquisitionScreen_C::Intro_Anim__Header_(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "Intro Anim "Header"");

	Params::UBattlePassDirectAcquisitionScreen_C_Intro_Anim__Header__Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.Intro Anim Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassDirectAcquisitionScreen_C::Intro_Anim_Reset(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "Intro Anim Reset");

	Params::UBattlePassDirectAcquisitionScreen_C_Intro_Anim_Reset_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.Intro Anim "Tiles"
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassDirectAcquisitionScreen_C::Intro_Anim__Tiles_(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "Intro Anim "Tiles"");

	Params::UBattlePassDirectAcquisitionScreen_C_Intro_Anim__Tiles__Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.Intro Anim "OR"
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassDirectAcquisitionScreen_C::Intro_Anim__OR_(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "Intro Anim "OR"");

	Params::UBattlePassDirectAcquisitionScreen_C_Intro_Anim__OR__Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.On_CommonBorderTouchToClose_MouseButtonUp
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_HandleBack_bPassThrough                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UBattlePassDirectAcquisitionScreen_C::On_CommonBorderTouchToClose_MouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_IsMobileGame_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_HandleBack_bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "On_CommonBorderTouchToClose_MouseButtonUp");

	Params::UBattlePassDirectAcquisitionScreen_C_On_CommonBorderTouchToClose_MouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_HandleBack_bPassThrough = CallFunc_HandleBack_bPassThrough;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassDirectAcquisitionScreen_C::HandleBack(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "HandleBack");

	Params::UBattlePassDirectAcquisitionScreen_C_HandleBack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.GenerateOfferWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortStoreFrontOfferInfo*    OfferData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGiftOnly_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasDisplayAsset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBox*              K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaDirectAcquisitionOfferWidget_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassDirectAcquisitionScreen_C::GenerateOfferWidget(class UFortStoreFrontOfferInfo* OfferData, bool CallFunc_IsGiftOnly_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasDisplayAsset_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 Temp_int_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHorizontalBox* K2Node_Select_Default, class UAthenaDirectAcquisitionOfferWidget_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "GenerateOfferWidget");

	Params::UBattlePassDirectAcquisitionScreen_C_GenerateOfferWidget_Params Parms{};

	Parms.OfferData = OfferData;
	Parms.CallFunc_IsGiftOnly_ReturnValue = CallFunc_IsGiftOnly_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_HasDisplayAsset_ReturnValue = CallFunc_HasDisplayAsset_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.OnOffersGenerated
// (Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassDirectAcquisitionScreen_C::OnOffersGenerated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "OnOffersGenerated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassDirectAcquisitionScreen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassDirectAcquisitionScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassDirectAcquisitionScreen_C::BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature");

	Params::UBattlePassDirectAcquisitionScreen_C_BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.OnBeginIntro
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassDirectAcquisitionScreen_C::OnBeginIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "OnBeginIntro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassDirectAcquisitionScreen_C::BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UBattlePassDirectAcquisitionScreen_C_BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.OnStartReadingOffers
// (Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassDirectAcquisitionScreen_C::OnStartReadingOffers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "OnStartReadingOffers");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.NoOffersAvailable
// (Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassDirectAcquisitionScreen_C::NoOffersAvailable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "NoOffersAvailable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C.ExecuteUbergraph_BattlePassDirectAcquisitionScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FDateTime                   CallFunc_GetSeasonStoreEndDate_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSeasonEndLabelText_Result                            (None)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleBack_bPassThrough                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassDirectAcquisitionScreen_C::ExecuteUbergraph_BattlePassDirectAcquisitionScreen(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDateTime& CallFunc_GetSeasonStoreEndDate_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class FText CallFunc_GetSeasonEndLabelText_Result, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_HandleBack_bPassThrough, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassDirectAcquisitionScreen_C", "ExecuteUbergraph_BattlePassDirectAcquisitionScreen");

	Params::UBattlePassDirectAcquisitionScreen_C_ExecuteUbergraph_BattlePassDirectAcquisitionScreen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetSeasonStoreEndDate_ReturnValue = CallFunc_GetSeasonStoreEndDate_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_GetSeasonEndLabelText_Result = CallFunc_GetSeasonEndLabelText_Result;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_HandleBack_bPassThrough = CallFunc_HandleBack_bPassThrough;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


