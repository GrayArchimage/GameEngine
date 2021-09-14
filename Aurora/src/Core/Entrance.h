/*program entry point*/
#pragma once

#include "aurora_pch.h"
#include "Application.h"
#include "Log.h"

//#ifdef AURORA_PLATFORM_WINDOWS
int main(int argc, char** argv)
{
	Aurora::Log::init();

	auto app = Aurora::CreateApplication();
	return 0;
}
//#endif