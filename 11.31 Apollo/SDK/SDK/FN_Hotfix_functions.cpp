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


// Function Hotfix.OnlineHotfixManager.StartHotfixProcess
// (Native, Public, BlueprintCallable)
// Parameters:

void UOnlineHotfixManager::StartHotfixProcess()
{
	static auto Func = Class->GetFunction("OnlineHotfixManager", "StartHotfixProcess");

	Params::UOnlineHotfixManager_StartHotfixProcess_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
