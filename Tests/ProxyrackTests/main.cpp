#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "proxyrack.h"

static void Fail(const char* msg)
{
    std::printf("FAIL %s\n", msg);
    std::exit(1);
}

int main()
{
    if (wcscmp(DEFLOGFILENAME, L"proxyrack.txt") != 0)
        Fail("log");
    if (std::strcmp(STR_TRUE, "true") != 0)
        Fail("true");
    if (std::strcmp(STR_POST, "POST") != 0)
        Fail("post");
    if (std::strcmp(STR_HTTP, "https") != 0)
        Fail("http");
    if (wcscmp(STR_HASNEXTPAGE, L"has_next_page") != 0)
        Fail("page");
    std::printf("OK ProxyrackTests\n");
    return 0;
}
