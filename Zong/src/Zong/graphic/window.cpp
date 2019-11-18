#include "pch.h"
#include "window.h"

namespace Zong
{
	namespace Graphic
	{
		Window::Window(const int id, const char* title)
		{
			this->m_Data.m_Id = id;
			this->m_Data.m_Title = title;
		}

		Window::~Window()
		{
		
		}

		void Window::show() const
		{
		
		}

		void Window::show_full_screen() const
		{
		
		}

		void Window::hide_toolbar()
		{

		}

		void Window::maximize() const
		{
		
		}

		void Window::minimize() const
		{
		
		}

		void Window::hide() const
		{

		}

		void Window::close() const
		{

		}

		void Window::change_position(const unsigned int x, const unsigned int y)
		{
			this->m_Data.m_X_Position = x;
			this->m_Data.m_Y_Position = y;
		}
	}
}
