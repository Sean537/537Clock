/*
537 Clock
Version 2.0 Beta

about.cpp

Copyright (C) 537 Studio. 2023-2024. All rights reserved.
*/
#include <windows.h>
#include "include/tclass.h"
#include "include/console.h"
#include "appinfo.h"
void aboutThisApp(){
	SetConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	tprint(APP_LOGO_L1);
	SetConsoleColor(FOREGROUND_GREEN | FOREGROUND_BLUE);
	tprint(APP_DEVELOPER_LOGO_L1,50);
	
	SetConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	tprint(APP_LOGO_L2);
	SetConsoleColor(FOREGROUND_GREEN | FOREGROUND_BLUE);
	tprint(APP_DEVELOPER_LOGO_L2,50);
	
	SetConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	tprint(APP_LOGO_L3);
	SetConsoleColor(FOREGROUND_GREEN | FOREGROUND_BLUE);
	tprint(APP_DEVELOPER_LOGO_L3,50);
	
	SetConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	tprint(APP_LOGO_L4);
	SetConsoleColor(FOREGROUND_GREEN | FOREGROUND_BLUE);
	tprint(APP_DEVELOPER_LOGO_L4,50);
	
	SetConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	tprint(APP_LOGO_L5);
	SetConsoleColor(FOREGROUND_GREEN | FOREGROUND_BLUE);
	tprint(APP_DEVELOPER_LOGO_L5,50);
	
	SetConsoleColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	tprint(APP_NAME_CN,20);
	
}
