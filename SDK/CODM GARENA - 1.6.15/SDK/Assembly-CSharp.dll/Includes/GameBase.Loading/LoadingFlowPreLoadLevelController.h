#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowPreLoadLevelController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowPreLoadLevelController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelByCondition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T CancelByCondition() {
		return ((T (*)(LoadingFlowPreLoadLevelController*))(Il2CppBase() + 0x2E643A0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CancelByCondition() {
		return ((T (*)(LoadingFlowPreLoadLevelController*))(Il2CppBase() + 0x2E6449C))(this);
	}

};

}