#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StopcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "<Stop>c__AnonStorey1"));
	}

	template <typename T = uintptr_t> T& stopBehavior() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t ps) {
		return ((T (*)(StopcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x4AC03A4))(this, ps);
	}

};

}