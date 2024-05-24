#include "MyForm.h"
using namespace Login;

[STAThreadAttribute]
int main() {
	Application::Run(gcnew MyForm());
	return 0;
}