#pragma once

extern Blue::Application* Blue::CreateApplication();

#ifdef BLUE_PLATFORM_WINDOWS
int main(int argc, char** argv)
{
	Blue::Log::Init();
	BLUE_CORE_WARN("Init Log!");
	int a = 5;
	BLUE_INFO("Client Log! Var={0}", a);

	
	auto app = Blue::CreateApplication();
	app->Run();
	delete app;
}

#endif