#pragma once
#include <stdio.h>

#ifdef VL_PLATFORM_WINDOWS

extern Volta::Application* App = Volta::CreateApplication();

int main(int argc, char* argv[])
{
	printf("Welcome to Volta Engine!\nThe count of command lines created is %d.\n", argc);
	printf("This program's name is %s.\n", argv[0]);
	
	App->Run();
	delete App;

	return(0);
}

#endif