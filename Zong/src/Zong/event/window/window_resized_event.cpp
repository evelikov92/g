#include "pch.h"
#include "window_resized_event.h"

namespace Zong
{
	namespace Event
	{
		Window_Resized_Event::Window_Resized_Event(unsigned int width, unsigned int height)
			: m_Width(width), m_Height(height) { }

		inline unsigned int Window_Resized_Event::get_width() const
		{
			return this->m_Width;
		}

		inline unsigned int Window_Resized_Event::get_height() const
		{
			return this->m_Height;
		}

		std::string Window_Resized_Event::to_string() const
		{
			std::stringstream ss;
			ss << "Window resized event: Width" << this->m_Width << ": Height" << this->m_Height << "\n";
			return ss.str();
		}
	}
}
