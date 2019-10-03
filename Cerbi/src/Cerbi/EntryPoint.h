#pragma once

#ifdef CB_PLATFORM_WINDOWS

extern Cerbi::Application* Cerbi::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Cerbi::CreateApplication();
	app->Run();
	delete app;
}

#endif