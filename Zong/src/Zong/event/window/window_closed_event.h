#pragma once

#include "Zong/core.h"
#include "Zong/event/event.h"

namespace Zong
{
	namespace Event
	{
		class ZONG_API Window_Closed_Event : public Event
		{
			Window_Closed_Event() { }

			EVENT_CLASS_TYPE(Window_Close)
			EVENT_CLASS_CATEGORY(Window)
		};
	}
}
