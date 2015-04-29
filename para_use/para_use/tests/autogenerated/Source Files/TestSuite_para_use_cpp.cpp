#include "cpptest.h"

CPPTEST_CONTEXT("para_use/para_use/Source Files/para_use.cpp");
CPPTEST_TEST_SUITE_INCLUDED_TO("para_use/para_use/Source Files/para_use.cpp");

class TestSuite_para_use_cpp_f7a3841f : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(TestSuite_para_use_cpp_f7a3841f);
        CPPTEST_TEST(test_wmain_1);
        CPPTEST_TEST(test_wmain_2);
        CPPTEST_TEST(test_wmain_3);
        CPPTEST_TEST(test_wmain_4);
        CPPTEST_TEST(test_wmain_5);
        CPPTEST_TEST_SUITE_END();
        
        void setUp();
        void tearDown();

        void test_wmain_1();
        void test_wmain_2();
        void test_wmain_3();
        void test_wmain_4();
        void test_wmain_5();
};

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_para_use_cpp_f7a3841f);

void TestSuite_para_use_cpp_f7a3841f::setUp()
{
}

void TestSuite_para_use_cpp_f7a3841f::tearDown()
{
}

/* CPPTEST_TEST_CASE_BEGIN test_wmain_1 */
/* CPPTEST_TEST_CASE_CONTEXT int wmain(int, _TCHAR **) */
void TestSuite_para_use_cpp_f7a3841f::test_wmain_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = 2;
    /* Initializing argument 2 (argv) */ 
    ::_TCHAR ** _argv  = 0 ;
    /* Tested function call */
    int _return  = ::wmain(_argc, _argv);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_PTR("_TCHAR ** _argv ", ( _argv ));
}
/* CPPTEST_TEST_CASE_END test_wmain_1 */

/* CPPTEST_TEST_CASE_BEGIN test_wmain_2 */
/* CPPTEST_TEST_CASE_CONTEXT int wmain(int, _TCHAR **) */
void TestSuite_para_use_cpp_f7a3841f::test_wmain_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = 1;
    /* Initializing argument 2 (argv) */ 
    ::_TCHAR ** _argv  = 0 ;
    /* Tested function call */
    int _return  = ::wmain(_argc, _argv);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_PTR("_TCHAR ** _argv ", ( _argv ));
}
/* CPPTEST_TEST_CASE_END test_wmain_2 */

/* CPPTEST_TEST_CASE_BEGIN test_wmain_3 */
/* CPPTEST_TEST_CASE_CONTEXT int wmain(int, _TCHAR **) */
void TestSuite_para_use_cpp_f7a3841f::test_wmain_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = 2;
    /* Initializing argument 2 (argv) */ 
    ::_TCHAR _argv_0_1  = 2;
    ::_TCHAR * _argv_0  = & _argv_0_1;
    ::_TCHAR ** _argv  = & _argv_0;
    /* Tested function call */
    int _return  = ::wmain(_argc, _argv);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_PTR("_TCHAR ** _argv ", ( _argv ));
}
/* CPPTEST_TEST_CASE_END test_wmain_3 */

/* CPPTEST_TEST_CASE_BEGIN test_wmain_4 */
/* CPPTEST_TEST_CASE_CONTEXT int wmain(int, _TCHAR **) */
void TestSuite_para_use_cpp_f7a3841f::test_wmain_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = 2;
    /* Initializing argument 2 (argv) */ 
    ::_TCHAR _argv_0_1  = 0;
    ::_TCHAR * _argv_0  = & _argv_0_1;
    ::_TCHAR ** _argv  = & _argv_0;
    /* Tested function call */
    int _return  = ::wmain(_argc, _argv);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_PTR("_TCHAR ** _argv ", ( _argv ));
}
/* CPPTEST_TEST_CASE_END test_wmain_4 */

/* CPPTEST_TEST_CASE_BEGIN test_wmain_5 */
/* CPPTEST_TEST_CASE_CONTEXT int wmain(int, _TCHAR **) */
void TestSuite_para_use_cpp_f7a3841f::test_wmain_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (argc) */ 
    int _argc  = 2;
    /* Initializing argument 2 (argv) */ 
    ::_TCHAR _argv_0_1  = 1u;
    ::_TCHAR * _argv_0  = & _argv_0_1;
    ::_TCHAR ** _argv  = & _argv_0;
    /* Tested function call */
    int _return  = ::wmain(_argc, _argv);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_PTR("_TCHAR ** _argv ", ( _argv ));
}
/* CPPTEST_TEST_CASE_END test_wmain_5 */
