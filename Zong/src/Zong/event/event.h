#pragma once

#include "Zong/core.h"

#include "event_dispatcher.h"

namespace Zong
{
	namespace Event
	{
		// The Event system is currently blocking

		// TODO Check do we need event for left and right button of the mouse
		enum class Type
		{
			None = 0,
			Window_Close, Window_Resize, Window_Open, Window_Minimize, Window_Moved, Window_Lost_Focus, Window_Focus,
			App_Tick, App_Update, App_Render,
			Key_Pressed, Key_Released,
			Mouse_Button_Pressed, Mouse_Button_Released, Mouse_Moved, Mouse_Scrolled
		};

		enum Category
		{
			None			= 0,
			Window			= BIT_SHIFT(0),
			Input			= BIT_SHIFT(1),
			Keyboard		= BIT_SHIFT(2),
			Mouse			= BIT_SHIFT(3),
			Mouse_Button	= BIT_SHIFT(4)
		};

#define EVENT_CLASS_TYPE(type) static Type get_static_type() { return Type::##type; }\
								virtual Type get_event_type() const override { return get_static_type(); }\
								virtual const char* get_name() const override { return #type; }

#define EVENT_CLASS_CATEGORY(category) virtual int get_category_flag() const override { return Category::##category; }

		class ZONG_API Event
		{
			friend Event_Dispatcher;

		public:
			virtual Type get_event_type() const = 0;
			virtual int get_category_flag() const = 0;
			virtual const char* get_name() const = 0;
			virtual std::string to_string() const = 0;

			inline bool is_in_category(Category category);

		protected:
			bool m_Handled = false;
		};
	}
}
