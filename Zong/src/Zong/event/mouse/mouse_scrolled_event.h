#pragma once

#include "Zong/core.h"
#include "Zong/event/event.h"

namespace Zong
{
	namespace Event
	{
		class ZONG_API Mouse_Scrolled_Event : public Event
		{
		public:
			Mouse_Scrolled_Event(float x_offset, float y_offset);

		public:
			inline float get_x_offset() const;
			inline float get_y_offset() const;
			std::string to_string() const override;

			EVENT_CLASS_TYPE(Mouse_Scrolled)
			EVENT_CLASS_CATEGORY(Mouse | Input)

		private:
			float m_X_Offset;
			float m_Y_Offset;
		};
	}
}
