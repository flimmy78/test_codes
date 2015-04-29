#include "cpptest.h"

CPPTEST_CONTEXT("para_use/para_use/Source Files/myClass.cpp");
CPPTEST_TEST_SUITE_INCLUDED_TO("para_use/para_use/Source Files/myClass.cpp");

class TestSuite_myClass_cpp_696d9a23 : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(TestSuite_myClass_cpp_696d9a23);
        CPPTEST_TEST(test_addBigOne_1);
        CPPTEST_TEST(test_addBigOne_2);
        CPPTEST_TEST(test_addBigOne_3);
        CPPTEST_TEST(test_addBigOne_4);
        CPPTEST_TEST(test_addBigOne_5);
        CPPTEST_TEST(test_baseInterface_1);
        CPPTEST_TEST(test_baseInterface_2);
        CPPTEST_TEST(test_baseInterface_3);
        CPPTEST_TEST(test_baseInterface_4);
        CPPTEST_TEST(test_baseInterface_5);
        CPPTEST_TEST(test_getIntValue_1);
        CPPTEST_TEST(test_getIntValue_2);
        CPPTEST_TEST(test_getIntValue_3);
        CPPTEST_TEST(test_getIntValue_4);
        CPPTEST_TEST(test_getIntValue_5);
        CPPTEST_TEST(test_myClass_1);
        CPPTEST_TEST(test_myClass_2);
        CPPTEST_TEST(test_myClass_3);
        CPPTEST_TEST(test_myClass_4);
        CPPTEST_TEST(test_myClass_5);
        CPPTEST_TEST(test_setValue_1);
        CPPTEST_TEST(test_setValue_2);
        CPPTEST_TEST(test_setValue_3);
        CPPTEST_TEST(test_setValue_4);
        CPPTEST_TEST(test_setValue_5);
        CPPTEST_TEST(test_writeToFile_1);
        CPPTEST_TEST(test_writeToFile_2);
        CPPTEST_TEST(test_writeToFile_3);
        CPPTEST_TEST(test_writeToFile_4);
        CPPTEST_TEST(test_writeToFile_5);
        CPPTEST_TEST(test_x7emyClass_1);
        CPPTEST_TEST(test_x7emyClass_2);
        CPPTEST_TEST(test_x7emyClass_3);
        CPPTEST_TEST(test_x7emyClass_4);
        CPPTEST_TEST(test_x7emyClass_5);
        CPPTEST_TEST_SUITE_END();
        
        void setUp();
        void tearDown();

        void test_addBigOne_1();
        void test_addBigOne_2();
        void test_addBigOne_3();
        void test_addBigOne_4();
        void test_addBigOne_5();
        void test_baseInterface_1();
        void test_baseInterface_2();
        void test_baseInterface_3();
        void test_baseInterface_4();
        void test_baseInterface_5();
        void test_getIntValue_1();
        void test_getIntValue_2();
        void test_getIntValue_3();
        void test_getIntValue_4();
        void test_getIntValue_5();
        void test_myClass_1();
        void test_myClass_2();
        void test_myClass_3();
        void test_myClass_4();
        void test_myClass_5();
        void test_setValue_1();
        void test_setValue_2();
        void test_setValue_3();
        void test_setValue_4();
        void test_setValue_5();
        void test_writeToFile_1();
        void test_writeToFile_2();
        void test_writeToFile_3();
        void test_writeToFile_4();
        void test_writeToFile_5();
        void test_x7emyClass_1();
        void test_x7emyClass_2();
        void test_x7emyClass_3();
        void test_x7emyClass_4();
        void test_x7emyClass_5();
};

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_myClass_cpp_696d9a23);

void TestSuite_myClass_cpp_696d9a23::setUp()
{
}

void TestSuite_myClass_cpp_696d9a23::tearDown()
{
}

