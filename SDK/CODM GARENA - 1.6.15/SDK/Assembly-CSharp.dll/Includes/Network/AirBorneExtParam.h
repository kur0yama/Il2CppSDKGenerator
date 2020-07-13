#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class AirBorneExtParam
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "AirBorneExtParam"));
	}

	template <typename T = unsigned char> T& FlowState() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Ejector1ActorId() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = unsigned char> T& Ejector1Usable() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Ejector2ActorId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = unsigned char> T& Ejector2Usable() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Ejector3ActorId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = unsigned char> T& Ejector3Usable() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Ejector4ActorId() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = unsigned char> T& Ejector4Usable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& EjectDir() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Unserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Serialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(AirBorneExtParam*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3332244))(this, bytes, position);
	}
	template <typename T = void> T Unserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(AirBorneExtParam*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3332440))(this, bytes, position);
	}
	template <typename T = int32_t> static T GetSize(Il2CppArray<uintptr_t>* data, int32_t DataIndex) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t))(Il2CppBase() + 0x3332634))(0, data, DataIndex);
	}

};

}