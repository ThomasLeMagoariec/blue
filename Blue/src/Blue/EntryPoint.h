#pragma once

extern Blue::Application* Blue::CreateApplication();

#ifdef BLUE_PLATFORM_WINDOWS
int main(int argc, char** argv)
{
	auto app = Blue::CreateApplication();
	app->Run();
	delete app;
}

#endif