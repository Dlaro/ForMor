#pragma once
#include "IApplication.h"
namespace My{

class BaseApplication :implements IApplication
{
public:
	virtual int Initialize();
	virtual void Finalize();
	virtual void Tick();//once cycle of the main loop 一回動き
	virtual bool IsQuit();
protected:
	bool m_bQuit;//Flag if need quit the main loop メンインループを中断フラグ
};
}

