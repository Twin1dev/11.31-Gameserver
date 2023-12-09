#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GameFeatureStatus.GameFeatureStatus_C
// (None)

class UClass* UGameFeatureStatus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameFeatureStatus_C");

	return Clss;
}


// GameFeatureStatus_C GameFeatureStatus.Default__GameFeatureStatus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGameFeatureStatus_C* UGameFeatureStatus_C::GetDefaultObj()
{
	static class UGameFeatureStatus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGameFeatureStatus_C*>(UGameFeatureStatus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GameFeatureStatus.GameFeatureStatus_C.HandleStatusChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaGameFeatureStatusCurrentStatus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAthenaGameFeatureStatusTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaGameFeatureStatusTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGameFeatureStatus_C::HandleStatusChanged(enum class EAthenaGameFeatureStatus CurrentStatus, bool K2Node_SwitchEnum_CmpSuccess, enum class EAthenaGameFeatureStatus Temp_byte_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class EAthenaGameFeatureStatus Temp_byte_Variable_1, const struct FLinearColor& K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UWidget* K2Node_Select_Default_1, bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFeatureStatus_C", "HandleStatusChanged");

	Params::UGameFeatureStatus_C_HandleStatusChanged_Params Parms{};

	Parms.CurrentStatus = CurrentStatus;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameFeatureStatus.GameFeatureStatus_C.OnStatusChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EAthenaGameFeatureStatusNewStatus                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFeatureStatus_C::OnStatusChanged(enum class EAthenaGameFeatureStatus NewStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFeatureStatus_C", "OnStatusChanged");

	Params::UGameFeatureStatus_C_OnStatusChanged_Params Parms{};

	Parms.NewStatus = NewStatus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GameFeatureStatus.GameFeatureStatus_C.ExecuteUbergraph_GameFeatureStatus
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaGameFeatureStatusK2Node_Event_NewStatus                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGameFeatureStatus_C::ExecuteUbergraph_GameFeatureStatus(int32 EntryPoint, enum class EAthenaGameFeatureStatus K2Node_Event_NewStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameFeatureStatus_C", "ExecuteUbergraph_GameFeatureStatus");

	Params::UGameFeatureStatus_C_ExecuteUbergraph_GameFeatureStatus_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewStatus = K2Node_Event_NewStatus;

	UObject::ProcessEvent(Func, &Parms);

}

}


