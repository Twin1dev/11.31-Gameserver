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


// Function UserListEntry_XS.UserListEntry_XS_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUserListEntry_XS_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("UserListEntry_XS_C", "BP_OnUnhovered");

	Params::UUserListEntry_XS_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UserListEntry_XS.UserListEntry_XS_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsOpen                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUserListEntry_XS_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static auto Func = Class->GetFunction("UserListEntry_XS_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::UUserListEntry_XS_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params Parms;

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UserListEntry_XS.UserListEntry_XS_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUserListEntry_XS_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("UserListEntry_XS_C", "BP_OnHovered");

	Params::UUserListEntry_XS_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UserListEntry_XS.UserListEntry_XS_C.ExecuteUbergraph_UserListEntry_XS
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsOpen                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUserListEntry_XS_C::ExecuteUbergraph_UserListEntry_XS(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bIsOpen, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3)
{
	static auto Func = Class->GetFunction("UserListEntry_XS_C", "ExecuteUbergraph_UserListEntry_XS");

	Params::UUserListEntry_XS_C_ExecuteUbergraph_UserListEntry_XS_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_bIsOpen = K2Node_ComponentBoundEvent_bIsOpen;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
