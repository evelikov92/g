#pragma once

#include "Zong/core.h"

namespace Zong
{
	namespace Graphic
	{
		struct Window_Data
		{
			unsigned int m_Id;
			unsigned int m_Width;
			unsigned int m_Height;
			unsigned int m_X_Position;
			unsigned int m_Y_Position;
			std::string m_Title;
		};

		class ZONG_API Window
		{
			Window(const int id, const char* title);
			~Window();

		public:
			void show() const;
			void show_full_screen() const;
			void hide_toolbar();
			void maximize() const;
			void minimize() const;
			void hide() const;
			void close() const;
			void change_position(const unsigned int x, const unsigned int y);

			// registere layers here

		private:
			Window_Data m_Data;
		};
	}
}
