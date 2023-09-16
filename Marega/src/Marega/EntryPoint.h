#pragma once

#ifdef MG_PLATFORM_WINDOWS

extern Marega::Application* Marega::CreateApplication();

int main(int argc, char** argv) {
	printf("Marega Engine\n");
	auto app = Marega::CreateApplication();
	app->Run();
	delete app;
}

#endif
