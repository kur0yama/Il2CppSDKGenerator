#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DG.Tweening.Plugins.Options {

class RectOptions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("DOTween.dll", "DG.Tweening.Plugins.Options", "RectOptions"));
	}

	template <typename T = bool> T& snapping() {
		return *(T*)((uintptr_t)this + 0x0);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(RectOptions*))(Il2CppBase() + 0x44B5D80))(this);
	}

};

}