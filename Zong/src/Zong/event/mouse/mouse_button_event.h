#pragma once

#include "Zong/core.h"
#include "Zong/event/event.h"

namespace Zong
{
	namespace Event
	{
		class ZONG_API Mouse_Button_Event : public Event
		{
		public:
			inline unsigned int get_mouse_button();

			EVENT_CLASS_CATEGORY(Mouse | Input)

		protected:
			Mouse_Button_Event(const unsigned int button);

			unsigned int m_Button_Code;
		};



		class ZONG_API Mouse_Button_Pressed_Event : public Mouse_Button_Event
		{
		public:
			Mouse_Button_Pressed_Event(const unsigned int button);

		public:
			std::string to_string() const override;

			EVENT_CLASS_TYPE(Mouse_Button_Pressed)
		};

		

		class ZONG_API Mouse_Button_Released_Event : public Mouse_Button_Event
		{
		public:
			Mouse_Button_Released_Event(const unsigned int button);

		public:
			std::string to_string() const override;

			EVENT_CLASS_TYPE(Mouse_Button_Released)
		};
	}
}
