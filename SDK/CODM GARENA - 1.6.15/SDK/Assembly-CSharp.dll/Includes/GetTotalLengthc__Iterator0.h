#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GetTotalLengthcIterator0
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<GetTotalLength>c__Iterator0"));
	}

	template <typename T = uintptr_t> T& req__1() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& thread__0() {
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
		return ((T (*)(GetTotalLengthcIterator0*))(Il2CppBase() + 0x488AB08))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(GetTotalLengthcIterator0*))(Il2CppBase() + 0x488AF30))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(GetTotalLengthcIterator0*))(Il2CppBase() + 0x488AF38))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(GetTotalLengthcIterator0*))(Il2CppBase() + 0x488AF40))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(GetTotalLengthcIterator0*))(Il2CppBase() + 0x488AF60))(this);
	}
	template <typename T = void> T __Finally0() {
		return ((T (*)(GetTotalLengthcIterator0*))(Il2CppBase() + 0x488AE48))(this);
	}

};

}