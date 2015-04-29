#include "cpptest.h"

CPPTEST_CONTEXT("para_use/para_use/Header Files/myTemplate.h");
CPPTEST_TEST_SUITE_INCLUDED_TO("para_use/para_use/Source Files/myTemplate.cpp");

class TestSuite_myTemplate_cpp_f29515a1 : public CppTest_TestSuite
{
    public:
        CPPTEST_TEST_SUITE(TestSuite_myTemplate_cpp_f29515a1);
        CPPTEST_TEST(test_getValue_1);
        CPPTEST_TEST(test_getValue_10);
        CPPTEST_TEST(test_getValue_11);
        CPPTEST_TEST(test_getValue_2);
        CPPTEST_TEST(test_getValue_3);
        CPPTEST_TEST(test_getValue_4);
        CPPTEST_TEST(test_getValue_5);
        CPPTEST_TEST(test_getValue_7);
        CPPTEST_TEST(test_getValue_8);
        CPPTEST_TEST(test_getValue_9);
        CPPTEST_TEST(test_multiIt_1);
        CPPTEST_TEST(test_multiIt_10);
        CPPTEST_TEST(test_multiIt_11);
        CPPTEST_TEST(test_multiIt_2);
        CPPTEST_TEST(test_multiIt_3);
        CPPTEST_TEST(test_multiIt_4);
        CPPTEST_TEST(test_multiIt_5);
        CPPTEST_TEST(test_multiIt_7);
        CPPTEST_TEST(test_multiIt_8);
        CPPTEST_TEST(test_multiIt_9);
        CPPTEST_TEST(test_myTemplate_1);
        CPPTEST_TEST(test_myTemplate_10);
        CPPTEST_TEST(test_myTemplate_11);
        CPPTEST_TEST(test_myTemplate_2);
        CPPTEST_TEST(test_myTemplate_3);
        CPPTEST_TEST(test_myTemplate_4);
        CPPTEST_TEST(test_myTemplate_5);
        CPPTEST_TEST(test_myTemplate_7);
        CPPTEST_TEST(test_myTemplate_8);
        CPPTEST_TEST(test_myTemplate_9);
        CPPTEST_TEST(test_x7emyTemplate_1);
        CPPTEST_TEST(test_x7emyTemplate_10);
        CPPTEST_TEST(test_x7emyTemplate_11);
        CPPTEST_TEST(test_x7emyTemplate_2);
        CPPTEST_TEST(test_x7emyTemplate_3);
        CPPTEST_TEST(test_x7emyTemplate_4);
        CPPTEST_TEST(test_x7emyTemplate_5);
        CPPTEST_TEST(test_x7emyTemplate_7);
        CPPTEST_TEST(test_x7emyTemplate_8);
        CPPTEST_TEST(test_x7emyTemplate_9);
        CPPTEST_TEST_SUITE_END();
        
        void setUp();
        void tearDown();

        void test_getValue_1();
        void test_getValue_10();
        void test_getValue_11();
        void test_getValue_2();
        void test_getValue_3();
        void test_getValue_4();
        void test_getValue_5();
        void test_getValue_7();
        void test_getValue_8();
        void test_getValue_9();
        void test_multiIt_1();
        void test_multiIt_10();
        void test_multiIt_11();
        void test_multiIt_2();
        void test_multiIt_3();
        void test_multiIt_4();
        void test_multiIt_5();
        void test_multiIt_7();
        void test_multiIt_8();
        void test_multiIt_9();
        void test_myTemplate_1();
        void test_myTemplate_10();
        void test_myTemplate_11();
        void test_myTemplate_2();
        void test_myTemplate_3();
        void test_myTemplate_4();
        void test_myTemplate_5();
        void test_myTemplate_7();
        void test_myTemplate_8();
        void test_myTemplate_9();
        void test_x7emyTemplate_1();
        void test_x7emyTemplate_10();
        void test_x7emyTemplate_11();
        void test_x7emyTemplate_2();
        void test_x7emyTemplate_3();
        void test_x7emyTemplate_4();
        void test_x7emyTemplate_5();
        void test_x7emyTemplate_7();
        void test_x7emyTemplate_8();
        void test_x7emyTemplate_9();
};

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_myTemplate_cpp_f29515a1);