/* CPPTEST_TEST_CASE_BEGIN test_addBigOne_1 */
/* CPPTEST_TEST_CASE_CONTEXT void myClass::addBigOne(int, int) */
void TestSuite_myClass_cpp_696d9a23::test_addBigOne_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = cpptestLimitsGetMaxInt();
    ::myClass _cpptest_TestObject (_a_0);
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (b) */ 
    int _b  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    _cpptest_TestObject.addBigOne(_a, _b);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_addBigOne_1 */

/* CPPTEST_TEST_CASE_BEGIN test_addBigOne_2 */
/* CPPTEST_TEST_CASE_CONTEXT void myClass::addBigOne(int, int) */
void TestSuite_myClass_cpp_696d9a23::test_addBigOne_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = cpptestLimitsGetMinInt();
    ::myClass _cpptest_TestObject (_a_0);
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMaxInt();
    /* Initializing argument 2 (b) */ 
    int _b  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    _cpptest_TestObject.addBigOne(_a, _b);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_addBigOne_2 */

/* CPPTEST_TEST_CASE_BEGIN test_addBigOne_3 */
/* CPPTEST_TEST_CASE_CONTEXT void myClass::addBigOne(int, int) */
void TestSuite_myClass_cpp_696d9a23::test_addBigOne_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = -1;
    ::myClass _cpptest_TestObject (_a_0);
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMinInt();
    /* Initializing argument 2 (b) */ 
    int _b  = cpptestLimitsGetMinInt();
    /* Tested function call */
    _cpptest_TestObject.addBigOne(_a, _b);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_addBigOne_3 */

/* CPPTEST_TEST_CASE_BEGIN test_addBigOne_4 */
/* CPPTEST_TEST_CASE_CONTEXT void myClass::addBigOne(int, int) */
void TestSuite_myClass_cpp_696d9a23::test_addBigOne_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = 1;
    ::myClass _cpptest_TestObject (_a_0);
    /* Initializing argument 1 (a) */ 
    int _a  = -1;
    /* Initializing argument 2 (b) */ 
    int _b  = -1;
    /* Tested function call */
    _cpptest_TestObject.addBigOne(_a, _b);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_addBigOne_4 */

/* CPPTEST_TEST_CASE_BEGIN test_addBigOne_5 */
/* CPPTEST_TEST_CASE_CONTEXT void myClass::addBigOne(int, int) */
void TestSuite_myClass_cpp_696d9a23::test_addBigOne_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = 0;
    ::myClass _cpptest_TestObject (_a_0);
    /* Initializing argument 1 (a) */ 
    int _a  = 1;
    /* Initializing argument 2 (b) */ 
    int _b  = 1;
    /* Tested function call */
    _cpptest_TestObject.addBigOne(_a, _b);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_addBigOne_5 */

/* CPPTEST_TEST_CASE_BEGIN test_baseInterface_1 */
/* CPPTEST_TEST_CASE_CONTEXT virtual void myClass::baseInterface(void) */
void TestSuite_myClass_cpp_696d9a23::test_baseInterface_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = cpptestLimitsGetMaxInt();
    ::myClass _cpptest_TestObject (_a_0);
    /* Tested function call */
    _cpptest_TestObject.baseInterface();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_baseInterface_1 */

/* CPPTEST_TEST_CASE_BEGIN test_baseInterface_2 */
/* CPPTEST_TEST_CASE_CONTEXT virtual void myClass::baseInterface(void) */
void TestSuite_myClass_cpp_696d9a23::test_baseInterface_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = cpptestLimitsGetMinInt();
    ::myClass _cpptest_TestObject (_a_0);
    /* Tested function call */
    _cpptest_TestObject.baseInterface();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_baseInterface_2 */

/* CPPTEST_TEST_CASE_BEGIN test_baseInterface_3 */
/* CPPTEST_TEST_CASE_CONTEXT virtual void myClass::baseInterface(void) */
void TestSuite_myClass_cpp_696d9a23::test_baseInterface_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = -1;
    ::myClass _cpptest_TestObject (_a_0);
    /* Tested function call */
    _cpptest_TestObject.baseInterface();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_baseInterface_3 */

