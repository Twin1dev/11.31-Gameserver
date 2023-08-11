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


// Function LiveLink.LiveLinkBlueprintLibrary.TransformNames
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FName>                TransformNames                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::TransformNames(struct FSubjectFrameHandle& SubjectFrameHandle, TArray<class FName>* TransformNames)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "TransformNames");

	Params::ULiveLinkBlueprintLibrary_TransformNames_Params Parms;

	Parms.SubjectFrameHandle = SubjectFrameHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (TransformNames != nullptr)
		*TransformNames = Parms.TransformNames;

}


// Function LiveLink.LiveLinkBlueprintLibrary.TransformName
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        Name                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::TransformName(struct FLiveLinkTransform& LiveLinkTransform, class FName* Name)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "TransformName");

	Params::ULiveLinkBlueprintLibrary_TransformName_Params Parms;

	Parms.LiveLinkTransform = LiveLinkTransform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function LiveLink.LiveLinkBlueprintLibrary.SetLiveLinkSubjectEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectKey         SubjectKey                                                       (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::SetLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bEnabled)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "SetLiveLinkSubjectEnabled");

	Params::ULiveLinkBlueprintLibrary_SetLiveLinkSubjectEnabled_Params Parms;

	Parms.SubjectKey = SubjectKey;
	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LiveLink.LiveLinkBlueprintLibrary.RequestShutdown
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::RequestShutdown(struct FLiveLinkSourceHandle& SourceHandle)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "RequestShutdown");

	Params::ULiveLinkBlueprintLibrary_RequestShutdown_Params Parms;

	Parms.SourceHandle = SourceHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.ParentBoneSpaceTransform
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::ParentBoneSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform* Transform)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "ParentBoneSpaceTransform");

	Params::ULiveLinkBlueprintLibrary_ParentBoneSpaceTransform_Params Parms;

	Parms.LiveLinkTransform = LiveLinkTransform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Transform != nullptr)
		*Transform = Parms.Transform;

}


