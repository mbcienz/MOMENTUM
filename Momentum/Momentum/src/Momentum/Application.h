#pragma once

#include "Core.h"

namespace Momentum{

	class MOMENTUM_API Application
	{
		public: 
			Application(); 
			//questa verr� ereditata da sandbox
			virtual ~Application();

			void Run();
	};


	//da definire nel CLIENT (SandboxApp) 
	Application* CreateApplication();

}

