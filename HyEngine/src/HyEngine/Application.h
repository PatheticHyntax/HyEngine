#pragma once

#include "Core.h"

namespace HyEngine {

	class HYENGINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();

}
