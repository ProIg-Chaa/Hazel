#pragma once

#include "Core.h"
#include "Events/Events.h"

namespace Hazel {
	class HAZEL_API Application
	{
	public:
		Application();
		virtual~Application();
		void Run();
	};

	//define in CLINT
	Application* CreateApplication();
}
