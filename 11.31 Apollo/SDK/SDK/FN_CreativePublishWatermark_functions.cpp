#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CreativePublishWatermark.CreativePublishWatermark_C
// (None)

class UClass* UCreativePublishWatermark_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativePublishWatermark_C");

	return Clss;
}


// CreativePublishWatermark_C CreativePublishWatermark.Default__CreativePublishWatermark_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCreativePublishWatermark_C* UCreativePublishWatermark_C::GetDefaultObj()
{
	static class UCreativePublishWatermark_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreativePublishWatermark_C*>(UCreativePublishWatermark_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CreativePublishWatermark.CreativePublishWatermark_C.SetTextCollapseIfDefault
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  Text_Widget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      InputText                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      DefaultText                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UCreativePublishWatermark_C::SetTextCollapseIfDefault(class UTextBlock* Text_Widget, const class FString& InputText, const class FString& DefaultText, bool CallFunc_EqualEqual_StriStri_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativePublishWatermark_C", "SetTextCollapseIfDefault");

	Params::UCreativePublishWatermark_C_SetTextCollapseIfDefault_Params Parms{};

	Parms.Text_Widget = Text_Widget;
	Parms.InputText = InputText;
	Parms.DefaultText = DefaultText;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativePublishWatermark.CreativePublishWatermark_C.Update Watermark
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortVolume*                 Volume                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CreatorName                                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CreativeMnemonic                                                 (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class AFortVolumeManager*          CallFunc_GetVolumeManager_OutVolumeManager                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVolumeValidityResult   CallFunc_GetVolumeManager_OutIsValid                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_ShouldShowPublishWatermarkForVolume_CreatorName         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ShouldShowPublishWatermarkForVolume_CreativeMnemonic    (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_ShouldShowPublishWatermarkForVolume_Title               (None)
// bool                               CallFunc_ShouldShowPublishWatermarkForVolume_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativePublishWatermark_C::Update_Watermark(class AFortVolume* Volume, const class FString& CreatorName, const class FString& CreativeMnemonic, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_ShouldShowPublishWatermarkForVolume_CreatorName, const class FString& CallFunc_ShouldShowPublishWatermarkForVolume_CreativeMnemonic, class FText CallFunc_ShouldShowPublishWatermarkForVolume_Title, bool CallFunc_ShouldShowPublishWatermarkForVolume_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativePublishWatermark_C", "Update Watermark");

	Params::UCreativePublishWatermark_C_Update_Watermark_Params Parms{};

	Parms.Volume = Volume;
	Parms.CreatorName = CreatorName;
	Parms.CreativeMnemonic = CreativeMnemonic;
	Parms.CallFunc_GetVolumeManager_OutVolumeManager = CallFunc_GetVolumeManager_OutVolumeManager;
	Parms.CallFunc_GetVolumeManager_OutIsValid = CallFunc_GetVolumeManager_OutIsValid;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ShouldShowPublishWatermarkForVolume_CreatorName = CallFunc_ShouldShowPublishWatermarkForVolume_CreatorName;
	Parms.CallFunc_ShouldShowPublishWatermarkForVolume_CreativeMnemonic = CallFunc_ShouldShowPublishWatermarkForVolume_CreativeMnemonic;
	Parms.CallFunc_ShouldShowPublishWatermarkForVolume_Title = CallFunc_ShouldShowPublishWatermarkForVolume_Title;
	Parms.CallFunc_ShouldShowPublishWatermarkForVolume_ReturnValue = CallFunc_ShouldShowPublishWatermarkForVolume_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativePublishWatermark.CreativePublishWatermark_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCreativePublishWatermark_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativePublishWatermark_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativePublishWatermark.CreativePublishWatermark_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCreativePublishWatermark_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativePublishWatermark_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativePublishWatermark.CreativePublishWatermark_C.OnLinkedVolumeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortVolume*                 Volume                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreativePublishWatermark_C::OnLinkedVolumeChanged(class AFortVolume* Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativePublishWatermark_C", "OnLinkedVolumeChanged");

	Params::UCreativePublishWatermark_C_OnLinkedVolumeChanged_Params Parms{};

	Parms.Volume = Volume;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativePublishWatermark.CreativePublishWatermark_C.ExecuteUbergraph_CreativePublishWatermark
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortVolume*                 K2Node_CustomEvent_Volume                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCreativePublishWatermark_C::ExecuteUbergraph_CreativePublishWatermark(int32 EntryPoint, class AFortVolume* K2Node_CustomEvent_Volume, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativePublishWatermark_C", "ExecuteUbergraph_CreativePublishWatermark");

	Params::UCreativePublishWatermark_C_ExecuteUbergraph_CreativePublishWatermark_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Volume = K2Node_CustomEvent_Volume;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena = K2Node_DynamicCast_AsFort_Player_Controller_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Athena_1 = K2Node_DynamicCast_AsFort_Player_Controller_Athena_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


