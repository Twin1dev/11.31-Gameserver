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

// 0x8 (0x8 - 0x0)
// Function Creative_Device_Effects_Interface.Creative_Device_Effects_Interface_C.Get Effect Color Index
struct ICreative_Device_Effects_Interface_C_Get_Effect_Color_Index_Params
{
public:
	enum class ECreativeColorSetType             Color_Type;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30F4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Color_Index;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


