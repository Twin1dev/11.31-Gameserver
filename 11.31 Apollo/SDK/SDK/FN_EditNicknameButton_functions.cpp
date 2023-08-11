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


// Function EditNicknameButton.EditNicknameButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEditNicknameButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("EditNicknameButton_C", "BP_OnHovered");

	Params::UEditNicknameButton_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EditNicknameButton.EditNicknameButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEditNicknameButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("EditNicknameButton_C", "BP_OnUnhovered");

	Params::UEditNicknameButton_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EditNicknameButton.EditNicknameButton_C.ExecuteUbergraph_EditNicknameButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEditNicknameButton_C::ExecuteUbergraph_EditNicknameButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static auto Func = Class->GetFunction("EditNicknameButton_C", "ExecuteUbergraph_EditNicknameButton");

	Params::UEditNicknameButton_C_ExecuteUbergraph_EditNicknameButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
