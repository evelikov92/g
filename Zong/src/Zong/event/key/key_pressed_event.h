#pragma once

#include "Zong/core.h"
#include "key_event.h"

namespace Zong
{
	namespace Event
	{
		class ZONG_API Key_Pressed_Event : public Key_Event
		{
		public:
			Key_Pressed_Event(const int code, const unsigned int count);

		public:
			inline unsigned int get_repeat_count() const;
			std::string to_string() const override;

			EVENT_CLASS_TYPE(Key_Pressed)
		private:
			unsigned int m_Repeate_Count;
		};
	}
}
