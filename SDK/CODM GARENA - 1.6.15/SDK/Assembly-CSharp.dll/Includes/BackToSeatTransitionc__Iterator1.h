#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BackToSeatTransitioncIterator1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<BackToSeatTransition>c__Iterator1"));
	}

	template <typename T = float> T& t__0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& callbackHandler() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(BackToSeatTransitioncIterator1*))(Il2CppBase() + 0x26500E8))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(BackToSeatTransitioncIterator1*))(Il2CppBase() + 0x265032C))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(BackToSeatTransitioncIterator1*))(Il2CppBase() + 0x2650334))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(BackToSeatTransitioncIterator1*))(Il2CppBase() + 0x265033C))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(BackToSeatTransitioncIterator1*))(Il2CppBase() + 0x2650350))(this);
	}

};

}