#pragma once
#include "Includes.h"

static void LOG(std::string message)
{
	std::cout << "ApolloLog: " << message << "\n";
}



inline UObject* (*StaticFindObject_)(UClass* Class, UObject* Package, const wchar_t* OrigInName, bool ExactClass) = decltype(StaticFindObject_)(__int64(GetModuleHandleW(0)) + Offsets::FindObject);
inline UObject* (*StaticLoadObject_)(UClass* Class, UObject* InOuter, const TCHAR* Name, const TCHAR* Filename, uint32_t LoadFlags, UObject* Sandbox, bool bAllowObjectReconciliation) = decltype(StaticLoadObject_)(__int64(GetModuleHandleW(0)) + Offsets::LoadObject);
template <typename T>
inline T* StaticFindObject(std::string ObjectPath, UClass* Class = UObject::StaticClass())
{
	return (T*)StaticFindObject_(Class, nullptr, std::wstring(ObjectPath.begin(), ObjectPath.end()).c_str(), false);
}

template <typename T>
inline T* StaticLoadObject(std::string Path, UClass* InClass = T::StaticClass(), UObject* Outer = nullptr)
{
	return (T*)StaticLoadObject_(InClass, Outer, std::wstring(Path.begin(), Path.end()).c_str(), nullptr, 0, nullptr, false);
}

