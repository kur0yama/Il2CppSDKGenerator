#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PushApplyEnterRoomcAnonStorey10
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<PushApplyEnterRoom>c__AnonStorey10"));
	}

	template <typename T = uintptr_t> T& ntf() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t it) {
		return ((T (*)(PushApplyEnterRoomcAnonStorey10*, uintptr_t))(Il2CppBase() + 0x2D24430))(this, it);
	}

};

}