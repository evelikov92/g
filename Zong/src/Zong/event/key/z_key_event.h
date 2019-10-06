#pragma once

#include "Zong/event/z_event.h"

namespace Zong
{
	namespace Event
	{
		class ZONG_API Z_Key_Event : public Z_Event
		{
		public:
			inline int get_key_code() const;

			EVENT_CLASS_CATEGORY(ZONG_KEYBOARD_EVENT_CATEGORY | ZONG_INPUT_EVENT_CATEGORY)
		protected:
			Z_Key_Event(int code);

			int m_Key_Code;
		};
	}
}
