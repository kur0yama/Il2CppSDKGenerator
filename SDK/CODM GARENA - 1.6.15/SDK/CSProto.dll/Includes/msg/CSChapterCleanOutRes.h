#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChapterCleanOutRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChapterCleanOutRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _chapter_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _chapter_result_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _day_play_count() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSChapterCleanOutRes*))(Il2CppBase() + 0x51CF4C4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSChapterCleanOutRes*, int32_t))(Il2CppBase() + 0x51CF4CC))(this, value);
	}
	template <typename T = int32_t> T get_chapter_id() {
		return ((T (*)(CSChapterCleanOutRes*))(Il2CppBase() + 0x51CF4D4))(this);
	}
	template <typename T = void> T set_chapter_id(int32_t value) {
		return ((T (*)(CSChapterCleanOutRes*, int32_t))(Il2CppBase() + 0x51CF4DC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_chapter_result_list() {
		return ((T (*)(CSChapterCleanOutRes*))(Il2CppBase() + 0x51CF4E4))(this);
	}
	template <typename T = int32_t> T get_day_play_count() {
		return ((T (*)(CSChapterCleanOutRes*))(Il2CppBase() + 0x51CF4EC))(this);
	}
	template <typename T = void> T set_day_play_count(int32_t value) {
		return ((T (*)(CSChapterCleanOutRes*, int32_t))(Il2CppBase() + 0x51CF4F4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChapterCleanOutRes*, bool))(Il2CppBase() + 0x51CF4FC))(this, createIfMissing);
	}

};

}