/* CPPTEST_TEST_CASE_BEGIN test_baseInterface_4 */
/* CPPTEST_TEST_CASE_CONTEXT virtual void myClass::baseInterface(void) */
void TestSuite_myClass_cpp_696d9a23::test_baseInterface_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = 1;
    ::myClass _cpptest_TestObject (_a_0);
    /* Tested function call */
    _cpptest_TestObject.baseInterface();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_baseInterface_4 */

/* CPPTEST_TEST_CASE_BEGIN test_baseInterface_5 */
/* CPPTEST_TEST_CASE_CONTEXT virtual void myClass::baseInterface(void) */
void TestSuite_myClass_cpp_696d9a23::test_baseInterface_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = 0;
    ::myClass _cpptest_TestObject (_a_0);
    /* Tested function call */
    _cpptest_TestObject.baseInterface();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_baseInterface_5 */

/* CPPTEST_TEST_CASE_BEGIN test_getIntValue_1 */
/* CPPTEST_TEST_CASE_CONTEXT int myClass::getIntValue(void) */
void TestSuite_myClass_cpp_696d9a23::test_getIntValue_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = 20;
    ::myClass _cpptest_TestObject (_a_0);
    /* Tested function call */
    int _return  = _cpptest_TestObject.getIntValue();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_getIntValue_1 */

/* CPPTEST_TEST_CASE_BEGIN test_getIntValue_2 */
/* CPPTEST_TEST_CASE_CONTEXT int myClass::getIntValue(void) */
void TestSuite_myClass_cpp_696d9a23::test_getIntValue_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = 0;
    ::myClass _cpptest_TestObject (_a_0);
    /* Tested function call */
    int _return  = _cpptest_TestObject.getIntValue();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_getIntValue_2 */

/* CPPTEST_TEST_CASE_BEGIN test_getIntValue_3 */
/* CPPTEST_TEST_CASE_CONTEXT int myClass::getIntValue(void) */
void TestSuite_myClass_cpp_696d9a23::test_getIntValue_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = cpptestLimitsGetMaxInt();
    ::myClass _cpptest_TestObject (_a_0);
    /* Tested function call */
    int _return  = _cpptest_TestObject.getIntValue();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_getIntValue_3 */

/* CPPTEST_TEST_CASE_BEGIN test_getIntValue_4 */
/* CPPTEST_TEST_CASE_CONTEXT int myClass::getIntValue(void) */
void TestSuite_myClass_cpp_696d9a23::test_getIntValue_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = cpptestLimitsGetMinInt();
    ::myClass _cpptest_TestObject (_a_0);
    /* Tested function call */
    int _return  = _cpptest_TestObject.getIntValue();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_getIntValue_4 */

/* CPPTEST_TEST_CASE_BEGIN test_getIntValue_5 */
/* CPPTEST_TEST_CASE_CONTEXT int myClass::getIntValue(void) */
void TestSuite_myClass_cpp_696d9a23::test_getIntValue_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = 1;
    ::myClass _cpptest_TestObject (_a_0);
    /* Tested function call */
    int _return  = _cpptest_TestObject.getIntValue();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_getIntValue_5 */

/* CPPTEST_TEST_CASE_BEGIN test_myClass_1 */
/* CPPTEST_TEST_CASE_CONTEXT myClass::myClass(int) */
void TestSuite_myClass_cpp_696d9a23::test_myClass_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = 2;
    /* Testing constructor. */
    ::myClass _return(_a);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.m_n", ( _return.m_n ));
}
/* CPPTEST_TEST_CASE_END test_myClass_1 */

/* CPPTEST_TEST_CASE_BEGIN test_myClass_2 */
/* CPPTEST_TEST_CASE_CONTEXT myClass::myClass(int) */
void TestSuite_myClass_cpp_696d9a23::test_myClass_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMaxInt();
    /* Testing constructor. */
    ::myClass _return(_a);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.m_n", ( _return.m_n ));
}
/* CPPTEST_TEST_CASE_END test_myClass_2 */

