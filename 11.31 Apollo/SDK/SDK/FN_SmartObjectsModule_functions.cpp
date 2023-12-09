#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SmartObjectsModule.AITask_UseSmartObject
// (None)

class UClass* UAITask_UseSmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AITask_UseSmartObject");

	return Clss;
}


// AITask_UseSmartObject SmartObjectsModule.Default__AITask_UseSmartObject
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAITask_UseSmartObject* UAITask_UseSmartObject::GetDefaultObj()
{
	static class UAITask_UseSmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UAITask_UseSmartObject*>(UAITask_UseSmartObject::StaticClass()->DefaultObject);

	return Default;
}


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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AITask_UseSmartObject", "UseSmartObject");

	Params::UAITask_UseSmartObject_UseSmartObject_Params Parms{};

	Parms.Controller = Controller;
	Parms.SmartObjectActor = SmartObjectActor;
	Parms.SmartObjectComponent = SmartObjectComponent;
	Parms.bLockAILogic = bLockAILogic;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SmartObjectsModule.BTTask_FindAndUseSmartObject
// (None)

class UClass* UBTTask_FindAndUseSmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_FindAndUseSmartObject");

	return Clss;
}


// BTTask_FindAndUseSmartObject SmartObjectsModule.Default__BTTask_FindAndUseSmartObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_FindAndUseSmartObject* UBTTask_FindAndUseSmartObject::GetDefaultObj()
{
	static class UBTTask_FindAndUseSmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_FindAndUseSmartObject*>(UBTTask_FindAndUseSmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.BTTask_UseSmartObject
// (None)

class UClass* UBTTask_UseSmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_UseSmartObject");

	return Clss;
}


// BTTask_UseSmartObject SmartObjectsModule.Default__BTTask_UseSmartObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UBTTask_UseSmartObject* UBTTask_UseSmartObject::GetDefaultObj()
{
	static class UBTTask_UseSmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_UseSmartObject*>(UBTTask_UseSmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.GenericSmartObject
// (Actor)

class UClass* AGenericSmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericSmartObject");

	return Clss;
}


// GenericSmartObject SmartObjectsModule.Default__GenericSmartObject
// (Public, ClassDefaultObject, ArchetypeObject)

class AGenericSmartObject* AGenericSmartObject::GetDefaultObj()
{
	static class AGenericSmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<AGenericSmartObject*>(AGenericSmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.RichSmartObjectInterface
// (None)

class UClass* IRichSmartObjectInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RichSmartObjectInterface");

	return Clss;
}


// RichSmartObjectInterface SmartObjectsModule.Default__RichSmartObjectInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IRichSmartObjectInterface* IRichSmartObjectInterface::GetDefaultObj()
{
	static class IRichSmartObjectInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IRichSmartObjectInterface*>(IRichSmartObjectInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectBlueprintFunctionLibrary
// (None)

class UClass* USmartObjectBlueprintFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectBlueprintFunctionLibrary");

	return Clss;
}


// SmartObjectBlueprintFunctionLibrary SmartObjectsModule.Default__SmartObjectBlueprintFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectBlueprintFunctionLibrary* USmartObjectBlueprintFunctionLibrary::GetDefaultObj()
{
	static class USmartObjectBlueprintFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectBlueprintFunctionLibrary*>(USmartObjectBlueprintFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.K2_UseSmartObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Avatar                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      SmartObject                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USmartObjectBlueprintFunctionLibrary::K2_UseSmartObject(class AActor* Avatar, class AActor* SmartObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "K2_UseSmartObject");

	Params::USmartObjectBlueprintFunctionLibrary_K2_UseSmartObject_Params Parms{};

	Parms.Avatar = Avatar;
	Parms.SmartObject = SmartObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "K2_SetSmartObjectEnabled");

	Params::USmartObjectBlueprintFunctionLibrary_K2_SetSmartObjectEnabled_Params Parms{};

	Parms.SmartObject = SmartObject;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "K2_RemoveLooseGameplayTags");

	Params::USmartObjectBlueprintFunctionLibrary_K2_RemoveLooseGameplayTags_Params Parms{};

	Parms.Actor = Actor;
	Parms.GameplayTags = GameplayTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SmartObjectBlueprintFunctionLibrary", "K2_AddLooseGameplayTags");

	Params::USmartObjectBlueprintFunctionLibrary_K2_AddLooseGameplayTags_Params Parms{};

	Parms.Actor = Actor;
	Parms.GameplayTags = GameplayTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SmartObjectsModule.SmartObjectComponent
// (None)

class UClass* USmartObjectComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectComponent");

	return Clss;
}


// SmartObjectComponent SmartObjectsModule.Default__SmartObjectComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectComponent* USmartObjectComponent::GetDefaultObj()
{
	static class USmartObjectComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectComponent*>(USmartObjectComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectConfig
// (None)

class UClass* USmartObjectConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectConfig");

	return Clss;
}


// SmartObjectConfig SmartObjectsModule.Default__SmartObjectConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectConfig* USmartObjectConfig::GetDefaultObj()
{
	static class USmartObjectConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectConfig*>(USmartObjectConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectManager
// (None)

class UClass* USmartObjectManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectManager");

	return Clss;
}


// SmartObjectManager SmartObjectsModule.Default__SmartObjectManager
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectManager* USmartObjectManager::GetDefaultObj()
{
	static class USmartObjectManager* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectManager*>(USmartObjectManager::StaticClass()->DefaultObject);

	return Default;
}


// Class SmartObjectsModule.SmartObjectRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* USmartObjectRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SmartObjectRenderingComponent");

	return Clss;
}


// SmartObjectRenderingComponent SmartObjectsModule.Default__SmartObjectRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USmartObjectRenderingComponent* USmartObjectRenderingComponent::GetDefaultObj()
{
	static class USmartObjectRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USmartObjectRenderingComponent*>(USmartObjectRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}

}


