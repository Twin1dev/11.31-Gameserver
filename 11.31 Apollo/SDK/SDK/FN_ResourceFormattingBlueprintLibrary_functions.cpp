#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ResourceFormattingBlueprintLibrary.ResourceFormattingBlueprintLibrary_C
// (None)

class UClass* UResourceFormattingBlueprintLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ResourceFormattingBlueprintLibrary_C");

	return Clss;
}


// ResourceFormattingBlueprintLibrary_C ResourceFormattingBlueprintLibrary.Default__ResourceFormattingBlueprintLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UResourceFormattingBlueprintLibrary_C* UResourceFormattingBlueprintLibrary_C::GetDefaultObj()
{
	static class UResourceFormattingBlueprintLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UResourceFormattingBlueprintLibrary_C*>(UResourceFormattingBlueprintLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ResourceFormattingBlueprintLibrary.ResourceFormattingBlueprintLibrary_C.UpdateResouceCountOnTextblock
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonNumericTextBlock*     TextBlock                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ResourceCount                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTargetValue_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResourceFormattingBlueprintLibrary_C::UpdateResouceCountOnTextblock(class UCommonNumericTextBlock* TextBlock, int32 ResourceCount, class UObject* __WorldContext, bool CallFunc_LessEqual_IntInt_ReturnValue, float CallFunc_GetTargetValue_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceFormattingBlueprintLibrary_C", "UpdateResouceCountOnTextblock");

	Params::UResourceFormattingBlueprintLibrary_C_UpdateResouceCountOnTextblock_Params Parms{};

	Parms.TextBlock = TextBlock;
	Parms.ResourceCount = ResourceCount;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetTargetValue_ReturnValue = CallFunc_GetTargetValue_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ResourceFormattingBlueprintLibrary.ResourceFormattingBlueprintLibrary_C.MakeBrushFromResource
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFortResourceType       Resource                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Width                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Height                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 Brush                                                            (Parm, OutParm)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPaperSprite*                Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortResourceType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPaperSprite*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_MakeBrushFromSprite_ReturnValue                         (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UResourceFormattingBlueprintLibrary_C::MakeBrushFromResource(enum class EFortResourceType Resource, int32 Width, int32 Height, class UObject* __WorldContext, struct FSlateBrush* Brush, bool* IsValid, class UPaperSprite* Temp_object_Variable, class UPaperSprite* Temp_object_Variable_1, class UPaperSprite* Temp_object_Variable_2, class UPaperSprite* Temp_object_Variable_3, class UPaperSprite* Temp_object_Variable_4, class UPaperSprite* Temp_object_Variable_5, enum class EFortResourceType Temp_byte_Variable, class UPaperSprite* K2Node_Select_Default, const struct FSlateBrush& CallFunc_MakeBrushFromSprite_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ResourceFormattingBlueprintLibrary_C", "MakeBrushFromResource");

	Params::UResourceFormattingBlueprintLibrary_C_MakeBrushFromResource_Params Parms{};

	Parms.Resource = Resource;
	Parms.Width = Width;
	Parms.Height = Height;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_MakeBrushFromSprite_ReturnValue = CallFunc_MakeBrushFromSprite_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Brush != nullptr)
		*Brush = std::move(Parms.Brush);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}

}


