#include "VoltaCore.h"
#include "pch.h"

class Sandbox : public Volta::Application
{
public:
	Sandbox()
	{
		
	}
	~Sandbox()
	{

	}

};

Volta::Application* Volta::CreateApplication()
{
	App = new Sandbox();
	return new Sandbox();
}