// Function LiveLink.LiveLinkBlueprintLibrary.NumberOfTransforms
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULiveLinkBlueprintLibrary::NumberOfTransforms(struct FSubjectFrameHandle& SubjectFrameHandle)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "NumberOfTransforms");

	Params::ULiveLinkBlueprintLibrary_NumberOfTransforms_Params Parms;

	Parms.SubjectFrameHandle = SubjectFrameHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.IsSpecificLiveLinkSubjectEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectKey         SubjectKey                                                       (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::IsSpecificLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "IsSpecificLiveLinkSubjectEnabled");

	Params::ULiveLinkBlueprintLibrary_IsSpecificLiveLinkSubjectEnabled_Params Parms;

	Parms.SubjectKey = SubjectKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.IsSourceStillValid
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::IsSourceStillValid(struct FLiveLinkSourceHandle& SourceHandle)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "IsSourceStillValid");

	Params::ULiveLinkBlueprintLibrary_IsSourceStillValid_Params Parms;

	Parms.SourceHandle = SourceHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.IsLiveLinkSubjectEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::IsLiveLinkSubjectEnabled(const struct FLiveLinkSubjectName& SubjectName)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "IsLiveLinkSubjectEnabled");

	Params::ULiveLinkBlueprintLibrary_IsLiveLinkSubjectEnabled_Params Parms;

	Parms.SubjectName = SubjectName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.HasParent
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::HasParent(struct FLiveLinkTransform& LiveLinkTransform)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "HasParent");

	Params::ULiveLinkBlueprintLibrary_HasParent_Params Parms;

	Parms.LiveLinkTransform = LiveLinkTransform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByName
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        TransformName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLiveLinkTransform          LiveLinkTransform                                                (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetTransformByName(struct FSubjectFrameHandle& SubjectFrameHandle, class FName TransformName, struct FLiveLinkTransform* LiveLinkTransform)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetTransformByName");

	Params::ULiveLinkBlueprintLibrary_GetTransformByName_Params Parms;

	Parms.SubjectFrameHandle = SubjectFrameHandle;
	Parms.TransformName = TransformName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = Parms.LiveLinkTransform;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetTransformByIndex
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              TransformIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLiveLinkTransform          LiveLinkTransform                                                (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetTransformByIndex(struct FSubjectFrameHandle& SubjectFrameHandle, int32 TransformIndex, struct FLiveLinkTransform* LiveLinkTransform)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetTransformByIndex");

	Params::ULiveLinkBlueprintLibrary_GetTransformByIndex_Params Parms;

	Parms.SubjectFrameHandle = SubjectFrameHandle;
	Parms.TransformIndex = TransformIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = Parms.LiveLinkTransform;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSpecificLiveLinkSubjectRole
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectKey         SubjectKey                                                       (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class ULiveLinkRole>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class ULiveLinkRole> ULiveLinkBlueprintLibrary::GetSpecificLiveLinkSubjectRole(const struct FLiveLinkSubjectKey& SubjectKey)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSpecificLiveLinkSubjectRole");

	Params::ULiveLinkBlueprintLibrary_GetSpecificLiveLinkSubjectRole_Params Parms;

	Parms.SubjectKey = SubjectKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceType
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText ULiveLinkBlueprintLibrary::GetSourceType(struct FLiveLinkSourceHandle& SourceHandle)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSourceType");

	Params::ULiveLinkBlueprintLibrary_GetSourceType_Params Parms;

	Parms.SourceHandle = SourceHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceStatus
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText ULiveLinkBlueprintLibrary::GetSourceStatus(struct FLiveLinkSourceHandle& SourceHandle)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSourceStatus");

	Params::ULiveLinkBlueprintLibrary_GetSourceStatus_Params Parms;

	Parms.SourceHandle = SourceHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetSourceMachineName
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSourceHandle       SourceHandle                                                     (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText ULiveLinkBlueprintLibrary::GetSourceMachineName(struct FLiveLinkSourceHandle& SourceHandle)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetSourceMachineName");

	Params::ULiveLinkBlueprintLibrary_GetSourceMachineName_Params Parms;

	Parms.SourceHandle = SourceHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetRootTransform
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLiveLinkTransform          LiveLinkTransform                                                (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetRootTransform(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetRootTransform");

	Params::ULiveLinkBlueprintLibrary_GetRootTransform_Params Parms;

	Parms.SubjectFrameHandle = SubjectFrameHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (LiveLinkTransform != nullptr)
		*LiveLinkTransform = Parms.LiveLinkTransform;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetPropertyValue
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkBasicBlueprintData BasicData                                                        (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        PropertyName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::GetPropertyValue(struct FLiveLinkBasicBlueprintData& BasicData, class FName PropertyName, float* Value)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetPropertyValue");

	Params::ULiveLinkBlueprintLibrary_GetPropertyValue_Params Parms;

	Parms.BasicData = BasicData;
	Parms.PropertyName = PropertyName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Value != nullptr)
		*Value = Parms.Value;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetParent
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLiveLinkTransform          Parent                                                           (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetParent(struct FLiveLinkTransform& LiveLinkTransform, struct FLiveLinkTransform* Parent)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetParent");

	Params::ULiveLinkBlueprintLibrary_GetParent_Params Parms;

	Parms.LiveLinkTransform = LiveLinkTransform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Parent != nullptr)
		*Parent = Parms.Parent;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetMetadata
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSubjectMetadata            MetaData                                                         (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetMetadata(struct FSubjectFrameHandle& SubjectFrameHandle, struct FSubjectMetadata* MetaData)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetMetadata");

	Params::ULiveLinkBlueprintLibrary_GetMetadata_Params Parms;

	Parms.SubjectFrameHandle = SubjectFrameHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (MetaData != nullptr)
		*MetaData = Parms.MetaData;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjects
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bIncludeDisabledSubject                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeDisal                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLiveLinkSubjectKey> ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FLiveLinkSubjectKey> ULiveLinkBlueprintLibrary::GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeDisal)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetLiveLinkSubjects");

	Params::ULiveLinkBlueprintLibrary_GetLiveLinkSubjects_Params Parms;

	Parms.bIncludeDisabledSubject = bIncludeDisabledSubject;
	Parms.bIncludeDisal = bIncludeDisal;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkSubjectRole
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class ULiveLinkRole>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class ULiveLinkRole> ULiveLinkBlueprintLibrary::GetLiveLinkSubjectRole(const struct FLiveLinkSubjectName& SubjectName)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetLiveLinkSubjectRole");

	Params::ULiveLinkBlueprintLibrary_GetLiveLinkSubjectRole_Params Parms;

	Parms.SubjectName = SubjectName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetLiveLinkEnabledSubjectNames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bIncludeVirtualSubject                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLiveLinkSubjectName>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FLiveLinkSubjectName> ULiveLinkBlueprintLibrary::GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetLiveLinkEnabledSubjectNames");

	Params::ULiveLinkBlueprintLibrary_GetLiveLinkEnabledSubjectNames_Params Parms;

	Parms.bIncludeVirtualSubject = bIncludeVirtualSubject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetCurves
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TMap<class FName, float>           Curves                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetCurves(struct FSubjectFrameHandle& SubjectFrameHandle, TMap<class FName, float>* Curves)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetCurves");

	Params::ULiveLinkBlueprintLibrary_GetCurves_Params Parms;

	Parms.SubjectFrameHandle = SubjectFrameHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Curves != nullptr)
		*Curves = Parms.Curves;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetChildren
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FLiveLinkTransform>  Children                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetChildren(struct FLiveLinkTransform& LiveLinkTransform, TArray<struct FLiveLinkTransform>* Children)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetChildren");

	Params::ULiveLinkBlueprintLibrary_GetChildren_Params Parms;

	Parms.LiveLinkTransform = LiveLinkTransform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Children != nullptr)
		*Children = Parms.Children;

}


// Function LiveLink.LiveLinkBlueprintLibrary.GetBasicData
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLiveLinkBasicBlueprintData BasicBlueprintData                                               (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::GetBasicData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkBasicBlueprintData* BasicBlueprintData)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "GetBasicData");

	Params::ULiveLinkBlueprintLibrary_GetBasicData_Params Parms;

	Parms.SubjectFrameHandle = SubjectFrameHandle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (BasicBlueprintData != nullptr)
		*BasicBlueprintData = Parms.BasicBlueprintData;

}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameWithSpecificRole
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class ULiveLinkRole>   Role                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLiveLinkBaseBlueprintData  OutBlueprintData                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkSubjectName& SubjectName, TSubclassOf<class ULiveLinkRole> Role, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrameWithSpecificRole");

	Params::ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameWithSpecificRole_Params Parms;

	Parms.SubjectName = SubjectName;
	Parms.Role = Role;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = Parms.OutBlueprintData;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtWorldTimeOffset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class ULiveLinkRole>   Role                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              WorldTimeOffset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLiveLinkBaseBlueprintData  OutBlueprintData                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkSubjectName& SubjectName, TSubclassOf<class ULiveLinkRole> Role, float WorldTimeOffset, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrameAtWorldTimeOffset");

	Params::ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtWorldTimeOffset_Params Parms;

	Parms.SubjectName = SubjectName;
	Parms.Role = Role;
	Parms.WorldTimeOffset = WorldTimeOffset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = Parms.OutBlueprintData;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrameAtSceneTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectName        SubjectName                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class ULiveLinkRole>   Role                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimecode                   SceneTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLiveLinkBaseBlueprintData  OutBlueprintData                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkSubjectName& SubjectName, TSubclassOf<class ULiveLinkRole> Role, const struct FTimecode& SceneTime, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrameAtSceneTime");

	Params::ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrameAtSceneTime_Params Parms;

	Parms.SubjectName = SubjectName;
	Parms.Role = Role;
	Parms.SceneTime = SceneTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = Parms.OutBlueprintData;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.EvaluateLiveLinkFrame
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLiveLinkSubjectRepresentationSubjectRepresentation                                            (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FLiveLinkBaseBlueprintData  OutBlueprintData                                                 (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveLinkBlueprintLibrary::EvaluateLiveLinkFrame(const struct FLiveLinkSubjectRepresentation& SubjectRepresentation, struct FLiveLinkBaseBlueprintData* OutBlueprintData)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "EvaluateLiveLinkFrame");

	Params::ULiveLinkBlueprintLibrary_EvaluateLiveLinkFrame_Params Parms;

	Parms.SubjectRepresentation = SubjectRepresentation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutBlueprintData != nullptr)
		*OutBlueprintData = Parms.OutBlueprintData;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkBlueprintLibrary.ComponentSpaceTransform
// (Final, Native, Static, Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void ULiveLinkBlueprintLibrary::ComponentSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform* Transform)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "ComponentSpaceTransform");

	Params::ULiveLinkBlueprintLibrary_ComponentSpaceTransform_Params Parms;

	Parms.LiveLinkTransform = LiveLinkTransform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Transform != nullptr)
		*Transform = Parms.Transform;

}


