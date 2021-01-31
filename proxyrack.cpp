/*
	Proxyrack demo using C++:
	https://www.proxyrack.com/

	Developed by Michael Haephrati, Secured Globe, Inc.
	https://www.securedglobe.net

	January 2021

*/
#include "stdafx.h"
#include "utils.h"
#include "proxyrack.h"

HANDLE hConsole;

/*
Replace <YOURUSERNAME> with your ProxyRack members area userid and replace 
<YOURPASSWORD> with your password for the members area

In these examples we use the Rotating (MegaProxy) product, however 
if you are subscribing to any of our services services such as rotating USA or 
Mixed datacenter simply replace the PROXY_RACK_DNS / Hostname with the one 
issued in your members area product

Members area can be found here https://www.proxyrack.com/access/member

*/
void test_proxyrack()
{
	CURL* curl = curl_easy_init();
	if (curl)
	{

		/* General Proxy */
		curl_easy_setopt(curl, CURLOPT_PROXY, "http://mixed.rotating.proxyrack.net:444");
		curl_easy_setopt(curl, CURLOPT_PROXYUSERNAME, L"<YOURUSERNAME>");
		curl_easy_setopt(curl, CURLOPT_PROXYPASSWORD, L"<YOURPASSWORD>");
		curl_easy_setopt(curl, CURLOPT_URL, "http://ip-api.com/json");
		curl_easy_perform(curl);
		curl_easy_cleanup(curl);
	}
}




int APIENTRY _tWinMain(HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPWSTR    lpCmdLine,
	int       nCmdShow)
{
#ifdef _DEBUG
	AllocConsole();
	freopen("CONOUT$", "w", stdout);
#endif


	wcscpy(LOGFILENAME, DEFLOGFILENAME);
	test_proxyrack();


#ifdef _DEBUG
	system("pause");
#endif
	return 0;
}