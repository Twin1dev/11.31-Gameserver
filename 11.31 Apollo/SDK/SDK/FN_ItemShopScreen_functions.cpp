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


// Function ItemShopScreen.ItemShopScreen_C.OnSectionsEstablished
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEmpty                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemShopScreen_C::OnSectionsEstablished(bool bEmpty)
{
	static auto Func = Class->GetFunction("ItemShopScreen_C", "OnSectionsEstablished");

	Params::UItemShopScreen_C_OnSectionsEstablished_Params Parms;

	Parms.bEmpty = bEmpty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopScreen.ItemShopScreen_C.OnEstablishingSections
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemShopScreen_C::OnEstablishingSections()
{
	static auto Func = Class->GetFunction("ItemShopScreen_C", "OnEstablishingSections");

	Params::UItemShopScreen_C_OnEstablishingSections_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopScreen.ItemShopScreen_C.ExecuteUbergraph_ItemShopScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEmpty                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemShopScreen_C::ExecuteUbergraph_ItemShopScreen(int32 EntryPoint, bool K2Node_Event_bEmpty, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ItemShopScreen_C", "ExecuteUbergraph_ItemShopScreen");

	Params::UItemShopScreen_C_ExecuteUbergraph_ItemShopScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bEmpty = K2Node_Event_bEmpty;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
