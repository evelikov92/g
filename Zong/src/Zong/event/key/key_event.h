#pragma once

#include "Zong/core.h"
#include "Zong/event/event.h"

namespace Zong
{
	namespace Event
	{
		class ZONG_API Key_Event : public Event
		{
		public:
			inline int get_key_code();

			int get_category_flag() const override;
		protected:
			Key_Event(const int code);

		protected:
			int m_Key_Code;
		};
	}
}