void TestSuite_myTemplate_cpp_f29515a1::setUp()
{
}

void TestSuite_myTemplate_cpp_f29515a1::tearDown()
{
}

/* CPPTEST_TEST_CASE_BEGIN test_getValue_1 */
/* CPPTEST_TEST_CASE_CONTEXT int myTemplate<int>::getValue(void) */
void TestSuite_myTemplate_cpp_f29515a1::test_getValue_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        int _v_0  = cpptestLimitsGetMaxInt();
    ::myTemplate< int>  _cpptest_TestObject (_v_0);
    /* Tested function call */
    int _return  = _cpptest_TestObject.getValue();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_member", ( _cpptest_TestObject.m_member ));
}
/* CPPTEST_TEST_CASE_END test_getValue_1 */

/* CPPTEST_TEST_CASE_BEGIN test_getValue_10 */
/* CPPTEST_TEST_CASE_CONTEXT double myTemplate<double>::getValue(void) */
void TestSuite_myTemplate_cpp_f29515a1::test_getValue_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        double _v_0  = -1.0;
    ::myTemplate< double>  _cpptest_TestObject (_v_0);
    /* Tested function call */
    double _return  = _cpptest_TestObject.getValue();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.m_member", ( _cpptest_TestObject.m_member ));
}
/* CPPTEST_TEST_CASE_END test_getValue_10 */

/* CPPTEST_TEST_CASE_BEGIN test_getValue_11 */
/* CPPTEST_TEST_CASE_CONTEXT double myTemplate<double>::getValue(void) */
void TestSuite_myTemplate_cpp_f29515a1::test_getValue_11()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        double _v_0  = 1.0;
    ::myTemplate< double>  _cpptest_TestObject (_v_0);
    /* Tested function call */
    double _return  = _cpptest_TestObject.getValue();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.m_member", ( _cpptest_TestObject.m_member ));
}
/* CPPTEST_TEST_CASE_END test_getValue_11 */

/* CPPTEST_TEST_CASE_BEGIN test_getValue_2 */
/* CPPTEST_TEST_CASE_CONTEXT int myTemplate<int>::getValue(void) */
void TestSuite_myTemplate_cpp_f29515a1::test_getValue_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        int _v_0  = cpptestLimitsGetMinInt();
    ::myTemplate< int>  _cpptest_TestObject (_v_0);
    /* Tested function call */
    int _return  = _cpptest_TestObject.getValue();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_member", ( _cpptest_TestObject.m_member ));
}
/* CPPTEST_TEST_CASE_END test_getValue_2 */

/* CPPTEST_TEST_CASE_BEGIN test_getValue_3 */
/* CPPTEST_TEST_CASE_CONTEXT int myTemplate<int>::getValue(void) */
void TestSuite_myTemplate_cpp_f29515a1::test_getValue_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        int _v_0  = -1;
    ::myTemplate< int>  _cpptest_TestObject (_v_0);
    /* Tested function call */
    int _return  = _cpptest_TestObject.getValue();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_member", ( _cpptest_TestObject.m_member ));
}
/* CPPTEST_TEST_CASE_END test_getValue_3 */

/* CPPTEST_TEST_CASE_BEGIN test_getValue_4 */
/* CPPTEST_TEST_CASE_CONTEXT int myTemplate<int>::getValue(void) */
void TestSuite_myTemplate_cpp_f29515a1::test_getValue_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        int _v_0  = 1;
    ::myTemplate< int>  _cpptest_TestObject (_v_0);
    /* Tested function call */
    int _return  = _cpptest_TestObject.getValue();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_member", ( _cpptest_TestObject.m_member ));
}
/* CPPTEST_TEST_CASE_END test_getValue_4 */

