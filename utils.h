/*
	Proxyrack demo using C++:
	https://www.proxyrack.com/

	Developed by Michael Haephrati, Secured Globe, Inc.
	https://www.securedglobe.net

	January 2021

*/
#pragma once
extern wchar_t LOGFILENAME[1024];
extern HANDLE hConsole;
int WriteLogFile(LPCWSTR lpText, ...);
