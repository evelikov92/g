#pragma once

#include "Zong/core.h"
#include "key_event.h"

namespace Zong
{
	namespace Event
	{
		class ZONG_API Key_Released_Event : public Key_Event
		{
		public:
			Key_Released_Event(const int code)
				: Key_Event(code) { }

			std::string to_string() const override;

			EVENT_CLASS_TYPE(Key_Released)
		};
	}
}