/* CPPTEST_TEST_CASE_BEGIN test_myClass_3 */
/* CPPTEST_TEST_CASE_CONTEXT myClass::myClass(int) */
void TestSuite_myClass_cpp_696d9a23::test_myClass_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMinInt();
    /* Testing constructor. */
    ::myClass _return(_a);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.m_n", ( _return.m_n ));
}
/* CPPTEST_TEST_CASE_END test_myClass_3 */

/* CPPTEST_TEST_CASE_BEGIN test_myClass_4 */
/* CPPTEST_TEST_CASE_CONTEXT myClass::myClass(int) */
void TestSuite_myClass_cpp_696d9a23::test_myClass_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = -1;
    /* Testing constructor. */
    ::myClass _return(_a);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.m_n", ( _return.m_n ));
}
/* CPPTEST_TEST_CASE_END test_myClass_4 */

/* CPPTEST_TEST_CASE_BEGIN test_myClass_5 */
/* CPPTEST_TEST_CASE_CONTEXT myClass::myClass(int) */
void TestSuite_myClass_cpp_696d9a23::test_myClass_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (a) */ 
    int _a  = 1;
    /* Testing constructor. */
    ::myClass _return(_a);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.m_n", ( _return.m_n ));
}
/* CPPTEST_TEST_CASE_END test_myClass_5 */

/* CPPTEST_TEST_CASE_BEGIN test_setValue_1 */
/* CPPTEST_TEST_CASE_CONTEXT void myClass::setValue(int) */
void TestSuite_myClass_cpp_696d9a23::test_setValue_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = cpptestLimitsGetMaxInt();
    ::myClass _cpptest_TestObject (_a_0);
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    _cpptest_TestObject.setValue(_a);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_setValue_1 */

/* CPPTEST_TEST_CASE_BEGIN test_setValue_2 */
/* CPPTEST_TEST_CASE_CONTEXT void myClass::setValue(int) */
void TestSuite_myClass_cpp_696d9a23::test_setValue_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = cpptestLimitsGetMinInt();
    ::myClass _cpptest_TestObject (_a_0);
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    _cpptest_TestObject.setValue(_a);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_setValue_2 */

/* CPPTEST_TEST_CASE_BEGIN test_setValue_3 */
/* CPPTEST_TEST_CASE_CONTEXT void myClass::setValue(int) */
void TestSuite_myClass_cpp_696d9a23::test_setValue_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = -1;
    ::myClass _cpptest_TestObject (_a_0);
    /* Initializing argument 1 (a) */ 
    int _a  = cpptestLimitsGetMinInt();
    /* Tested function call */
    _cpptest_TestObject.setValue(_a);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_setValue_3 */

/* CPPTEST_TEST_CASE_BEGIN test_setValue_4 */
/* CPPTEST_TEST_CASE_CONTEXT void myClass::setValue(int) */
void TestSuite_myClass_cpp_696d9a23::test_setValue_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = 1;
    ::myClass _cpptest_TestObject (_a_0);
    /* Initializing argument 1 (a) */ 
    int _a  = -1;
    /* Tested function call */
    _cpptest_TestObject.setValue(_a);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_setValue_4 */

/* CPPTEST_TEST_CASE_BEGIN test_setValue_5 */
/* CPPTEST_TEST_CASE_CONTEXT void myClass::setValue(int) */
void TestSuite_myClass_cpp_696d9a23::test_setValue_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = 0;
    ::myClass _cpptest_TestObject (_a_0);
    /* Initializing argument 1 (a) */ 
    int _a  = 1;
    /* Tested function call */
    _cpptest_TestObject.setValue(_a);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_setValue_5 */

/* CPPTEST_TEST_CASE_BEGIN test_writeToFile_1 */
/* CPPTEST_TEST_CASE_CONTEXT void myClass::writeToFile(void) */
void TestSuite_myClass_cpp_696d9a23::test_writeToFile_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = cpptestLimitsGetMaxInt();
    ::myClass _cpptest_TestObject (_a_0);
    /* Tested function call */
    _cpptest_TestObject.writeToFile();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_writeToFile_1 */