/* CPPTEST_TEST_CASE_BEGIN test_getValue_5 */
/* CPPTEST_TEST_CASE_CONTEXT int myTemplate<int>::getValue(void) */
void TestSuite_myTemplate_cpp_f29515a1::test_getValue_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        int _v_0  = 0;
    ::myTemplate< int>  _cpptest_TestObject (_v_0);
    /* Tested function call */
    int _return  = _cpptest_TestObject.getValue();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_member", ( _cpptest_TestObject.m_member ));
}
/* CPPTEST_TEST_CASE_END test_getValue_5 */

/* CPPTEST_TEST_CASE_BEGIN test_getValue_7 */
/* CPPTEST_TEST_CASE_CONTEXT double myTemplate<double>::getValue(void) */
void TestSuite_myTemplate_cpp_f29515a1::test_getValue_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        double _v_0  = cpptestLimitsGetMaxPosDouble();
    ::myTemplate< double>  _cpptest_TestObject (_v_0);
    /* Tested function call */
    double _return  = _cpptest_TestObject.getValue();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.m_member", ( _cpptest_TestObject.m_member ));
}
/* CPPTEST_TEST_CASE_END test_getValue_7 */

/* CPPTEST_TEST_CASE_BEGIN test_getValue_8 */
/* CPPTEST_TEST_CASE_CONTEXT double myTemplate<double>::getValue(void) */
void TestSuite_myTemplate_cpp_f29515a1::test_getValue_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        double _v_0  = cpptestLimitsGetMaxNegDouble();
    ::myTemplate< double>  _cpptest_TestObject (_v_0);
    /* Tested function call */
    double _return  = _cpptest_TestObject.getValue();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.m_member", ( _cpptest_TestObject.m_member ));
}
/* CPPTEST_TEST_CASE_END test_getValue_8 */

/* CPPTEST_TEST_CASE_BEGIN test_getValue_9 */
/* CPPTEST_TEST_CASE_CONTEXT double myTemplate<double>::getValue(void) */
void TestSuite_myTemplate_cpp_f29515a1::test_getValue_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        double _v_0  = cpptestLimitsGetMinNegDouble();
    ::myTemplate< double>  _cpptest_TestObject (_v_0);
    /* Tested function call */
    double _return  = _cpptest_TestObject.getValue();
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return", ( _return ));
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.m_member", ( _cpptest_TestObject.m_member ));
}
/* CPPTEST_TEST_CASE_END test_getValue_9 */

/* CPPTEST_TEST_CASE_BEGIN test_multiIt_1 */
/* CPPTEST_TEST_CASE_CONTEXT void myTemplate<double>::multiIt(double) */
void TestSuite_myTemplate_cpp_f29515a1::test_multiIt_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        double _v_0  = cpptestLimitsGetMaxPosDouble();
    ::myTemplate< double>  _cpptest_TestObject (_v_0);
    /* Initializing argument 1 (v) */ 
    double _v  = cpptestLimitsGetMaxPosDouble();
    /* Tested function call */
    _cpptest_TestObject.multiIt(_v);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.m_member", ( _cpptest_TestObject.m_member ));
}
/* CPPTEST_TEST_CASE_END test_multiIt_1 */

/* CPPTEST_TEST_CASE_BEGIN test_multiIt_10 */
/* CPPTEST_TEST_CASE_CONTEXT void myTemplate<int>::multiIt(int) */
void TestSuite_myTemplate_cpp_f29515a1::test_multiIt_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        int _v_0  = 1;
    ::myTemplate< int>  _cpptest_TestObject (_v_0);
    /* Initializing argument 1 (v) */ 
    int _v  = -1;
    /* Tested function call */
    _cpptest_TestObject.multiIt(_v);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_member", ( _cpptest_TestObject.m_member ));
}
/* CPPTEST_TEST_CASE_END test_multiIt_10 */

