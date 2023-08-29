#include <Momentum.h>

class Sandbox : public Momentum::Application
{
public: 
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Momentum::Application* Momentum::CreateApplication()
{
	return new Sandbox();
};