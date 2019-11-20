#pragma once

#include "Zong/core.h"
#include "Zong/event/event.h"

namespace Zong
{
	namespace Event
	{
		class ZONG_API Window_Resized_Event : public Event
		{
		public:
			Window_Resized_Event(unsigned int width, unsigned int height);

		public:
			inline unsigned int get_width() const;
			inline unsigned int get_height() const;

			std::string to_string() const override;

			EVENT_CLASS_TYPE(Window_Resize)
			EVENT_CLASS_CATEGORY(Window)
		private:
			unsigned int m_Width;
			unsigned int m_Height;
		};
	}
}
