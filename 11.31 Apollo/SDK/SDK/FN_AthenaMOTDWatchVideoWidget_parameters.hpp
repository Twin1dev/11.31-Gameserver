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

// 0x20 (0x20 - 0x0)
// Function AthenaMOTDWatchVideoWidget.AthenaMOTDWatchVideoWidget_C.BindVideoEvents
struct UAthenaMOTDWatchVideoWidget_C_BindVideoEvents_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMOTDWatchVideoWidget.AthenaMOTDWatchVideoWidget_C.CloseWidgetNoURL
struct UAthenaMOTDWatchVideoWidget_C_CloseWidgetNoURL_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function AthenaMOTDWatchVideoWidget.AthenaMOTDWatchVideoWidget_C.CloseWidget
struct UAthenaMOTDWatchVideoWidget_C_CloseWidget_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor)
};

// 0x180 (0x180 - 0x0)
// Function AthenaMOTDWatchVideoWidget.AthenaMOTDWatchVideoWidget_C.OnPopulateNews
struct UAthenaMOTDWatchVideoWidget_C_OnPopulateNews_Params
{
public:
	struct FAthenaNewsEntry                      NewsEntry;                                         // 0x0(0x180)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1C0 (0x1C0 - 0x0)
// Function AthenaMOTDWatchVideoWidget.AthenaMOTDWatchVideoWidget_C.ExecuteUbergraph_AthenaMOTDWatchVideoWidget
struct UAthenaMOTDWatchVideoWidget_C_ExecuteUbergraph_AthenaMOTDWatchVideoWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54BA[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FAthenaNewsEntry                      K2Node_Event_NewsEntry;                            // 0x8(0x180)(ConstParm)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActivatableMovieWidget_Monolithic_C*  CallFunc_Create_ReturnValue;                       // 0x190(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_2;          // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadStreamingVideo_NoAutoPlay;            // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_54BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStreamMediaSource*                CallFunc_LoadStreamingVideo_MediaSource;           // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
