
#include "cpptest_driver.c.h"

#include "cpptest_transport.h"
#include "cpptest_memory_analysis.h"






#if defined(CPPTEST_MS_SETERROR_AVAILABLE) || defined(CPPTEST_SUPPLEMENT_USED)
extern "C" unsigned int __stdcall SetErrorMode(unsigned int);
#endif


#if defined(CPPTEST_MS_SETERROR_AVAILABLE) || defined(CPPTEST_SUPPLEMENT_USED)
extern "C" int __cdecl _set_error_mode(int);
#endif


#if defined(CPPTEST_MS_DEBUG_REPORT_AVAILABLE) || defined(CPPTEST_SUPPLEMENT_USED)
#undef _CrtSetReportMode
extern "C" int __cdecl _CrtSetReportMode(int, int);
#endif


#if defined(CPPTEST_MS_DEBUG_REPORT_AVAILABLE) || defined(CPPTEST_SUPPLEMENT_USED)
#undef _CrtSetReportFile
extern "C" void* __cdecl _CrtSetReportFile(int, void*);
#endif


#if (defined(CPPTEST_MS_DEBUG_REPORT_AVAILABLE) || defined(CPPTEST_SUPPLEMENT_USED)) && CPPTEST_WCHAR_ENABLED
void __cdecl cpptest_invalid_parameter_handler(const wchar_t * expression, const wchar_t * function, const wchar_t * file, unsigned int line, uintptr_t pReserved)
{
      cpptestInvalidParamCalled(expression, function, file, line);
}

#endif




static void __CPTR_Initialize_Properties(void)
{

    cpptestAddProperty("testlog.enabled", "true");
    cpptestAddProperty("testlog.file", "E:\\test_code\\para_use\\.cpptest\\para_use\\unit-data\\current_tubf179707/cpptest_results.tlog");
    cpptestAddProperty("testlog.append", "true");
    cpptestAddProperty("covlog.enabled", "true");
    cpptestAddProperty("covlog.file", "E:\\test_code\\para_use\\.cpptest\\para_use\\unit-data\\current_tubf179707/cpptest_results.clog");
    cpptestAddProperty("covlog.append", "true");
    cpptestAddProperty("coverage.optimize_statements", "true");
    cpptestAddProperty("coverage.trace_function_calls", "false");
    cpptestAddProperty("coverage.use_func_def_records", "true");
    cpptestAddProperty("testcases.timeout", "90000");
    cpptestAddProperty("testcases.max_messages", "100");
    cpptestAddProperty("send.post.conditions", "1");
    cpptestAddProperty("send.reports", "1");
    cpptestAddProperty("send.passed.asserts", "0");
    cpptestAddProperty("test.app_mode", "0");

#ifdef CPPTEST_MAX_MESSAGES_NUMBER
    cpptestAddProperty("testcases.max_messages", CPPTEST_QUOTE(CPPTEST_MAX_MESSAGES_NUMBER));
#endif
#ifdef CPPTEST_TIMEOUT_PER_TEST_CASE
    cpptestAddProperty("testcases.timeout", CPPTEST_QUOTE(CPPTEST_TIMEOUT_PER_TEST_CASE));
#endif
#ifdef CPPTEST_MAX_ALLOWED_STACK_TRACE_DEPTH
    cpptestAddProperty("test.max_st_depth", CPPTEST_QUOTE(CPPTEST_MAX_ALLOWED_STACK_TRACE_DEPTH));
#endif
#if defined(CPPTEST_THREADS)
    cpptestAddProperty("threads.enabled", CPPTEST_QUOTE(CPPTEST_THREADS));
#endif

}

#if CPPTEST_DATA_SOURCES_ENABLED


extern CppTest_GetDataSourceFPtr CppTest_getDSFPtr;

EXTERN_C_LINKAGE_START
static CppTest_DataSource* __CPTR_Get_Data_Source(const char* dataSource, const char* testSuite)
{
    

    return 0;
}
EXTERN_C_LINKAGE_END
#endif /* CPPTEST_DATA_SOURCES_ENABLED */

static int __CPTR_runtimeInitialized = 0;

