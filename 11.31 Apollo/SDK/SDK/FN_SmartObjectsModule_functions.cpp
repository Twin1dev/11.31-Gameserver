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


// Function SmartObjectsModule.AITask_UseSmartObject.UseSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AAIController*               Controller                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      SmartObjectActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USmartObjectComponent*       SmartObjectComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLockAILogic                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAITask_UseSmartObject*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAITask_UseSmartObject* UAITask_UseSmartObject::UseSmartObject(class AAIController* Controller, class AActor* SmartObjectActor, class USmartObjectComponent* SmartObjectComponent, bool bLockAILogic)
{
	static auto Func = Class->GetFunction("AITask_UseSmartObject", "UseSmartObject");

	Params::UAITask_UseSmartObject_UseSmartObject_Params Parms;

	Parms.Controller = Controller;
	Parms.SmartObjectActor = SmartObjectActor;
	Parms.SmartObjectComponent = SmartObjectComponent;
	Parms.bLockAILogic = bLockAILogic;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_UseSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Avatar                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      SmartObject                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::K2_UseSmartObject(class AActor* Avatar, class AActor* SmartObject)
{
	static auto Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "K2_UseSmartObject");

	Params::USmartObjectBlueprintFunctionLibrary_K2_UseSmartObject_Params Parms;

	Parms.Avatar = Avatar;
	Parms.SmartObject = SmartObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_SetSmartObjectEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      SmartObject                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::K2_SetSmartObjectEnabled(class AActor* SmartObject, bool bEnabled)
{
	static auto Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "K2_SetSmartObjectEnabled");

	Params::USmartObjectBlueprintFunctionLibrary_K2_SetSmartObjectEnabled_Params Parms;

	Parms.SmartObject = SmartObject;
	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_RemoveLooseGameplayTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       GameplayTags                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::K2_RemoveLooseGameplayTags(class AActor* Actor, struct FGameplayTagContainer& GameplayTags)
{
	static auto Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "K2_RemoveLooseGameplayTags");

	Params::USmartObjectBlueprintFunctionLibrary_K2_RemoveLooseGameplayTags_Params Parms;

	Parms.Actor = Actor;
	Parms.GameplayTags = GameplayTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_AddLooseGameplayTags
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       GameplayTags                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::K2_AddLooseGameplayTags(class AActor* Actor, struct FGameplayTagContainer& GameplayTags)
{
	static auto Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "K2_AddLooseGameplayTags");

	Params::USmartObjectBlueprintFunctionLibrary_K2_AddLooseGameplayTags_Params Parms;

	Parms.Actor = Actor;
	Parms.GameplayTags = GameplayTags;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
