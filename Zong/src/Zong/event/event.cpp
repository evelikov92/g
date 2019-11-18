#include "pch.h"
#include "event.h"

namespace Zong
{
	namespace Event
	{
		inline bool Event::is_in_category(Category category)
		{
			return this->get_category_flag() & category;
		}
	}
}