/* CPPTEST_TEST_CASE_BEGIN test_multiIt_11 */
/* CPPTEST_TEST_CASE_CONTEXT void myTemplate<int>::multiIt(int) */
void TestSuite_myTemplate_cpp_f29515a1::test_multiIt_11()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        int _v_0  = 0;
    ::myTemplate< int>  _cpptest_TestObject (_v_0);
    /* Initializing argument 1 (v) */ 
    int _v  = 1;
    /* Tested function call */
    _cpptest_TestObject.multiIt(_v);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_member", ( _cpptest_TestObject.m_member ));
}
/* CPPTEST_TEST_CASE_END test_multiIt_11 */

/* CPPTEST_TEST_CASE_BEGIN test_multiIt_2 */
/* CPPTEST_TEST_CASE_CONTEXT void myTemplate<double>::multiIt(double) */
void TestSuite_myTemplate_cpp_f29515a1::test_multiIt_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        double _v_0  = cpptestLimitsGetMaxNegDouble();
    ::myTemplate< double>  _cpptest_TestObject (_v_0);
    /* Initializing argument 1 (v) */ 
    double _v  = cpptestLimitsGetMaxPosDouble();
    /* Tested function call */
    _cpptest_TestObject.multiIt(_v);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.m_member", ( _cpptest_TestObject.m_member ));
}
/* CPPTEST_TEST_CASE_END test_multiIt_2 */

/* CPPTEST_TEST_CASE_BEGIN test_multiIt_3 */
/* CPPTEST_TEST_CASE_CONTEXT void myTemplate<double>::multiIt(double) */
void TestSuite_myTemplate_cpp_f29515a1::test_multiIt_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        double _v_0  = 0.0;
    ::myTemplate< double>  _cpptest_TestObject (_v_0);
    /* Initializing argument 1 (v) */ 
    double _v  = cpptestLimitsGetMaxNegDouble();
    /* Tested function call */
    _cpptest_TestObject.multiIt(_v);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.m_member", ( _cpptest_TestObject.m_member ));
}
/* CPPTEST_TEST_CASE_END test_multiIt_3 */

/* CPPTEST_TEST_CASE_BEGIN test_multiIt_4 */
/* CPPTEST_TEST_CASE_CONTEXT void myTemplate<double>::multiIt(double) */
void TestSuite_myTemplate_cpp_f29515a1::test_multiIt_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        double _v_0  = cpptestLimitsGetMinPosDouble();
    ::myTemplate< double>  _cpptest_TestObject (_v_0);
    /* Initializing argument 1 (v) */ 
    double _v  = -1.0;
    /* Tested function call */
    _cpptest_TestObject.multiIt(_v);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.m_member", ( _cpptest_TestObject.m_member ));
}
/* CPPTEST_TEST_CASE_END test_multiIt_4 */

/* CPPTEST_TEST_CASE_BEGIN test_multiIt_5 */
/* CPPTEST_TEST_CASE_CONTEXT void myTemplate<double>::multiIt(double) */
void TestSuite_myTemplate_cpp_f29515a1::test_multiIt_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        double _v_0  = cpptestLimitsGetMinNegDouble();
    ::myTemplate< double>  _cpptest_TestObject (_v_0);
    /* Initializing argument 1 (v) */ 
    double _v  = 1.0;
    /* Tested function call */
    _cpptest_TestObject.multiIt(_v);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _cpptest_TestObject.m_member", ( _cpptest_TestObject.m_member ));
}
/* CPPTEST_TEST_CASE_END test_multiIt_5 */

/* CPPTEST_TEST_CASE_BEGIN test_multiIt_7 */
/* CPPTEST_TEST_CASE_CONTEXT void myTemplate<int>::multiIt(int) */
void TestSuite_myTemplate_cpp_f29515a1::test_multiIt_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        int _v_0  = cpptestLimitsGetMaxInt();
    ::myTemplate< int>  _cpptest_TestObject (_v_0);
    /* Initializing argument 1 (v) */ 
    int _v  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    _cpptest_TestObject.multiIt(_v);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_member", ( _cpptest_TestObject.m_member ));
}
/* CPPTEST_TEST_CASE_END test_multiIt_7 */

