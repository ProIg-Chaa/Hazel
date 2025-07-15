#pragma once

#include "Events.h"

#include <sstream>

namespace Hazel {
	class HAZEL_API KeyEvent : public Event
	{
	protected:
		KeyEvent(int keyCode) : m_KeyCode(keyCode) {}
		int m_KeyCode;
	public:
		inline int GetKeyCode() const { return m_KeyCode; }
		
		
		EVENT_CLASS_CATEGORY(EventCategoryKeyBoard | EventCategoryInput)
	
	};


	class HAZEL_API KeyPressedEvent : public KeyEvent
	{
	private:
		int m_ReapeatCount;
	public:
		KeyPressedEvent(int keycode, int repeatCount)
			:KeyEvent(keycode),m_ReapeatCount(repeatCount){}
		inline int GetReapeatCount()const { return m_ReapeatCount; }
		
		std::string ToString()const override
		{
			std::stringstream ss;
			ss << "KeyPressedEvent:" << m_KeyCode << "(" << m_ReapeatCount << "reapeats)";
			return ss.str();
		}

		/*static EventType GetStaticType() { return EventType::KeyPressed; }
		virtual EventType GetEventType() const override { return GetStaticType(); }
		virtual const char* GetName()const override { return "KeyPressed"; }*/

		EVENT_CLASS_TYPE(KeyPressed)
	};
	class HAZEL_API KeyReleasedEvent : public KeyEvent {
	public:
		KeyReleasedEvent(int keycode)
			:KeyEvent(keycode){}

		std::string ToString()const override {
			std::stringstream ss;
			ss << "KeyReleasedEvent:" << m_KeyCode;
			return ss.str();
		}
		EVENT_CLASS_TYPE(KeyReleased) 
	};
}