#include "login.h"
#include "all_user_show.h"

using namespace Login;
using namespace alluser;
using namespace System::IO;
using namespace System::Text;
using namespace System::Collections::Generic;

[STAThreadAttribute]
int main() {
    Application::Run(gcnew MyForm());
    return 0;
}