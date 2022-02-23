#include <HyEngine.h>

class Sandbox : public HyEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

HyEngine::Application* HyEngine::CreateApplication()
{
	return new Sandbox();
}