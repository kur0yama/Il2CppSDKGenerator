#pragma once
#include <Il2Cpp/Il2Cpp.h>

class JumpFailOnGroundcIterator3
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<JumpFailOnGround>c__Iterator3"));
	}

	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& $current() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& $disposing() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& $PC() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = bool> T MoveNext() {
		return ((T (*)(JumpFailOnGroundcIterator3*))(Il2CppBase() + 0x4CC5F38))(this);
	}
	template <typename T = uintptr_t> T System_Collections_Generic_IEnumeratorobject_get_Current() {
		return ((T (*)(JumpFailOnGroundcIterator3*))(Il2CppBase() + 0x4CC6134))(this);
	}
	template <typename T = uintptr_t> T System_Collections_IEnumerator_get_Current() {
		return ((T (*)(JumpFailOnGroundcIterator3*))(Il2CppBase() + 0x4CC613C))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(JumpFailOnGroundcIterator3*))(Il2CppBase() + 0x4CC6144))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(JumpFailOnGroundcIterator3*))(Il2CppBase() + 0x4CC6158))(this);
	}

};

}