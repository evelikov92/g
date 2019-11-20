#include "pch.h"
#include "mouse_moved_event.h"

namespace Zong
{
	namespace Event
	{
		Mouse_Move_Event::Mouse_Move_Event(const float x, const float y)
			: m_X(x), m_Y(y) { }

		inline float Mouse_Move_Event::get_x() const
		{
			return this->m_X;
		}

		inline float Mouse_Move_Event::get_y() const
		{
			return this->m_Y;
		}

		std::string Mouse_Move_Event::to_string() const
		{
			std::stringstream ss;
			ss << "Mouse moved event into: " << this->m_X << ":" << this->m_Y << "\n";
			return ss.str();
		}
	}
}
