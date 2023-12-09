#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AlterationWidgetButton.AlterationWidgetButton_C
// (None)

class UClass* UAlterationWidgetButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AlterationWidgetButton_C");

	return Clss;
}


// AlterationWidgetButton_C AlterationWidgetButton.Default__AlterationWidgetButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAlterationWidgetButton_C* UAlterationWidgetButton_C::GetDefaultObj()
{
	static class UAlterationWidgetButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAlterationWidgetButton_C*>(UAlterationWidgetButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AlterationWidgetButton.AlterationWidgetButton_C.Setup Triangles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationWidgetButton_C::Setup_Triangles(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationWidgetButton_C", "Setup Triangles");

	Params::UAlterationWidgetButton_C_Setup_Triangles_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationWidgetButton.AlterationWidgetButton_C.Update Colors
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAlterationInfo*         CallFunc_GetAlterationInfo_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterationItemDefinition*CallFunc_GetAlterationDefintion_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortRarityItemData         CallFunc_BPGetRarityData_ReturnValue                             (None)

void UAlterationWidgetButton_C::Update_Colors(class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue, class UFortAlterationItemDefinition* CallFunc_GetAlterationDefintion_ReturnValue, enum class EFortRarity CallFunc_GetRarity_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFortRarityItemData& CallFunc_BPGetRarityData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationWidgetButton_C", "Update Colors");

	Params::UAlterationWidgetButton_C_Update_Colors_Params Parms{};

	Parms.CallFunc_GetAlterationInfo_ReturnValue = CallFunc_GetAlterationInfo_ReturnValue;
	Parms.CallFunc_GetAlterationDefintion_ReturnValue = CallFunc_GetAlterationDefintion_ReturnValue;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BPGetRarityData_ReturnValue = CallFunc_BPGetRarityData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationWidgetButton.AlterationWidgetButton_C.IntroStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationWidgetButton_C::IntroStart(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationWidgetButton_C", "IntroStart");

	Params::UAlterationWidgetButton_C_IntroStart_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationWidgetButton.AlterationWidgetButton_C.IntroReset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationWidgetButton_C::IntroReset(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationWidgetButton_C", "IntroReset");

	Params::UAlterationWidgetButton_C_IntroReset_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationWidgetButton.AlterationWidgetButton_C.TriggerModificationAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationWidgetButton_C::TriggerModificationAnimation(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationWidgetButton_C", "TriggerModificationAnimation");

	Params::UAlterationWidgetButton_C_TriggerModificationAnimation_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AlterationWidgetButton.AlterationWidgetButton_C.OnSetup
// (Event, Public, BlueprintEvent)
// Parameters:

void UAlterationWidgetButton_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationWidgetButton_C", "OnSetup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AlterationWidgetButton.AlterationWidgetButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAlterationWidgetButton_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationWidgetButton_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AlterationWidgetButton.AlterationWidgetButton_C.ExecuteUbergraph_AlterationWidgetButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterationInfo*         CallFunc_GetAlterationInfo_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAlterationWidgetButton_C::ExecuteUbergraph_AlterationWidgetButton(int32 EntryPoint, class UFortAlterationInfo* CallFunc_GetAlterationInfo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AlterationWidgetButton_C", "ExecuteUbergraph_AlterationWidgetButton");

	Params::UAlterationWidgetButton_C_ExecuteUbergraph_AlterationWidgetButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAlterationInfo_ReturnValue = CallFunc_GetAlterationInfo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


