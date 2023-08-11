#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function WinterQuestTitleScreen.WinterQuestTitleScreen_C.EndTransition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWinterQuestTitleScreen_C::EndTransition()
{
	static auto Func = Class->GetFunction("WinterQuestTitleScreen_C", "EndTransition");

	Params::UWinterQuestTitleScreen_C_EndTransition_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuestTitleScreen.WinterQuestTitleScreen_C.OnBeginCabinTransition
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuestTitleScreen_C::OnBeginCabinTransition()
{
	static auto Func = Class->GetFunction("WinterQuestTitleScreen_C", "OnBeginCabinTransition");

	Params::UWinterQuestTitleScreen_C_OnBeginCabinTransition_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuestTitleScreen.WinterQuestTitleScreen_C.OnResetScreen
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuestTitleScreen_C::OnResetScreen()
{
	static auto Func = Class->GetFunction("WinterQuestTitleScreen_C", "OnResetScreen");

	Params::UWinterQuestTitleScreen_C_OnResetScreen_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuestTitleScreen.WinterQuestTitleScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuestTitleScreen_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("WinterQuestTitleScreen_C", "BP_OnActivated");

	Params::UWinterQuestTitleScreen_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuestTitleScreen.WinterQuestTitleScreen_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuestTitleScreen_C::BP_OnDeactivated()
{
	static auto Func = Class->GetFunction("WinterQuestTitleScreen_C", "BP_OnDeactivated");

	Params::UWinterQuestTitleScreen_C_BP_OnDeactivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuestTitleScreen.WinterQuestTitleScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWinterQuestTitleScreen_C::Construct()
{
	static auto Func = Class->GetFunction("WinterQuestTitleScreen_C", "Construct");

	Params::UWinterQuestTitleScreen_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuestTitleScreen.WinterQuestTitleScreen_C.ExecuteUbergraph_WinterQuestTitleScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFort_Entry_Music_Controller_BP_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class AFort_Entry_Music_Controller_BP_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWinterQuestTitleScreen_C::ExecuteUbergraph_WinterQuestTitleScreen(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static auto Func = Class->GetFunction("WinterQuestTitleScreen_C", "ExecuteUbergraph_WinterQuestTitleScreen");

	Params::UWinterQuestTitleScreen_C_ExecuteUbergraph_WinterQuestTitleScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
