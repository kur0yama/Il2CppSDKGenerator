#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UILoadingPVEGameTipsView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UILoadingPVEGameTipsView"));
	}

	template <typename T = uintptr_t> T& gameModeNameLabel() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& gameModeContainer() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGameModeName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T UpdateGameModeName(Il2CppString* nameID) {
		return ((T (*)(UILoadingPVEGameTipsView*, Il2CppString*))(Il2CppBase() + 0x3AFA150))(this, nameID);
	}

};

}