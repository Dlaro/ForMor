#pragma once
#include "Interface.h"
#include "IRuntimeModule.h"
namespace My {
	Interface IApplication:implements IRuntimeModule
	{
public:
	virtual ~IApplication() {};
	virtual int Initialize() = 0;//‰Šú‰»
	virtual void Finalize() = 0;//I—¹‰»
	virtual void Tick() = 0;//once cycle of the main loop ˆê‰ñ“®‚«
	virtual bool IsQuit() = 0;
	};
}