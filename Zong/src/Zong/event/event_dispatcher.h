#pragma once

#include "pch.h"
#include "Zong/core.h"
#include "event.h"

namespace Zong
{
	namespace Event
	{
		class ZONG_API Event_Dispatcher
		{
			template<typename T>
			using EventFn = std::function<bool(T&)>;

		public:
			Event_Dispatcher(Event& event)
				: m_Event(event) { }

			template<typename T>
			bool dispatch(EventFn<T> func)
			{
				if (this->m_Event.get_event_type() == T::get_static_type())
				{
					this->m_Event.m_Handled = func(*(T*)&this->m_Event);
					return true;
				}

				return false;
			}

		private:
			Event& m_Event;
		};
	}
}