/* CPPTEST_TEST_CASE_BEGIN test_multiIt_8 */
/* CPPTEST_TEST_CASE_CONTEXT void myTemplate<int>::multiIt(int) */
void TestSuite_myTemplate_cpp_f29515a1::test_multiIt_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        int _v_0  = cpptestLimitsGetMinInt();
    ::myTemplate< int>  _cpptest_TestObject (_v_0);
    /* Initializing argument 1 (v) */ 
    int _v  = cpptestLimitsGetMaxInt();
    /* Tested function call */
    _cpptest_TestObject.multiIt(_v);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_member", ( _cpptest_TestObject.m_member ));
}
/* CPPTEST_TEST_CASE_END test_multiIt_8 */

/* CPPTEST_TEST_CASE_BEGIN test_multiIt_9 */
/* CPPTEST_TEST_CASE_CONTEXT void myTemplate<int>::multiIt(int) */
void TestSuite_myTemplate_cpp_f29515a1::test_multiIt_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        int _v_0  = -1;
    ::myTemplate< int>  _cpptest_TestObject (_v_0);
    /* Initializing argument 1 (v) */ 
    int _v  = cpptestLimitsGetMinInt();
    /* Tested function call */
    _cpptest_TestObject.multiIt(_v);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _cpptest_TestObject.m_member", ( _cpptest_TestObject.m_member ));
}
/* CPPTEST_TEST_CASE_END test_multiIt_9 */

/* CPPTEST_TEST_CASE_BEGIN test_myTemplate_1 */
/* CPPTEST_TEST_CASE_CONTEXT myTemplate<double>::myTemplate(double) */
void TestSuite_myTemplate_cpp_f29515a1::test_myTemplate_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (v) */ 
    double _v  = cpptestLimitsGetMaxPosDouble();
    /* Testing constructor. */
    ::myTemplate< double>  _return(_v);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return.m_member", ( _return.m_member ));
}
/* CPPTEST_TEST_CASE_END test_myTemplate_1 */

/* CPPTEST_TEST_CASE_BEGIN test_myTemplate_10 */
/* CPPTEST_TEST_CASE_CONTEXT myTemplate<int>::myTemplate(int) */
void TestSuite_myTemplate_cpp_f29515a1::test_myTemplate_10()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (v) */ 
    int _v  = 1;
    /* Testing constructor. */
    ::myTemplate< int>  _return(_v);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.m_member", ( _return.m_member ));
}
/* CPPTEST_TEST_CASE_END test_myTemplate_10 */

/* CPPTEST_TEST_CASE_BEGIN test_myTemplate_11 */
/* CPPTEST_TEST_CASE_CONTEXT myTemplate<int>::myTemplate(int) */
void TestSuite_myTemplate_cpp_f29515a1::test_myTemplate_11()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (v) */ 
    int _v  = 0;
    /* Testing constructor. */
    ::myTemplate< int>  _return(_v);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.m_member", ( _return.m_member ));
}
/* CPPTEST_TEST_CASE_END test_myTemplate_11 */

/* CPPTEST_TEST_CASE_BEGIN test_myTemplate_2 */
/* CPPTEST_TEST_CASE_CONTEXT myTemplate<double>::myTemplate(double) */
void TestSuite_myTemplate_cpp_f29515a1::test_myTemplate_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (v) */ 
    double _v  = cpptestLimitsGetMaxNegDouble();
    /* Testing constructor. */
    ::myTemplate< double>  _return(_v);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return.m_member", ( _return.m_member ));
}
/* CPPTEST_TEST_CASE_END test_myTemplate_2 */

