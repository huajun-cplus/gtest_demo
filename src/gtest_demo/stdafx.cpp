#include "stdafx.h"

#ifdef _DEBUG
    #pragma comment(lib, "gtest/lib/gtestd.lib")
    #pragma comment(lib, "gtest/lib/gtest_maind.lib")
    #pragma comment(lib, "gtest/lib/gmockd.lib")
    #pragma comment(lib, "gtest/lib/gmock_maind.lib")
#else
    #pragma comment(lib, "gtest/lib/gtest.lib")
    #pragma comment(lib, "gtest/lib/gtest_main.lib")
    #pragma comment(lib, "gtest/lib/gmock.lib")
    #pragma comment(lib, "gtest/lib/gmock_main.lib")
#endif // DEBUG
