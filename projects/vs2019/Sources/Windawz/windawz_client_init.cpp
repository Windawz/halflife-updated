#include "hud.h"

#include "windawz_cvars.h"
#include "windawz_client_init.h"

namespace Windawz
{
	// Initialize everything related to view
	static void V_Init()
	{
		Windawz::cl_viewrollangle = gEngfuncs.pfnRegisterVariable("cl_viewrollangle", "10", 0);
		Windawz::cl_viewrollspeed = gEngfuncs.pfnRegisterVariable("cl_viewrollspeed", "10", 0);
	}

	void Init()
	{
		Windawz::V_Init();
	}
}