/* CPPTEST_TEST_CASE_BEGIN test_myTemplate_3 */
/* CPPTEST_TEST_CASE_CONTEXT myTemplate<double>::myTemplate(double) */
void TestSuite_myTemplate_cpp_f29515a1::test_myTemplate_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (v) */ 
    double _v  = cpptestLimitsGetMinNegDouble();
    /* Testing constructor. */
    ::myTemplate< double>  _return(_v);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return.m_member", ( _return.m_member ));
}
/* CPPTEST_TEST_CASE_END test_myTemplate_3 */

/* CPPTEST_TEST_CASE_BEGIN test_myTemplate_4 */
/* CPPTEST_TEST_CASE_CONTEXT myTemplate<double>::myTemplate(double) */
void TestSuite_myTemplate_cpp_f29515a1::test_myTemplate_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (v) */ 
    double _v  = -1.0;
    /* Testing constructor. */
    ::myTemplate< double>  _return(_v);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return.m_member", ( _return.m_member ));
}
/* CPPTEST_TEST_CASE_END test_myTemplate_4 */

/* CPPTEST_TEST_CASE_BEGIN test_myTemplate_5 */
/* CPPTEST_TEST_CASE_CONTEXT myTemplate<double>::myTemplate(double) */
void TestSuite_myTemplate_cpp_f29515a1::test_myTemplate_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (v) */ 
    double _v  = 1.0;
    /* Testing constructor. */
    ::myTemplate< double>  _return(_v);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_FLOAT("double _return.m_member", ( _return.m_member ));
}
/* CPPTEST_TEST_CASE_END test_myTemplate_5 */

/* CPPTEST_TEST_CASE_BEGIN test_myTemplate_7 */
/* CPPTEST_TEST_CASE_CONTEXT myTemplate<int>::myTemplate(int) */
void TestSuite_myTemplate_cpp_f29515a1::test_myTemplate_7()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (v) */ 
    int _v  = cpptestLimitsGetMaxInt();
    /* Testing constructor. */
    ::myTemplate< int>  _return(_v);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.m_member", ( _return.m_member ));
}
/* CPPTEST_TEST_CASE_END test_myTemplate_7 */

/* CPPTEST_TEST_CASE_BEGIN test_myTemplate_8 */
/* CPPTEST_TEST_CASE_CONTEXT myTemplate<int>::myTemplate(int) */
void TestSuite_myTemplate_cpp_f29515a1::test_myTemplate_8()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (v) */ 
    int _v  = cpptestLimitsGetMinInt();
    /* Testing constructor. */
    ::myTemplate< int>  _return(_v);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.m_member", ( _return.m_member ));
}
/* CPPTEST_TEST_CASE_END test_myTemplate_8 */

/* CPPTEST_TEST_CASE_BEGIN test_myTemplate_9 */
/* CPPTEST_TEST_CASE_CONTEXT myTemplate<int>::myTemplate(int) */
void TestSuite_myTemplate_cpp_f29515a1::test_myTemplate_9()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (v) */ 
    int _v  = -1;
    /* Testing constructor. */
    ::myTemplate< int>  _return(_v);
    /* Post-condition check */
    CPPTEST_POST_CONDITION_INTEGER("int _return.m_member", ( _return.m_member ));
}
/* CPPTEST_TEST_CASE_END test_myTemplate_9 */

/* CPPTEST_TEST_CASE_BEGIN test_x7emyTemplate_1 */
/* CPPTEST_TEST_CASE_CONTEXT myTemplate<int>::~myTemplate(void) */
void TestSuite_myTemplate_cpp_f29515a1::test_x7emyTemplate_1()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        int _v_0  = cpptestLimitsGetMaxInt();
    ::myTemplate< int>  _cpptest_TestObject (_v_0);
    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7emyTemplate_1 */

/* CPPTEST_TEST_CASE_BEGIN test_x7emyTemplate_10 */
/* CPPTEST_TEST_CASE_CONTEXT myTemplate<double>::~myTemplate(void) */
void TestSuite_myTemplate_cpp_f29515a1::test_x7emyTemplate_10()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        double _v_0  = -1.0;
    ::myTemplate< double>  _cpptest_TestObject (_v_0);
    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7emyTemplate_10 */