EXTERN_C_LINKAGE void CppTest_InitializeRuntime(void)
{
    if (!__CPTR_runtimeInitialized) {
        __CPTR_runtimeInitialized = 1;
        
        
        
#if defined(CPPTEST_MS_SETERROR_AVAILABLE) || defined(CPPTEST_SUPPLEMENT_USED)
::SetErrorMode(2);
#endif

        
#if defined(CPPTEST_MS_SETERROR_AVAILABLE) || defined(CPPTEST_SUPPLEMENT_USED)
::_set_error_mode(1);
#endif

        
#if defined(CPPTEST_MS_DEBUG_REPORT_AVAILABLE) || defined(CPPTEST_SUPPLEMENT_USED)
::_CrtSetReportMode(0, 1); ::_CrtSetReportMode(1, 1); ::_CrtSetReportMode(2, 1);
#endif

        
#if defined(CPPTEST_MS_DEBUG_REPORT_AVAILABLE) || defined(CPPTEST_SUPPLEMENT_USED)
::_CrtSetReportFile(0, (void *) -5); ::_CrtSetReportFile(1, (void *) -5); ::_CrtSetReportFile(2, (void *) -5);
#endif

        
#if (defined(CPPTEST_MS_DEBUG_REPORT_AVAILABLE) || defined(CPPTEST_SUPPLEMENT_USED)) && CPPTEST_WCHAR_ENABLED
_set_invalid_parameter_handler(&cpptest_invalid_parameter_handler);
#endif

        cpptestInitializeRuntime(
                (CppTestPropertiesInitCallback)&__CPTR_Initialize_Properties,
                (CppTestThreadInitCallback)&threadInitializer,
                CPPTEST_TARGET_SYSTEM_PTR);
    }
}


EXTERN_C_LINKAGE void CppTest_FinalizeRuntime(void)
{
    if (__CPTR_runtimeInitialized) {
        __CPTR_runtimeInitialized = 0;
        cpptestFinalizeRuntime();
        
        
    }
}


static int __CPTR_initializations = 0;

/* Routine called very early. In c++ mode this is called from constructor
   of global object. In c mode this is called at beginning of CppTest_Main
   method. */
EXTERN_C_LINKAGE void __CPTR_Initialize(void)
{
    if (__CPTR_initializations == 0) {
        CppTest_InitializeRuntime();
    }
    ++__CPTR_initializations;
}

EXTERN_C_LINKAGE void __CPTR_Finalize(void)
{
    --__CPTR_initializations;
    if (__CPTR_initializations == 0) {
        CppTest_FinalizeRuntime();
    }
}

#ifdef __cplusplus
struct __CPTR_Initializer_TestRunner {
    __CPTR_Initializer_TestRunner()
    {
        CPPTEST_INITIALIZE_RUNTIME();
    }
    ~__CPTR_Initializer_TestRunner()
    {
        CPPTEST_FINALIZE_RUNTIME();
    }
};

#if CPPTEST_USE_GLOBAL_OBJECTS_TO_INIT_RUNTIME
static struct __CPTR_Initializer_TestRunner __CPTR_initializer;
#endif

#define CPPTEST_ENTER_MAIN_ROUTINE() \
    __CPTR_Initializer_TestRunner __CPTR_main_initializer

#define CPPTEST_EXIT_MAIN_ROUTINE()

#else

#define CPPTEST_ENTER_MAIN_ROUTINE() \
    CPPTEST_INITIALIZE_RUNTIME()

#define CPPTEST_EXIT_MAIN_ROUTINE() \
    CPPTEST_FINALIZE_RUNTIME()

#endif




static CPPTEST_INTEGER __CPTR_Test_Manager_Count = 0;
static CPPTEST_INTEGER __CPTR_Test_Manager_Start_Id = 0;
static const char* __CPTR_Test_Manager_TestSuite = 0;
static const char* __CPTR_Test_Manager_TestCase = 0;

static int __CPTR_Test_Manager_Test(const char* testSuite, const char* testCase)
{
    __CPTR_Test_Manager_Count++;
    if (__CPTR_Test_Manager_TestSuite && cpptestStrCmp(__CPTR_Test_Manager_TestSuite, testSuite) != 0) {
        return 0;
    }
    if (__CPTR_Test_Manager_TestCase && cpptestStrCmp(__CPTR_Test_Manager_TestCase, testCase) != 0) {
        return 0;
    }
    return __CPTR_Test_Manager_Count > __CPTR_Test_Manager_Start_Id;
}

