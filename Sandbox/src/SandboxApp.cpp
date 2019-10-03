#include <Cerbi.h>

class Sandbox : public Cerbi::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox() {

	}
	
};

Cerbi::Application* Cerbi::CreateApplication() {
	return new Sandbox();
}