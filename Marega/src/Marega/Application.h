#pragma once
#include "Core.h"

namespace Marega {
	class MAREGA_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}
