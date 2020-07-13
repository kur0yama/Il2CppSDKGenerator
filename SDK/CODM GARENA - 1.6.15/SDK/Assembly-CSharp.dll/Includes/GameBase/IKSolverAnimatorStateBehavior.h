#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IKSolverAnimatorStateBehavior
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IKSolverAnimatorStateBehavior"));
	}

	template <typename T = bool> T& IsStopIK() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& IsStopTransition() {
		return *(T*)((uintptr_t)this + 0xD);
	}
	template <typename T = int32_t> T& LeftHandHoldType() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& FucDisable() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnStateExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnStateEnter(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(IKSolverAnimatorStateBehavior*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1EEF350))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T OnStateExit(uintptr_t animator, uintptr_t stateInfo, int32_t layerIndex) {
		return ((T (*)(IKSolverAnimatorStateBehavior*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1EEF5D0))(this, animator, stateInfo, layerIndex);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateEnter(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(IKSolverAnimatorStateBehavior*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1EEF84C))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_OnStateExit(uintptr_t P0, uintptr_t P1, int32_t P2) {
		return ((T (*)(IKSolverAnimatorStateBehavior*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1EEF8BC))(this, P0, P1, P2);
	}

};

}