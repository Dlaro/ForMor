#pragma once
#include "IApplication.h"
namespace My{

class BaseApplication :implements IApplication
{
public:
	virtual int Initialize();
	virtual void Finalize();
	virtual void Tick();//once cycle of the main loop ��񓮂�
	virtual bool IsQuit();
protected:
	bool m_bQuit;//Flag if need quit the main loop �����C�����[�v�𒆒f�t���O
};
}

