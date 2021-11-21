#pragma once

#ifdef MGE_PLATFORM_WINDOWS

extern MGE::Application* MGE::CreateApplication();

int main(int argc, char** argv) {
	auto app = MGE::CreateApplication();
	app->Run();
	delete app;
}

#endif