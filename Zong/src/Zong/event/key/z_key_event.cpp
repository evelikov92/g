#include "z_pch.h"
#include "z_key_event.h"

namespace Zong
{
	namespace Event
	{
		inline int Z_Key_Event::get_key_code() const
		{
			return this->m_Key_Code;
		}

		Z_Key_Event::Z_Key_Event(int code)
			: m_Key_Code(code)
		{

		}
	}
}
