#pragma once

#include "Zong/z_core.h"

#define ZONG_MOUSE_LEFT_BUTTON_PRESSED_EVENT_TYPE = 1;
#define ZONG_MOUSE_LEFT_BUTTON_RELEASED_EVENT_TYPE = 2;
#define ZONG_MOUSE_RIGHT_BUTTON_PRESSED_EVENT_TYPE = 3;
#define ZONG_MOUSE_RIGHT_BUTTON_RELEASED_EVENT_TYPE = 4;

#define ZONG_MOUSE_MOVED_EVENT_TYPE = 5;
#define ZONG_MOUSE_SCROLLED_EVENT_TYPE = 6;

#define ZONG_KEY_PRESSED_EVENT_TYPE = 7;
#define ZONG_KEY_RELEASED_EVENT_TYPE = 8;

#define ZONG_WINDOW_CLOSE_EVENT_TYPE = 9;
#define ZONG_WINDOW_RESIZE_EVENT_TYPE = 10;
#define ZONG_WINDOW_MINIMIZE_EVENT_TYPE = 11;
#define ZONG_WINDOW_RESTORE_EVENT_TYPE = 12;
#define ZONG_WINDOW_FOCUS_EVENT_TYPE = 13;
#define ZONG_WINDOW_MOVED_EVENT_TYPE = 14;

// Split events in few categories
#define ZONG_APP_EVENT_CATEGORY = BIT_SHIFT(0);
#define ZONG_INPUT_EVENT_CATEGORY = BIT_SHIFT(1);
#define ZONG_KEYBOARD_EVENT_CATEGORY = BIT_SHIFT(2);
#define ZONG_MOUSE_EVENT_CATEGORY = BIT_SHIFT(3);
#define ZONG_MOUSE_BUTTON_EVENT_CATEGORY = BIT_SHIFT(4);

#define EVENT_CLASS_CATEGORY(x)
#define EVENT_CLASS_TYPE(x)

namespace Zong
{
	namespace Event
	{
		class ZONG_API Z_Event
		{
			friend class Z_Event_Dispatcher;
		public:
			virtual int get_type() const = 0;
			virtual int get_category_flags() const = 0;
			inline bool is_in_category(int category);

			// For debugging only
			virtual const char* get_name() const = 0;
			virtual std::string to_string() const { return get_name(); }

		protected:
			bool m_Handled = false;
		};
	}
}
