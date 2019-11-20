#pragma once

#include "Zong/core.h"
#include "Zong/event/event.h"

namespace Zong
{
	namespace Event
	{
		class ZONG_API Mouse_Move_Event : public Event
		{
		public:
			Mouse_Move_Event(const float x, const float y);
			
		public:
			inline float get_x() const;
			inline float get_y() const;
			std::string to_string() const override;

			EVENT_CLASS_TYPE(Mouse_Moved)
			EVENT_CLASS_CATEGORY(Mouse | Input)

		private:
			float m_X;
			float m_Y;
		};
	}
}
