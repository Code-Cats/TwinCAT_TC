///////////////////////////////////////////////////////////////////////////////
// robot_algoDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "robot_algoDriver.h"
#include "robot_algoClassFactory.h"

DECLARE_GENERIC_DEVICE(ROBOT_ALGODRV)

IOSTATUS Crobot_algoDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new Crobot_algoClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID Crobot_algoDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl Crobot_algoDriver::ROBOT_ALGODRV_GetVersion( )
{
	return( (ROBOT_ALGODRV_Major << 8) | ROBOT_ALGODRV_Minor );
}

