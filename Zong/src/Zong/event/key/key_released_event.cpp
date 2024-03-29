#include "pch.h"
#include "key_released_event.h"

namespace Zong
{
	namespace Event
	{
		Key_Released_Event::Key_Released_Event(const int code)
			: Key_Event(code) { }

		std::string Key_Released_Event::to_string() const
		{
			std::stringstream ss;
			ss << "Key released event: " << this->m_Key_Code << "\n";
			return ss.str();
		}
	}
}
