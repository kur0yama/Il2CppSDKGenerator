#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SpitToPickupItemAndDeathBoxListcAnonStorey0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<SpitToPickupItemAndDeathBoxList>c__AnonStorey0"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& DeathBoxList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& PickupItemList() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T m__0(uintptr_t Pickup) {
		return ((T (*)(SpitToPickupItemAndDeathBoxListcAnonStorey0*, uintptr_t))(Il2CppBase() + 0x38EB700))(this, Pickup);
	}

};

}