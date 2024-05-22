#include "MyForm1.h"
#include "MyForm.h"

using namespace hodumi;
using namespace hodumi2;
using namespace System::IO;
using namespace System::Text;
using namespace System::Collections::Generic;

[STAThreadAttribute]

int main() {
    Application::Run(gcnew MyForm());
    return 0;
}