EXTERN_C_LINKAGE void TestSuite_myClass_cpp_684e9a73_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_myClass_cpp_684e9a73_callTest(const char*);

static void __CPTR_Do_Tests_TestSuite_myClass_cpp_684e9a73()
{
    CPPTEST_RUN_TEST_SUITE_BEGIN(TestSuite_myClass_cpp_684e9a73, "para_use/para_use/Source Files/myClass.cpp", 1)
        CPPTEST_RUN_TEST_SUITE_SETUP(TestSuite_myClass_cpp_684e9a73)
        CPPTEST_RUN_TEST_CASE(TestSuite_myClass_cpp_684e9a73, test_getIntValue_1)
        CPPTEST_RUN_TEST_SUITE_TEARDOWN(TestSuite_myClass_cpp_684e9a73)
    CPPTEST_RUN_TEST_SUITE_END(TestSuite_myClass_cpp_684e9a73, 1)
}

static void __CPTR_Do_Tests(void)
{
    /* If the runtime is not yet initialized do this now. */
    CppTest_InitializeRuntime();

    __CPTR_Test_Manager_Start_Id = cpptestGetIntPropertyEx("execution.start_after", __CPTR_Test_Manager_Start_Id);
    __CPTR_Test_Manager_TestSuite = cpptestGetProperty("execution.testsuite");
    __CPTR_Test_Manager_TestCase = cpptestGetProperty("execution.testcase");
#if CPPTEST_DATA_SOURCES_ENABLED
    CppTest_getDSFPtr = __CPTR_Get_Data_Source;
#endif
    cpptestTestRunnerBegin();
    __CPTR_Do_Tests_TestSuite_myClass_cpp_684e9a73();
    cpptestTestRunnerEnd();
}

static int __CPTR_Parse_Int_Option(const char* arg, const char* param, CPPTEST_INTEGER* value)
{
    unsigned int argLen = cpptestStrLen(arg);
    if (cpptestStrNCmp(arg, param, argLen) == 0) {
        CPPTEST_INTEGER tmpValue = 0;
        const char* end = cpptestStrToInteger(param + argLen, &tmpValue);
        if (*end == '\0') {
            *value = tmpValue;
            return 1;
        }
    }
    return 0;
}

static void __CPTR_Test_Manager_Init(int argc, char* argv[])
{
    int i;
    for (i = 0; i < argc; ++i) {
        if (__CPTR_Parse_Int_Option("--start-after=", argv[i], &__CPTR_Test_Manager_Start_Id)) {
            continue;
        }
    }
}

#if CPPTEST_WCHAR_ENABLED
static int __CPTR_Parse_Int_OptionW(const CppTest_wchar_t* arg, const CppTest_wchar_t* param, CPPTEST_INTEGER* value)
{
    unsigned int argLen = cpptestWStrLen(arg);
    if (cpptestWStrNCmp(arg, param, argLen) == 0) {
        CPPTEST_INTEGER tmpValue = 0;
        const CppTest_wchar_t* end = cpptestWStrToInteger(param + argLen, &tmpValue);
        if (*end == L'\0') {
            *value = tmpValue;
            return 1;
        }
    }
    return 0;
}

static void __CPTR_Test_Manager_InitW(int argc, CppTest_wchar_t* argv[])
{
    int i;
    for (i = 0; i < argc; ++i) {
        if (__CPTR_Parse_Int_OptionW(CPPTEST_const_wchar_t_ptr_CAST L"--start-after=", argv[i], &__CPTR_Test_Manager_Start_Id)) {
            continue;
        }
    }
}
#endif /* CPPTEST_WCHAR_ENABLED */

int CppTest_Main(int argc, char* argv[])
{
    CPPTEST_ENTER_MAIN_ROUTINE();

    __CPTR_Test_Manager_Init(argc, argv);

    __CPTR_Do_Tests();

    CPPTEST_EXIT_MAIN_ROUTINE();

    return 0;
}

#if CPPTEST_WCHAR_ENABLED
int CppTest_MainW(int argc, CppTest_wchar_t* argv[])
{
    CPPTEST_ENTER_MAIN_ROUTINE();

    __CPTR_Test_Manager_InitW(argc, argv);

    __CPTR_Do_Tests();

    CPPTEST_EXIT_MAIN_ROUTINE();

    return 0;
}
#endif /* CPPTEST_WCHAR_ENABLED */

