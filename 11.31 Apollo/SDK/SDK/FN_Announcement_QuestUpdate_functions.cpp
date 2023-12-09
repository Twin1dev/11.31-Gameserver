#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Announcement_QuestUpdate.Announcement_QuestUpdate_C
// (None)

class UClass* UAnnouncement_QuestUpdate_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Announcement_QuestUpdate_C");

	return Clss;
}


// Announcement_QuestUpdate_C Announcement_QuestUpdate.Default__Announcement_QuestUpdate_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAnnouncement_QuestUpdate_C* UAnnouncement_QuestUpdate_C::GetDefaultObj()
{
	static class UAnnouncement_QuestUpdate_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnnouncement_QuestUpdate_C*>(UAnnouncement_QuestUpdate_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.UpdateWidgetData
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement*     Announcement                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_QuestUpdate_C::UpdateWidgetData(class AFortClientAnnouncement* Announcement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announcement_QuestUpdate_C", "UpdateWidgetData");

	Params::UAnnouncement_QuestUpdate_C_UpdateWidgetData_Params Parms{};

	Parms.Announcement = Announcement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.AnnouncementStopped
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class AFortClientAnnouncement*     Announcement                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_QuestUpdate_C::AnnouncementStopped(class AFortClientAnnouncement* Announcement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announcement_QuestUpdate_C", "AnnouncementStopped");

	Params::UAnnouncement_QuestUpdate_C_AnnouncementStopped_Params Parms{};

	Parms.Announcement = Announcement;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announcement_QuestUpdate.Announcement_QuestUpdate_C.ExecuteUbergraph_Announcement_QuestUpdate
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortClientAnnouncement*     K2Node_Event_Announcement_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAnnounce_QuestUpdate_C*     K2Node_DynamicCast_AsAnnounce_Quest_Update                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortClientAnnouncement*     K2Node_Event_Announcement                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAnnouncement_QuestUpdate_C::ExecuteUbergraph_Announcement_QuestUpdate(int32 EntryPoint, class AFortClientAnnouncement* K2Node_Event_Announcement_1, class AAnnounce_QuestUpdate_C* K2Node_DynamicCast_AsAnnounce_Quest_Update, bool K2Node_DynamicCast_bSuccess, class AFortClientAnnouncement* K2Node_Event_Announcement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announcement_QuestUpdate_C", "ExecuteUbergraph_Announcement_QuestUpdate");

	Params::UAnnouncement_QuestUpdate_C_ExecuteUbergraph_Announcement_QuestUpdate_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Announcement_1 = K2Node_Event_Announcement_1;
	Parms.K2Node_DynamicCast_AsAnnounce_Quest_Update = K2Node_DynamicCast_AsAnnounce_Quest_Update;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Announcement = K2Node_Event_Announcement;

	UObject::ProcessEvent(Func, &Parms);

}

}


