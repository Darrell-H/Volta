#pragma once
#include "Export.h"

namespace Volta {

	class VOLTA_API Application
	{
	public:
		virtual ~Application();
		static void Initialize();
		void Run();

	protected:
		Application();
		static Application* App;
	};
	static Application* CreateApplication();
}
