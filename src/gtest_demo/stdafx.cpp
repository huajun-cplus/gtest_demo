#include "stdafx.h"

#ifdef _DEBUG
    #pragma comment(lib, "gtestd.lib")
    #pragma comment(lib, "gtest_maind.lib")
    #pragma comment(lib, "gmockd.lib")
    #pragma comment(lib, "gmock_maind.lib")
#else
    #pragma comment(lib, "gtest.lib")
    #pragma comment(lib, "gtest_main.lib")
    #pragma comment(lib, "gmock.lib")
    #pragma comment(lib, "gmock_main.lib")
#endif // DEBUG
