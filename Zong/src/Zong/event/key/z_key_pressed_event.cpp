#include "z_pch.h"
#include "z_key_pressed_event.h"

namespace Zong
{
	namespace Event
	{
		Z_Key_Pressed_Event::Z_Key_Pressed_Event(int code, int repeat_count)
			: Z_Key_Event(code),
			m_Repeat_Count(repeat_count)
		{
		}

		inline int Z_Key_Pressed_Event::get_repeat_count() const
		{
			return this->m_Repeat_Count;
		}

		std::string Z_Key_Pressed_Event::to_string() const
		{
			std::stringstream ss;
			ss << "KeyPressedEvent" << this->m_Key_Code << " (" << this->m_Repeat_Count << " repeated)";
			return ss.str();
		}
	}
}
