#include "z_pch.h"
#include "z_event.h"

namespace Zong
{
	namespace Event
	{
		inline bool Z_Event::is_in_category(int category)
		{
			return this->get_category_flags() & category;
		}
	}
}
