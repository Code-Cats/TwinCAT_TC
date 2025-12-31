///////////////////////////////////////////////////////////////////////////////
// robot_algoDriver.h

#ifndef __ROBOT_ALGODRIVER_H__
#define __ROBOT_ALGODRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define ROBOT_ALGODRV_NAME        "ROBOT_ALGO"
#define ROBOT_ALGODRV_Major       1
#define ROBOT_ALGODRV_Minor       0

#define DEVICE_CLASS Crobot_algoDriver

#include "ObjDriver.h"

class Crobot_algoDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl ROBOT_ALGODRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(ROBOT_ALGODRV)
	VxD_Service( ROBOT_ALGODRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __ROBOT_ALGODRIVER_H__