// Function LiveLink.LiveLinkBlueprintLibrary.ChildCount
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FLiveLinkTransform          LiveLinkTransform                                                (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULiveLinkBlueprintLibrary::ChildCount(struct FLiveLinkTransform& LiveLinkTransform)
{
	static auto Func = Class->GetFunction("LiveLinkBlueprintLibrary", "ChildCount");

	Params::ULiveLinkBlueprintLibrary_ChildCount_Params Parms;

	Parms.LiveLinkTransform = LiveLinkTransform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkComponent.GetSubjectDataAtWorldTime
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SubjectName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              WorldTime                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveLinkComponent::GetSubjectDataAtWorldTime(class FName SubjectName, float WorldTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static auto Func = Class->GetFunction("LiveLinkComponent", "GetSubjectDataAtWorldTime");

	Params::ULiveLinkComponent_GetSubjectDataAtWorldTime_Params Parms;

	Parms.SubjectName = SubjectName;
	Parms.WorldTime = WorldTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = Parms.SubjectFrameHandle;

}


// Function LiveLink.LiveLinkComponent.GetSubjectDataAtSceneTime
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SubjectName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimecode                   SceneTime                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveLinkComponent::GetSubjectDataAtSceneTime(class FName SubjectName, struct FTimecode& SceneTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static auto Func = Class->GetFunction("LiveLinkComponent", "GetSubjectDataAtSceneTime");

	Params::ULiveLinkComponent_GetSubjectDataAtSceneTime_Params Parms;

	Parms.SubjectName = SubjectName;
	Parms.SceneTime = SceneTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = Parms.SubjectFrameHandle;

}


// Function LiveLink.LiveLinkComponent.GetSubjectData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SubjectName                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSubjectFrameHandle         SubjectFrameHandle                                               (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveLinkComponent::GetSubjectData(class FName SubjectName, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle)
{
	static auto Func = Class->GetFunction("LiveLinkComponent", "GetSubjectData");

	Params::ULiveLinkComponent_GetSubjectData_Params Parms;

	Parms.SubjectName = SubjectName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

	if (SubjectFrameHandle != nullptr)
		*SubjectFrameHandle = Parms.SubjectFrameHandle;

}


// Function LiveLink.LiveLinkComponent.GetAvailableSubjectNames
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FName>                SubjectNames                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ULiveLinkComponent::GetAvailableSubjectNames(TArray<class FName>* SubjectNames)
{
	static auto Func = Class->GetFunction("LiveLinkComponent", "GetAvailableSubjectNames");

	Params::ULiveLinkComponent_GetAvailableSubjectNames_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SubjectNames != nullptr)
		*SubjectNames = Parms.SubjectNames;

}


// Function LiveLink.LiveLinkMessageBusFinder.GetAvailableProviders
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FProviderPollResult> AvailableProviders                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ULiveLinkMessageBusFinder::GetAvailableProviders(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float Duration, TArray<struct FProviderPollResult>* AvailableProviders)
{
	static auto Func = Class->GetFunction("LiveLinkMessageBusFinder", "GetAvailableProviders");

	Params::ULiveLinkMessageBusFinder_GetAvailableProviders_Params Parms;

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.Duration = Duration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (AvailableProviders != nullptr)
		*AvailableProviders = Parms.AvailableProviders;

}


// Function LiveLink.LiveLinkMessageBusFinder.ConstructMessageBusFinder
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULiveLinkMessageBusFinder*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULiveLinkMessageBusFinder* ULiveLinkMessageBusFinder::ConstructMessageBusFinder()
{
	static auto Func = Class->GetFunction("LiveLinkMessageBusFinder", "ConstructMessageBusFinder");

	Params::ULiveLinkMessageBusFinder_ConstructMessageBusFinder_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkMessageBusFinder.ConnectToProvider
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FProviderPollResult         Provider                                                         (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLiveLinkSourceHandle       SourceHandle                                                     (Parm, OutParm, NativeAccessSpecifierPublic)

void ULiveLinkMessageBusFinder::ConnectToProvider(struct FProviderPollResult& Provider, struct FLiveLinkSourceHandle* SourceHandle)
{
	static auto Func = Class->GetFunction("LiveLinkMessageBusFinder", "ConnectToProvider");

	Params::ULiveLinkMessageBusFinder_ConnectToProvider_Params Parms;

	Parms.Provider = Provider;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SourceHandle != nullptr)
		*SourceHandle = Parms.SourceHandle;

}


// Function LiveLink.LiveLinkPreset.BuildFromClient
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULiveLinkPreset::BuildFromClient()
{
	static auto Func = Class->GetFunction("LiveLinkPreset", "BuildFromClient");

	Params::ULiveLinkPreset_BuildFromClient_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LiveLink.LiveLinkPreset.ApplyToClient
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULiveLinkPreset::ApplyToClient()
{
	static auto Func = Class->GetFunction("LiveLinkPreset", "ApplyToClient");

	Params::ULiveLinkPreset_ApplyToClient_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkRemapAsset.RemapCurveElements
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// TMap<class FName, float>           CurveItems                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULiveLinkRemapAsset::RemapCurveElements(TMap<class FName, float>& CurveItems)
{
	static auto Func = Class->GetFunction("LiveLinkRemapAsset", "RemapCurveElements");

	Params::ULiveLinkRemapAsset_RemapCurveElements_Params Parms;

	Parms.CurveItems = CurveItems;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function LiveLink.LiveLinkRemapAsset.GetRemappedCurveName
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FName                        CurveName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName ULiveLinkRemapAsset::GetRemappedCurveName(class FName CurveName)
{
	static auto Func = Class->GetFunction("LiveLinkRemapAsset", "GetRemappedCurveName");

	Params::ULiveLinkRemapAsset_GetRemappedCurveName_Params Parms;

	Parms.CurveName = CurveName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function LiveLink.LiveLinkRemapAsset.GetRemappedBoneName
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName ULiveLinkRemapAsset::GetRemappedBoneName(class FName BoneName)
{
	static auto Func = Class->GetFunction("LiveLinkRemapAsset", "GetRemappedBoneName");

	Params::ULiveLinkRemapAsset_GetRemappedBoneName_Params Parms;

	Parms.BoneName = BoneName;

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
