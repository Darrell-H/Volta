#pragma once
#include "Logger.h"

#ifdef VL_PLATFORM_WINDOWS

extern Volta::Application* App = Volta::CreateApplication();

int main(int argc, char* argv[])
{	
	Volta::Application::Initialize();
	App->Run();
	delete App;
}

#endif