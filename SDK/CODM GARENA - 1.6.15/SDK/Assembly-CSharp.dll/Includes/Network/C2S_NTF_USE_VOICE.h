#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class C2SNTFUSEVOICE
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "C2S_NTF_USE_VOICE"));
	}

	template <typename T = uint32_t> T& MicState() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& HornState() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = unsigned char> T& UseTwoWayRadio() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Serialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(C2SNTFUSEVOICE*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x503A3BC))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x503A500))(0, data, DataIndex);
	}
	template <typename T = void> T xLuaBaseProxy_Serialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1) {
		return ((T (*)(C2SNTFUSEVOICE*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x503A5B0))(this, P0, P1);
	}

};

}