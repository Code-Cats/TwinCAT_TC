///////////////////////////////////////////////////////////////////////////////
// robot_algoCtrl.h

#ifndef __ROBOT_ALGOCTRL_H__
#define __ROBOT_ALGOCTRL_H__

#include <atlbase.h>
#include <atlcom.h>


#include "resource.h"       // main symbols
#include "robot_algoW32.h"
#include "TcBase.h"
#include "robot_algoClassFactory.h"
#include "TcOCFCtrlImpl.h"

class Crobot_algoCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<Crobot_algoCtrl, &CLSID_robot_algoCtrl>
	, public Irobot_algoCtrl
	, public ITcOCFCtrlImpl<Crobot_algoCtrl, Crobot_algoClassFactory>
{
public:
	Crobot_algoCtrl();
	virtual ~Crobot_algoCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_ROBOT_ALGOCTRL)
DECLARE_NOT_AGGREGATABLE(Crobot_algoCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(Crobot_algoCtrl)
	COM_INTERFACE_ENTRY(Irobot_algoCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __ROBOT_ALGOCTRL_H__
