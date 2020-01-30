#pragma once
#include"Interface.h"
namespace My {
	Interface IRuntimeModule{
public:
	virtual ~IRuntimeModule() {};
	virtual int Initialize() = 0;//初期化
	virtual void Finalize() = 0;//終了化
	virtual void Tick() = 0;//once cycle of the main loop 一回動き
	};
}
