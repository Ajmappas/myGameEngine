#pragma once

#include "Core.h"

namespace MGE {
	
	class MGE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	private:

	};

	//To be defined to client
	Application* CreateApplication();
}