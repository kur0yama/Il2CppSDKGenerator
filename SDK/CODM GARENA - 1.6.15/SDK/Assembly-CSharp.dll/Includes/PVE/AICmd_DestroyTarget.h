#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class AICmdDestroyTarget
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "AICmd_DestroyTarget"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_TargetList() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pushed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_State() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Init(uintptr_t inParam) {
		return ((T (*)(AICmdDestroyTarget*, uintptr_t))(Il2CppBase() + 0x4CE5A6C))(this, inParam);
	}
	template <typename T = void> T Pushed() {
		return ((T (*)(AICmdDestroyTarget*))(Il2CppBase() + 0x4CE5C14))(this);
	}
	template <typename T = uintptr_t> T State() {
		return ((T (*)(AICmdDestroyTarget*))(Il2CppBase() + 0x4CE5CBC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Pushed() {
		return ((T (*)(AICmdDestroyTarget*))(Il2CppBase() + 0x4CE5DA4))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_State() {
		return ((T (*)(AICmdDestroyTarget*))(Il2CppBase() + 0x4CE5DAC))(this);
	}

};

}