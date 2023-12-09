#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaNews.AthenaNews_C
// (None)

class UClass* UAthenaNews_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaNews_C");

	return Clss;
}


// AthenaNews_C AthenaNews.Default__AthenaNews_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaNews_C* UAthenaNews_C::GetDefaultObj()
{
	static class UAthenaNews_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaNews_C*>(UAthenaNews_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaNews.AthenaNews_C.BeginIntroSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaNews_C::BeginIntroSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNews_C", "BeginIntroSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaNews.AthenaNews_C.SingleItemConfiguration
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNews_C::SingleItemConfiguration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNews_C", "SingleItemConfiguration");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaNews.AthenaNews_C.ResetViewConfiguration
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNews_C::ResetViewConfiguration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNews_C", "ResetViewConfiguration");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaNews.AthenaNews_C.HandleNewsStyle
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EAthenaNewsStyle        NewsStyle                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaNews_C::HandleNewsStyle(enum class EAthenaNewsStyle NewsStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNews_C", "HandleNewsStyle");

	Params::UAthenaNews_C_HandleNewsStyle_Params Parms{};

	Parms.NewsStyle = NewsStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaNews.AthenaNews_C.ExecuteUbergraph_AthenaNews
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EAthenaNewsStyle        K2Node_Event_NewsStyle                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaNews_C::ExecuteUbergraph_AthenaNews(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, enum class EAthenaNewsStyle K2Node_Event_NewsStyle, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNews_C", "ExecuteUbergraph_AthenaNews");

	Params::UAthenaNews_C_ExecuteUbergraph_AthenaNews_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_Event_NewsStyle = K2Node_Event_NewsStyle;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaNews.AthenaNews_C.UpdateStyle__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAthenaNewsStyle        NewStyle                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaNews_C::UpdateStyle__DelegateSignature(enum class EAthenaNewsStyle NewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNews_C", "UpdateStyle__DelegateSignature");

	Params::UAthenaNews_C_UpdateStyle__DelegateSignature_Params Parms{};

	Parms.NewStyle = NewStyle;

	UObject::ProcessEvent(Func, &Parms);

}

}


