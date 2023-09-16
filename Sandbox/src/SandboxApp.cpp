#include <Marega.h>

class Sandbox : public Marega::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}

};

Marega::Application* Marega::CreateApplication() {
	return new Sandbox();
}
