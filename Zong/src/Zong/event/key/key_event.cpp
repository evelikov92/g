#include "pch.h"
#include "key_event.h"

namespace Zong
{
	namespace Event
	{
		inline int Key_Event::get_key_code()
		{
			return this->m_Key_Code;
		}

		int Key_Event::get_category_flag() const
		{
			return Category::Keyboard | Category::Input;
		}

		Key_Event::Key_Event(const int code)
			: m_Key_Code(code) { }
	}
}
