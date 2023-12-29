#pragma once

#include "Core.h"

namespace Blue {
	class BLUE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

	};
	
	// Defined in client
	Application* CreateApplication();
}