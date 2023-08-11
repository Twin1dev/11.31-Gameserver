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


// Function AthenaDirectAcquisitionOfferUndoOverlay.AthenaDirectAcquisitionOfferUndoOverlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferUndoOverlay_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferUndoOverlay_C", "Construct");

	Params::UAthenaDirectAcquisitionOfferUndoOverlay_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferUndoOverlay.AthenaDirectAcquisitionOfferUndoOverlay_C.WidgetAnimationEvt_Refunded_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOfferUndoOverlay_C::WidgetAnimationEvt_Refunded_K2Node_WidgetAnimationEvent_0()
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferUndoOverlay_C", "WidgetAnimationEvt_Refunded_K2Node_WidgetAnimationEvent_0");

	Params::UAthenaDirectAcquisitionOfferUndoOverlay_C_WidgetAnimationEvt_Refunded_K2Node_WidgetAnimationEvent_0_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOfferUndoOverlay.AthenaDirectAcquisitionOfferUndoOverlay_C.ExecuteUbergraph_AthenaDirectAcquisitionOfferUndoOverlay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaDirectAcquisitionOfferUndoOverlay_C::ExecuteUbergraph_AthenaDirectAcquisitionOfferUndoOverlay(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaDirectAcquisitionOfferUndoOverlay_C", "ExecuteUbergraph_AthenaDirectAcquisitionOfferUndoOverlay");

	Params::UAthenaDirectAcquisitionOfferUndoOverlay_C_ExecuteUbergraph_AthenaDirectAcquisitionOfferUndoOverlay_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
