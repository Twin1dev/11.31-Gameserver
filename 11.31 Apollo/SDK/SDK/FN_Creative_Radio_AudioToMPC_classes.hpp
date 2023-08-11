#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x100 - 0x100)
// BlueprintGeneratedClass Creative_Radio_AudioToMPC.Creative_Radio_AudioToMPC_C
class UCreative_Radio_AudioToMPC_C : public UFortAudioToMPCComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Creative_Radio_AudioToMPC_C");
		return Clss;
	}

	void OnGatheredFFTData(TArray<struct FChannelData>& FFTData, float& OutAmplitudeAverage);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
