#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingLeft_End
struct IInterfacePlayerPawn_C_MeleeSwingLeft_End_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingRight_End
struct IInterfacePlayerPawn_C_MeleeSwingRight_End_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function InterfacePlayerPawn.InterfacePlayerPawn_C.FootStepRight
struct IInterfacePlayerPawn_C_FootStepRight_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function InterfacePlayerPawn.InterfacePlayerPawn_C.FootStepLeft
struct IInterfacePlayerPawn_C_FootStepLeft_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function InterfacePlayerPawn.InterfacePlayerPawn_C.Melee_Effect_Color
struct IInterfacePlayerPawn_C_Melee_Effect_Color_Params
{
public:
	struct FVector                               Melee_Color_Set;                                   // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingLeft
struct IInterfacePlayerPawn_C_MeleeSwingLeft_Params
{
public:
	bool                                         First_Left;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function InterfacePlayerPawn.InterfacePlayerPawn_C.MeleeSwingRight
struct IInterfacePlayerPawn_C_MeleeSwingRight_Params
{
public:
	bool                                         First_Right;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
