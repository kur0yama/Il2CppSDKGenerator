#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class PVEEndlessSettlementWindowNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "PVEEndlessSettlementWindowNavController"));
	}

	template <typename T = uintptr_t> T& ctr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowSquad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T IsShowSquad() {
		return ((T (*)(PVEEndlessSettlementWindowNavController*))(Il2CppBase() + 0x3B2A768))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(PVEEndlessSettlementWindowNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B2A808))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(PVEEndlessSettlementWindowNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B2A9A4))(this, data, nextData);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowSquad() {
		return ((T (*)(PVEEndlessSettlementWindowNavController*))(Il2CppBase() + 0x3B2AA88))(this);
	}

};

}