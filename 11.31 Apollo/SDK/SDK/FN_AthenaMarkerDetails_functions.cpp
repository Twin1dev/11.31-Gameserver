#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaMarkerDetails.AthenaMarkerDetails_C
// (None)

class UClass* UAthenaMarkerDetails_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaMarkerDetails_C");

	return Clss;
}


// AthenaMarkerDetails_C AthenaMarkerDetails.Default__AthenaMarkerDetails_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaMarkerDetails_C* UAthenaMarkerDetails_C::GetDefaultObj()
{
	static class UAthenaMarkerDetails_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaMarkerDetails_C*>(UAthenaMarkerDetails_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaMarkerDetails.AthenaMarkerDetails_C.Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMarkerDetails_C::Show(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMarkerDetails_C", "Show");

	Params::UAthenaMarkerDetails_C_Show_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMarkerDetails.AthenaMarkerDetails_C.SetDisplayText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NewText                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UAthenaMarkerDetails_C::SetDisplayText(class FText NewText, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMarkerDetails_C", "SetDisplayText");

	Params::UAthenaMarkerDetails_C_SetDisplayText_Params Parms{};

	Parms.NewText = NewText;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMarkerDetails.AthenaMarkerDetails_C.GetMarkedItemDetails
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        DisplayName                                                      (Parm, OutParm)
// TSoftObjectPtr<class UTexture2D>   SmallPreviewImage                                                (Parm, OutParm, HasGetValueTypeHash)
// struct FLinearColor                RarityColor                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMarkedActorDisplayInfo     CallFunc_GetDisplayInfoForMarkerData_ReturnValue                 (None)

void UAthenaMarkerDetails_C::GetMarkedItemDetails(class FText* DisplayName, TSoftObjectPtr<class UTexture2D>* SmallPreviewImage, struct FLinearColor* RarityColor, const struct FMarkedActorDisplayInfo& CallFunc_GetDisplayInfoForMarkerData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMarkerDetails_C", "GetMarkedItemDetails");

	Params::UAthenaMarkerDetails_C_GetMarkedItemDetails_Params Parms{};

	Parms.CallFunc_GetDisplayInfoForMarkerData_ReturnValue = CallFunc_GetDisplayInfoForMarkerData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DisplayName != nullptr)
		*DisplayName = Parms.DisplayName;

	if (SmallPreviewImage != nullptr)
		*SmallPreviewImage = Parms.SmallPreviewImage;

	if (RarityColor != nullptr)
		*RarityColor = std::move(Parms.RarityColor);

}


// Function AthenaMarkerDetails.AthenaMarkerDetails_C.OnLoaded_2801580E4D1C0BB88FD9D4B09B65ACAE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMarkerDetails_C::OnLoaded_2801580E4D1C0BB88FD9D4B09B65ACAE(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMarkerDetails_C", "OnLoaded_2801580E4D1C0BB88FD9D4B09B65ACAE");

	Params::UAthenaMarkerDetails_C_OnLoaded_2801580E4D1C0BB88FD9D4B09B65ACAE_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMarkerDetails.AthenaMarkerDetails_C.TryHandleItemMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMarkerDetails_C::TryHandleItemMarker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMarkerDetails_C", "TryHandleItemMarker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMarkerDetails.AthenaMarkerDetails_C.FinishMarkedItemSetup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMarkerDetails_C::FinishMarkedItemSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMarkerDetails_C", "FinishMarkedItemSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMarkerDetails.AthenaMarkerDetails_C.SetupLocationMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMarkerDetails_C::SetupLocationMarker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMarkerDetails_C", "SetupLocationMarker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMarkerDetails.AthenaMarkerDetails_C.SetupEnemyMarker
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMarkerDetails_C::SetupEnemyMarker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMarkerDetails_C", "SetupEnemyMarker");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMarkerDetails.AthenaMarkerDetails_C.UpdateMarkerData
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortWorldMarkerData        MarkerData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaMarkerDetails_C::UpdateMarkerData(struct FFortWorldMarkerData& MarkerData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMarkerDetails_C", "UpdateMarkerData");

	Params::UAthenaMarkerDetails_C_UpdateMarkerData_Params Parms{};

	Parms.MarkerData = MarkerData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMarkerDetails.AthenaMarkerDetails_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMarkerDetails_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMarkerDetails_C", "PreConstruct");

	Params::UAthenaMarkerDetails_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMarkerDetails.AthenaMarkerDetails_C.UpdateMarkerAction
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortMarkerActions      MarkerAction                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMarkerDetails_C::UpdateMarkerAction(enum class EFortMarkerActions MarkerAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMarkerDetails_C", "UpdateMarkerAction");

	Params::UAthenaMarkerDetails_C_UpdateMarkerAction_Params Parms{};

	Parms.MarkerAction = MarkerAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMarkerDetails.AthenaMarkerDetails_C.ExecuteUbergraph_AthenaMarkerDetails
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortMarkerActions      Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_GetMarkedItemDetails_DisplayName                        (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetMarkedItemDetails_SmallPreviewImage                  (HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetMarkedItemDetails_RarityColor                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetMarkedItemDetails_DisplayName_1                      (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetMarkedItemDetails_SmallPreviewImage_1                (HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetMarkedItemDetails_RarityColor_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMarkedItemDetails_DisplayName_2                      (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetMarkedItemDetails_SmallPreviewImage_2                (HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetMarkedItemDetails_RarityColor_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortWorldMarkerData        K2Node_Event_MarkerData                                          (ConstParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortMarkerActions      Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMarkedItemDetails_DisplayName_3                      (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetMarkedItemDetails_SmallPreviewImage_3                (HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetMarkedItemDetails_RarityColor_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMarkedItemDetails_DisplayName_4                      (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetMarkedItemDetails_SmallPreviewImage_4                (HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetMarkedItemDetails_RarityColor_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortMarkerActions      K2Node_Event_MarkerAction                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMarkerDetails_C::ExecuteUbergraph_AthenaMarkerDetails(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class EFortMarkerActions Temp_byte_Variable_2, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_GetMarkedItemDetails_DisplayName, TSoftObjectPtr<class UTexture2D> CallFunc_GetMarkedItemDetails_SmallPreviewImage, const struct FLinearColor& CallFunc_GetMarkedItemDetails_RarityColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetMarkedItemDetails_DisplayName_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetMarkedItemDetails_SmallPreviewImage_1, const struct FLinearColor& CallFunc_GetMarkedItemDetails_RarityColor_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, class FText CallFunc_GetMarkedItemDetails_DisplayName_2, TSoftObjectPtr<class UTexture2D> CallFunc_GetMarkedItemDetails_SmallPreviewImage_2, const struct FLinearColor& CallFunc_GetMarkedItemDetails_RarityColor_2, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_2, bool K2Node_DynamicCast_bSuccess_2, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_2, const struct FFortWorldMarkerData& K2Node_Event_MarkerData, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, enum class EFortMarkerActions Temp_byte_Variable_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, class FText CallFunc_GetMarkedItemDetails_DisplayName_3, TSoftObjectPtr<class UTexture2D> CallFunc_GetMarkedItemDetails_SmallPreviewImage_3, const struct FLinearColor& CallFunc_GetMarkedItemDetails_RarityColor_3, class FText CallFunc_GetMarkedItemDetails_DisplayName_4, TSoftObjectPtr<class UTexture2D> CallFunc_GetMarkedItemDetails_SmallPreviewImage_4, const struct FLinearColor& CallFunc_GetMarkedItemDetails_RarityColor_4, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, enum class EFortMarkerActions K2Node_Event_MarkerAction, const struct FLinearColor& CallFunc_MakeColor_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_Select_Default_1, class UObject* Temp_object_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMarkerDetails_C", "ExecuteUbergraph_AthenaMarkerDetails");

	Params::UAthenaMarkerDetails_C_ExecuteUbergraph_AthenaMarkerDetails_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetMarkedItemDetails_DisplayName = CallFunc_GetMarkedItemDetails_DisplayName;
	Parms.CallFunc_GetMarkedItemDetails_SmallPreviewImage = CallFunc_GetMarkedItemDetails_SmallPreviewImage;
	Parms.CallFunc_GetMarkedItemDetails_RarityColor = CallFunc_GetMarkedItemDetails_RarityColor;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMarkedItemDetails_DisplayName_1 = CallFunc_GetMarkedItemDetails_DisplayName_1;
	Parms.CallFunc_GetMarkedItemDetails_SmallPreviewImage_1 = CallFunc_GetMarkedItemDetails_SmallPreviewImage_1;
	Parms.CallFunc_GetMarkedItemDetails_RarityColor_1 = CallFunc_GetMarkedItemDetails_RarityColor_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsTexture_2D_1 = K2Node_DynamicCast_AsTexture_2D_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_GetMarkedItemDetails_DisplayName_2 = CallFunc_GetMarkedItemDetails_DisplayName_2;
	Parms.CallFunc_GetMarkedItemDetails_SmallPreviewImage_2 = CallFunc_GetMarkedItemDetails_SmallPreviewImage_2;
	Parms.CallFunc_GetMarkedItemDetails_RarityColor_2 = CallFunc_GetMarkedItemDetails_RarityColor_2;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsTexture_2D_2 = K2Node_DynamicCast_AsTexture_2D_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_MakeColor_ReturnValue_1 = CallFunc_MakeColor_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_MakeColor_ReturnValue_2 = CallFunc_MakeColor_ReturnValue_2;
	Parms.K2Node_Event_MarkerData = K2Node_Event_MarkerData;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_GetMarkedItemDetails_DisplayName_3 = CallFunc_GetMarkedItemDetails_DisplayName_3;
	Parms.CallFunc_GetMarkedItemDetails_SmallPreviewImage_3 = CallFunc_GetMarkedItemDetails_SmallPreviewImage_3;
	Parms.CallFunc_GetMarkedItemDetails_RarityColor_3 = CallFunc_GetMarkedItemDetails_RarityColor_3;
	Parms.CallFunc_GetMarkedItemDetails_DisplayName_4 = CallFunc_GetMarkedItemDetails_DisplayName_4;
	Parms.CallFunc_GetMarkedItemDetails_SmallPreviewImage_4 = CallFunc_GetMarkedItemDetails_SmallPreviewImage_4;
	Parms.CallFunc_GetMarkedItemDetails_RarityColor_4 = CallFunc_GetMarkedItemDetails_RarityColor_4;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.K2Node_Event_MarkerAction = K2Node_Event_MarkerAction;
	Parms.CallFunc_MakeColor_ReturnValue_3 = CallFunc_MakeColor_ReturnValue_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


