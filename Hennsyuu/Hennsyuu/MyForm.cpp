#include "MyForm.h"

using namespace Hennsyuu;

[STAThreadAttribute]
int main() {
	Application::Run(gcnew MyForm());
	return 0;
}