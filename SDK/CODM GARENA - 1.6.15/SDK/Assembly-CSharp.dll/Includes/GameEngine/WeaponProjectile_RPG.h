#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class WeaponProjectileRPG
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "WeaponProjectile_RPG"));
	}

	template <typename T = uintptr_t> T& m_RPGProjectileSimulator() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateSimulator() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExplodePosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimulateOnSpawned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T CreateSimulator(uintptr_t data, Il2CppVector3 inInitLoc, Il2CppVector3 inInitVel, uintptr_t inHandler) {
		return ((T (*)(WeaponProjectileRPG*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x243C0CC))(this, data, inInitLoc, inInitVel, inHandler);
	}
	template <typename T = void> T SetTarget(uintptr_t inTarget, uintptr_t inHitGroup) {
		return ((T (*)(WeaponProjectileRPG*, uintptr_t, uintptr_t))(Il2CppBase() + 0x23F769C))(this, inTarget, inHitGroup);
	}
	template <typename T = Il2CppVector3> T GetExplodePosition() {
		return ((T (*)(WeaponProjectileRPG*))(Il2CppBase() + 0x243C220))(this);
	}
	template <typename T = void> T SimulateOnSpawned(bool isHoldProjectile) {
		return ((T (*)(WeaponProjectileRPG*, bool))(Il2CppBase() + 0x243C2E8))(this, isHoldProjectile);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_CreateSimulator(uintptr_t P0, Il2CppVector3 P1, Il2CppVector3 P2, uintptr_t P3) {
		return ((T (*)(WeaponProjectileRPG*, uintptr_t, Il2CppVector3, Il2CppVector3, uintptr_t))(Il2CppBase() + 0x243CB1C))(this, P0, P1, P2, P3);
	}
	template <typename T = Il2CppVector3> T xLuaBaseProxy_GetExplodePosition() {
		return ((T (*)(WeaponProjectileRPG*))(Il2CppBase() + 0x243CB58))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SimulateOnSpawned(bool P0) {
		return ((T (*)(WeaponProjectileRPG*, bool))(Il2CppBase() + 0x243CB68))(this, P0);
	}

};

}