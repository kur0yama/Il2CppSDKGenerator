#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class SkillComponentUseWeapon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "SkillComponent_UseWeapon"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalNudge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanNudge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnNudge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T InternalNudge() {
		return ((T (*)(SkillComponentUseWeapon*))(Il2CppBase() + 0x30808B4))(this);
	}
	template <typename T = bool> T CanNudge() {
		return ((T (*)(SkillComponentUseWeapon*))(Il2CppBase() + 0x308094C))(this);
	}
	template <typename T = void> T UnNudge() {
		return ((T (*)(SkillComponentUseWeapon*))(Il2CppBase() + 0x30809EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InternalNudge() {
		return ((T (*)(SkillComponentUseWeapon*))(Il2CppBase() + 0x3080B34))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_CanNudge() {
		return ((T (*)(SkillComponentUseWeapon*))(Il2CppBase() + 0x3080BF8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnNudge() {
		return ((T (*)(SkillComponentUseWeapon*))(Il2CppBase() + 0x3080C9C))(this);
	}

};

}