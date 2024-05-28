#include "login.h"

using namespace Login;

[STAThreadAttribute]
int main() {
	Application::Run(gcnew login());
	return 0;
}
