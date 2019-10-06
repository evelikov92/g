#pragma once

#include "z_event.h"

namespace Zong
{
	namespace Event
	{
		class ZONG_API Z_Event_Dispatcher
		{
			template<typename T>
			using EventFn = std::function<bool(T&)>;

		public:
			Z_Event_Dispatcher(Z_Event& event);
		
			template<typename T>
			bool dispatch(EventFn<T> func)
			{
				if (this->m_Event.get_type() == T::get_static_type())
				{
					this->m_Event.m_Handled = func(*(T*)& this->m_Event);
					return true;
				}

				return false;
			}

		private:
			Z_Event& m_Event;
		};
	}
}