/* CPPTEST_TEST_CASE_BEGIN test_writeToFile_2 */
/* CPPTEST_TEST_CASE_CONTEXT void myClass::writeToFile(void) */
void TestSuite_myClass_cpp_696d9a23::test_writeToFile_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = cpptestLimitsGetMinInt();
    ::myClass _cpptest_TestObject (_a_0);
    /* Tested function call */
    _cpptest_TestObject.writeToFile();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_writeToFile_2 */

/* CPPTEST_TEST_CASE_BEGIN test_writeToFile_3 */
/* CPPTEST_TEST_CASE_CONTEXT void myClass::writeToFile(void) */
void TestSuite_myClass_cpp_696d9a23::test_writeToFile_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = -1;
    ::myClass _cpptest_TestObject (_a_0);
    /* Tested function call */
    _cpptest_TestObject.writeToFile();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_writeToFile_3 */

/* CPPTEST_TEST_CASE_BEGIN test_writeToFile_4 */
/* CPPTEST_TEST_CASE_CONTEXT void myClass::writeToFile(void) */
void TestSuite_myClass_cpp_696d9a23::test_writeToFile_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = 1;
    ::myClass _cpptest_TestObject (_a_0);
    /* Tested function call */
    _cpptest_TestObject.writeToFile();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_writeToFile_4 */

/* CPPTEST_TEST_CASE_BEGIN test_writeToFile_5 */
/* CPPTEST_TEST_CASE_CONTEXT void myClass::writeToFile(void) */
void TestSuite_myClass_cpp_696d9a23::test_writeToFile_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = 0;
    ::myClass _cpptest_TestObject (_a_0);
    /* Tested function call */
    _cpptest_TestObject.writeToFile();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_n", ( _cpptest_TestObject.m_n ));
}
/* CPPTEST_TEST_CASE_END test_writeToFile_5 */

/* CPPTEST_TEST_CASE_BEGIN test_x7emyClass_1 */
/* CPPTEST_TEST_CASE_CONTEXT myClass::~myClass(void) */
void TestSuite_myClass_cpp_696d9a23::test_x7emyClass_1()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = cpptestLimitsGetMaxInt();
    ::myClass _cpptest_TestObject (_a_0);
    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7emyClass_1 */

/* CPPTEST_TEST_CASE_BEGIN test_x7emyClass_2 */
/* CPPTEST_TEST_CASE_CONTEXT myClass::~myClass(void) */
void TestSuite_myClass_cpp_696d9a23::test_x7emyClass_2()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = cpptestLimitsGetMinInt();
    ::myClass _cpptest_TestObject (_a_0);
    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7emyClass_2 */

/* CPPTEST_TEST_CASE_BEGIN test_x7emyClass_3 */
/* CPPTEST_TEST_CASE_CONTEXT myClass::~myClass(void) */
void TestSuite_myClass_cpp_696d9a23::test_x7emyClass_3()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = -1;
    ::myClass _cpptest_TestObject (_a_0);
    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7emyClass_3 */

/* CPPTEST_TEST_CASE_BEGIN test_x7emyClass_4 */
/* CPPTEST_TEST_CASE_CONTEXT myClass::~myClass(void) */
void TestSuite_myClass_cpp_696d9a23::test_x7emyClass_4()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = 1;
    ::myClass _cpptest_TestObject (_a_0);
    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7emyClass_4 */

/* CPPTEST_TEST_CASE_BEGIN test_x7emyClass_5 */
/* CPPTEST_TEST_CASE_CONTEXT myClass::~myClass(void) */
void TestSuite_myClass_cpp_696d9a23::test_x7emyClass_5()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (a) */ 
        int _a_0  = 0;
    ::myClass _cpptest_TestObject (_a_0);
    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7emyClass_5 */
