#include "BaseApplication.h"
using namespace My;
namespace My {
	BaseApplication g_App;
	IApplication* g_pApp = &g_App;
}
int main()
{
	int ret;
	if ((ret = g_pApp->Initialize()) != 0) {
		//std::cout << "App Initialize Faled" << std::endl;
		return ret;
	}
	while (!g_pApp->IsQuit())
	{
		g_pApp->Tick();
	}
	g_pApp->Finalize();

	return 0;