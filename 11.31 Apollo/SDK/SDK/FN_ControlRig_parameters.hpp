#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// Function ControlRig.ControlRig.GetDeltaTime
struct UControlRig_GetDeltaTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ControlRig.ControlRigComponent.BP_GetControlRig
struct UControlRigComponent_BP_GetControlRig_Params
{
public:
	class UControlRig*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ControlRig.ControlRigControl.OnTransformChanged
struct AControlRigControl_OnTransformChanged_Params
{
public:
	struct FTransform                            NewTransform;                                      // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigControl.OnSelectionChanged
struct AControlRigControl_OnSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigControl.OnManipulatingChanged
struct AControlRigControl_OnManipulatingChanged_Params
{
public:
	bool                                         bIsManipulating;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigControl.OnHoveredChanged
struct AControlRigControl_OnHoveredChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ControlRig.ControlRigControl.OnEnabledChanged
struct AControlRigControl_OnEnabledChanged_Params
{
public:
	bool                                         bIsEnabled;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


