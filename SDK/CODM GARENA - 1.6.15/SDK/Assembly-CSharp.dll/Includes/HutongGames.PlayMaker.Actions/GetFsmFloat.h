#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HutongGames.PlayMaker.Actions {

class GetFsmFloat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HutongGames.PlayMaker.Actions", "GetFsmFloat"));
	}

	template <typename T = uintptr_t> T& gameObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& fsmName() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& variableName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& storeValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& everyFrame() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& goLastFrame() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& fsm() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(GetFsmFloat*))(Il2CppBase() + 0x508A4EC))(this);
	}
	template <typename T = void> T OnEnter() {
		return ((T (*)(GetFsmFloat*))(Il2CppBase() + 0x508A5BC))(this);
	}
	template <typename T = void> T OnUpdate() {
		return ((T (*)(GetFsmFloat*))(Il2CppBase() + 0x508A834))(this);
	}
	template <typename T = void> T DoGetFsmFloat() {
		return ((T (*)(GetFsmFloat*))(Il2CppBase() + 0x508A5E8))(this);
	}

};

}