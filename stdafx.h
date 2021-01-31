/*
	Proxyrack demo using C++:
	https://www.proxyrack.com/

	Developed by Michael Haephrati, Secured Globe, Inc.
	https://www.securedglobe.net

	January 2021

*/
#pragma once
#define UNICODE
#include <Windows.h>
#include <stdio.h>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <string>
#include "curl/curl.h"
#include <regex>
#include <shlwapi.h>
#include <atlbase.h>
#include <atlstr.h>
#include <atltime.h>
#include <time.h>
#include <random>
#include <set>
#include <chrono>

#pragma comment(lib, "libcurl_a.lib")
#pragma comment(lib, "Shlwapi.lib")

using namespace std;
