#include "pch.h"
#include "mouse_scrolled_event.h"

namespace Zong
{
	namespace Event
	{
		Mouse_Scrolled_Event::Mouse_Scrolled_Event(float x_offset, float y_offset)
			: m_X_Offset(x_offset), m_Y_Offset(y_offset) { }

		inline float Mouse_Scrolled_Event::get_x_offset() const
		{
			return this->m_X_Offset;
		}

		inline float Mouse_Scrolled_Event::get_y_offset() const
		{
			return this->m_Y_Offset;
		}

		std::string Mouse_Scrolled_Event::to_string() const
		{
			std::stringstream ss;
			ss << "Mouse scrolled event into: " << this->m_X_Offset << ":" << this->m_Y_Offset << "\n";
			return ss.str();
		}
	}
}
