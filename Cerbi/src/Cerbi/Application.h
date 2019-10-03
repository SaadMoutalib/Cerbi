#pragma once

#include "Core.h"

namespace Cerbi {

	class CERBI_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}

