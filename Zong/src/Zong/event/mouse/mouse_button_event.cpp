#include "pch.h"
#include "mouse_button_event.h"

namespace Zong
{
	namespace Event
	{
		Mouse_Button_Event::Mouse_Button_Event(const unsigned int button)
			: m_Button_Code(button) { }

		inline unsigned int Mouse_Button_Event::get_mouse_button()
		{
			return this->m_Button_Code;
		}



		Mouse_Button_Pressed_Event::Mouse_Button_Pressed_Event(const unsigned int button)
			: Mouse_Button_Event(button) { }

		std::string Mouse_Button_Pressed_Event::to_string() const
		{
			std::stringstream ss;
			ss << "Mouse button pressed: " << this->m_Button_Code << "\n";
			return ss.str();
		}



		Mouse_Button_Released_Event::Mouse_Button_Released_Event(const unsigned int button)
			: Mouse_Button_Event(button) { }

		std::string Mouse_Button_Released_Event::to_string() const
		{
			std::stringstream ss;
			ss << "Mouse button released: " << this->m_Button_Code << "\n";
			return ss.str();
		}
	}
}
