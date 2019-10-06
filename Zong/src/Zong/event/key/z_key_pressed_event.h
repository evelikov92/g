#pragma once

#include "z_key_event.h"

namespace Zong
{
	namespace Event
	{
		class ZONG_API Z_Key_Pressed_Event : public Z_Key_Event
		{
		public:
			Z_Key_Pressed_Event(int code, int press_count);

			EVENT_CLASS_TYPE(ZONG_KEY_PRESSED_EVENT_TYPE)
		public:
			inline int get_repeat_count() const;

			std::string to_string() const override;

		private:
			int m_Repeat_Count;
		};
	}
}
