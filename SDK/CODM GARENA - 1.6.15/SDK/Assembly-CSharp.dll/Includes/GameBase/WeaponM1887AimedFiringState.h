#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class WeaponM1887AimedFiringState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "WeaponM1887AimedFiringState"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BeginState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T BeginState() {
		return ((T (*)(WeaponM1887AimedFiringState*))(Il2CppBase() + 0x3A5798C))(this);
	}
	template <typename T = void> T StartAim() {
		return ((T (*)(WeaponM1887AimedFiringState*))(Il2CppBase() + 0x3A57A84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_BeginState() {
		return ((T (*)(WeaponM1887AimedFiringState*))(Il2CppBase() + 0x3A57B1C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_StartAim() {
		return ((T (*)(WeaponM1887AimedFiringState*))(Il2CppBase() + 0x3A57B24))(this);
	}

};

}