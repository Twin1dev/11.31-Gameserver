#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELocalNotificationEventType : uint8
{
	None                           = 0,
	FirstLogin                     = 1,
	Max                            = 2,
};

enum class ELocalNotificationParams : uint8
{
	BestHour24ToNotify             = 0,
	SpecificFireDateTime           = 1,
	HoursSinceLastSession          = 2,
	HoursAfterEvent_Max            = 3,
	HoursAfterEvent_Min            = 4,
	Max                            = 5,
};

enum class ELocalNotificationType : uint8
{
	SpecificDateTime               = 0,
	RangeDateTime                  = 1,
	Max                            = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x90 - 0x0)
// ScriptStruct LocalNotifications.LocalNotificationData
struct FLocalNotificationData
{
public:
	bool                                         Enable;                                            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELocalNotificationType            Type;                                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELocalNotificationEventType       EventType;                                         // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_435E[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TMap<enum class ELocalNotificationParams, class FString> ParamsByName;                                      // 0x8(0x50)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         LocalTime;                                         // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_435F[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                TitleKey;                                          // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BodyKey;                                           // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ActivationEvent;                                   // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