/* CPPTEST_TEST_CASE_BEGIN test_x7emyTemplate_11 */
/* CPPTEST_TEST_CASE_CONTEXT myTemplate<double>::~myTemplate(void) */
void TestSuite_myTemplate_cpp_f29515a1::test_x7emyTemplate_11()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        double _v_0  = 1.0;
    ::myTemplate< double>  _cpptest_TestObject (_v_0);
    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7emyTemplate_11 */

/* CPPTEST_TEST_CASE_BEGIN test_x7emyTemplate_2 */
/* CPPTEST_TEST_CASE_CONTEXT myTemplate<int>::~myTemplate(void) */
void TestSuite_myTemplate_cpp_f29515a1::test_x7emyTemplate_2()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        int _v_0  = cpptestLimitsGetMinInt();
    ::myTemplate< int>  _cpptest_TestObject (_v_0);
    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7emyTemplate_2 */

/* CPPTEST_TEST_CASE_BEGIN test_x7emyTemplate_3 */
/* CPPTEST_TEST_CASE_CONTEXT myTemplate<int>::~myTemplate(void) */
void TestSuite_myTemplate_cpp_f29515a1::test_x7emyTemplate_3()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        int _v_0  = -1;
    ::myTemplate< int>  _cpptest_TestObject (_v_0);
    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7emyTemplate_3 */

/* CPPTEST_TEST_CASE_BEGIN test_x7emyTemplate_4 */
/* CPPTEST_TEST_CASE_CONTEXT myTemplate<int>::~myTemplate(void) */
void TestSuite_myTemplate_cpp_f29515a1::test_x7emyTemplate_4()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        int _v_0  = 1;
    ::myTemplate< int>  _cpptest_TestObject (_v_0);
    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7emyTemplate_4 */

/* CPPTEST_TEST_CASE_BEGIN test_x7emyTemplate_5 */
/* CPPTEST_TEST_CASE_CONTEXT myTemplate<int>::~myTemplate(void) */
void TestSuite_myTemplate_cpp_f29515a1::test_x7emyTemplate_5()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        int _v_0  = 0;
    ::myTemplate< int>  _cpptest_TestObject (_v_0);
    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7emyTemplate_5 */

/* CPPTEST_TEST_CASE_BEGIN test_x7emyTemplate_7 */
/* CPPTEST_TEST_CASE_CONTEXT myTemplate<double>::~myTemplate(void) */
void TestSuite_myTemplate_cpp_f29515a1::test_x7emyTemplate_7()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        double _v_0  = cpptestLimitsGetMaxPosDouble();
    ::myTemplate< double>  _cpptest_TestObject (_v_0);
    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7emyTemplate_7 */

/* CPPTEST_TEST_CASE_BEGIN test_x7emyTemplate_8 */
/* CPPTEST_TEST_CASE_CONTEXT myTemplate<double>::~myTemplate(void) */
void TestSuite_myTemplate_cpp_f29515a1::test_x7emyTemplate_8()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        double _v_0  = cpptestLimitsGetMaxNegDouble();
    ::myTemplate< double>  _cpptest_TestObject (_v_0);
    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7emyTemplate_8 */

/* CPPTEST_TEST_CASE_BEGIN test_x7emyTemplate_9 */
/* CPPTEST_TEST_CASE_CONTEXT myTemplate<double>::~myTemplate(void) */
void TestSuite_myTemplate_cpp_f29515a1::test_x7emyTemplate_9()
{
    /* Testing destructor - begin new scope. */
    {
    /* Pre-condition initialization */
    /* Initializing argument 0 (this) */ 
        /* Initializing constructor argument 1 (v) */ 
        double _v_0  = cpptestLimitsGetMinNegDouble();
    ::myTemplate< double>  _cpptest_TestObject (_v_0);
    /* Object destruction at the end of scope */
    }
    /* Post-condition check */
}
/* CPPTEST_TEST_CASE_END test_x7emyTemplate_9 */
