#pragma once
#include "stdafx.h"

TAKEOFF_API class Application
{
public:
	virtual void Run() const = 0;
	virtual void End() const = 0;
private:
};

