/*
	Proxyrack demo using C++:
	https://www.proxyrack.com/

	Developed by Michael Haephrati, Secured Globe, Inc.
	https://www.securedglobe.net

	January 2021

*/

#pragma once

// Setings
#define DEFLOGFILENAME		L"proxyrack.txt"


// Constants
#define STR_TRUE			"true"
#define STR_FALSE			"false"
#define LANG				"Accept-Language: en"
#define ABC					"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
#define STR_POST			"POST"
#define STR_HTTP			"https"
#define STR_FEEDBACK		L"feedback"
#define STR_DATA			L"data"
#define STR_EDGES			L"edges"
#define STR_COUNT			L"count"
#define STR_PAGEINFO		L"page_info"
#define STR_HASNEXTPAGE		L"has_next_page"
#define STR_ENDCURSOR		L"end_cursor"
#define STR_NODE			L"node"
#define STR_PBODY			L"preferred_body"
#define STR_AUTHOR			L"author"
#define STR_URI				L"uri"
#define STR_ID				L"id"
#define STR_NAME			L"name"
#define STR_TEXT			L"text"
#define STR_LB				L"["
#define STR_RB				L"]"

// Error messages
#define ERR_CURLEASYPERFORMFAILED	L"Curl_easy_operation() failed : %S\n"
#define ERR_MUTEXCREATIONERROR		L"Mutext creation error %d\n"
#define ERR_JSONPARSING				L"Error finding PAGEINFO / other JSON parsing error"
#define ERR_IP_BLOCKED				L"Error: Your IP may have been temporarily blocked. Please wait and try again...\n"