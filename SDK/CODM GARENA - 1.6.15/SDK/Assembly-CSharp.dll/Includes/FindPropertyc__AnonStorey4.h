#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FindPropertycAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<FindProperty>c__AnonStorey4"));
	}

	template <typename T = uint32_t> T& id() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = bool> T m__0(uintptr_t p) {
		return ((T (*)(FindPropertycAnonStorey4*, uintptr_t))(Il2CppBase() + 0x480A870))(this, p);
	}

};

}