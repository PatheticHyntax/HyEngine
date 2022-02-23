#pragma once

#ifdef HY_PLATFORM_WINDOWS

extern HyEngine::Application* HyEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = HyEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif
