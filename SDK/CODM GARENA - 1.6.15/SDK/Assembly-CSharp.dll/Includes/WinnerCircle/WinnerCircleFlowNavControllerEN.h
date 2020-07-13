#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WinnerCircle {

class WinnerCircleFlowNavControllerEN
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WinnerCircle", "WinnerCircleFlowNavControllerEN"));
	}

	template <typename T = uintptr_t> T& PreviousScene() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& ctr() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBackgroundTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableCameraClear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowWinnerCircleAvatar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NavigationWillPop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppString*> T GetBackgroundTexture() {
		return ((T (*)(WinnerCircleFlowNavControllerEN*))(Il2CppBase() + 0x4A52E64))(this);
	}
	template <typename T = bool> T IsEnableCameraClear() {
		return ((T (*)(WinnerCircleFlowNavControllerEN*))(Il2CppBase() + 0x4A52F1C))(this);
	}
	template <typename T = bool> T IsShowNone() {
		return ((T (*)(WinnerCircleFlowNavControllerEN*))(Il2CppBase() + 0x4A52FBC))(this);
	}
	template <typename T = bool> T IsShowWinnerCircleAvatar() {
		return ((T (*)(WinnerCircleFlowNavControllerEN*))(Il2CppBase() + 0x4A5305C))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(WinnerCircleFlowNavControllerEN*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A530FC))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(WinnerCircleFlowNavControllerEN*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A53364))(this, data, nextData);
	}
	template <typename T = void> T NavigationWillPop() {
		return ((T (*)(WinnerCircleFlowNavControllerEN*))(Il2CppBase() + 0x4A53584))(this);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetBackgroundTexture() {
		return ((T (*)(WinnerCircleFlowNavControllerEN*))(Il2CppBase() + 0x4A536F4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsEnableCameraClear() {
		return ((T (*)(WinnerCircleFlowNavControllerEN*))(Il2CppBase() + 0x4A536FC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowNone() {
		return ((T (*)(WinnerCircleFlowNavControllerEN*))(Il2CppBase() + 0x4A53704))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowWinnerCircleAvatar() {
		return ((T (*)(WinnerCircleFlowNavControllerEN*))(Il2CppBase() + 0x4A5370C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_NavigationWillPop() {
		return ((T (*)(WinnerCircleFlowNavControllerEN*))(Il2CppBase() + 0x4A53714))(this);
	}

};

}