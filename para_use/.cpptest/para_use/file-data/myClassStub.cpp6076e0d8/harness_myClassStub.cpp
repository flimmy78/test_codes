#line 1 "e:\\test_code\\para_use\\para_use\\stubs\\myClassStub.cpp"

#define CPPTEST_INSTRUMENTATION

#include "cpptest_i.h"
#include "E:\test_code\para_use\.cpptest\para_use\unit-data\current_tubf179707\cpptest_stubconfig.h"


struct __CPTR_Dummy_Type {
    char nonEmpty;
};



#include "cpptest_runtime_i.h"

#ifdef __cplusplus
extern "C" void __CPTR_Initialize(void);
extern "C" void __CPTR_Finalize(void);

struct __CPTR_Initializer_3702486223_2596_4111973386 {
    __CPTR_Initializer_3702486223_2596_4111973386()
    {
        CPPTEST_INITIALIZE_RUNTIME();
    }
    ~__CPTR_Initializer_3702486223_2596_4111973386()
    {
        CPPTEST_FINALIZE_RUNTIME();
    }
};

#if CPPTEST_USE_GLOBAL_OBJECTS_TO_INIT_RUNTIME
static struct __CPTR_Initializer_3702486223_2596_4111973386 __CPTR_initializer_3702486223_2596_4111973386;
#endif

#define CPPTEST_ENTER_MAIN_ROUTINE() __CPTR_Initializer_3702486223_2596_4111973386 __CPTR_main_initializer

#define CPPTEST_EXIT_MAIN_ROUTINE()

#else
extern void __CPTR_Initialize(void);
extern void __CPTR_Finalize(void);

#define CPPTEST_ENTER_MAIN_ROUTINE() CPPTEST_INITIALIZE_RUNTIME()

#define CPPTEST_EXIT_MAIN_ROUTINE() CPPTEST_FINALIZE_RUNTIME()

#endif


#define _cpptest_strdata_var(id, bogus) _cpptest_strdata[id]
static 
const char* _cpptest_strdata[] = {
    0,
    0
};

#if defined(CPPTEST_STUB__ZN7myClass9addBigOneEii) || CPPTEST_ENABLE_ALL_STUBS
# if defined(CPPTEST_SAFE_STUB__ZN7myClass9addBigOneEii)
#  define CppTest_Stub__Call_addBigOne__ZN7myClass9addBigOneEii CppTest_Safe_Stub_addBigOne__ZN7myClass9addBigOneEii
#  if defined(CPPTEST_UNDEFINED__ZN7myClass9addBigOneEii)
#   define CppTest_Safe_Stub_addBigOne__ZN7myClass9addBigOneEii addBigOne
#  endif
# elif defined(CPPTEST_AUTO_STUB__ZN7myClass9addBigOneEii)
#  define CppTest_Stub__Call_addBigOne__ZN7myClass9addBigOneEii CppTest_Auto_Stub_addBigOne__ZN7myClass9addBigOneEii
#  if defined(CPPTEST_UNDEFINED__ZN7myClass9addBigOneEii)
#   define CppTest_Auto_Stub_addBigOne__ZN7myClass9addBigOneEii addBigOne
#  endif
# else
#  define CppTest_Stub__Call_addBigOne__ZN7myClass9addBigOneEii CppTest_Stub_addBigOne__ZN7myClass9addBigOneEii
#  if defined(CPPTEST_UNDEFINED__ZN7myClass9addBigOneEii)
#   define CppTest_Stub_addBigOne__ZN7myClass9addBigOneEii addBigOne
#  endif
#  define CPPTEST_USER_STUB__ZN7myClass9addBigOneEii
# endif
#else
# define CppTest_Stub__Call_addBigOne__ZN7myClass9addBigOneEii addBigOne
#endif

#if defined(CPPTEST_STUB_printf) || CPPTEST_ENABLE_ALL_STUBS
# if defined(CPPTEST_SAFE_STUB_printf)
#  define CppTest_Stub__Call_printf_printf CppTest_Safe_Stub_printf_printf
#  if defined(CPPTEST_UNDEFINED_printf)
#   define CppTest_Safe_Stub_printf_printf printf
#  endif
# elif defined(CPPTEST_AUTO_STUB_printf)
#  define CppTest_Stub__Call_printf_printf CppTest_Auto_Stub_printf_printf
#  if defined(CPPTEST_UNDEFINED_printf)
#   define CppTest_Auto_Stub_printf_printf printf
#  endif
# else
#  define CppTest_Stub__Call_printf_printf CppTest_Stub_printf_printf
#  if defined(CPPTEST_UNDEFINED_printf)
#   define CppTest_Stub_printf_printf printf
#  endif
#  define CPPTEST_USER_STUB_printf
# endif
#else
# define CppTest_Stub__Call_printf_printf printf
#endif


#line 11 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.1\\engine\\runtime\\include\\cpptest_pre.h"
struct CppTest_Dummy_Type { 
char nonEmpty; 
}; 

struct CppTest_Safe_Dummy_Type { 
char nonEmpty; 
}; 

struct CppTest_Auto_Dummy_Type { 
char nonEmpty; 
}; 


typedef CppTest_Dummy_Type &CppTest_Dummy; 

static CppTest_Dummy_Type CppTest_Dummy_InstanceT; 
static CppTest_Dummy CppTest_Dummy_Instance = CppTest_Dummy_InstanceT; 

typedef CppTest_Safe_Dummy_Type &CppTest_Safe_Dummy; 

static CppTest_Safe_Dummy_Type CppTest_Safe_Dummy_InstanceT; 
static CppTest_Safe_Dummy CppTest_Safe_Dummy_Instance = CppTest_Safe_Dummy_InstanceT; 

typedef CppTest_Auto_Dummy_Type &CppTest_Auto_Dummy; 

static CppTest_Auto_Dummy_Type CppTest_Auto_Dummy_InstanceT; 
static CppTest_Auto_Dummy CppTest_Auto_Dummy_Instance = CppTest_Auto_Dummy_InstanceT; 
#line 19 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\codeanalysis\\sourceannotations.h"
typedef unsigned size_t; 
#line 42
namespace vc_attributes { 



enum YesNoMaybe { 


No = 268369921, 
Maybe = 268369936, 
Yes = 268370176
}; 

typedef YesNoMaybe YesNoMaybe; 

enum AccessType { 

NoAccess, 
Read, 
Write, 
ReadWrite
}; 

typedef AccessType AccessType; 



[repeatable, 
source_annotation_attribute ( Parameter )] 
struct PreAttribute { 


PreAttribute(); 


unsigned Deref; 
YesNoMaybe Valid; 
YesNoMaybe Null; 
YesNoMaybe Tainted; 
AccessType Access; 
size_t ValidElementsConst; 
size_t ValidBytesConst; 
const __wchar_t *ValidElements; 
const __wchar_t *ValidBytes; 
const __wchar_t *ValidElementsLength; 
const __wchar_t *ValidBytesLength; 
size_t WritableElementsConst; 
size_t WritableBytesConst; 
const __wchar_t *WritableElements; 
const __wchar_t *WritableBytes; 
const __wchar_t *WritableElementsLength; 
const __wchar_t *WritableBytesLength; 
size_t ElementSizeConst; 
const __wchar_t *ElementSize; 
YesNoMaybe NullTerminated; 
const __wchar_t *Condition; 
}; 

[repeatable, 
source_annotation_attribute ( Parameter | ReturnValue )] 
struct PostAttribute { 


PostAttribute(); 


unsigned Deref; 
YesNoMaybe Valid; 
YesNoMaybe Null; 
YesNoMaybe Tainted; 
AccessType Access; 
size_t ValidElementsConst; 
size_t ValidBytesConst; 
const __wchar_t *ValidElements; 
const __wchar_t *ValidBytes; 
const __wchar_t *ValidElementsLength; 
const __wchar_t *ValidBytesLength; 
size_t WritableElementsConst; 
size_t WritableBytesConst; 
const __wchar_t *WritableElements; 
const __wchar_t *WritableBytes; 
const __wchar_t *WritableElementsLength; 
const __wchar_t *WritableBytesLength; 
size_t ElementSizeConst; 
const __wchar_t *ElementSize; 
YesNoMaybe NullTerminated; 
YesNoMaybe MustCheck; 
const __wchar_t *Condition; 
}; 

[source_annotation_attribute ( Parameter )] 
struct FormatStringAttribute { 


FormatStringAttribute(); 


const __wchar_t *Style; 
const __wchar_t *UnformattedAlternative; 
}; 

[repeatable, 
source_annotation_attribute ( ReturnValue )] 
struct InvalidCheckAttribute { 


InvalidCheckAttribute(); 


long Value; 
}; 

[source_annotation_attribute ( Method )] 
struct SuccessAttribute { 


SuccessAttribute(); 


const __wchar_t *Condition; 
}; 

[repeatable, 
source_annotation_attribute ( Parameter )] 
struct PreBoundAttribute { 


PreBoundAttribute(); 

unsigned Deref; 
}; 

[repeatable, 
source_annotation_attribute ( Parameter | ReturnValue )] 
struct PostBoundAttribute { 


PostBoundAttribute(); 

unsigned Deref; 
}; 

[repeatable, 
source_annotation_attribute ( Parameter )] 
struct PreRangeAttribute { 


PreRangeAttribute(); 

unsigned Deref; 
const char *MinVal; 
const char *MaxVal; 
}; 

[repeatable, 
source_annotation_attribute ( Parameter | ReturnValue )] 
struct PostRangeAttribute { 


PostRangeAttribute(); 

unsigned Deref; 
const char *MinVal; 
const char *MaxVal; 
}; 




}
#line 234
typedef vc_attributes::YesNoMaybe SA_YesNoMaybe; 
static const vc_attributes::YesNoMaybe SA_Yes = vc_attributes::Yes; 
static const vc_attributes::YesNoMaybe SA_No = vc_attributes::No; 
static const vc_attributes::YesNoMaybe SA_Maybe = vc_attributes::Maybe; 

typedef vc_attributes::AccessType SA_AccessType; 
static const vc_attributes::AccessType SA_NoAccess = vc_attributes::NoAccess; 
static const vc_attributes::AccessType SA_Read = vc_attributes::Read; 
static const vc_attributes::AccessType SA_Write = vc_attributes::Write; 
static const vc_attributes::AccessType SA_ReadWrite = vc_attributes::ReadWrite; 


typedef vc_attributes::PreAttribute SA_Pre; 
typedef vc_attributes::PostAttribute SA_Post; 
typedef vc_attributes::FormatStringAttribute SA_FormatString; 
typedef vc_attributes::InvalidCheckAttribute SA_InvalidCheck; 
typedef vc_attributes::SuccessAttribute SA_Success; 
typedef vc_attributes::PreBoundAttribute SA_PreBound; 
typedef vc_attributes::PostBoundAttribute SA_PostBound; 
typedef vc_attributes::PreRangeAttribute SA_PreRange; 
typedef vc_attributes::PostRangeAttribute SA_PostRange; 
#line 109 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
#pragma comment(linker, "/manifestdependency:\"type=\'win32\' name=\'Microsoft.VC90.DebugCRT\' version=\'9.0.21022.8\' processorArchitecture=\'x86\' publicKeyToken=\'1fc8b3b9a1e18e3b\'\"")
#line 168
#pragma pack ( push, 8 )
#line 32 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\vadefs.h"
#pragma pack ( push, 8 )
#line 52
extern "C" { typedef unsigned __w64 uintptr_t; }
#line 61
extern "C" { typedef char *va_list; }
#line 151
#pragma pack ( pop )
#line 497 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
extern "C" { typedef size_t rsize_t; }
#line 506
extern "C" { typedef int __w64 intptr_t; }
#line 524
extern "C" { typedef int __w64 ptrdiff_t; }
#line 535
extern "C" { typedef unsigned short wint_t; }
extern "C" { typedef unsigned short wctype_t; }
#line 560
extern "C" { __declspec(deprecated("This name was supported during some Whidbey pre-releases. Instead, use the standard name errno_t.")) typedef int errcode; }




extern "C" { typedef int errno_t; }



extern "C" { typedef long __w64 __time32_t; }




extern "C" { typedef __int64 __time64_t; }
#line 582
extern "C" { typedef __time64_t time_t; }
#line 2037
struct threadlocaleinfostruct; 
struct threadmbcinfostruct; 
extern "C" { typedef threadlocaleinfostruct *pthreadlocinfo; }
extern "C" { typedef threadmbcinfostruct *pthreadmbcinfo; }
struct __lc_time_data; 
#line 2047
extern "C" { typedef 
#line 2043
struct localeinfo_struct { 

pthreadlocinfo locinfo; 
pthreadmbcinfo mbcinfo; 
} _locale_tstruct, *_locale_t; }
#line 2054
extern "C" { typedef 
#line 2050
struct tagLC_ID { 
unsigned short wLanguage; 
unsigned short wCountry; 
unsigned short wCodePage; 
} LC_ID, *LPLC_ID; }
#line 2083
extern "C" { typedef 
#line 2059
struct threadlocaleinfostruct { 
int refcount; 
unsigned lc_codepage; 
unsigned lc_collate_cp; 
unsigned long lc_handle[6]; 
LC_ID lc_id[6]; 
struct { 
char *locale; 
__wchar_t *wlocale; 
int *refcount; 
int *wrefcount; 
} lc_category[6]; 
int lc_clike; 
int mb_cur_max; 
int *lconv_intl_refcount; 
int *lconv_num_refcount; 
int *lconv_mon_refcount; 
struct lconv *lconv; 
int *ctype1_refcount; 
unsigned short *ctype1; 
const unsigned short *pctype; 
const unsigned char *pclmap; 
const unsigned char *pcumap; 
__lc_time_data *lc_time_curr; 
} threadlocinfo; }
#line 2121
#pragma pack ( pop )
#line 31 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
#pragma pack ( push, 8 )
#line 56
extern "C" { typedef int (__cdecl *_onexit_t)(void); }
#line 82
extern "C" { typedef 
#line 79
struct _div_t { 
int quot; 
int rem; 
} div_t; }




extern "C" { typedef 
#line 84
struct _ldiv_t { 
long quot; 
long rem; 
} ldiv_t; }
#line 101
#pragma pack ( 4 )


extern "C" { typedef 
#line 102
struct { 
unsigned char ld[10]; 
} _LDOUBLE; }
#pragma pack ( )
#line 123
extern "C" { typedef 
#line 121
struct { 
double x; 
} _CRT_DOUBLE; }



extern "C" { typedef 
#line 125
struct { 
float f; 
} _CRT_FLOAT; }
#line 138
extern "C" { typedef 
#line 133
struct { 



long double x; 
} _LONGDOUBLE; }



#pragma pack ( 4 )


extern "C" { typedef 
#line 143
struct { 
unsigned char ld12[12]; 
} _LDBL12; }
#pragma pack ( )
#line 166
extern "C" __declspec(dllimport) int __mb_cur_max; 




extern "C" { __declspec(dllimport) int __cdecl ___mb_cur_max_func(); } 
extern "C" { __declspec(dllimport) int __cdecl ___mb_cur_max_l_func(_locale_t); } 
#line 211
extern "C" { typedef void (__cdecl *_purecall_handler)(void); }


extern "C" { __declspec(dllimport) _purecall_handler __cdecl _set_purecall_handler([SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _purecall_handler _Handler); } 
extern "C" { __declspec(dllimport) _purecall_handler __cdecl _get_purecall_handler(); } 
#line 239
extern "C" { typedef void (__cdecl *_invalid_parameter_handler)(const __wchar_t *, const __wchar_t *, const __wchar_t *, unsigned, uintptr_t); }


extern "C" { __declspec(dllimport) _invalid_parameter_handler __cdecl _set_invalid_parameter_handler([SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _invalid_parameter_handler _Handler); } 
extern "C" { __declspec(dllimport) _invalid_parameter_handler __cdecl _get_invalid_parameter_handler(); } 
#line 267
extern "C" { __declspec(dllimport) extern int *__cdecl _errno(); } 


extern "C" { errno_t __cdecl _set_errno([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Value); } 
extern "C" { errno_t __cdecl _get_errno([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] int * _Value); } 


extern "C" { __declspec(dllimport) unsigned long *__cdecl __doserrno(); } 


extern "C" { errno_t __cdecl _set_doserrno([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned long _Value); } 
extern "C" { errno_t __cdecl _get_doserrno([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] unsigned long * _Value); } 


extern "C" { __declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using strerror instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) char **__cdecl __sys_errlist(); } 


extern "C" { __declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using strerror instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) int *__cdecl __sys_nerr(); } 




extern "C" { __declspec(dllimport) int *__cdecl __p___argc(); } 
extern "C" { __declspec(dllimport) char ***__cdecl __p___argv(); } 
extern "C" { __declspec(dllimport) __wchar_t ***__cdecl __p___wargv(); } 
extern "C" { __declspec(dllimport) char ***__cdecl __p__environ(); } 
extern "C" { __declspec(dllimport) __wchar_t ***__cdecl __p__wenviron(); } 
extern "C" { __declspec(dllimport) char **__cdecl __p__pgmptr(); } 
extern "C" { __declspec(dllimport) __wchar_t **__cdecl __p__wpgmptr(); } 
#line 301
extern "C" __declspec(dllimport) int __argc; 
extern "C" __declspec(dllimport) char **__argv; 
extern "C" __declspec(dllimport) __wchar_t **__wargv; 
#line 317
extern "C" __declspec(dllimport) char **_environ; 
extern "C" __declspec(dllimport) __wchar_t **_wenviron; 


extern "C" __declspec(deprecated("This function or variable may be unsafe. Consider using _get_pgmptr instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) char *_pgmptr; 
extern "C" __declspec(deprecated("This function or variable may be unsafe. Consider using _get_wpgmptr instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) __wchar_t *_wpgmptr; 
#line 339
extern "C" { errno_t __cdecl _get_pgmptr([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Pre ( Deref = 2, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] char ** _Value); } 
extern "C" { errno_t __cdecl _get_wpgmptr([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Pre ( Deref = 2, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] __wchar_t ** _Value); } 



extern "C" __declspec(deprecated("This function or variable may be unsafe. Consider using _get_fmode instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) int _fmode; 
#line 350
extern "C" { __declspec(dllimport) errno_t __cdecl _set_fmode([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Mode); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _get_fmode([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] int * _PMode); } 
#line 360
template < typename _CountofType, size_t _SizeOfArray >
char ( * __countof_helper ( _CountofType ( & _Array ) [ _SizeOfArray ] ) ) [ _SizeOfArray ];
#line 371
extern "C" { __declspec(dllimport) __declspec(noreturn) void __cdecl exit([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Code); } 
extern "C" { __declspec(dllimport) __declspec(noreturn) void __cdecl _exit([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Code); } 
extern "C" { __declspec(dllimport) void __cdecl abort(); } 


extern "C" { __declspec(dllimport) unsigned __cdecl _set_abort_behavior([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned _Flags, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned _Mask); } 



extern "C" { int __cdecl abs([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _X); } 
extern "C" { long __cdecl labs([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] long _X); } 


extern "C" { __int64 __cdecl _abs64(__int64); } 
#line 412
extern "C" { int __cdecl atexit(void (__cdecl *)(void)); } 



[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) double __cdecl atof([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _String); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) double __cdecl _atof_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _String, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 

[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl atoi([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Str); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _atoi_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Str, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) long __cdecl atol([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Str); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) long __cdecl _atol_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Str, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 



[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) void *__cdecl bsearch_s([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] const void * _Key, [SA_Pre ( Null = SA_No, ValidBytes = "\n@_NumOfElements * _SizeOfElements" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const void * _Base, 
[SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] rsize_t _NumOfElements, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] rsize_t _SizeOfElements, 
[SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int (__cdecl * _PtFuncCompare)(void *, const void *, const void *), void * _Context); } 

[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) void *__cdecl bsearch([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] const void * _Key, [SA_Pre ( Null = SA_No, ValidBytes = "\n@_NumOfElements * _SizeOfElements" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const void * _Base, 
[SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _NumOfElements, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeOfElements, 
[SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int (__cdecl * _PtFuncCompare)(const void *, const void *)); } 


extern "C" { __declspec(dllimport) void __cdecl qsort_s([SA_Pre ( Null = SA_No, WritableBytes = "\n@_NumOfElements* _SizeOfElements" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] void * _Base, 
[SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] rsize_t _NumOfElements, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] rsize_t _SizeOfElements, 
[SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int (__cdecl * _PtFuncCompare)(void *, const void *, const void *), void * _Context); } 

extern "C" { __declspec(dllimport) void __cdecl qsort([SA_Pre ( Null = SA_No, WritableBytes = "\n@_NumOfElements * _SizeOfElements" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] void * _Base, 
[SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _NumOfElements, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeOfElements, 
[SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int (__cdecl * _PtFuncCompare)(const void *, const void *)); } 

[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { unsigned short __cdecl _byteswap_ushort([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned short _Short); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { unsigned long __cdecl _byteswap_ulong([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned long _Long); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { unsigned __int64 __cdecl _byteswap_uint64([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned __int64 _Int64); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) div_t __cdecl div([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Numerator, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Denominator); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using _dupenv_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) char *__cdecl getenv([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _VarName); } 

extern "C" { __declspec(dllimport) errno_t __cdecl getenv_s([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] size_t * _ReturnSize, [SA_Pre ( Null = SA_No, WritableElements = "_DstSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] rsize_t _DstSize, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _VarName); } 

template < size_t _Size > inline errno_t __cdecl getenv_s ( [ SA_Pre ( Null = SA_No, WritableElementsConst = 1 ) ] [ SA_Pre ( Deref = 1, Valid = SA_No ) ] size_t * _ReturnSize, char ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const char * _VarName ) { return getenv_s ( _ReturnSize, _Dest, _Size, _VarName ); }
#line 457
extern "C" { __declspec(dllimport) errno_t __cdecl _dupenv_s([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_Maybe, NullTerminated = SA_Yes, WritableElements = "*_PBufferSizeInBytes" ), SA_Post ( Deref = 2, Valid = SA_Yes )] char ** _PBuffer, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] size_t * _PBufferSizeInBytes, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _VarName); } 
#line 463
extern "C" { __declspec(dllimport) errno_t __cdecl _itoa_s([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Value, [SA_Pre ( Null = SA_No, WritableElements = "_Size" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
template < size_t _Size > inline errno_t __cdecl _itoa_s ( [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] int _Value, char ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] int _Radix ) { return _itoa_s ( _Value, _Dest, _Size, _Radix ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _itoa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) char *__cdecl _itoa([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Value, [SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Dest, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _i64toa_s([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __int64 _Val, [SA_Pre ( Null = SA_No, WritableElements = "_Size" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
extern "C" { __declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using _i64toa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) char *__cdecl _i64toa([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __int64 _Val, [SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _ui64toa_s([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned __int64 _Val, [SA_Pre ( Null = SA_No, WritableElements = "_Size" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
extern "C" { __declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using _ui64toa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) char *__cdecl _ui64toa([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned __int64 _Val, [SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) __int64 __cdecl _atoi64([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _String); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) __int64 __cdecl _atoi64_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _String, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) __int64 __cdecl _strtoi64([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _String, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] char ** _EndPtr, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) __int64 __cdecl _strtoi64_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _String, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] char ** _EndPtr, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) unsigned __int64 __cdecl _strtoui64([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _String, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] char ** _EndPtr, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) unsigned __int64 __cdecl _strtoui64_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _String, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] char ** _EndPtr, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) ldiv_t __cdecl ldiv([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] long _Numerator, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] long _Denominator); } 



inline ldiv_t div([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] long _A1, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] long _A2) 
{ 
return ldiv(_A1, _A2); 
} 


extern "C" { __declspec(dllimport) errno_t __cdecl _ltoa_s([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] long _Val, [SA_Pre ( Null = SA_No, WritableElements = "_Size" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
template < size_t _Size > inline errno_t __cdecl _ltoa_s ( [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] long _Value, char ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] int _Radix ) { return _ltoa_s ( _Value, _Dest, _Size, _Radix ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _ltoa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) char *__cdecl _ltoa([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] long _Value, [SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Dest, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl mblen([SA_Pre ( Null = SA_Maybe, ValidBytes = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes )] const char * _Ch, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _mblen_l([SA_Pre ( Null = SA_Maybe, ValidBytes = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes )] const char * _Ch, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) size_t __cdecl _mbstrlen([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Str); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) size_t __cdecl _mbstrlen_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Str, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) size_t __cdecl _mbstrnlen([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Str, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) size_t __cdecl _mbstrnlen_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Str, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
extern "C" { __declspec(dllimport) int __cdecl mbtowc([SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstCh, [SA_Pre ( Null = SA_Maybe, ValidBytes = "_SrcSizeInBytes" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes )] const char * _SrcCh, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SrcSizeInBytes); } 
extern "C" { __declspec(dllimport) int __cdecl _mbtowc_l([SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstCh, [SA_Pre ( Null = SA_Maybe, ValidBytes = "_SrcSizeInBytes" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes )] const char * _SrcCh, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SrcSizeInBytes, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
extern "C" { __declspec(dllimport) errno_t __cdecl mbstowcs_s([SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] size_t * _PtNumOfCharConverted, [SA_Pre ( Null = SA_Maybe, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( ValidElements = "*_PtNumOfCharConverted" ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_No, ValidElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes )] const char * _SrcBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount); } 
template < size_t _Size > inline errno_t __cdecl mbstowcs_s ( [ SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ) ] [ SA_Pre ( Deref = 1, Valid = SA_No ) ] size_t * _PtNumOfCharConverted, [ SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Post ( Deref = 2, Valid = SA_Yes ) ] wchar_t ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const char * _Source, [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] size_t _MaxCount ) { return mbstowcs_s ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using mbstowcs_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) size_t __cdecl mbstowcs([SA_Pre ( Null = SA_Maybe, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dest, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Source, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount); } 

extern "C" { __declspec(dllimport) errno_t __cdecl _mbstowcs_s_l([SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] size_t * _PtNumOfCharConverted, [SA_Pre ( Null = SA_Maybe, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( ValidElements = "*_PtNumOfCharConverted" ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_No, ValidElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes )] const char * _SrcBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
template < size_t _Size > inline errno_t __cdecl _mbstowcs_s_l ( [ SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ) ] [ SA_Pre ( Deref = 1, Valid = SA_No ) ] size_t * _PtNumOfCharConverted, wchar_t ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const char * _Source, [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] size_t _MaxCount, [ SA_Pre ( Null = SA_Maybe ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] _locale_t _Locale ) { return _mbstowcs_s_l ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _mbstowcs_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __declspec(dllimport) size_t __cdecl _mbstowcs_l([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dest, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Source, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 

[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl rand(); } 




extern "C" { __declspec(dllimport) int __cdecl _set_error_mode([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Mode); } 

extern "C" { __declspec(dllimport) void __cdecl srand([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned _Seed); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) double __cdecl strtod([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Str, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] char ** _EndPtr); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) double __cdecl _strtod_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Str, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] char ** _EndPtr, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) long __cdecl strtol([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Str, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] char ** _EndPtr, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) long __cdecl _strtol_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Str, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] char ** _EndPtr, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) unsigned long __cdecl strtoul([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Str, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] char ** _EndPtr, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) unsigned long __cdecl _strtoul_l(const char * _Str, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] char ** _EndPtr, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 


extern "C" { __declspec(dllimport) int __cdecl system([SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Command); } 

extern "C" { __declspec(dllimport) errno_t __cdecl _ultoa_s([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned long _Val, [SA_Pre ( Null = SA_No, WritableElements = "_Size" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
template < size_t _Size > inline errno_t __cdecl _ultoa_s ( [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] unsigned long _Value, char ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] int _Radix ) { return _ultoa_s ( _Value, _Dest, _Size, _Radix ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _ultoa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) char *__cdecl _ultoa([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned long _Value, [SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Dest, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
extern "C" { __declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using wctomb_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) int __cdecl wctomb([SA_Pre ( Null = SA_Maybe, WritableBytesConst = 5 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _MbCh, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __wchar_t _WCh); } 
extern "C" { __declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using _wctomb_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) int __cdecl _wctomb_l([SA_Pre ( Null = SA_Maybe ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _MbCh, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __wchar_t _WCh, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 

extern "C" { __declspec(dllimport) errno_t __cdecl wctomb_s([SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] int * _SizeConverted, [SA_Pre ( Null = SA_Maybe, WritableBytes = "_SizeInBytes" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( ValidBytes = "*_SizeConverted" ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _MbCh, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] rsize_t _SizeInBytes, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __wchar_t _WCh); } 

extern "C" { __declspec(dllimport) errno_t __cdecl _wctomb_s_l([SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] int * _SizeConverted, [SA_Pre ( Null = SA_Maybe, WritableBytes = "_SizeInBytes" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _MbCh, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInBytes, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __wchar_t _WCh, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
extern "C" { __declspec(dllimport) errno_t __cdecl wcstombs_s([SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] size_t * _PtNumOfCharConverted, [SA_Pre ( Null = SA_Maybe, WritableBytes = "_DstSizeInBytes" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( ValidBytes = "*_PtNumOfCharConverted" ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Dst, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _DstSizeInBytes, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Src, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCountInBytes); } 
template < size_t _Size > inline errno_t __cdecl wcstombs_s ( [ SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ) ] [ SA_Pre ( Deref = 1, Valid = SA_No ) ] size_t * _PtNumOfCharConverted, [ SA_Pre ( Null = SA_Maybe, WritableBytes = "_Size" ) ] [ SA_Pre ( Deref = 1, Valid = SA_No ) ] char ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const wchar_t * _Source, [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] size_t _MaxCount ) { return wcstombs_s ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using wcstombs_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) size_t __cdecl wcstombs([SA_Pre ( Null = SA_Maybe, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Dest, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Source, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wcstombs_s_l([SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] size_t * _PtNumOfCharConverted, [SA_Pre ( Null = SA_Maybe, WritableBytes = "_DstSizeInBytes" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( ValidBytes = "*_PtNumOfCharConverted" ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Dst, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _DstSizeInBytes, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Src, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCountInBytes, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
template < size_t _Size > inline errno_t __cdecl _wcstombs_s_l ( [ SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ) ] [ SA_Pre ( Deref = 1, Valid = SA_No ) ] size_t * _PtNumOfCharConverted, [ SA_Pre ( Null = SA_Maybe, WritableElements = "_Size" ) ] [ SA_Pre ( Deref = 1, Valid = SA_No ) ] char ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const wchar_t * _Source, [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] size_t _MaxCount, [ SA_Pre ( Null = SA_Maybe ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] _locale_t _Locale ) { return _wcstombs_s_l ( _PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcstombs_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __declspec(dllimport) size_t __cdecl _wcstombs_l([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Dest, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Source, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
#line 599
[returnvalue : SA_Post ( MustCheck = SA_Yes ), returnvalue : SA_Post ( Null = SA_Maybe, WritableBytes = "\n@_NumOfElements* _SizeOfElements" )] extern "C" { __declspec(dllimport) __declspec(noalias) __declspec(restrict) void *__cdecl calloc([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _NumOfElements, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeOfElements); } 
extern "C" { __declspec(dllimport) __declspec(noalias) void __cdecl free([SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] void * _Memory); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes ), returnvalue : SA_Post ( Null = SA_Maybe, WritableBytes = "_Size" )] extern "C" { __declspec(dllimport) __declspec(noalias) __declspec(restrict) void *__cdecl malloc([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes ), returnvalue : SA_Post ( Null = SA_Maybe, WritableBytes = "_NewSize" )] extern "C" { __declspec(dllimport) __declspec(noalias) __declspec(restrict) void *__cdecl realloc([SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] void * _Memory, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _NewSize); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes ), returnvalue : SA_Post ( Null = SA_Maybe, WritableBytes = "\n@_Count*_Size" )] extern "C" { __declspec(dllimport) __declspec(noalias) __declspec(restrict) void *__cdecl _recalloc([SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] void * _Memory, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size); } 
extern "C" { __declspec(dllimport) __declspec(noalias) void __cdecl _aligned_free([SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] void * _Memory); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes ), returnvalue : SA_Post ( Null = SA_Maybe, WritableBytes = "_Size" )] extern "C" { __declspec(dllimport) __declspec(noalias) __declspec(restrict) void *__cdecl _aligned_malloc([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Alignment); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes ), returnvalue : SA_Post ( Null = SA_Maybe, WritableBytes = "_Size" )] extern "C" { __declspec(dllimport) __declspec(noalias) __declspec(restrict) void *__cdecl _aligned_offset_malloc([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Alignment, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Offset); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes ), returnvalue : SA_Post ( Null = SA_Maybe, WritableBytes = "_NewSize" )] extern "C" { __declspec(dllimport) __declspec(noalias) __declspec(restrict) void *__cdecl _aligned_realloc([SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] void * _Memory, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _NewSize, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Alignment); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes ), returnvalue : SA_Post ( Null = SA_Maybe, WritableBytes = "\n@_Count*_Size" )] extern "C" { __declspec(dllimport) __declspec(noalias) __declspec(restrict) void *__cdecl _aligned_recalloc([SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] void * _Memory, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Alignment); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes ), returnvalue : SA_Post ( Null = SA_Maybe, WritableBytes = "_NewSize" )] extern "C" { __declspec(dllimport) __declspec(noalias) __declspec(restrict) void *__cdecl _aligned_offset_realloc([SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] void * _Memory, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _NewSize, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Alignment, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Offset); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes ), returnvalue : SA_Post ( Null = SA_Maybe, WritableBytes = "\n@_Count*_Size" )] extern "C" { __declspec(dllimport) __declspec(noalias) __declspec(restrict) void *__cdecl _aligned_offset_recalloc([SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] void * _Memory, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Alignment, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Offset); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) size_t __cdecl _aligned_msize([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] void * _Memory, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Alignment, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Offset); } 
#line 638
extern "C" { __declspec(dllimport) errno_t __cdecl _itow_s([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Val, [SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
template < size_t _Size > inline errno_t __cdecl _itow_s ( [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] int _Value, wchar_t ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] int _Radix ) { return _itow_s ( _Value, _Dest, _Size, _Radix ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _itow_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _itow([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Value, [SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dest, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _ltow_s([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] long _Val, [SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
template < size_t _Size > inline errno_t __cdecl _ltow_s ( [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] long _Value, wchar_t ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] int _Radix ) { return _ltow_s ( _Value, _Dest, _Size, _Radix ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _ltow_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _ltow([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] long _Value, [SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dest, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _ultow_s([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned long _Val, [SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
template < size_t _Size > inline errno_t __cdecl _ultow_s ( [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] unsigned long _Value, wchar_t ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] int _Radix ) { return _ultow_s ( _Value, _Dest, _Size, _Radix ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _ultow_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _ultow([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned long _Value, [SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dest, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) double __cdecl wcstod([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] __wchar_t ** _EndPtr); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) double __cdecl _wcstod_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] __wchar_t ** _EndPtr, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) long __cdecl wcstol([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] __wchar_t ** _EndPtr, int _Radix); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) long __cdecl _wcstol_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] __wchar_t ** _EndPtr, int _Radix, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) unsigned long __cdecl wcstoul([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] __wchar_t ** _EndPtr, int _Radix); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) unsigned long __cdecl _wcstoul_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] __wchar_t ** _EndPtr, int _Radix, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using _wdupenv_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __wchar_t *__cdecl _wgetenv([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _VarName); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wgetenv_s([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] size_t * _ReturnSize, [SA_Pre ( Null = SA_No, WritableElements = "_DstSizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _DstSizeInWords, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _VarName); } 
template < size_t _Size > inline errno_t __cdecl _wgetenv_s ( [ SA_Pre ( Null = SA_No, WritableElementsConst = 1 ) ] [ SA_Pre ( Deref = 1, Valid = SA_No ) ] size_t * _ReturnSize, wchar_t ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const wchar_t * _VarName ) { return _wgetenv_s ( _ReturnSize, _Dest, _Size, _VarName ); }
#line 662
extern "C" { __declspec(dllimport) errno_t __cdecl _wdupenv_s([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_Maybe, NullTerminated = SA_Yes, WritableElements = "*_BufferSizeInWords" ), SA_Post ( Deref = 2, Valid = SA_Yes )] __wchar_t ** _Buffer, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] size_t * _BufferSizeInWords, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _VarName); } 
#line 670
extern "C" { __declspec(dllimport) int __cdecl _wsystem([SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Command); } 

[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) double __cdecl _wtof([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) double __cdecl _wtof_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wtoi([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wtoi_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) long __cdecl _wtol([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) long __cdecl _wtol_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 

extern "C" { __declspec(dllimport) errno_t __cdecl _i64tow_s([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __int64 _Val, [SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
extern "C" { __declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using _i64tow_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __wchar_t *__cdecl _i64tow([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __int64 _Val, [SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _ui64tow_s([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned __int64 _Val, [SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
extern "C" { __declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using _ui64tow_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __wchar_t *__cdecl _ui64tow([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned __int64 _Val, [SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) __int64 __cdecl _wtoi64([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) __int64 __cdecl _wtoi64_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) __int64 __cdecl _wcstoi64([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] __wchar_t ** _EndPtr, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) __int64 __cdecl _wcstoi64_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] __wchar_t ** _EndPtr, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) unsigned __int64 __cdecl _wcstoui64([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] __wchar_t ** _EndPtr, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) unsigned __int64 __cdecl _wcstoui64_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] __wchar_t ** _EndPtr, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
#line 708
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) char *__cdecl _fullpath([SA_Pre ( Null = SA_Maybe, WritableElements = "_SizeInBytes" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _FullPath, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Path, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInBytes); } 
#line 716
extern "C" { __declspec(dllimport) errno_t __cdecl _ecvt_s([SA_Pre ( Null = SA_No, WritableElements = "_Size" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] double _Val, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _NumOfDights, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] int * _PtDec, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] int * _PtSign); } 
template < size_t _Size > inline errno_t __cdecl _ecvt_s ( char ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] double _Value, [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] int _NumOfDigits, [ SA_Pre ( Null = SA_No, WritableElementsConst = 1 ) ] [ SA_Pre ( Deref = 1, Valid = SA_No ) ] int * _PtDec, [ SA_Pre ( Null = SA_No, WritableElementsConst = 1 ) ] [ SA_Pre ( Deref = 1, Valid = SA_No ) ] int * _PtSign ) { return _ecvt_s ( _Dest, _Size, _Value, _NumOfDigits, _PtDec, _PtSign ); }
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using _ecvt_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) char *__cdecl _ecvt([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] double _Val, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _NumOfDigits, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] int * _PtDec, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] int * _PtSign); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _fcvt_s([SA_Pre ( Null = SA_No, WritableElements = "_Size" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] double _Val, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _NumOfDec, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] int * _PtDec, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] int * _PtSign); } 
template < size_t _Size > inline errno_t __cdecl _fcvt_s ( char ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] double _Value, [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] int _NumOfDigits, [ SA_Pre ( Null = SA_No, WritableElementsConst = 1 ) ] [ SA_Pre ( Deref = 1, Valid = SA_No ) ] int * _PtDec, [ SA_Pre ( Null = SA_No, WritableElementsConst = 1 ) ] [ SA_Pre ( Deref = 1, Valid = SA_No ) ] int * _PtSign ) { return _fcvt_s ( _Dest, _Size, _Value, _NumOfDigits, _PtDec, _PtSign ); }
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using _fcvt_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) char *__cdecl _fcvt([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] double _Val, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _NumOfDec, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] int * _PtDec, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] int * _PtSign); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _gcvt_s([SA_Pre ( Null = SA_No, WritableElements = "_Size" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] double _Val, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _NumOfDigits); } 
template < size_t _Size > inline errno_t __cdecl _gcvt_s ( char ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] double _Value, [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] int _NumOfDigits ) { return _gcvt_s ( _Dest, _Size, _Value, _NumOfDigits ); }
extern "C" { __declspec(dllimport) __declspec(deprecated("This function or variable may be unsafe. Consider using _gcvt_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) char *__cdecl _gcvt([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] double _Val, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _NumOfDigits, [SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf); } 

[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _atodbl([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] _CRT_DOUBLE * _Result, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] char * _Str); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _atoldbl([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] _LDOUBLE * _Result, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] char * _Str); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _atoflt([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] _CRT_FLOAT * _Result, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] char * _Str); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _atodbl_l([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] _CRT_DOUBLE * _Result, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] char * _Str, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _atoldbl_l([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] _LDOUBLE * _Result, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] char * _Str, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _atoflt_l([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] _CRT_FLOAT * _Result, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] char * _Str, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { unsigned long __cdecl _lrotl([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned long _Val, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Shift); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { unsigned long __cdecl _lrotr([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned long _Val, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Shift); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _makepath_s([SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _PathResult, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Drive, [SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Dir, [SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Filename, 
[SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Ext); } 
template < size_t _Size > inline errno_t __cdecl _makepath_s ( char ( & _Path ) [ _Size ], [ SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const char * _Drive, [ SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const char * _Dir, [ SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const char * _Filename, [ SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const char * _Ext ) { return _makepath_s ( _Path, _Size, _Drive, _Dir, _Filename, _Ext ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _makepath_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) void __cdecl _makepath([SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Path, [SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Drive, [SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Dir, [SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Filename, [SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Ext); } 
#line 764
extern "C" { _onexit_t __cdecl _onexit([SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _onexit_t _Func); } 




extern "C" { __declspec(dllimport) void __cdecl perror([SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _ErrMsg); } 


/* Removed pragma: #pragma warning (push)*/
/* Removed pragma: #pragma warning (disable:6540)*/
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _putenv([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _EnvString); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _putenv_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Name, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Value); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { unsigned __cdecl _rotl([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned _Val, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Shift); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { unsigned __int64 __cdecl _rotl64([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned __int64 _Val, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Shift); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { unsigned __cdecl _rotr([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned _Val, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Shift); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { unsigned __int64 __cdecl _rotr64([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned __int64 _Val, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Shift); } 
/* Removed pragma: #pragma warning (pop)*/

extern "C" { __declspec(dllimport) errno_t __cdecl _searchenv_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _EnvVar, [SA_Pre ( Null = SA_No, WritableElements = "_SizeInBytes" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _ResultPath, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInBytes); } 
template < size_t _Size > inline errno_t __cdecl _searchenv_s ( [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const char * _Filename, [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const char * _EnvVar, char ( & _ResultPath ) [ _Size ] ) { return _searchenv_s ( _Filename, _EnvVar, _ResultPath, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _searchenv_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) void __cdecl _searchenv([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _EnvVar, [SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _ResultPath); } 

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _splitpath_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) void __cdecl _splitpath([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _FullPath, [SA_Pre ( Null = SA_Maybe ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Drive, [SA_Pre ( Null = SA_Maybe ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Dir, [SA_Pre ( Null = SA_Maybe ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Filename, [SA_Pre ( Null = SA_Maybe ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Ext); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _splitpath_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _FullPath, 
[SA_Pre ( Null = SA_Maybe, WritableElements = "_DriveSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Drive, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _DriveSize, 
[SA_Pre ( Null = SA_Maybe, WritableElements = "_DirSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Dir, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _DirSize, 
[SA_Pre ( Null = SA_Maybe, WritableElements = "_FilenameSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Filename, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _FilenameSize, 
[SA_Pre ( Null = SA_Maybe, WritableElements = "_ExtSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Ext, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _ExtSize); } 
template < size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize > inline errno_t __cdecl _splitpath_s ( [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] const char * _Dest, char ( & _Drive ) [ _DriveSize ], char ( & _Dir ) [ _DirSize ], char ( & _Name ) [ _NameSize ], char ( & _Ext ) [ _ExtSize ] ) { return _splitpath_s ( _Dest, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize ); }

extern "C" { __declspec(dllimport) void __cdecl _swab([SA_Pre ( Null = SA_No, WritableElements = "_SizeInBytes" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes ), SA_Post ( ValidElements = "_SizeInBytes" ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Buf1, [SA_Pre ( Null = SA_No, WritableElements = "_SizeInBytes" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes ), SA_Post ( ValidElements = "_SizeInBytes" ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Buf2, int _SizeInBytes); } 
#line 805
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wfullpath([SA_Pre ( Null = SA_Maybe, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _FullPath, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Path, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords); } 
#line 811
extern "C" { __declspec(dllimport) errno_t __cdecl _wmakepath_s([SA_Pre ( Null = SA_No, WritableElements = "_SIZE" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _PathResult, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SIZE, [SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Drive, [SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Dir, [SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, 
[SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Ext); } 
template < size_t _Size > inline errno_t __cdecl _wmakepath_s ( wchar_t ( & _ResultPath ) [ _Size ], [ SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const wchar_t * _Drive, [ SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const wchar_t * _Dir, [ SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const wchar_t * _Filename, [ SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const wchar_t * _Ext ) { return _wmakepath_s ( _ResultPath, _Size, _Drive, _Dir, _Filename, _Ext ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wmakepath_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) void __cdecl _wmakepath([SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _ResultPath, [SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Drive, [SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Dir, [SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Ext); } 


extern "C" { __declspec(dllimport) void __cdecl _wperror([SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _ErrMsg); } 

[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wputenv([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _EnvString); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wputenv_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Name, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Value); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wsearchenv_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _EnvVar, [SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _ResultPath, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords); } 
template < size_t _Size > inline errno_t __cdecl _wsearchenv_s ( [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const wchar_t * _Filename, [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const wchar_t * _EnvVar, wchar_t ( & _ResultPath ) [ _Size ] ) { return _wsearchenv_s ( _Filename, _EnvVar, _ResultPath, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wsearchenv_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __declspec(dllimport) void __cdecl _wsearchenv([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _EnvVar, [SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _ResultPath); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wsplitpath_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __declspec(dllimport) void __cdecl _wsplitpath([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _FullPath, [SA_Pre ( Null = SA_Maybe ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Drive, [SA_Pre ( Null = SA_Maybe ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dir, [SA_Pre ( Null = SA_Maybe ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Filename, [SA_Pre ( Null = SA_Maybe ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Ext); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wsplitpath_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _FullPath, 
[SA_Pre ( Null = SA_Maybe, WritableElements = "_DriveSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Drive, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _DriveSize, 
[SA_Pre ( Null = SA_Maybe, WritableElements = "_DirSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dir, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _DirSize, 
[SA_Pre ( Null = SA_Maybe, WritableElements = "_FilenameSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Filename, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _FilenameSize, 
[SA_Pre ( Null = SA_Maybe, WritableElements = "_ExtSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Ext, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _ExtSize); } 
template < size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize > inline errno_t __cdecl _wsplitpath_s ( [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] const wchar_t * _Path, wchar_t ( & _Drive ) [ _DriveSize ], wchar_t ( & _Dir ) [ _DirSize ], wchar_t ( & _Name ) [ _NameSize ], wchar_t ( & _Ext ) [ _ExtSize ] ) { return _wsplitpath_s ( _Path, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize ); }
#line 836
extern "C" { __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetErrorMode in" "stead. See online help for details.")) __declspec(dllimport) void __cdecl _seterrormode([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Mode); } 
extern "C" { __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Beep instead. S" "ee online help for details.")) __declspec(dllimport) void __cdecl _beep([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned _Frequency, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned _Duration); } 
extern "C" { __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Sleep instead. " "See online help for details.")) __declspec(dllimport) void __cdecl _sleep([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned long _Duration); } 
#line 857
/* Removed pragma: #pragma warning(push)*/
/* Removed pragma: #pragma warning(disable: 4141)*/
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _ecvt. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _ecvt_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) char *__cdecl ecvt([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] double _Val, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _NumOfDigits, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] int * _PtDec, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] int * _PtSign); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _fcvt. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _fcvt_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) char *__cdecl fcvt([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] double _Val, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _NumOfDec, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] int * _PtDec, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] int * _PtSign); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _gcvt. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _fcvt_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) char *__cdecl gcvt([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] double _Val, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _NumOfDigits, [SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _itoa. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _itoa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) char *__cdecl itoa([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Val, [SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _ltoa. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _ltoa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) char *__cdecl ltoa([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] long _Val, [SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _putenv. See online help for details.")) __declspec(dllimport) int __cdecl putenv([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _EnvString); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _swab. See online help for details.")) __declspec(dllimport) void __cdecl swab([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes, WritableBytes = "_SizeInBytes" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Buf1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes, WritableBytes = "_SizeInBytes" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Buf2, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _SizeInBytes); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _ultoa. See online help for details.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _ultoa_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) char *__cdecl ultoa([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned long _Val, [SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Dstbuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Radix); } 
/* Removed pragma: #pragma warning(pop)*/
extern "C" { _onexit_t __cdecl onexit([SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _onexit_t _Func); } 
#line 880
#pragma pack ( pop )
#line 28 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.1\\engine\\runtime\\include\\cpptest_common.h"
typedef 
#line 21
struct { 

char *ptr; 

size_t len; 

size_t size; 
} CppTestExpandableString; 
#line 37
typedef 
#line 30
struct CppTestListElement_s { 

char *data; 

CppTestListElement_s *next; 

CppTestListElement_s *prev; 
} CppTestListElement; 
#line 44
typedef 
#line 39
struct { 

CppTestListElement *head; 

CppTestListElement *tail; 
} CppTestList; 

typedef CppTestListElement *CppTestListIterator; 
typedef const CppTestListElement *CppTestListConstIterator; 

typedef unsigned long CppTest_ULong; 



typedef __wchar_t CppTest_wchar_t; 



extern "C" __declspec(dllimport) void __cdecl cpptestExpandableStringInit(CppTestExpandableString * es, size_t initSize); 



extern "C" __declspec(dllimport) void __cdecl cpptestExpandableStringExpand(CppTestExpandableString * es); 



extern "C" __declspec(dllimport) void __cdecl cpptestExpandableStringAppend(CppTestExpandableString * es, const char * str, size_t len); 



extern "C" __declspec(dllimport) void __cdecl cpptestExpandableStringAppendChar(CppTestExpandableString * es, char c); 



extern "C" __declspec(dllimport) void __cdecl cpptestExpandableStringDispose(CppTestExpandableString * es); 



extern "C" __declspec(dllimport) void __cdecl cpptestListInit(CppTestList * l); 


extern "C" { typedef void (__cdecl *ListElementDestructor)(char * data, void * additionalParameter); }



extern "C" __declspec(dllimport) void __cdecl cpptestListClear(CppTestList * l, ListElementDestructor destructor, void * additionalParameter); 


extern "C" __declspec(dllimport) CppTestListIterator __cdecl cpptestListRemove(CppTestList * l, CppTestListIterator it); 


extern "C" __declspec(dllimport) void __cdecl cpptestListPushFront(CppTestList * l, char * data); 


extern "C" __declspec(dllimport) char *__cdecl cpptestListFrontElement(const CppTestList * l); 


extern "C" __declspec(dllimport) void __cdecl cpptestListPushBack(CppTestList * l, char * data); 


extern "C" __declspec(dllimport) CppTestListIterator __cdecl cpptestListGetIterator(const CppTestList * l); 


extern "C" __declspec(dllimport) char *__cdecl cpptestListIteratorElement(CppTestListConstIterator it); 


extern "C" __declspec(dllimport) CppTestListIterator __cdecl cpptestListIteratorNext(CppTestListConstIterator it); 


extern "C" __declspec(dllimport) int __cdecl cpptestListIteratorEnd(CppTestListConstIterator it); 


extern "C" __declspec(dllimport) char *__cdecl cpptestStrDup(const char * str); 


extern "C" __declspec(dllimport) unsigned __cdecl cpptestStrLen(const char * str); 


extern "C" __declspec(dllimport) int __cdecl cpptestStrCmp(const char * str1, const char * str2); 


extern "C" __declspec(dllimport) int __cdecl cpptestStrNCmp(const char * str1, const char * str2, unsigned n); 


extern "C" __declspec(dllimport) int __cdecl cpptestStrCaseCmp(const char * str1, const char * str2); 


extern "C" __declspec(dllimport) int __cdecl cpptestStrNCaseCmp(const char * str1, const char * str2, unsigned n); 


extern "C" __declspec(dllimport) unsigned __cdecl cpptestCharToDigit(char c); 


extern "C" __declspec(dllimport) const char *__cdecl cpptestStrToInteger(const char * str, __int64 * integer); 


extern "C" __declspec(dllimport) const char *__cdecl cpptestStrToUInteger(const char * str, unsigned __int64 * uinteger); 


extern "C" __declspec(dllimport) const char *__cdecl cpptestStrToBool(const char * str, int * result); 


extern "C" __declspec(dllimport) char *__cdecl cpptestAllocateString(size_t size, unsigned char content); 



extern "C" __declspec(dllimport) CppTest_wchar_t *__cdecl cpptestWStrDup(const CppTest_wchar_t * str); 


extern "C" __declspec(dllimport) unsigned __cdecl cpptestWStrLen(const CppTest_wchar_t * str); 


extern "C" __declspec(dllimport) int __cdecl cpptestWStrCmp(const CppTest_wchar_t * str1, const CppTest_wchar_t * str2); 


extern "C" __declspec(dllimport) int __cdecl cpptestWStrNCmp(const CppTest_wchar_t * str1, const CppTest_wchar_t * str2, unsigned n); 


extern "C" __declspec(dllimport) unsigned __cdecl cpptestWCharToDigit(CppTest_wchar_t c); 


extern "C" __declspec(dllimport) const CppTest_wchar_t *__cdecl cpptestWStrToInteger(const CppTest_wchar_t * str, __int64 * integer); 


extern "C" __declspec(dllimport) const CppTest_wchar_t *__cdecl cpptestWStrToUInteger(const CppTest_wchar_t * str, unsigned __int64 * uinteger); 
#line 169
extern "C" __declspec(dllimport) void *__cdecl cpptestMalloc(size_t size); 


extern "C" __declspec(dllimport) void *__cdecl cpptestAlloc(size_t size); 


extern "C" __declspec(dllimport) void __cdecl cpptestFree(void * str); 


extern "C" __declspec(dllimport) void *__cdecl cpptestMemset(void * ptr, int c, size_t size); 
#line 193
typedef struct CppTestTreeNode *CppTestTree; 
#line 199
extern "C" __declspec(dllimport) void __cdecl cpptestTreeInit(CppTestTree * tree); 
#line 205
extern "C" __declspec(dllimport) void __cdecl cpptestTreeClear(CppTestTree * tree); 
#line 212
extern "C" __declspec(dllimport) int __cdecl cpptestTreeFind(CppTestTree * tree, const char * key, void ** ret); 
#line 218
extern "C" __declspec(dllimport) void __cdecl cpptestTreeAdd(CppTestTree * tree, const char * key, void * value); 

typedef void __cdecl CppTestTreeCallBackRoutine(const char * key, void * value); 
typedef CppTestTreeCallBackRoutine *CppTestTreeCallBack; 
#line 227
extern "C" __declspec(dllimport) void __cdecl cpptestTreeTraverseInorder(const CppTestTree * tree, const CppTestTreeCallBack callback); 
#line 235
extern "C" __declspec(dllimport) void __cdecl cpptestAddProperty(const char * name, const char * value); 
#line 243
extern "C" __declspec(dllimport) void __cdecl cpptestAddWeakProperty(const char * name, const char * value); 
#line 256
extern "C" __declspec(dllimport) void __cdecl cpptestParseAndAddProperties(char * properties); 
#line 262
extern "C" __declspec(dllimport) int __cdecl cpptestHasProperty(const char * name); 
#line 269
extern "C" __declspec(dllimport) const char *__cdecl cpptestGetProperty(const char * name); 
#line 276
extern "C" __declspec(dllimport) const char *__cdecl cpptestGetPropertyEx(const char * name, const char * defaultValue); 
#line 283
extern "C" __declspec(dllimport) __int64 __cdecl cpptestGetIntProperty(const char * name); 
#line 290
extern "C" __declspec(dllimport) __int64 __cdecl cpptestGetIntPropertyEx(const char * name, __int64 defaultValue); 
#line 297
extern "C" __declspec(dllimport) unsigned __int64 __cdecl cpptestGetUIntProperty(const char * name); 
#line 304
extern "C" __declspec(dllimport) unsigned __int64 __cdecl cpptestGetUIntPropertyEx(const char * name, unsigned __int64 defaultValue); 
#line 311
extern "C" __declspec(dllimport) int __cdecl cpptestGetBoolProperty(const char * name); 
#line 318
extern "C" __declspec(dllimport) int __cdecl cpptestGetBoolPropertyEx(const char * name, int defaultValue); 
#line 324
extern "C" __declspec(dllimport) const char *__cdecl cpptestPathRelativeToAbsolute(const char * relPath, const char * relToFileName); 
#line 21 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.1\\engine\\runtime\\include\\cpptest_system.h"
typedef 
#line 15
struct { 
void *(*mallocFunc)(size_t size); 
void *(*callocFunc)(size_t elements, size_t elem_size); 
void *(*reallocFunc)(void * ptr, size_t new_size); 
void (*freeFunc)(void * ptr); 
void *(*memsetFunc)(void * ptr, int value, size_t size); 
} CppTest_System; 
#line 166 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.1\\engine\\runtime\\include\\cpptest_runtime_u.h"
typedef unsigned CppTest_ErrorCode; 



typedef void (*__CPTR_TestCasePtr)(void); 


typedef void (*__CPTR_TestCaseBreakFuncPtr)(void); 

struct _CONTEXT; 
struct _EXCEPTION_RECORD; 

struct CppTest_DataSource; 
#line 194
extern "C" __declspec(dllimport) const char *__cdecl cpptestGetCurrentTestCaseName(); 
#line 200
extern "C" __declspec(dllimport) const char *__cdecl cpptestGetCurrentTestSuiteName(); 
#line 206
extern "C" __declspec(dllimport) unsigned __cdecl cpptestGetCurrentTestCaseIteration(); 
#line 220
extern "C" __declspec(dllimport) const char *__cdecl cpptestGetCurrentTestCaseFile(); 
#line 226
extern "C" __declspec(dllimport) unsigned __cdecl cpptestGetCurrentTestCaseLine(); 
#line 233
extern "C" __declspec(dllimport) void __cdecl cpptestCommunicationBegin(); 


extern "C" __declspec(dllimport) void __cdecl cpptestCommunicationEnd(); 


extern "C" __declspec(dllimport) void __cdecl cpptestTestRunnerBegin(); 


extern "C" __declspec(dllimport) void __cdecl cpptestTestRunnerEnd(); 


extern "C" __declspec(dllimport) void __cdecl cpptestTestSuiteBegin(const char * name, const char * file, unsigned line); 



extern "C" __declspec(dllimport) void __cdecl cpptestTestSuiteEnd(); 


extern "C" __declspec(dllimport) void __cdecl cpptestTestCaseBegin(const char * name, CppTest_ErrorCode expectedErrorCode, unsigned expectedErrorCodeMask, int isCpp, const char * file, unsigned line); 




extern "C" __declspec(dllimport) void __cdecl cpptestTestCaseEnd(); 


extern "C" __declspec(dllimport) void __cdecl cpptestDsForCurrentTestCaseInitialized(CppTest_DataSource * dataSource); 


extern "C" __declspec(dllimport) void __cdecl cpptestDsTestCaseBegin(const char * name, CppTest_ErrorCode expectedErrorCode, unsigned expectedErrorCodeMask, int isCpp, const char * file, unsigned line); 


extern "C" __declspec(dllimport) void __cdecl cpptestDsTestCaseEnd(); 


extern "C" __declspec(dllimport) void __cdecl cpptestDsTestCaseIterationBegin(unsigned iteration, const char * signature); 


extern "C" __declspec(dllimport) void __cdecl cpptestDsTestCaseIterationEnd(); 
#line 288
extern "C" __declspec(dllimport) const char *__cdecl cpptestFormatBuffer(char * buffer, const char * format, ...); 
#line 297
extern "C" __declspec(dllimport) int __cdecl cpptestCharPtrsEqual(const char * expected, const char * actual); 
#line 308
extern "C" __declspec(dllimport) int __cdecl cpptestWCharPtrsEqual(const void * expected, const void * actual); 




extern "C" __declspec(dllimport) void __cdecl cpptestUnhandledStructuredExceptionInThread(unsigned code); 

extern "C" __declspec(dllimport) int __cdecl cpptestUnhandledStructuredExceptionInTestCase(unsigned code); 

extern "C" __declspec(dllimport) void __cdecl cpptestUnhandledCppExceptionInThread(); 

extern "C" __declspec(dllimport) void __cdecl cpptestNoExpectedCppExceptionInTestCase(const char * e); 

extern "C" __declspec(dllimport) void __cdecl cpptestUnhandledStdExceptionInTestCase(const char * what); 

extern "C" __declspec(dllimport) void __cdecl cpptestUnhandledCppExceptionInTestCase(); 
#line 331
extern "C" __declspec(dllimport) void __cdecl cpptestSignalFound(int sigNo); 


extern "C" __declspec(dllimport) __CPTR_TestCaseBreakFuncPtr __cdecl cpptestGetTestCaseBreakFuncPtr(); 


extern "C" __declspec(dllimport) __CPTR_TestCaseBreakFuncPtr __cdecl cpptestSetTestCaseBreakFuncPtr(__CPTR_TestCaseBreakFuncPtr funcpPtr); 
#line 354
extern "C" __declspec(dllimport) char __cdecl cpptestLimitsGetMaxChar(); 
#line 360
extern "C" __declspec(dllimport) char __cdecl cpptestLimitsGetMinChar(); 
#line 366
extern "C" __declspec(dllimport) signed char __cdecl cpptestLimitsGetMaxSignedChar(); 
#line 372
extern "C" __declspec(dllimport) signed char __cdecl cpptestLimitsGetMinSignedChar(); 
#line 378
extern "C" __declspec(dllimport) unsigned char __cdecl cpptestLimitsGetMaxUnsignedChar(); 
#line 385
extern "C" __declspec(dllimport) short __cdecl cpptestLimitsGetMaxShort(); 
#line 391
extern "C" __declspec(dllimport) short __cdecl cpptestLimitsGetMinShort(); 
#line 397
extern "C" __declspec(dllimport) unsigned short __cdecl cpptestLimitsGetMaxUnsignedShort(); 
#line 404
extern "C" __declspec(dllimport) int __cdecl cpptestLimitsGetMaxInt(); 
#line 410
extern "C" __declspec(dllimport) int __cdecl cpptestLimitsGetMinInt(); 
#line 416
extern "C" __declspec(dllimport) unsigned __cdecl cpptestLimitsGetMaxUnsignedInt(); 
#line 423
extern "C" __declspec(dllimport) long __cdecl cpptestLimitsGetMaxLong(); 
#line 429
extern "C" __declspec(dllimport) long __cdecl cpptestLimitsGetMinLong(); 
#line 435
extern "C" __declspec(dllimport) unsigned long __cdecl cpptestLimitsGetMaxUnsignedLong(); 
#line 442
extern "C" __declspec(dllimport) float __cdecl cpptestLimitsGetMaxPosFloat(); 
#line 448
extern "C" __declspec(dllimport) float __cdecl cpptestLimitsGetMinNegFloat(); 
#line 454
extern "C" __declspec(dllimport) float __cdecl cpptestLimitsGetMaxNegFloat(); 
#line 460
extern "C" __declspec(dllimport) float __cdecl cpptestLimitsGetMinPosFloat(); 
#line 467
extern "C" __declspec(dllimport) double __cdecl cpptestLimitsGetMaxPosDouble(); 
#line 473
extern "C" __declspec(dllimport) double __cdecl cpptestLimitsGetMinNegDouble(); 
#line 479
extern "C" __declspec(dllimport) double __cdecl cpptestLimitsGetMaxNegDouble(); 
#line 485
extern "C" __declspec(dllimport) double __cdecl cpptestLimitsGetMinPosDouble(); 
#line 492
extern "C" __declspec(dllimport) long double __cdecl cpptestLimitsGetMaxPosLongDouble(); 
#line 498
extern "C" __declspec(dllimport) long double __cdecl cpptestLimitsGetMinNegLongDouble(); 
#line 504
extern "C" __declspec(dllimport) long double __cdecl cpptestLimitsGetMaxNegLongDouble(); 
#line 510
extern "C" __declspec(dllimport) long double __cdecl cpptestLimitsGetMinPosLongDouble(); 
#line 527
extern "C" __declspec(dllimport) int __cdecl CppTest_IsCurrentTestCase(const char * id); 
#line 533
extern "C" __declspec(dllimport) const char *__cdecl CppTest_GetCurrentTestCaseName(); 
#line 539
extern "C" __declspec(dllimport) const char *__cdecl CppTest_GetCurrentTestSuiteName(); 
#line 547
extern "C" __declspec(dllimport) const char *__cdecl CppTest_Format(const char * format, ...); 
#line 553
typedef struct CppTest_StreamRedirectStruct CppTest_StreamRedirect; 
typedef void (*CppTest_ClearFlush)(void); 
typedef int (*CppTest_StreamDup)(long, int); 
#line 562
void CppTest_flushStdOutput(); 
#line 570
void CppTest_flushStdError(); 
#line 577
void CppTest_clearStdInput(); 

int CppTest_streamDup(long, int); 
#line 646
extern "C" __declspec(dllimport) CppTest_StreamRedirect *__cdecl CppTest_StreamRedirectInput(int fd, const char * value, CppTest_ClearFlush ptr, CppTest_StreamDup ptr1); 
#line 661
extern "C" __declspec(dllimport) CppTest_StreamRedirect *__cdecl CppTest_StreamRedirectNInput(int fd, const char * value, unsigned size, CppTest_ClearFlush ptr, CppTest_StreamDup ptr1); 
#line 673
extern "C" __declspec(dllimport) CppTest_StreamRedirect *__cdecl CppTest_StreamRedirectOutput(int fd, CppTest_ClearFlush ptr); 
#line 688
extern "C" __declspec(dllimport) int __cdecl CppTest_StreamCompare(CppTest_StreamRedirect * redirect, const char * value); 
#line 706
extern "C" __declspec(dllimport) int __cdecl CppTest_StreamNCompare(CppTest_StreamRedirect * redirect, const char * value, unsigned size); 
#line 719
extern "C" __declspec(dllimport) int __cdecl CppTest_StreamSearch(CppTest_StreamRedirect * redirect, const char * pattern); 
#line 732
extern "C" __declspec(dllimport) int __cdecl CppTest_StreamNSearch(CppTest_StreamRedirect * redirect, const char * pattern, unsigned size); 
#line 746
extern "C" __declspec(dllimport) char *__cdecl CppTest_StreamReadData(CppTest_StreamRedirect * redirect, unsigned * len); 
#line 756
extern "C" __declspec(dllimport) void __cdecl CppTest_StreamReset(CppTest_StreamRedirect * redirect); 
#line 764
extern "C" __declspec(dllimport) void __cdecl CppTest_ClearRedirects(); 
#line 773
extern "C" __declspec(dllimport) CppTest_DataSource *__cdecl cpptestGetCurrentDataSource(); 
#line 779
extern "C" __declspec(dllimport) void __cdecl cpptestIgnoreCurrStackElement(); 


typedef void (*CppTestThreadInitCallback)(void); 




extern "C" __declspec(dllimport) void __cdecl cpptestSetThreadInitCallback(CppTestThreadInitCallback callback); 


typedef void (*CppTestPropertiesInitCallback)(void); 




extern "C" __declspec(dllimport) void __cdecl cpptestSetPropertiesInitCallback(CppTestPropertiesInitCallback callback); 
#line 801
extern "C" __declspec(dllimport) void __cdecl cpptestInitializeRuntime(CppTestPropertiesInitCallback propInitCallback, CppTestThreadInitCallback threadInitCallback, CppTest_System * system); 
#line 810
extern "C" __declspec(dllimport) void __cdecl cpptestFinalizeRuntime(); 
#line 816
typedef 
#line 813
struct { 
long seconds; 
long nanoseconds; 
} CppTest_Time; 
#line 822
extern "C" __declspec(dllimport) void __cdecl cpptestCheckMemoryLeaks(const char * file, unsigned line, int isAssert); 
#line 830
extern "C" __declspec(dllimport) CppTest_Time __cdecl CppTest_TimeInit(long seconds, long nanoseconds); 
#line 837
extern "C" __declspec(dllimport) CppTest_Time __cdecl CppTest_TimeCurrent(); 




extern "C" __declspec(dllimport) CppTest_Time __cdecl CppTest_TimeDiff(CppTest_Time t1, CppTest_Time t2); 
#line 851
extern "C" __declspec(dllimport) int __cdecl CppTest_TimeCompare(CppTest_Time t1, CppTest_Time t2); 
#line 857
extern "C" const char *__cdecl CppTestCallProgramWrapper(const char * program, int * pResult, const char * param1, const char * param2, const char * param3); 
#line 864
extern "C" __declspec(dllimport) void __cdecl cpptestUnhandledExceptionTerminate(); 
#line 871
extern "C" __declspec(dllimport) void __cdecl cpptestAssertException(const char * file, unsigned line, const char * message, const char * arg1, const char * arg2, const char * arg3, const char * arg4, int kind); 


extern "C" void CppTest_InitializeRuntime(); 

extern "C" void CppTest_FinalizeRuntime(); 

extern "C" __declspec(dllimport) char **__cdecl CppTest_CmdLineToArgv(const char * cmdLine, int * argc); 

extern "C" __declspec(dllimport) void __cdecl CppTest_FreeArgv(int argc, char * argv[]); 



extern "C" __declspec(dllimport) CppTest_wchar_t **__cdecl CppTest_CmdLineToArgvW(const CppTest_wchar_t * cmdLine, int * argc); 

extern "C" __declspec(dllimport) void __cdecl CppTest_FreeArgvW(int argc, CppTest_wchar_t * argv[]); 



extern int CppTest_Main(int argc, char * argv[]); 



extern int CppTest_MainW(int argc, CppTest_wchar_t * argv[]); 



extern "C" __declspec(dllimport) const char *__cdecl cpptestStringPool(int id, const char * str); 

int __cdecl CppTest_IsCurrentContext(const char * context); 


extern "C" __declspec(dllimport) void *__cdecl cpptestDsMalloc(size_t size); 


extern "C" __declspec(dllimport) void __cdecl cpptestDsFree(void * str); 


extern "C" __declspec(dllimport) void __cdecl cpptestDsCsvError(CppTest_ErrorCode errorCode, const char * err, const char * file, unsigned line, unsigned column); 



extern "C" __declspec(dllimport) void __cdecl cpptestDsCsvErrorOpeningFile(const char * err, const char * file); 


extern "C" __declspec(dllimport) void __cdecl cpptestNoDsError(const char * dataSourceName); 


extern "C" __declspec(dllimport) void __cdecl cpptestDsErrorInValue(const char * value); 


extern "C" __declspec(dllimport) void __cdecl cpptestDsUnknownValue(const char * name); 


extern "C" __declspec(dllimport) int __cdecl cpptestDsNotInitialized(); 


extern "C" __declspec(dllimport) int __cdecl cpptestDsMethodNotInitialized(const char * method); 


extern "C" __declspec(dllimport) void __cdecl cpptestAssertCall(const char * message, const char * file, unsigned line); 


extern "C" __declspec(dllimport) void __cdecl cpptestExitCall(int exitCode); 


extern "C" __declspec(dllimport) void __cdecl cpptestAbortCall(); 


extern "C" __declspec(dllimport) void __cdecl cpptestRiseCall(int exitCode); 



extern "C" __declspec(dllimport) void __cdecl cpptestInvalidParamCalled(const CppTest_wchar_t * expression, const CppTest_wchar_t * function, const CppTest_wchar_t * file, unsigned line); 




extern "C" __declspec(dllimport) void __cdecl cpptestTooLargeStackTrace(unsigned maxAllowedStackTraceDepth); 



extern "C" __declspec(dllimport) void __cdecl cpptestTestCaseNotValidated(const char * file, unsigned line); 



extern "C" __declspec(dllimport) void __cdecl cpptestReport(const char * txt, const char * file, unsigned line, int reportStackTrace); 


extern "C" __declspec(dllimport) void __cdecl cpptestReportBool(const char * txt, int value, const char * file, unsigned line); 


extern "C" __declspec(dllimport) void __cdecl cpptestReportInteger(const char * txt, __int64 value, const char * file, unsigned line); 


extern "C" __declspec(dllimport) void __cdecl cpptestReportUInteger(const char * txt, unsigned __int64 value, const char * file, unsigned line); 


extern "C" __declspec(dllimport) void __cdecl cpptestReportFloat(const char * txt, double value, const char * file, unsigned line); 


extern "C" __declspec(dllimport) void __cdecl cpptestReportCStr(const char * txt, const char * value, const char * file, unsigned line); 


extern "C" __declspec(dllimport) void __cdecl cpptestReportCStrN(const char * txt, const char * value, unsigned maxSize, const char * file, unsigned line); 


extern "C" __declspec(dllimport) void __cdecl cpptestReportMemBuffer(const char * txt, const void * value, unsigned size, const char * file, unsigned line); 


extern "C" __declspec(dllimport) void __cdecl cpptestReportPtr(const char * txt, int isNull, const char * file, unsigned line); 



extern "C" __declspec(dllimport) void __cdecl cpptestPostConditionBool(const char * valueString, int value, const char * file, unsigned line); 


extern "C" __declspec(dllimport) void __cdecl cpptestPostConditionInteger(const char * valueString, __int64 value, const char * file, unsigned line); 


extern "C" __declspec(dllimport) void __cdecl cpptestPostConditionUInteger(const char * valueString, unsigned __int64 value, const char * file, unsigned line); 


extern "C" __declspec(dllimport) void __cdecl cpptestPostConditionFloat(const char * valueString, double value, const char * file, unsigned line); 


extern "C" __declspec(dllimport) void __cdecl cpptestPostConditionCStr(const char * valueString, const char * value, const char * file, unsigned line); 


extern "C" __declspec(dllimport) void __cdecl cpptestPostConditionCStrN(const char * valueString, const char * value, unsigned maxSize, const char * file, unsigned line); 


extern "C" __declspec(dllimport) void __cdecl cpptestPostConditionMemBuffer(const char * valueString, const void * value, unsigned size, const char * file, unsigned line); 


extern "C" __declspec(dllimport) void __cdecl cpptestPostConditionPtr(const char * valueString, int isNull, const char * file, unsigned line); 


extern "C" __declspec(dllimport) void __cdecl cpptestPostConditionExternal(const char * userMessage, const char * ret, const char * file, unsigned line); 


extern "C" __declspec(dllimport) void __cdecl cpptestExternalProcessError(CppTest_ErrorCode errorCode, const char * err); 


extern "C" __declspec(dllimport) void __cdecl cpptestExternalProcessErrorFull(CppTest_ErrorCode errorCode, const char * err, const char * program, const char * param1, const char * param2, const char * param3); 
#line 1021
extern "C" __declspec(dllimport) int __cdecl cpptestAssertion(int value, const char * userMessage, const char * conditionStr, const char * file, unsigned line); 


extern "C" __declspec(dllimport) int __cdecl cpptestEqualAssertion(int value, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 



extern "C" __declspec(dllimport) int __cdecl cpptestBoolEqualAssertion(int value, int expected, int actual, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 



extern "C" __declspec(dllimport) int __cdecl cpptestIntegerEqualAssertion(int value, __int64 expected, __int64 actual, int hasDelta, __int64 delta, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 




extern "C" __declspec(dllimport) int __cdecl cpptestUIntegerEqualAssertion(int value, unsigned __int64 expected, unsigned __int64 actual, int hasDelta, unsigned __int64 delta, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 




extern "C" __declspec(dllimport) int __cdecl cpptestFloatEqualAssertion(int value, double expected, double actual, int hasDelta, double delta, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 




extern "C" __declspec(dllimport) int __cdecl cpptestFloatFmtEqualAssertion(int value, double actual, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 



extern "C" __declspec(dllimport) int __cdecl cpptestCstrEqualAssertion(int value, const char * expected, const char * actual, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 



extern "C" __declspec(dllimport) int __cdecl cpptestCstrNEqualAssertion(int value, const char * expected, const char * actual, unsigned maxSize, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 



extern "C" __declspec(dllimport) int __cdecl cpptestMemBufferEqualAssertion(int value, const void * expected, const void * actual, unsigned size, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 




extern "C" __declspec(dllimport) int __cdecl cpptestPtrEqualAssertion(int value, const void * expected, const void * actual, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 
#line 1070
extern "C" __declspec(dllimport) int __cdecl cpptestWCstrEqualAssertion(int value, const CppTest_wchar_t * expected, const CppTest_wchar_t * actual, unsigned * arrayIndex, const char * userMessage, const char * expectedStr, const char * actualStr, const char * file, unsigned line); 
#line 1076
extern "C" __declspec(dllimport) void __cdecl cpptestThrowAssertion(int value, const char * userMessage, const char * exceptionTypeStr, const char * file, unsigned line); 


extern "C" __declspec(dllimport) void __cdecl cpptestNoThrowAssertion(int value, const char * userMessage, const char * file, unsigned line); 


extern "C" __declspec(dllimport) void __cdecl cpptestNoExpectedExceptionInTestCase(const char * e); 


extern "C" __declspec(dllimport) void __cdecl cpptestStdExceptionInTestCase(const char * what); 


extern "C" __declspec(dllimport) void __cdecl cpptestExceptionInTestCase(); 


extern "C" __declspec(dllimport) void __cdecl cpptestTestCaseDisabled(const char * name, const char * file, unsigned line); 



extern "C" __declspec(dllimport) int __cdecl cpptestCharPtrsNEqual(const char * expected, const char * actual, unsigned maxSize); 


extern "C" __declspec(dllimport) int __cdecl cpptestMemBuffersEqual(const void * expected, const void * actual, unsigned size); 


extern "C" __declspec(dllimport) int __cdecl cpptestFloatsFmtEqual(const char * expected, double actual); 


extern "C" __declspec(dllimport) void __cdecl cpptestTimeout(unsigned long timeout); 


extern "C" __declspec(dllimport) void __cdecl cpptestUserBreak(const char * file, unsigned line); 

extern "C" void __cdecl cpptestTestCaseSlave(__CPTR_TestCasePtr tc); 
#line 41 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.1\\engine\\runtime\\include\\cpptest_data_source.h"
extern "C" { typedef 
#line 16
struct CppTest_DataSource { 

const char *(*getMemBuffer)(CppTest_DataSource *, const char * name, unsigned * size); 
const char *(*getCStr)(CppTest_DataSource *, const char * name); 

const CppTest_wchar_t *(*getWCStr)(CppTest_DataSource *, const char * name); 

__int64 (*getInteger)(CppTest_DataSource *, const char * name); 
unsigned __int64 (*getUInteger)(CppTest_DataSource *, const char * name); 
double (*getFloat)(CppTest_DataSource *, const char * name); 
int (*getBool)(CppTest_DataSource *, const char * name); 
char (*getChar)(CppTest_DataSource *, const char * name); 

int (*hasColumn)(CppTest_DataSource *, const char * name); 

int (*loadNextData)(CppTest_DataSource *); 
int (*hasMoreData)(CppTest_DataSource *); 
unsigned (*getIteration)(CppTest_DataSource *); 




void (*finalize)(CppTest_DataSource *); 

void *data; 
} CppTest_DataSource; }

extern "C" { typedef CppTest_DataSource *(*CppTest_GetDataSourceFPtr)(const char * dataSource, const char * testSuite); }
#line 52
extern "C" CppTest_DataSource *__cdecl CppTest_DsArray(const char ** data, int rows, int columns); 
extern "C" CppTest_DataSource *__cdecl CppTest_DsRepeat(int count); 
extern "C" CppTest_DataSource *__cdecl CppTest_Ds(const char * dataSourceName); 


extern "C" CppTest_DataSource *__cdecl CppTest_DsCsv(const char * fileName, char separator, int useCollumns, int trimValues); 
#line 27 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\use_ansi.h"
#ifndef __CPTR_NO_PRAGMA_2953330773_0_27
#pragma comment(lib, "msvcprtd")
#endif
#line 57
#pragma comment(linker, "/manifestdependency:\"type=\'win32\' name=\'Microsoft.VC90.DebugCRT\' version=\'9.0.21022.8\' processorArchitecture=\'x86\' publicKeyToken=\'1fc8b3b9a1e18e3b\'\"")
#line 9 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
#pragma pack ( push, 8 )
#line 528
namespace std { 
typedef bool _Bool; 
}
#line 546
typedef __int64 _Longlong; 
typedef unsigned __int64 _ULonglong; 
#line 569
namespace std { 



/* Removed pragma: #pragma warning(push)*/
/* Removed pragma: #pragma warning(disable:4412)*/
class __declspec(dllimport) _Lockit { 
#line 595
public: explicit __thiscall _Lockit(); 
explicit __thiscall _Lockit(int); 
__thiscall ~_Lockit(); 


static void __cdecl _Lockit_ctor(int); 
static void __cdecl _Lockit_dtor(int); 


private: static void __cdecl _Lockit_ctor(_Lockit *); 
static void __cdecl _Lockit_ctor(_Lockit *, int); 
static void __cdecl _Lockit_dtor(_Lockit *); 

_Lockit(const _Lockit &); 
_Lockit &operator=(const _Lockit &); 

int _Locktype; 
#line 628
}; 
#line 722
class __declspec(dllimport) _Mutex { 
#line 746
public: __thiscall _Mutex(); 
__thiscall ~_Mutex(); 
void __thiscall _Lock(); 
void __thiscall _Unlock(); 



private: static void __cdecl _Mutex_ctor(_Mutex *); 
static void __cdecl _Mutex_dtor(_Mutex *); 
static void __cdecl _Mutex_Lock(_Mutex *); 
static void __cdecl _Mutex_Unlock(_Mutex *); 

_Mutex(const _Mutex &); 
_Mutex &operator=(const _Mutex &); 
void *_Mtx; 
#line 772
}; 

class __declspec(dllimport) _Init_locks { 
#line 790
public: __thiscall _Init_locks(); 
__thiscall ~_Init_locks(); 



private: static void __cdecl _Init_locks_ctor(_Init_locks *); 
static void __cdecl _Init_locks_dtor(_Init_locks *); 
#line 808
}; 
/* Removed pragma: #pragma warning(pop)*/
}
#line 819
__declspec(dllimport) void __cdecl _Atexit(void (__cdecl *)(void)); 

typedef int _Mbstatet; 
#line 830
#pragma pack ( pop )
#line 68 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\stddef.h"
extern "C" { __declspec(dllimport) extern unsigned long __cdecl __threadid(); } 

extern "C" { __declspec(dllimport) extern uintptr_t __cdecl __threadhandle(); } 
#line 17 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\cstddef"
namespace std { 
using ::ptrdiff_t;using ::size_t;
}
#line 14 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\xstddef"
/* Removed pragma: #pragma warning(push,3)*/
#line 13
#pragma pack ( push, 8 )



namespace std { 
#line 92
enum _Uninitialized { 

_Noinit}; 




struct _Bool_struct { 

int _Member; 
}; 

typedef int _Bool_struct::*_Bool_type; 

}

/* Removed pragma: #pragma warning(pop)*/
#line 11 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\exception"
/* Removed pragma: #pragma warning(push,3)*/
#line 109 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\xstddef"
#pragma pack ( pop )
#line 10 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\exception"
#pragma pack ( push, 8 )
#line 23
namespace std { 
#line 36
}
#line 26 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\eh.h"
#pragma pack ( push, 8 )
#line 35
typedef void (__cdecl *terminate_function)(void); 
typedef void (__cdecl *terminate_handler)(void); 
typedef void (__cdecl *unexpected_function)(void); 
typedef void (__cdecl *unexpected_handler)(void); 
#line 53
struct _EXCEPTION_POINTERS; 

typedef void (__cdecl *_se_translator_function)(unsigned, _EXCEPTION_POINTERS *); 


__declspec(dllimport) __declspec(noreturn) void __cdecl terminate(); 
__declspec(dllimport) void __cdecl unexpected(); 

__declspec(dllimport) int __cdecl _is_exception_typeof([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] const class type_info & _Type, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] _EXCEPTION_POINTERS * _ExceptionPtr); 



__declspec(dllimport) terminate_function __cdecl set_terminate([SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] terminate_function _NewPtFunc); 
extern "C" __declspec(dllimport) terminate_function __cdecl _get_terminate(); 
__declspec(dllimport) unexpected_function __cdecl set_unexpected([SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] unexpected_function _NewPtFunc); 
extern "C" __declspec(dllimport) unexpected_function __cdecl _get_unexpected(); 




__declspec(dllimport) _se_translator_function __cdecl _set_se_translator([SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _se_translator_function _NewPtFunc); 

__declspec(dllimport) bool __cdecl __uncaught_exception(); 
#line 91
#pragma pack ( pop )
#line 29 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\malloc.h"
#pragma pack ( push, 8 )
#line 66
extern "C" { typedef 
#line 62
struct _heapinfo { 
int *_pentry; 
size_t _size; 
int _useflag; 
} _HEAPINFO; }
#line 73
extern "C" __declspec(deprecated("This function or variable may be unsafe. Consider using _get_amblksiz instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) unsigned _amblksiz; 
#line 149
extern "C" { __declspec(dllimport) int __cdecl _resetstkoflw(); } 



extern "C" { __declspec(dllimport) unsigned long __cdecl _set_malloc_crt_max_wait([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned long _NewValue); } 
#line 164
[returnvalue : SA_Post ( MustCheck = SA_Yes ), returnvalue : SA_Post ( Null = SA_Maybe, WritableBytes = "_NewSize" )] extern "C" { __declspec(dllimport) void *__cdecl _expand([SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] void * _Memory, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _NewSize); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) size_t __cdecl _msize([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] void * _Memory); } 
#line 172
[returnvalue : SA_Post ( MustCheck = SA_Yes ), returnvalue : SA_Post ( Null = SA_No, WritableBytes = "_Size" )] extern "C" { void *__cdecl _alloca([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) size_t __cdecl _get_sbh_threshold(); } 
extern "C" { __declspec(dllimport) int __cdecl _set_sbh_threshold([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _NewValue); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _set_amblksiz([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Value); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _get_amblksiz([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] size_t * _Value); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _heapadd([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] void * _Memory, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _heapchk(); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _heapmin(); } 
extern "C" { __declspec(dllimport) int __cdecl _heapset([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned _Fill); } 
extern "C" { __declspec(dllimport) int __cdecl _heapwalk([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] _HEAPINFO * _EntryInfo); } 
extern "C" { __declspec(dllimport) size_t __cdecl _heapused(size_t * _Used, size_t * _Commit); } 

extern "C" { __declspec(dllimport) intptr_t __cdecl _get_heap_handle(); } 
#line 198
extern "C" { typedef char __static_assert_t[(sizeof(unsigned) <= (8))]; }


/* Removed pragma: #pragma warning(push)*/
/* Removed pragma: #pragma warning(disable:6540)*/
extern "C" { __inline void *_MarkAllocaS([SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] void *_Ptr, unsigned _Marker) 
{ 
if (_Ptr) 
{ 
*((unsigned *)_Ptr) = _Marker; 
_Ptr = (char *)_Ptr + 8; 
}  
return _Ptr; 
} } 
/* Removed pragma: #pragma warning(pop)*/
#line 238
extern "C" { __declspec(noalias) __inline void __cdecl _freea([SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] void *_Memory) 
{ 
unsigned _Marker; 
if (_Memory) 
{ 
_Memory = (char *)_Memory - 8; 
_Marker = *((unsigned *)_Memory); 
if (_Marker == (56797)) 
{ 
free(_Memory); 
}  
#line 255
}  
} } 
#line 292
#pragma pack ( pop )
#line 82 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\exception"
typedef const char *__exString; 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" size_t __cdecl strlen([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char *); 

extern "C" __declspec(dllimport) errno_t __cdecl strcpy_s([SA_Pre ( Null = SA_No, WritableElements = "_SizeInBytes" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Dst, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInBytes, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Src); 
#line 92
namespace std { 

class __declspec(dllimport) exception { 
#line 195
public: exception(); 
exception(const char *const &); 
exception(const char *const &, int); 
exception(const exception &); 
exception &operator=(const exception &); 
virtual ~exception(); 
virtual const char *what() const; 


private: const char *_m_what; 
int _m_doFree; 
}; 

using ::set_terminate;using ::terminate_handler;using ::terminate;using ::set_unexpected;using ::unexpected_handler;using ::unexpected;

typedef void (__cdecl *_Prhand)(const exception &); 
#line 216
__declspec(dllimport) bool __cdecl uncaught_exception(); 


}
#line 333
namespace std { 
#line 339
class bad_exception : public exception { 


public: bad_exception(const char *_Message = ("bad exception")) throw() : exception(_Message) 


{ 
} 

virtual ~bad_exception() throw() 
{ 
} 
#line 360
}; 


static const char *_bad_alloc_Message = ("bad allocation"); 


class bad_alloc : public exception { 


public: bad_alloc(const char *_Message) throw() : exception(_Message) 

{ 
} 

bad_alloc() throw() : exception(_bad_alloc_Message, 1) 

{ 
} 

virtual ~bad_alloc() throw() 
{ 
} 
#line 391
}; 


}
#line 413
/* Removed pragma: #pragma warning(pop)*/
#pragma pack ( pop )
#line 19 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.1\\engine\\runtime\\include\\cpptest.h"
struct __CPTR_AddressOfType { }; 
#line 399
struct __CPTR_TestRunner; 
#line 501
static const char *CPPTEST_DS_GET_CSTR(const char *name) 
{ 
return ((((cpptestGetCurrentDataSource()) || (cpptestDsNotInitialized())), ((cpptestGetCurrentDataSource()->getCStr) || (cpptestDsMethodNotInitialized("getCStr")))), (cpptestGetCurrentDataSource()->getCStr))(cpptestGetCurrentDataSource(), name); 
} 

static const CppTest_wchar_t *CPPTEST_DS_GET_WCSTR(const char *name) 
{ 
return ((((cpptestGetCurrentDataSource()) || (cpptestDsNotInitialized())), ((cpptestGetCurrentDataSource()->getWCStr) || (cpptestDsMethodNotInitialized("getWCStr")))), (cpptestGetCurrentDataSource()->getWCStr))(cpptestGetCurrentDataSource(), name); 
} 

static const char *CPPTEST_DS_GET_MEM_BUFFER(const char *name, unsigned *sizePtr) 
{ 
return ((((cpptestGetCurrentDataSource()) || (cpptestDsNotInitialized())), ((cpptestGetCurrentDataSource()->getMemBuffer) || (cpptestDsMethodNotInitialized("getMemBuffer")))), (cpptestGetCurrentDataSource()->getMemBuffer))(cpptestGetCurrentDataSource(), name, sizePtr); 
} 
static __int64 CPPTEST_DS_GET_INTEGER(const char *name) 
{ 
return ((((cpptestGetCurrentDataSource()) || (cpptestDsNotInitialized())), ((cpptestGetCurrentDataSource()->getInteger) || (cpptestDsMethodNotInitialized("getInteger")))), (cpptestGetCurrentDataSource()->getInteger))(cpptestGetCurrentDataSource(), name); 
} 
static unsigned __int64 CPPTEST_DS_GET_UINTEGER(const char *name) 
{ 
return ((((cpptestGetCurrentDataSource()) || (cpptestDsNotInitialized())), ((cpptestGetCurrentDataSource()->getUInteger) || (cpptestDsMethodNotInitialized("getUInteger")))), (cpptestGetCurrentDataSource()->getUInteger))(cpptestGetCurrentDataSource(), name); 
} 
static double CPPTEST_DS_GET_FLOAT(const char *name) 
{ 
return ((((cpptestGetCurrentDataSource()) || (cpptestDsNotInitialized())), ((cpptestGetCurrentDataSource()->getFloat) || (cpptestDsMethodNotInitialized("getFloat")))), (cpptestGetCurrentDataSource()->getFloat))(cpptestGetCurrentDataSource(), name); 
} 
static int CPPTEST_DS_GET_BOOL(const char *name) 
{ 
return ((((cpptestGetCurrentDataSource()) || (cpptestDsNotInitialized())), ((cpptestGetCurrentDataSource()->getBool) || (cpptestDsMethodNotInitialized("getBool")))), (cpptestGetCurrentDataSource()->getBool))(cpptestGetCurrentDataSource(), name); 
} 
static char CPPTEST_DS_GET_CHAR(const char *name) 
{ 
return ((((cpptestGetCurrentDataSource()) || (cpptestDsNotInitialized())), ((cpptestGetCurrentDataSource()->getChar) || (cpptestDsMethodNotInitialized("getChar")))), (cpptestGetCurrentDataSource()->getChar))(cpptestGetCurrentDataSource(), name); 
} 
static unsigned CPPTEST_DS_GET_ITERATION() 
{ 
return ((((cpptestGetCurrentDataSource()) || (cpptestDsNotInitialized())), ((cpptestGetCurrentDataSource()->getIteration) || (cpptestDsMethodNotInitialized("getIteration")))), (cpptestGetCurrentDataSource()->getIteration))(cpptestGetCurrentDataSource()); 
} 
static int CPPTEST_DS_HAS_COLUMN(const char *name) 
{ 
if ((cpptestGetCurrentDataSource()) && ((((((cpptestGetCurrentDataSource()) || (cpptestDsNotInitialized())), ((cpptestGetCurrentDataSource()->hasColumn) || (cpptestDsMethodNotInitialized("hasColumn")))), (cpptestGetCurrentDataSource()->hasColumn))))) { 
return ((((cpptestGetCurrentDataSource()) || (cpptestDsNotInitialized())), ((cpptestGetCurrentDataSource()->hasColumn) || (cpptestDsMethodNotInitialized("hasColumn")))), (cpptestGetCurrentDataSource()->hasColumn))(cpptestGetCurrentDataSource(), name); 
}  
return 0; 
} 
#line 693
extern "C" { typedef int CPPTEST_CALL_ROUTINE(const char *); }
#line 830
struct CppTest_TestSuite { 




virtual void setUp() 
{ 
} 




virtual void tearDown() 
{ 
} 

virtual ~CppTest_TestSuite() 
{ 
} 
}; 
#line 28 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
#pragma pack ( push, 8 )
#line 59
extern "C" { struct _iobuf { 
char *_ptr; 
int _cnt; 
char *_base; 
int _flag; 
int _file; 
int _charbuf; 
int _bufsiz; 
char *_tmpfname; 
}; }
extern "C" { typedef _iobuf FILE; }
#line 132
extern "C" { __declspec(dllimport) FILE *__cdecl __iob_func(); } 
#line 148
extern "C" { typedef __int64 fpos_t; }
#line 189
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _filbuf([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl _flsbuf([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Ch, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 




[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) FILE *__cdecl _fsopen([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Mode, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _ShFlag); } 


extern "C" { __declspec(dllimport) void __cdecl clearerr([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 

extern "C" { __declspec(dllimport) errno_t __cdecl clearerr_s([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 

extern "C" { __declspec(dllimport) int __cdecl fclose([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl _fcloseall(); } 




[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) FILE *__cdecl _fdopen([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _FileHandle, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Mode); } 


[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl feof([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] FILE * _File); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl ferror([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl fflush([SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl fgetc([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl _fgetchar(); } 
extern "C" { __declspec(dllimport) int __cdecl fgetpos([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] fpos_t * _Pos); } 
extern "C" { __declspec(dllimport) char *__cdecl fgets([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Buf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _MaxCount, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 




[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _fileno([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] FILE * _File); } 
#line 230
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) char *__cdecl _tempnam([SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _DirName, [SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _FilePrefix); } 
#line 236
extern "C" { __declspec(dllimport) int __cdecl _flushall(); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using fopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) FILE *__cdecl fopen([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Mode); } 

extern "C" { __declspec(dllimport) errno_t __cdecl fopen_s([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Pre ( Deref = 2, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_Maybe ), SA_Post ( Deref = 2, Valid = SA_Yes )] FILE ** _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Mode); } 

extern "C" { __declspec(dllimport) int __cdecl fprintf([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl fprintf_s([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl fputc([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Ch, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl _fputchar([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Ch); } 
extern "C" { __declspec(dllimport) int __cdecl fputs([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Str, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) size_t __cdecl fread([SA_Pre ( Null = SA_No, WritableBytes = "\n@_ElementSize*_Count" ), SA_Pre ( Deref = 1, Valid = SA_No )] void * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _ElementSize, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 

extern "C" { __declspec(dllimport) size_t __cdecl fread_s([SA_Pre ( Null = SA_No, WritableBytes = "\n@_ElementSize*_Count" ), SA_Pre ( Deref = 1, Valid = SA_No )] void * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _DstSize, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _ElementSize, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 

[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using freopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) FILE *__cdecl freopen([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Mode, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 

extern "C" { __declspec(dllimport) errno_t __cdecl freopen_s([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Pre ( Deref = 2, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_Maybe ), SA_Post ( Deref = 2, Valid = SA_Yes )] FILE ** _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Mode, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _OldFile); } 

[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using fscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) int __cdecl fscanf([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf" )] const char * _Format, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _fscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) int __cdecl _fscanf_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
/* Removed pragma: #pragma warning(push)*/
/* Removed pragma: #pragma warning(disable:6530)*/

extern "C" { __declspec(dllimport) int __cdecl fscanf_s([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf_s" )] const char * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl _fscanf_s_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf_s" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl fsetpos([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] const fpos_t * _Pos); } 
extern "C" { __declspec(dllimport) int __cdecl fseek([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] long _Offset, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Origin); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) long __cdecl ftell([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 

extern "C" { __declspec(dllimport) int __cdecl _fseeki64([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __int64 _Offset, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Origin); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) __int64 __cdecl _ftelli64([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 

extern "C" { __declspec(dllimport) size_t __cdecl fwrite([SA_Pre ( Null = SA_No, ValidElements = "\n@_Size*_Count" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const void * _Str, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl getc([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl getchar(); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _getmaxstdio(); } 

extern "C" { __declspec(dllimport) char *__cdecl gets_s([SA_Pre ( Null = SA_No, WritableElements = "_Size" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Buf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] rsize_t _Size); } 

template < size_t _Size > inline char * __cdecl gets_s ( char ( & _Buffer ) [ _Size ] ) { return gets_s ( _Buffer, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using gets_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See" " online help for details.")) __declspec(dllimport) char *__cdecl gets([SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Null = SA_No, WritableElementsConst = ( ( size_t ) - 1 ) ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Buffer); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { int __cdecl _getw([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 




extern "C" { __declspec(dllimport) int __cdecl _pclose([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) FILE *__cdecl _popen([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Command, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Mode); } 
extern "C" __declspec(dllimport) int __cdecl printf([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, ...); 

extern "C" { __declspec(dllimport) int __cdecl printf_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl putc([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Ch, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl putchar([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Ch); } 
extern "C" { __declspec(dllimport) int __cdecl puts([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Str); } 
extern "C" { __declspec(dllimport) int __cdecl _putw([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Word, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 


[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl remove([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Filename); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl rename([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _OldFilename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _NewFilename); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _unlink([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Filename); } 

[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _unlink. See online help for details.")) __declspec(dllimport) int __cdecl unlink([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Filename); } 


extern "C" { __declspec(dllimport) void __cdecl rewind([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl _rmtmp(); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using scanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) int __cdecl scanf([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf" )] const char * _Format, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _scanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) int __cdecl _scanf_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 

extern "C" { __declspec(dllimport) int __cdecl scanf_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf_s" )] const char * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl _scanf_s_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf_s" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using setvbuf instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. Se" "e online help for details.")) __declspec(dllimport) void __cdecl setbuf([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 512 ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes ), SA_Post ( ValidElementsConst = 0 ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Buffer); } 
extern "C" { __declspec(dllimport) int __cdecl _setmaxstdio([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Max); } 
extern "C" { __declspec(dllimport) unsigned __cdecl _set_output_format([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] unsigned _Format); } 
extern "C" { __declspec(dllimport) unsigned __cdecl _get_output_format(); } 
extern "C" { __declspec(dllimport) int __cdecl setvbuf([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes, WritableBytes = "_Size" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Buf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Mode, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size); } 
extern "C" { __declspec(dllimport) int __cdecl _snprintf_s([SA_Pre ( Null = SA_No, WritableBytes = "_SizeInBytes" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInBytes, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, ...); } 
/* Removed pragma: __pragma( warning(push)) *//* Removed pragma: __pragma( warning(disable: 4793)) */template < size_t _Size > inline int __cdecl _snprintf_s ( char ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] size_t _MaxCount, [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] [ SA_FormatString ( Style = "printf" ) ] const char * _Format, ... ) { va_list _ArgList; ( _ArgList = ( va_list ) ( & reinterpret_cast < const char & > ( _Format ) ) + ( ( sizeof ( _Format ) + sizeof ( int ) - 1 ) & ~ ( sizeof ( int ) - 1 ) ) ); return _vsnprintf_s ( _Dest, _Size, _MaxCount, _Format, _ArgList ); }/* Removed pragma: __pragma( warning(pop)) */

extern "C" { __declspec(dllimport) int __cdecl sprintf_s([SA_Pre ( Null = SA_No, WritableBytes = "_SizeInBytes" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInBytes, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, ...); } 

/* Removed pragma: __pragma( warning(push)) *//* Removed pragma: __pragma( warning(disable: 4793)) */template < size_t _Size > inline int __cdecl sprintf_s ( char ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] [ SA_FormatString ( Style = "printf" ) ] const char * _Format, ... ) { va_list _ArgList; ( _ArgList = ( va_list ) ( & reinterpret_cast < const char & > ( _Format ) ) + ( ( sizeof ( _Format ) + sizeof ( int ) - 1 ) & ~ ( sizeof ( int ) - 1 ) ) ); return vsprintf_s ( _Dest, _Size, _Format, _ArgList ); }/* Removed pragma: __pragma( warning(pop)) */
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _scprintf([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, ...); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using sscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) int __cdecl sscanf([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Src, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf" )] const char * _Format, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _sscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) int __cdecl _sscanf_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Src, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 

extern "C" { __declspec(dllimport) int __cdecl sscanf_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Src, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf_s" )] const char * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl _sscanf_s_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Src, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf_s" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _snscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) int __cdecl _snscanf([SA_Pre ( Null = SA_No, ValidBytes = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes )] const char * _Src, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf" )] const char * _Format, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _snscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) int __cdecl _snscanf_l([SA_Pre ( Null = SA_No, ValidBytes = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes )] const char * _Src, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _snscanf_s([SA_Pre ( Null = SA_No, ValidBytes = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes )] const char * _Src, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf_s" )] const char * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _snscanf_s_l([SA_Pre ( Null = SA_No, ValidBytes = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes )] const char * _Src, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf_s" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using tmpfile_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) FILE *__cdecl tmpfile(); } 

extern "C" { __declspec(dllimport) errno_t __cdecl tmpfile_s([SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_No ), SA_Post ( Deref = 2, Valid = SA_Yes )] FILE ** _File); } 
extern "C" { __declspec(dllimport) errno_t __cdecl tmpnam_s([SA_Pre ( Null = SA_No, WritableElements = "_Size" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Buf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] rsize_t _Size); } 

template < size_t _Size > inline errno_t __cdecl tmpnam_s ( [ SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Post ( Deref = 2, Valid = SA_Yes ) ] char ( & _Buf ) [ _Size ] ) { return tmpnam_s ( _Buf, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using tmpnam_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) char *__cdecl tmpnam([SA_Pre ( Null = SA_Maybe ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Buffer); } 
extern "C" { __declspec(dllimport) int __cdecl ungetc([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Ch, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl vfprintf([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl vfprintf_s([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl vprintf([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl vprintf_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, va_list _ArgList); } 

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using vsnprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) int __cdecl vsnprintf([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl vsnprintf_s([SA_Pre ( Null = SA_No, WritableElements = "_DstSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _DstSize, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl _vsnprintf_s([SA_Pre ( Null = SA_No, WritableElements = "_SizeInBytes" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInBytes, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, va_list _ArgList); } 
template < size_t _Size > inline int __cdecl _vsnprintf_s ( char ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] size_t _MaxCount, [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] [ SA_FormatString ( Style = "printf" ) ] const char * _Format, va_list _Args ) { return _vsnprintf_s ( _Dest, _Size, _MaxCount, _Format, _Args ); }
/* Removed pragma: #pragma warning(push)*/
/* Removed pragma: #pragma warning(disable:4793)*/
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _snprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) int __cdecl _snprintf([SA_Pre ( Null = SA_No, WritableElements = "_Count" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Maybe )] char * _Dest, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, ...); } extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _vsnprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) int __cdecl _vsnprintf([SA_Pre ( Null = SA_No, WritableElements = "_Count" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Maybe )] char * _Dest, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, va_list _Args); } 
/* Removed pragma: #pragma warning(pop)*/

extern "C" { __declspec(dllimport) int __cdecl vsprintf_s([SA_Pre ( Null = SA_No, WritableElements = "_SizeInBytes" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInBytes, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, va_list _ArgList); } 

template < size_t _Size > inline int __cdecl vsprintf_s ( char ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] [ SA_FormatString ( Style = "printf" ) ] const char * _Format, va_list _Args ) { return vsprintf_s ( _Dest, _Size, _Format, _Args ); }
/* Removed pragma: #pragma warning(push)*/
/* Removed pragma: #pragma warning(disable:4793)*/
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using sprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) int __cdecl sprintf([SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Dest, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, ...); } extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using vsprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) int __cdecl vsprintf([SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Dest, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, va_list _Args); } 
/* Removed pragma: #pragma warning(pop)*/
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _vscprintf([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _snprintf_c([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vsnprintf_c([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl _fprintf_p([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _printf_p([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _sprintf_p([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Dst, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vfprintf_p([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vprintf_p([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vsprintf_p([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Dst, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, va_list _ArgList); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _scprintf_p([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, ...); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _vscprintf_p([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _set_printf_count_output([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Value); } 
extern "C" { __declspec(dllimport) int __cdecl _get_printf_count_output(); } 

extern "C" { __declspec(dllimport) int __cdecl _printf_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _printf_p_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _printf_s_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vprintf_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vprintf_p_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vprintf_s_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl _fprintf_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _fprintf_p_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _fprintf_s_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vfprintf_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vfprintf_p_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vfprintf_s_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _sprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) int __cdecl _sprintf_l([SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _sprintf_p_l([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _sprintf_s_l([SA_Pre ( Null = SA_No, WritableBytes = "_DstSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _DstSize, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _vsprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __declspec(dllimport) int __cdecl _vsprintf_l([SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vsprintf_p_l([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vsprintf_s_l([SA_Pre ( Null = SA_No, WritableElements = "_DstSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _DstSize, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl _scprintf_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _scprintf_p_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vscprintf_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vscprintf_p_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _snprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __declspec(dllimport) int __cdecl _snprintf_l([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _snprintf_c_l([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _snprintf_s_l([SA_Pre ( Null = SA_No, WritableElements = "_DstSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _DstSize, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _vsnprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNI" "NGS. See online help for details.")) __declspec(dllimport) int __cdecl _vsnprintf_l([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vsnprintf_c_l([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, const char *, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vsnprintf_s_l([SA_Pre ( Null = SA_No, WritableElements = "_DstSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _DstSize, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const char * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 
#line 427
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) FILE *__cdecl _wfsopen([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Mode, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _ShFlag); } 


extern "C" { __declspec(dllimport) wint_t __cdecl fgetwc([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) wint_t __cdecl _fgetwchar(); } 
extern "C" { __declspec(dllimport) wint_t __cdecl fputwc([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __wchar_t _Ch, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) wint_t __cdecl _fputwchar([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __wchar_t _Ch); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) wint_t __cdecl getwc([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) inline wint_t __cdecl getwchar(); } 
extern "C" { __declspec(dllimport) wint_t __cdecl putwc([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __wchar_t _Ch, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) inline wint_t __cdecl putwchar([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __wchar_t _Ch); } 
extern "C" { __declspec(dllimport) wint_t __cdecl ungetwc([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _Ch, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 

extern "C" { __declspec(dllimport) __wchar_t *__cdecl fgetws([SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dst, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _SizeInWords, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl fputws([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _getws_s([SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Str, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords); } 
template < size_t _Size > inline wchar_t * __cdecl _getws_s ( wchar_t ( & _String ) [ _Size ] ) { return _getws_s ( _String, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _getws_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _getws([SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _String); } 
extern "C" { __declspec(dllimport) int __cdecl _putws([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str); } 

extern "C" { __declspec(dllimport) int __cdecl fwprintf([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl fwprintf_s([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl wprintf([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl wprintf_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, ...); } 

[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _scwprintf([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl vfwprintf([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl vfwprintf_s([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl vwprintf([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl vwprintf_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, va_list _ArgList); } 



extern "C" { __declspec(dllimport) int __cdecl swprintf_s([SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dst, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, ...); } 

/* Removed pragma: __pragma( warning(push)) *//* Removed pragma: __pragma( warning(disable: 4793)) */template < size_t _Size > inline int __cdecl swprintf_s ( wchar_t ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] [ SA_FormatString ( Style = "printf" ) ] const wchar_t * _Format, ... ) { va_list _ArgList; ( _ArgList = ( va_list ) ( & reinterpret_cast < const char & > ( _Format ) ) + ( ( sizeof ( _Format ) + sizeof ( int ) - 1 ) & ~ ( sizeof ( int ) - 1 ) ) ); return vswprintf_s ( _Dest, _Size, _Format, _ArgList ); }/* Removed pragma: __pragma( warning(pop)) */

extern "C" { __declspec(dllimport) int __cdecl vswprintf_s([SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dst, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, va_list _ArgList); } 

template < size_t _Size > inline int __cdecl vswprintf_s ( wchar_t ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] [ SA_FormatString ( Style = "printf" ) ] const wchar_t * _Format, va_list _Args ) { return vswprintf_s ( _Dest, _Size, _Format, _Args ); }

extern "C" { __declspec(dllimport) int __cdecl _swprintf_c([SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vswprintf_c([SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl _snwprintf_s([SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, ...); } 
/* Removed pragma: __pragma( warning(push)) *//* Removed pragma: __pragma( warning(disable: 4793)) */template < size_t _Size > inline int __cdecl _snwprintf_s ( wchar_t ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] size_t _Count, [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] [ SA_FormatString ( Style = "printf" ) ] const wchar_t * _Format, ... ) { va_list _ArgList; ( _ArgList = ( va_list ) ( & reinterpret_cast < const char & > ( _Format ) ) + ( ( sizeof ( _Format ) + sizeof ( int ) - 1 ) & ~ ( sizeof ( int ) - 1 ) ) ); return _vsnwprintf_s ( _Dest, _Size, _Count, _Format, _ArgList ); }/* Removed pragma: __pragma( warning(pop)) */
extern "C" { __declspec(dllimport) int __cdecl _vsnwprintf_s([SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, va_list _ArgList); } 
template < size_t _Size > inline int __cdecl _vsnwprintf_s ( wchar_t ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] size_t _Count, [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] [ SA_FormatString ( Style = "printf" ) ] const wchar_t * _Format, va_list _Args ) { return _vsnwprintf_s ( _Dest, _Size, _Count, _Format, _Args ); }
/* Removed pragma: #pragma warning(push)*/
/* Removed pragma: #pragma warning(disable:4793)*/
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _snwprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) int __cdecl _snwprintf([SA_Pre ( Null = SA_No, WritableElements = "_Count" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Maybe )] __wchar_t * _Dest, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, ...); } extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _vsnwprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __declspec(dllimport) int __cdecl _vsnwprintf([SA_Pre ( Null = SA_No, WritableElements = "_Count" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Maybe )] __wchar_t * _Dest, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, va_list _Args); } 
/* Removed pragma: #pragma warning(pop)*/

extern "C" { __declspec(dllimport) int __cdecl _fwprintf_p([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _wprintf_p([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vfwprintf_p([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vwprintf_p([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _swprintf_p([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vswprintf_p([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, va_list _ArgList); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _scwprintf_p([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, ...); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _vscwprintf_p([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl _wprintf_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _wprintf_p_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _wprintf_s_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vwprintf_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vwprintf_p_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vwprintf_s_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl _fwprintf_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _fwprintf_p_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _fwprintf_s_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vfwprintf_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vfwprintf_p_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vfwprintf_s_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl _swprintf_c_l([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _swprintf_p_l([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _swprintf_s_l([SA_Pre ( Null = SA_No, WritableElements = "_DstSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _DstSize, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vswprintf_c_l([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vswprintf_p_l([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vswprintf_s_l([SA_Pre ( Null = SA_No, WritableElements = "_DstSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _DstSize, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 

[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _scwprintf_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _scwprintf_p_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _vscwprintf_p_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _snwprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNI" "NGS. See online help for details.")) __declspec(dllimport) int __cdecl _snwprintf_l([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _snwprintf_s_l([SA_Pre ( Null = SA_No, WritableElements = "_DstSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _DstSize, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _vsnwprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARN" "INGS. See online help for details.")) __declspec(dllimport) int __cdecl _vsnwprintf_l([SA_Pre ( Null = SA_No, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vsnwprintf_s_l([SA_Pre ( Null = SA_No, WritableElements = "_DstSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _DstSize, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 
#line 537
/* Removed pragma: #pragma warning(push)*/
/* Removed pragma: #pragma warning(disable:4141 4996 4793)*/
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _swprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Micr" "osoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(dllimport) int __cdecl _swprintf([SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dest, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, ...); } extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using vswprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Micr" "osoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(dllimport) int __cdecl _vswprintf([SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dest, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, va_list _Args); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using __swprintf_l_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNI" "NGS. See online help for details.")) __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Micr" "osoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(dllimport) int __cdecl __swprintf_l(__wchar_t * _Dest, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, _locale_t _Plocinfo, ...); } extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _vswprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNI" "NGS. See online help for details.")) __declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Micr" "osoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(dllimport) int __cdecl __vswprintf_l(__wchar_t * _Dest, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, _locale_t _Plocinfo, va_list _Args); } 
/* Removed pragma: #pragma warning(pop)*/
#line 34 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
/* Removed pragma: #pragma warning( push )*/
/* Removed pragma: #pragma warning( disable : 4793 4412 )*/
extern "C" { static __inline int swprintf(__wchar_t *_String, size_t _Count, const __wchar_t *_Format, ...) 
{ 
va_list _Arglist; 
int _Ret; 
(_Arglist = (va_list)(&(reinterpret_cast< const char &>(_Format))) + (((sizeof (_Format) + sizeof(int)) - (1)) & ~(sizeof(int) - (1)))); 
_Ret = _vswprintf_c_l(_String, _Count, _Format, 0, _Arglist); 
(_Arglist = (va_list)0); 
return _Ret; 
} } 
/* Removed pragma: #pragma warning( pop )*/

/* Removed pragma: #pragma warning( push )*/
/* Removed pragma: #pragma warning( disable : 4412 )*/
extern "C" { static __inline int __cdecl vswprintf(__wchar_t *_String, size_t _Count, const __wchar_t *_Format, va_list _Ap) 
{ 
return _vswprintf_c_l(_String, _Count, _Format, 0, _Ap); 
} } 
/* Removed pragma: #pragma warning( pop )*/




/* Removed pragma: #pragma warning( push )*/
/* Removed pragma: #pragma warning( disable : 4793 4412 )*/
extern "C" { static __inline int _swprintf_l(__wchar_t *_String, size_t _Count, const __wchar_t *_Format, _locale_t _Plocinfo, ...) 
{ 
va_list _Arglist; 
int _Ret; 
(_Arglist = (va_list)(&(reinterpret_cast< const char &>(_Plocinfo))) + (((sizeof (_Plocinfo) + sizeof(int)) - (1)) & ~(sizeof(int) - (1)))); 
_Ret = _vswprintf_c_l(_String, _Count, _Format, _Plocinfo, _Arglist); 
(_Arglist = (va_list)0); 
return _Ret; 
} } 
/* Removed pragma: #pragma warning( pop )*/

/* Removed pragma: #pragma warning( push )*/
/* Removed pragma: #pragma warning( disable : 4412 )*/
extern "C" { static __inline int __cdecl _vswprintf_l(__wchar_t *_String, size_t _Count, const __wchar_t *_Format, _locale_t _Plocinfo, va_list _Ap) 
{ 
return _vswprintf_c_l(_String, _Count, _Format, _Plocinfo, _Ap); 
} } 
/* Removed pragma: #pragma warning( pop )*/


/* Removed pragma: #pragma warning( push )*/
/* Removed pragma: #pragma warning( disable : 4996 )*/

/* Removed pragma: #pragma warning( push )*/
/* Removed pragma: #pragma warning( disable : 4793 4141 )*/
__declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Micr" "osoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using swprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __inline int swprintf([SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t *_String, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t *_Format, ...) 
{ 
va_list _Arglist; 
(_Arglist = (va_list)(&(reinterpret_cast< const char &>(_Format))) + (((sizeof (_Format) + sizeof(int)) - (1)) & ~(sizeof(int) - (1)))); 
int _Ret = _vswprintf(_String, _Format, _Arglist); 
(_Arglist = (va_list)0); 
return _Ret; 
} 
/* Removed pragma: #pragma warning( pop )*/

/* Removed pragma: #pragma warning( push )*/
/* Removed pragma: #pragma warning( disable : 4141 )*/
__declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Micr" "osoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using vswprintf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __inline int __cdecl vswprintf([SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t *_String, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t *_Format, va_list _Ap) 
{ 
return _vswprintf(_String, _Format, _Ap); 
} 
/* Removed pragma: #pragma warning( pop )*/

/* Removed pragma: #pragma warning( push )*/
/* Removed pragma: #pragma warning( disable : 4793 4141 )*/
__declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Micr" "osoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _swprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __inline int _swprintf_l([SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t *_String, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t *_Format, _locale_t _Plocinfo, ...) 
{ 
va_list _Arglist; 
(_Arglist = (va_list)(&(reinterpret_cast< const char &>(_Plocinfo))) + (((sizeof (_Plocinfo) + sizeof(int)) - (1)) & ~(sizeof(int) - (1)))); 
int _Ret = __vswprintf_l(_String, _Format, _Plocinfo, _Arglist); 
(_Arglist = (va_list)0); 
return _Ret; 
} 
/* Removed pragma: #pragma warning( pop )*/

/* Removed pragma: #pragma warning( push )*/
/* Removed pragma: #pragma warning( disable : 4141 )*/
__declspec(deprecated("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Micr" "osoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")) __declspec(deprecated("This function or variable may be unsafe. Consider using _vswprintf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNI" "NGS. See online help for details.")) __inline int __cdecl _vswprintf_l([SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t *_String, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t *_Format, _locale_t _Plocinfo, va_list _Ap) 
{ 
return __vswprintf_l(_String, _Format, _Plocinfo, _Ap); 
} 
/* Removed pragma: #pragma warning( pop )*/

/* Removed pragma: #pragma warning( pop )*/
#line 561 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wtempnam([SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Directory, [SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _FilePrefix); } 
#line 567
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _vscwprintf([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, va_list _ArgList); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _vscwprintf_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using fwscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) int __cdecl fwscanf([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf" )] const __wchar_t * _Format, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _fwscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) int __cdecl _fwscanf_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 

extern "C" { __declspec(dllimport) int __cdecl fwscanf_s([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf_s" )] const __wchar_t * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl _fwscanf_s_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf_s" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using swscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) int __cdecl swscanf([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Src, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf" )] const __wchar_t * _Format, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _swscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) int __cdecl _swscanf_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Src, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 

extern "C" { __declspec(dllimport) int __cdecl swscanf_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Src, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf_s" )] const __wchar_t * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl _swscanf_s_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Src, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf_s" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _snwscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) int __cdecl _snwscanf([SA_Pre ( Null = SA_No, ValidElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes )] const __wchar_t * _Src, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf" )] const __wchar_t * _Format, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _snwscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNIN" "GS. See online help for details.")) __declspec(dllimport) int __cdecl _snwscanf_l([SA_Pre ( Null = SA_No, ValidElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes )] const __wchar_t * _Src, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _snwscanf_s([SA_Pre ( Null = SA_No, ValidElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes )] const __wchar_t * _Src, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf_s" )] const __wchar_t * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _snwscanf_s_l([SA_Pre ( Null = SA_No, ValidElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes )] const __wchar_t * _Src, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf_s" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using wscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) int __cdecl wscanf([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf" )] const __wchar_t * _Format, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) int __cdecl _wscanf_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 

extern "C" { __declspec(dllimport) int __cdecl wscanf_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf_s" )] const __wchar_t * _Format, ...); } 

extern "C" { __declspec(dllimport) int __cdecl _wscanf_s_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf_s" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
/* Removed pragma: #pragma warning(pop)*/

[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) FILE *__cdecl _wfdopen([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _FileHandle, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Mode); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wfopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) FILE *__cdecl _wfopen([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Mode); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wfopen_s([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Pre ( Deref = 2, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_Maybe ), SA_Post ( Deref = 2, Valid = SA_Yes )] FILE ** _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Mode); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wfreopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) FILE *__cdecl _wfreopen([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Mode, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _OldFile); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wfreopen_s([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Pre ( Deref = 2, Valid = SA_No ), SA_Post ( Deref = 1, Null = SA_Maybe ), SA_Post ( Deref = 2, Valid = SA_Yes )] FILE ** _File, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Mode, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _OldFile); } 
#line 603
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) FILE *__cdecl _wpopen([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Command, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Mode); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wremove([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wtmpnam_s([SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords); } 
template < size_t _Size > inline errno_t __cdecl _wtmpnam_s ( [ SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Post ( Deref = 2, Valid = SA_Yes ) ] wchar_t ( & _Buffer ) [ _Size ] ) { return _wtmpnam_s ( _Buffer, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wtmpnam_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wtmpnam([SA_Pre ( Null = SA_Maybe ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Buffer); } 

extern "C" { __declspec(dllimport) wint_t __cdecl _fgetwc_nolock([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) wint_t __cdecl _fputwc_nolock([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __wchar_t _Ch, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) wint_t __cdecl _ungetwc_nolock([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _Ch, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
#line 619
extern "C" { inline wint_t __cdecl getwchar() 
{ return (fgetwc((&(__iob_func()[0])))); } } 
extern "C" { inline wint_t __cdecl putwchar(__wchar_t _C) 
{ return (fputwc(_C, (&(__iob_func()[1])))); } } 
#line 669
extern "C" { __declspec(dllimport) void __cdecl _lock_file([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) void __cdecl _unlock_file([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
#line 677
extern "C" { __declspec(dllimport) int __cdecl _fclose_nolock([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl _fflush_nolock([SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) size_t __cdecl _fread_nolock([SA_Pre ( Null = SA_No, WritableBytes = "\n@_ElementSize*_Count" ), SA_Pre ( Deref = 1, Valid = SA_No )] void * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _ElementSize, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) size_t __cdecl _fread_nolock_s([SA_Pre ( Null = SA_No, WritableBytes = "\n@_ElementSize*_Count" ), SA_Pre ( Deref = 1, Valid = SA_No )] void * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _DstSize, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _ElementSize, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl _fseek_nolock([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] long _Offset, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Origin); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) long __cdecl _ftell_nolock([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl _fseeki64_nolock([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __int64 _Offset, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Origin); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) __int64 __cdecl _ftelli64_nolock([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) size_t __cdecl _fwrite_nolock([SA_Pre ( Null = SA_No, ValidBytes = "\n@_Size*_Count" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const void * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(dllimport) int __cdecl _ungetc_nolock([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Ch, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
#line 713
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _tempnam. See online help for details.")) __declspec(dllimport) char *__cdecl tempnam([SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Directory, [SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _FilePrefix); } 
#line 719
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _fcloseall. See online help for details.")) __declspec(dllimport) int __cdecl fcloseall(); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _fdopen. See online help for details.")) __declspec(dllimport) FILE *__cdecl fdopen([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _FileHandle, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const char * _Format); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _fgetchar. See online help for details.")) __declspec(dllimport) int __cdecl fgetchar(); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _fileno. See online help for details.")) __declspec(dllimport) int __cdecl fileno([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] FILE * _File); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _flushall. See online help for details.")) __declspec(dllimport) int __cdecl flushall(); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _fputchar. See online help for details.")) __declspec(dllimport) int __cdecl fputchar([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Ch); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _getw. See online help for details.")) __declspec(dllimport) int __cdecl getw([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _putw. See online help for details.")) __declspec(dllimport) int __cdecl putw([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Ch, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] FILE * _File); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _rmtmp. See online help for details.")) __declspec(dllimport) int __cdecl rmtmp(); } 
#line 30 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\tchar.h"
/* Removed pragma: #pragma warning(disable:4514)*/
#line 60
#pragma deprecated("_ftcscat")
#pragma deprecated("_ftcschr")
#pragma deprecated("_ftcscpy")
#pragma deprecated("_ftcscspn")
#pragma deprecated("_ftcslen")
#pragma deprecated("_ftcsncat")
#pragma deprecated("_ftcsncpy")
#pragma deprecated("_ftcspbrk")
#pragma deprecated("_ftcsrchr")
#pragma deprecated("_ftcsspn")
#pragma deprecated("_ftcsstr")
#pragma deprecated("_ftcstok")
#pragma deprecated("_ftcsdup")
#pragma deprecated("_ftcsnset")
#pragma deprecated("_ftcsrev")
#pragma deprecated("_ftcsset")
#pragma deprecated("_ftcscmp")
#pragma deprecated("_ftcsicmp")
#pragma deprecated("_ftcsnccmp")
#pragma deprecated("_ftcsncmp")
#pragma deprecated("_ftcsncicmp")
#pragma deprecated("_ftcsnicmp")
#pragma deprecated("_ftcscoll")
#pragma deprecated("_ftcsicoll")
#pragma deprecated("_ftcsnccoll")
#pragma deprecated("_ftcsncoll")
#pragma deprecated("_ftcsncicoll")
#pragma deprecated("_ftcsnicoll")
#pragma deprecated("_ftcsclen")
#pragma deprecated("_ftcsnccat")
#pragma deprecated("_ftcsnccpy")
#pragma deprecated("_ftcsncset")
#pragma deprecated("_ftcsdec")
#pragma deprecated("_ftcsinc")
#pragma deprecated("_ftcsnbcnt")
#pragma deprecated("_ftcsnccnt")
#pragma deprecated("_ftcsnextc")
#pragma deprecated("_ftcsninc")
#pragma deprecated("_ftcsspnp")
#pragma deprecated("_ftcslwr")
#pragma deprecated("_ftcsupr")
#pragma deprecated("_ftclen")
#pragma deprecated("_ftccpy")
#pragma deprecated("_ftccmp")
#line 736 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
#pragma pack ( pop )
#line 29 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\wchar.h"
#pragma pack ( push, 8 )
#line 88
extern "C" { typedef unsigned long _fsize_t; }
#line 94
extern "C" { struct _wfinddata32_t { 
unsigned attrib; 
__time32_t time_create; 
__time32_t time_access; 
__time32_t time_write; 
_fsize_t size; 
__wchar_t name[260]; 
}; }

extern "C" { struct _wfinddata32i64_t { 
unsigned attrib; 
__time32_t time_create; 
__time32_t time_access; 
__time32_t time_write; 
__int64 size; 
__wchar_t name[260]; 
}; }

extern "C" { struct _wfinddata64i32_t { 
unsigned attrib; 
__time64_t time_create; 
__time64_t time_access; 
__time64_t time_write; 
_fsize_t size; 
__wchar_t name[260]; 
}; }

extern "C" { struct _wfinddata64_t { 
unsigned attrib; 
__time64_t time_create; 
__time64_t time_access; 
__time64_t time_write; 
__int64 size; 
__wchar_t name[260]; 
}; }
#line 187
extern "C" { __declspec(dllimport) const unsigned short *__cdecl __pctype_func(); } 

extern "C" __declspec(dllimport) const unsigned short *_pctype; 
#line 200
extern "C" __declspec(dllimport) const unsigned short _wctype[]; 


extern "C" { __declspec(dllimport) const wctype_t *__cdecl __pwctype_func(); } 

extern "C" __declspec(dllimport) const wctype_t *_pwctype; 
#line 235
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl iswalpha([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _iswalpha_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl iswupper([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _iswupper_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl iswlower([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _iswlower_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl iswdigit([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _iswdigit_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl iswxdigit([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _iswxdigit_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl iswspace([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _iswspace_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl iswpunct([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _iswpunct_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl iswalnum([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _iswalnum_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl iswprint([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _iswprint_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl iswgraph([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _iswgraph_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl iswcntrl([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _iswcntrl_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl iswascii([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl isleadbyte([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _C); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _isleadbyte_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _C, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 

[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) wint_t __cdecl towupper([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) wint_t __cdecl _towupper_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) wint_t __cdecl towlower([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) wint_t __cdecl _towlower_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl iswctype([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wctype_t _Type); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _iswctype_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wctype_t _Type, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 

[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl __iswcsymf([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _iswcsymf_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl __iswcsym([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _iswcsym_l([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 

extern "C" { __declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using iswctype instea" "d. See online help for details.")) __declspec(dllimport) int __cdecl is_wctype([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _C, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wctype_t _Type); } 
#line 291
[returnvalue : SA_Post ( MustCheck = SA_Yes ), returnvalue : SA_Post ( Null = SA_Maybe, NullTerminated = SA_Yes ), returnvalue : SA_Post ( Deref = 1, Valid = SA_Yes )] extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wgetcwd([SA_Pre ( Null = SA_Maybe, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _SizeInWords); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes ), returnvalue : SA_Post ( Null = SA_Maybe, NullTerminated = SA_Yes ), returnvalue : SA_Post ( Deref = 1, Valid = SA_Yes )] extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wgetdcwd([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Drive, [SA_Pre ( Null = SA_Maybe, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _SizeInWords); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes ), returnvalue : SA_Post ( Null = SA_Maybe, NullTerminated = SA_Yes ), returnvalue : SA_Post ( Deref = 1, Valid = SA_Yes )] extern "C" { __wchar_t *__cdecl _wgetdcwd_nolock([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Drive, [SA_Pre ( Null = SA_Maybe, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No )] __wchar_t * _DstBuf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _SizeInWords); } 
#line 301
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wchdir([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Path); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wmkdir([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Path); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wrmdir([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Path); } 
#line 310
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _waccess([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _AccessMode); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _waccess_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _AccessMode); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wchmod([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Mode); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wsopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) int __cdecl _wcreat([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _PermissionMode); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) intptr_t __cdecl _wfindfirst32([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] _wfinddata32_t * _FindData); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wfindnext32([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] intptr_t _FindHandle, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] _wfinddata32_t * _FindData); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wunlink([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wrename([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _OldFilename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _NewFilename); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wmktemp_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _TemplateName, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords); } 
template < size_t _Size > inline errno_t __cdecl _wmktemp_s ( wchar_t ( & _TemplateName ) [ _Size ] ) { return _wmktemp_s ( _TemplateName, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wmktemp_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wmktemp([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _TemplateName); } 

[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) intptr_t __cdecl _wfindfirst32i64([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] _wfinddata32i64_t * _FindData); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) intptr_t __cdecl _wfindfirst64i32([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] _wfinddata64i32_t * _FindData); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) intptr_t __cdecl _wfindfirst64([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] _wfinddata64_t * _FindData); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wfindnext32i64([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] intptr_t _FindHandle, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] _wfinddata32i64_t * _FindData); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wfindnext64i32([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] intptr_t _FindHandle, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] _wfinddata64i32_t * _FindData); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wfindnext64([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] intptr_t _FindHandle, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] _wfinddata64_t * _FindData); } 

extern "C" { __declspec(dllimport) errno_t __cdecl _wsopen_s([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] int * _FileHandle, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _OpenFlag, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _ShareFlag, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _PermissionFlag); } 
#line 339
__declspec(deprecated("This function or variable may be unsafe. Consider using _wsopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) int __cdecl _wopen([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _OpenFlag, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _PermissionMode = 0); 
__declspec(deprecated("This function or variable may be unsafe. Consider using _wsopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) int __cdecl _wsopen([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _OpenFlag, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _ShareFlag, int _PermissionMode = 0); 
#line 351
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wsetlocale([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Category, [SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Locale); } 
#line 360
extern "C" { __declspec(dllimport) intptr_t __cdecl _wexecl([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _ArgList, ...); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wexecle([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _ArgList, ...); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wexeclp([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _ArgList, ...); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wexeclpe([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _ArgList, ...); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wexecv([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *const * _ArgList); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wexecve([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *const * _ArgList, 
[SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *const * _Env); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wexecvp([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *const * _ArgList); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wexecvpe([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *const * _ArgList, 
[SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *const * _Env); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wspawnl([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Mode, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _ArgList, ...); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wspawnle([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Mode, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _ArgList, ...); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wspawnlp([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Mode, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _ArgList, ...); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wspawnlpe([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Mode, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _ArgList, ...); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wspawnv([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Mode, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *const * _ArgList); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wspawnve([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Mode, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *const * _ArgList, 
[SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *const * _Env); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wspawnvp([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Mode, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *const * _ArgList); } 
extern "C" { __declspec(dllimport) intptr_t __cdecl _wspawnvpe([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _Mode, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Filename, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *const * _ArgList, 
[SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *const * _Env); } 
#line 458
extern "C" { typedef unsigned short _ino_t; }


extern "C" { typedef unsigned short ino_t; }
#line 467
extern "C" { typedef unsigned _dev_t; }


extern "C" { typedef unsigned dev_t; }
#line 476
extern "C" { typedef long _off_t; }


extern "C" { typedef long off_t; }
#line 486
extern "C" { struct _stat32 { 
_dev_t st_dev; 
_ino_t st_ino; 
unsigned short st_mode; 
short st_nlink; 
short st_uid; 
short st_gid; 
_dev_t st_rdev; 
_off_t st_size; 
__time32_t st_atime; 
__time32_t st_mtime; 
__time32_t st_ctime; 
}; }



extern "C" { struct stat { 
_dev_t st_dev; 
_ino_t st_ino; 
unsigned short st_mode; 
short st_nlink; 
short st_uid; 
short st_gid; 
_dev_t st_rdev; 
_off_t st_size; 
time_t st_atime; 
time_t st_mtime; 
time_t st_ctime; 
}; }



extern "C" { struct _stat32i64 { 
_dev_t st_dev; 
_ino_t st_ino; 
unsigned short st_mode; 
short st_nlink; 
short st_uid; 
short st_gid; 
_dev_t st_rdev; 
__int64 st_size; 
__time32_t st_atime; 
__time32_t st_mtime; 
__time32_t st_ctime; 
}; }

extern "C" { struct _stat64i32 { 
_dev_t st_dev; 
_ino_t st_ino; 
unsigned short st_mode; 
short st_nlink; 
short st_uid; 
short st_gid; 
_dev_t st_rdev; 
_off_t st_size; 
__time64_t st_atime; 
__time64_t st_mtime; 
__time64_t st_ctime; 
}; }

extern "C" { struct _stat64 { 
_dev_t st_dev; 
_ino_t st_ino; 
unsigned short st_mode; 
short st_nlink; 
short st_uid; 
short st_gid; 
_dev_t st_rdev; 
__int64 st_size; 
__time64_t st_atime; 
__time64_t st_mtime; 
__time64_t st_ctime; 
}; }
#line 592
extern "C" { __declspec(dllimport) int __cdecl _wstat32([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Name, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] _stat32 * _Stat); } 

extern "C" { __declspec(dllimport) int __cdecl _wstat32i64([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Name, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] _stat32i64 * _Stat); } 
extern "C" { __declspec(dllimport) int __cdecl _wstat64i32([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Name, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] _stat64i32 * _Stat); } 
extern "C" { __declspec(dllimport) int __cdecl _wstat64([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Name, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] _stat64 * _Stat); } 
#line 612
extern "C" { __declspec(dllimport) errno_t __cdecl _cgetws_s([SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( ValidElements = "*_SizeRead" ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Buffer, size_t _SizeInWords, [SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] size_t * _SizeRead); } 
template < size_t _Size > inline errno_t __cdecl _cgetws_s ( [ SA_Post ( Deref = 1, Null = SA_No, ValidElements = "*_Buffer" ) ] [ SA_Post ( Deref = 2, Valid = SA_Yes ) ] wchar_t ( & _Buffer ) [ _Size ], size_t * _Size ) { return _cgetws_s ( _Buffer, _Size, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _cgetws_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _cgetws([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Buffer); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) wint_t __cdecl _getwch(); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) wint_t __cdecl _getwche(); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) wint_t __cdecl _putwch(__wchar_t _WCh); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) wint_t __cdecl _ungetwch(wint_t _WCh); } 
extern "C" { __declspec(dllimport) int __cdecl _cputws([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _String); } 
extern "C" { __declspec(dllimport) int __cdecl _cwprintf([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _cwprintf_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _cwscanf_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) int __cdecl _cwscanf([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf" )] const __wchar_t * _Format, ...); } 
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _cwscanf_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) int __cdecl _cwscanf_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _cwscanf_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf" )] const __wchar_t * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _cwscanf_s_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "scanf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vcwprintf([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vcwprintf_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl _cwprintf_p([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vcwprintf_p([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, va_list _ArgList); } 

extern "C" { __declspec(dllimport) int __cdecl _cwprintf_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _cwprintf_s_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vcwprintf_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _vcwprintf_s_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 
extern "C" { __declspec(dllimport) int __cdecl _cwprintf_p_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, ...); } 
extern "C" { __declspec(dllimport) int __cdecl _vcwprintf_p_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale, va_list _ArgList); } 

extern "C" { wint_t __cdecl _putwch_nolock(__wchar_t _WCh); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { wint_t __cdecl _getwch_nolock(); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { wint_t __cdecl _getwche_nolock(); } 
extern "C" { wint_t __cdecl _ungetwch_nolock(wint_t _WCh); } 
#line 983
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wcsdup([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str); } 
#line 990
extern "C" { __declspec(dllimport) errno_t __cdecl wcscat_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes, WritableElements = "_DstSize" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dst, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] rsize_t _DstSize, const __wchar_t * _Src); } 

template < size_t _Size > inline errno_t __cdecl wcscat_s ( wchar_t ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const wchar_t * _Source ) { return wcscat_s ( _Dest, _Size, _Source ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using wcscat_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcscat([SA_Pre ( Null = SA_No, WritableElementsLength = "_Source" ), SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dest, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Source); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) const __wchar_t *__cdecl wcschr([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str, __wchar_t _Ch); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl wcscmp([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str2); } 

extern "C" { __declspec(dllimport) errno_t __cdecl wcscpy_s([SA_Pre ( Null = SA_No, WritableElements = "_DstSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dst, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] rsize_t _DstSize, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Src); } 

template < size_t _Size > inline errno_t __cdecl wcscpy_s ( wchar_t ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const wchar_t * _Source ) { return wcscpy_s ( _Dest, _Size, _Source ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using wcscpy_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcscpy([SA_Pre ( Null = SA_No, WritableElementsLength = "_Source" ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dest, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Source); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) size_t __cdecl wcscspn([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Control); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) size_t __cdecl wcslen([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) size_t __cdecl wcsnlen([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Src, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount); } 

[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { static __inline size_t __cdecl wcsnlen_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_Src, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount) 
{ 
return (_Src == (0)) ? (0) : (wcsnlen(_Src, _MaxCount)); 
} } 


extern "C" { __declspec(dllimport) errno_t __cdecl wcsncat_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes, WritableElements = "_DstSize" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dst, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] rsize_t _DstSize, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Src, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] rsize_t _MaxCount); } 

template < size_t _Size > inline errno_t __cdecl wcsncat_s ( [ SA_Pre ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 2, Valid = SA_Yes ) ] [ SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Post ( Deref = 2, Valid = SA_Yes ) ] wchar_t ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const wchar_t * _Source, [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] size_t _Count ) { return wcsncat_s ( _Dest, _Size, _Source, _Count ); }

/* Removed pragma: #pragma warning(push)*/
/* Removed pragma: #pragma warning(disable:6059)*/
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using wcsncat_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcsncat([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes, WritableElements = "_Count" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dest, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Source, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count); } 
/* Removed pragma: #pragma warning(pop)*/

[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl wcsncmp([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str2, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount); } 

extern "C" { __declspec(dllimport) errno_t __cdecl wcsncpy_s([SA_Pre ( Null = SA_No, WritableElements = "_DstSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dst, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] rsize_t _DstSize, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Src, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] rsize_t _MaxCount); } 

template < size_t _Size > inline errno_t __cdecl wcsncpy_s ( wchar_t ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const wchar_t * _Source, [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] size_t _Count ) { return wcsncpy_s ( _Dest, _Size, _Source, _Count ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using wcsncpy_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcsncpy([SA_Pre ( Null = SA_No, WritableElements = "_Count" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Maybe )] __wchar_t * _Dest, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Source, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) const __wchar_t *__cdecl wcspbrk([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Control); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) const __wchar_t *__cdecl wcsrchr([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __wchar_t _Ch); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) size_t __cdecl wcsspn([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Control); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) const __wchar_t *__cdecl wcsstr([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _SubStr); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using wcstok_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. S" "ee online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcstok([SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Str, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Delim); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) __wchar_t *__cdecl wcstok_s([SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Str, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Delim, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 2, Valid = SA_Yes ), SA_Post ( Deref = 1, Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] __wchar_t ** _Context); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcserror_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wcserror([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _ErrNum); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wcserror_s([SA_Pre ( Null = SA_Maybe, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Buf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] int _ErrNum); } 
template < size_t _Size > inline errno_t __cdecl _wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] int _Error ) { return _wcserror_s ( _Buffer, _Size, _Error ); }
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using __wcserror_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl __wcserror([SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str); } 
extern "C" { __declspec(dllimport) errno_t __cdecl __wcserror_s([SA_Pre ( Null = SA_Maybe, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Buffer, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _ErrMsg); } 
template < size_t _Size > inline errno_t __cdecl __wcserror_s ( wchar_t ( & _Buffer ) [ _Size ], [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const wchar_t * _ErrorMessage ) { return __wcserror_s ( _Buffer, _Size, _ErrorMessage ); }

[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wcsicmp([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str2); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wcsicmp_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str2, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wcsnicmp([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str2, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wcsnicmp_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str2, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wcsnset_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes, WritableElements = "_DstSizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dst, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _DstSizeInWords, __wchar_t _Val, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount); } 
template < size_t _Size > inline errno_t __cdecl _wcsnset_s ( [ SA_Pre ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 2, Valid = SA_Yes ) ] [ SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Post ( Deref = 2, Valid = SA_Yes ) ] wchar_t ( & _Dst ) [ _Size ], wchar_t _Val, [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] size_t _MaxCount ) { return _wcsnset_s ( _Dst, _Size, _Val, _MaxCount ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcsnset_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS." " See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wcsnset([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Str, __wchar_t _Val, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount); } 
extern "C" { __declspec(dllimport) __wchar_t *__cdecl _wcsrev([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Str); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wcsset_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Str, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, __wchar_t _Val); } 
template < size_t _Size > inline errno_t __cdecl _wcsset_s ( [ SA_Pre ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 2, Valid = SA_Yes ) ] [ SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Post ( Deref = 2, Valid = SA_Yes ) ] wchar_t ( & _Str ) [ _Size ], wchar_t _Val ) { return _wcsset_s ( _Str, _Size, _Val ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcsset_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wcsset([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Str, __wchar_t _Val); } 

extern "C" { __declspec(dllimport) errno_t __cdecl _wcslwr_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Str, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords); } 
template < size_t _Size > inline errno_t __cdecl _wcslwr_s ( wchar_t ( & _String ) [ _Size ] ) { return _wcslwr_s ( _String, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcslwr_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wcslwr([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _String); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wcslwr_s_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Str, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
template < size_t _Size > inline errno_t __cdecl _wcslwr_s_l ( wchar_t ( & _String ) [ _Size ], [ SA_Pre ( Null = SA_Maybe ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] _locale_t _Locale ) { return _wcslwr_s_l ( _String, _Size, _Locale ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcslwr_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wcslwr_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _String, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wcsupr_s([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes, WritableElements = "_Size" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Str, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size); } 
template < size_t _Size > inline errno_t __cdecl _wcsupr_s ( wchar_t ( & _String ) [ _Size ] ) { return _wcsupr_s ( _String, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcsupr_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wcsupr([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _String); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wcsupr_s_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes, WritableElements = "_Size" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Str, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
template < size_t _Size > inline errno_t __cdecl _wcsupr_s_l ( [ SA_Pre ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 2, Valid = SA_Yes ) ] [ SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Post ( Deref = 2, Valid = SA_Yes ) ] wchar_t ( & _String ) [ _Size ], [ SA_Pre ( Null = SA_Maybe ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] _locale_t _Locale ) { return _wcsupr_s_l ( _String, _Size, _Locale ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcsupr_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wcsupr_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _String, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
extern "C" { __declspec(dllimport) size_t __cdecl wcsxfrm([SA_Pre ( Null = SA_Maybe, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Maybe )] __wchar_t * _Dst, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Src, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount); } 
extern "C" { __declspec(dllimport) size_t __cdecl _wcsxfrm_l([SA_Pre ( Null = SA_Maybe, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Maybe )] __wchar_t * _Dst, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Src, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl wcscoll([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str2); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wcscoll_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str2, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wcsicoll([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str2); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wcsicoll_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str2, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wcsncoll([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str2, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wcsncoll_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str2, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wcsnicoll([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str2, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(dllimport) int __cdecl _wcsnicoll_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str2, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 
#line 1078
[returnvalue : SA_Post ( MustCheck = SA_Yes )] inline __wchar_t *__cdecl wcschr([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] __wchar_t *_Str, __wchar_t _Ch) 
{ return ((__wchar_t *)wcschr((const __wchar_t *)_Str, _Ch)); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] inline __wchar_t *__cdecl wcspbrk([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] __wchar_t *_Str, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_Control) 
{ return ((__wchar_t *)wcspbrk((const __wchar_t *)_Str, _Control)); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] inline __wchar_t *__cdecl wcsrchr([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] __wchar_t *_Str, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __wchar_t _Ch) 
{ return ((__wchar_t *)wcsrchr((const __wchar_t *)_Str, _Ch)); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] inline __wchar_t *__cdecl wcsstr([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] __wchar_t *_Str, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_SubStr) 
{ return ((__wchar_t *)wcsstr((const __wchar_t *)_Str, _SubStr)); } 
#line 1097
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _wcsdup. See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcsdup([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str); } 
#line 1107
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _wcsicmp. See online help for details.")) __declspec(dllimport) int __cdecl wcsicmp([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str2); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _wcsnicmp. See online help for details.")) __declspec(dllimport) int __cdecl wcsnicmp([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str2, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _wcsnset. See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcsnset([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Str, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __wchar_t _Val, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _wcsrev. See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcsrev([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Str); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _wcsset. See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcsset([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Str, __wchar_t _Val); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _wcslwr. See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcslwr([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Str); } 
extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _wcsupr. See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl wcsupr([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Str); } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __declspec(deprecated("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: _wcsicoll. See online help for details.")) __declspec(dllimport) int __cdecl wcsicoll([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t * _Str2); } 
#line 1122
extern "C" { struct tm { 
int tm_sec; 
int tm_min; 
int tm_hour; 
int tm_mday; 
int tm_mon; 
int tm_year; 
int tm_wday; 
int tm_yday; 
int tm_isdst; 
}; }
#line 1140
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wasctime_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wasctime([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] const tm * _Tm); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wasctime_s([SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( ValidElementsConst = 26 ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Buf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] const tm * _Tm); } 
template < size_t _Size > inline errno_t __cdecl _wasctime_s ( [ SA_Post ( Deref = 1, Null = SA_No, ValidElementsConst = 26 ) ] [ SA_Post ( Deref = 2, Valid = SA_Yes ) ] wchar_t ( & _Buffer ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] const struct tm * _Time ) { return _wasctime_s ( _Buffer, _Size, _Time ); }

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wctime32_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wctime32([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] const __time32_t * _Time); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wctime32_s([SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( ValidElementsConst = 26 ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Buf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] const __time32_t * _Time); } 
template < size_t _Size > inline errno_t __cdecl _wctime32_s ( [ SA_Post ( Deref = 1, Null = SA_No, ValidElementsConst = 26 ) ] [ SA_Post ( Deref = 2, Valid = SA_Yes ) ] wchar_t ( & _Buffer ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] const __time32_t * _Time ) { return _wctime32_s ( _Buffer, _Size, _Time ); }

extern "C" { __declspec(dllimport) size_t __cdecl wcsftime([SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Buf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] const tm * _Tm); } 
extern "C" { __declspec(dllimport) size_t __cdecl _wcsftime_l([SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Buf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_FormatString ( Style = "printf" )] const __wchar_t * _Format, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] const tm * _Tm, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale); } 

extern "C" { __declspec(dllimport) errno_t __cdecl _wstrdate_s([SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( ValidElementsConst = 9 ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Buf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords); } 
template < size_t _Size > inline errno_t __cdecl _wstrdate_s ( [ SA_Post ( Deref = 1, Null = SA_No, ValidElementsConst = 9 ) ] [ SA_Post ( Deref = 2, Valid = SA_Yes ) ] wchar_t ( & _Buffer ) [ _Size ] ) { return _wstrdate_s ( _Buffer, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wstrdate_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wstrdate([SA_Pre ( Null = SA_No, WritableElementsConst = 9 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Buffer); } 

extern "C" { __declspec(dllimport) errno_t __cdecl _wstrtime_s([SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( ValidElementsConst = 9 ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Buf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords); } 
template < size_t _Size > inline errno_t __cdecl _wstrtime_s ( [ SA_Post ( Deref = 1, Null = SA_No, ValidElementsConst = 9 ) ] [ SA_Post ( Deref = 2, Valid = SA_Yes ) ] wchar_t ( & _Buffer ) [ _Size ] ) { return _wstrtime_s ( _Buffer, _Size ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wstrtime_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wstrtime([SA_Pre ( Null = SA_No, WritableElementsConst = 9 ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Buffer); } 

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wctime64_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) __wchar_t *__cdecl _wctime64([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] const __time64_t * _Time); } 
extern "C" { __declspec(dllimport) errno_t __cdecl _wctime64_s([SA_Pre ( Null = SA_No, WritableElements = "_SizeInWords" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( ValidElementsConst = 26 ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Buf, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInWords, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] const __time64_t * _Time); } 
template < size_t _Size > inline errno_t __cdecl _wctime64_s ( [ SA_Post ( Deref = 1, Null = SA_No, ValidElementsConst = 26 ) ] [ SA_Post ( Deref = 2, Valid = SA_Yes ) ] wchar_t ( & _Buffer ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] const __time64_t * _Time ) { return _wctime64_s ( _Buffer, _Size, _Time ); }
#line 29 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\wtime.inl"
/* Removed pragma: #pragma warning(push)*/
/* Removed pragma: #pragma warning(disable:4996)*/
#line 46
extern "C" { static __inline __wchar_t *__cdecl _wctime(const time_t *_Time) 
{ 
/* Removed pragma: #pragma warning( push )*/
/* Removed pragma: #pragma warning( disable : 4996 )*/
return _wctime64(_Time); 
/* Removed pragma: #pragma warning( pop )*/
} } 

extern "C" { static __inline errno_t __cdecl _wctime_s(__wchar_t *_Buffer, size_t _SizeInWords, const time_t *_Time) 
{ 
return _wctime64_s(_Buffer, _SizeInWords, _Time); 
} } 


/* Removed pragma: #pragma warning(pop)*/
#line 1171 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\wchar.h"
extern "C" { typedef int mbstate_t; }
extern "C" { typedef __wchar_t _Wint_t; }

extern "C" { __declspec(dllimport) wint_t __cdecl btowc(int); } 
extern "C" { __declspec(dllimport) size_t __cdecl mbrlen([SA_Pre ( Null = SA_Maybe, ValidBytes = "_SizeInBytes" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes )] const char * _Ch, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInBytes, 
[SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] mbstate_t * _State); } 
extern "C" { __declspec(dllimport) size_t __cdecl mbrtowc([SA_Pre ( Null = SA_Maybe ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _DstCh, [SA_Pre ( Null = SA_Maybe, ValidBytes = "_SizeInBytes" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes )] const char * _SrcCh, 
[SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInBytes, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] mbstate_t * _State); } 
extern "C" { __declspec(dllimport) errno_t __cdecl mbsrtowcs_s([SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] size_t * _Retval, [SA_Pre ( Null = SA_Maybe, WritableElements = "_Size" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dst, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Null = SA_Maybe ), SA_Pre ( Deref = 2, Valid = SA_Yes ), SA_Post ( Deref = 1, Null = SA_Maybe ), SA_Post ( Deref = 2, Valid = SA_Yes )] const char ** _PSrc, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _N, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] mbstate_t * _State); } 
template < size_t _Size > inline errno_t __cdecl mbsrtowcs_s ( [ SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ) ] [ SA_Pre ( Deref = 1, Valid = SA_No ) ] size_t * _Retval, [ SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Post ( Deref = 2, Valid = SA_Yes ) ] wchar_t ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Post ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Null = SA_Maybe ) ] [ SA_Pre ( Deref = 2, Valid = SA_Yes ) ] [ SA_Post ( Deref = 1, Null = SA_Maybe ) ] [ SA_Post ( Deref = 2, Valid = SA_Yes ) ] const char * * _PSource, [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] size_t _Count, [ SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ) ] [ SA_Pre ( Deref = 1, Valid = SA_No ) ] mbstate_t * _State ) { return mbsrtowcs_s ( _Retval, _Dest, _Size, _PSource, _Count, _State ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using mbsrtowcs_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) size_t __cdecl mbsrtowcs([SA_Pre ( Null = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t * _Dest, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Null = SA_Maybe ), SA_Pre ( Deref = 2, Valid = SA_Yes ), SA_Post ( Deref = 1, Null = SA_Maybe ), SA_Post ( Deref = 2, Valid = SA_Yes )] const char ** _PSrc, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] mbstate_t * _State); } 

extern "C" { __declspec(dllimport) errno_t __cdecl wcrtomb_s([SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] size_t * _Retval, [SA_Pre ( Null = SA_Maybe, WritableBytes = "_SizeInBytes" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Dst, 
[SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInBytes, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __wchar_t _Ch, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] mbstate_t * _State); } 
template < size_t _Size > inline errno_t __cdecl wcrtomb_s ( [ SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ) ] [ SA_Pre ( Deref = 1, Valid = SA_No ) ] size_t * _Retval, [ SA_Pre ( Null = SA_Maybe, WritableBytes = "_Size" ) ] [ SA_Pre ( Deref = 1, Valid = SA_No ) ] [ SA_Post ( NullTerminated = SA_Yes ) ] [ SA_Post ( Deref = 1, Valid = SA_Yes ) ] char ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] wchar_t _Source, [ SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ) ] [ SA_Pre ( Deref = 1, Valid = SA_No ) ] mbstate_t * _State ) { return wcrtomb_s ( _Retval, _Dest, _Size, _Source, _State ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using wcrtomb_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. " "See online help for details.")) __declspec(dllimport) size_t __cdecl wcrtomb([SA_Pre ( Null = SA_Maybe ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Dest, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __wchar_t _Source, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] mbstate_t * _State); } 
extern "C" { __declspec(dllimport) errno_t __cdecl wcsrtombs_s([SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] size_t * _Retval, [SA_Pre ( Null = SA_Maybe, WritableBytes = "_SizeInBytes" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( ValidBytes = "*_Retval" ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Dst, 
[SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _SizeInBytes, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 2, Valid = SA_Yes ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] const __wchar_t ** _Src, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] mbstate_t * _State); } 
template < size_t _Size > inline errno_t __cdecl wcsrtombs_s ( [ SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ) ] [ SA_Pre ( Deref = 1, Valid = SA_No ) ] size_t * _Retval, [ SA_Pre ( Null = SA_Maybe, WritableBytes = "_Size" ) ] [ SA_Pre ( Deref = 1, Valid = SA_No ) ] [ SA_Post ( NullTerminated = SA_Yes ) ] [ SA_Post ( Deref = 1, Valid = SA_Yes ) ] char ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Post ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 2, Valid = SA_Yes ) ] [ SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Post ( Deref = 2, Valid = SA_Yes ) ] const wchar_t * * _PSrc, [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] size_t _Count, [ SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ) ] [ SA_Pre ( Deref = 1, Valid = SA_No ) ] mbstate_t * _State ) { return wcsrtombs_s ( _Retval, _Dest, _Size, _PSrc, _Count, _State ); }
extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using wcsrtombs_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __declspec(dllimport) size_t __cdecl wcsrtombs([SA_Pre ( Null = SA_Maybe ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] char * _Dest, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 2, Valid = SA_Yes ), SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] const __wchar_t ** _PSource, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count, [SA_Pre ( Null = SA_Maybe, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] mbstate_t * _State); } 
extern "C" { __declspec(dllimport) int __cdecl wctob([SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] wint_t _WCh); } 
#line 1199
extern "C" { __declspec(dllimport) void *__cdecl memmove([SA_Pre ( Null = SA_Maybe, WritableBytes = "_Size" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( ValidBytes = "_Size" ), SA_Post ( Deref = 1, Valid = SA_Yes )] void * _Dst, [SA_Pre ( Null = SA_Maybe, ValidBytes = "_Size" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const void * _Src, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size); } 

extern "C" { void *__cdecl memcpy([SA_Pre ( Null = SA_Maybe, WritableBytes = "_Size" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( ValidBytes = "_Size" ), SA_Post ( Deref = 1, Valid = SA_Yes )] void * _Dst, [SA_Pre ( Null = SA_Maybe, ValidBytes = "_Size" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const void * _Src, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Size); } 

extern "C" { __declspec(dllimport) errno_t __cdecl memcpy_s([SA_Pre ( Null = SA_Maybe, WritableBytes = "_DstSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( ValidBytes = "_MaxCount" ), SA_Post ( Deref = 1, Valid = SA_Yes )] void * _Dst, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] rsize_t _DstSize, [SA_Pre ( Null = SA_Maybe, ValidBytes = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const void * _Src, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] rsize_t _MaxCount); } 
extern "C" { __declspec(dllimport) errno_t __cdecl memmove_s([SA_Pre ( Null = SA_Maybe, WritableBytes = "_DstSize" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( ValidBytes = "_MaxCount" ), SA_Post ( Deref = 1, Valid = SA_Yes )] void * _Dst, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] rsize_t _DstSize, [SA_Pre ( Null = SA_Maybe, ValidBytes = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const void * _Src, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] rsize_t _MaxCount); } 

extern "C" { __inline int __cdecl fwide([SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] FILE *_F, int _M) 
{ (void)_F; return (_M); } } 
extern "C" { __inline int __cdecl mbsinit([SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const mbstate_t *_P) 
{ return ((_P == (0)) || (*_P == 0)); } } 
extern "C" { __inline const __wchar_t *__cdecl wmemchr([SA_Pre ( Null = SA_No, ValidElements = "_N" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_S, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __wchar_t _C, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _N) 
{ for (; (0) < _N; (++_S), (--_N)) 
if (*_S == _C) 
return (_S);     
return (0); } } 
extern "C" { __inline int __cdecl wmemcmp([SA_Pre ( Null = SA_No, ValidElements = "_N" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_S1, [SA_Pre ( Null = SA_No, ValidElements = "_N" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_S2, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _N) 
{ for (; (0) < _N; ((++_S1), (++_S2)), (--_N)) 
if (*_S1 != *_S2) 
return ((*_S1 < *_S2) ? (-1) : (+1));     
return (0); } } 

extern "C" { __inline __wchar_t *__cdecl wmemcpy([SA_Pre ( Null = SA_Maybe, WritableElements = "_N" ), SA_Pre ( Deref = 1, Valid = SA_No )] __wchar_t *_S1, [SA_Pre ( Null = SA_Maybe, ValidElements = "_N" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_S2, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _N) 
{ 
/* Removed pragma: #pragma warning( push )*/
/* Removed pragma: #pragma warning( disable : 4996 6386 )*/
return (__wchar_t *)memcpy(_S1, _S2, _N * sizeof(__wchar_t)); 
/* Removed pragma: #pragma warning( pop )*/
} } 


extern "C" { __inline errno_t __cdecl wmemcpy_s([SA_Pre ( Null = SA_Maybe, WritableElements = "_N1" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( ValidElements = "_N" ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t *_S1, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] rsize_t _N1, [SA_Pre ( Null = SA_Maybe, ValidElements = "_N" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_S2, rsize_t _N) 
{ 
/* Removed pragma: #pragma warning( push )*/
/* Removed pragma: #pragma warning( disable : 6386 )*/
return memcpy_s(_S1, _N1 * sizeof(__wchar_t), _S2, _N * sizeof(__wchar_t)); 
} } 
/* Removed pragma: #pragma warning( pop )*/


extern "C" { __inline __wchar_t *__cdecl wmemmove([SA_Pre ( Null = SA_Maybe, WritableElements = "_N" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( ValidElements = "_N" ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t *_S1, [SA_Pre ( Null = SA_Maybe, ValidElements = "_N" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_S2, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _N) 
{ 
/* Removed pragma: #pragma warning( push )*/
/* Removed pragma: #pragma warning( disable : 4996 6386 )*/
/* Removed pragma: #pragma warning( disable : 6387)*/

return (__wchar_t *)memmove(_S1, _S2, _N * sizeof(__wchar_t)); 
/* Removed pragma: #pragma warning( pop )*/
} } 


extern "C" { __inline errno_t __cdecl wmemmove_s([SA_Pre ( Null = SA_Maybe, WritableElements = "_N1" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( ValidElements = "_N" ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t *_S1, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] rsize_t _N1, [SA_Pre ( Null = SA_Maybe, ValidElements = "_N" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_S2, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] rsize_t _N) 
{ 
/* Removed pragma: #pragma warning( push )*/
/* Removed pragma: #pragma warning( disable : 6386 )*/
return memmove_s(_S1, _N1 * sizeof(__wchar_t), _S2, _N * sizeof(__wchar_t)); 
/* Removed pragma: #pragma warning( pop )*/
} } 


extern "C" { __inline __wchar_t *__cdecl wmemset([SA_Pre ( Null = SA_No, WritableElements = "_N" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( ValidElements = "_N" ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t *_S, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __wchar_t _C, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _N) 
{ 
__wchar_t *_Su = _S; 
for (; (0) < _N; (++_Su), (--_N)) 
{ 
*_Su = _C; 
}  
return (_S); 
} } 



inline __wchar_t *__cdecl wmemchr([SA_Pre ( Null = SA_No, ValidElements = "_N" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] __wchar_t *_S, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __wchar_t _C, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _N) 
{ return (__wchar_t *)wmemchr((const __wchar_t *)_S, _C, _N); } 
#line 1282
#pragma pack ( pop )
#line 193 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\tchar.h"
extern "C" { typedef __wchar_t _TCHAR; }
extern "C" { typedef __wchar_t _TSCHAR; }
extern "C" { typedef __wchar_t _TUCHAR; }
extern "C" { typedef __wchar_t _TXCHAR; }
extern "C" { typedef wint_t _TINT; }
#line 203
extern "C" { typedef __wchar_t TCHAR; }
#line 646
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __inline size_t __cdecl _tclen([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_Cpc) 
{ 

(void *)_Cpc; 
return 1; 
} } 
extern "C" { __inline void __cdecl _tccpy([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] __wchar_t *_Pc1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_Cpc2) { *_Pc1 = (__wchar_t)(*_Cpc2); } } 
extern "C" { __inline void __cdecl _tccpy_l([SA_Pre ( Null = SA_No, WritableElementsConst = 1 ), SA_Pre ( Deref = 1, Valid = SA_No )] __wchar_t *_Pc1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_Cpc2, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale) 
{ 
(void)_Locale; 
_tccpy(_Pc1, _Cpc2); 
} } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __inline int __cdecl _tccmp([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_Cpc1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_Cpc2) { return (int)((*_Cpc1) - (*_Cpc2)); } } 
#line 721
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __inline __wchar_t *__cdecl _wcsdec([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_Cpc1, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_Cpc2) { return (__wchar_t *)(((_Cpc1) >= (_Cpc2)) ? (0) : ((_Cpc2) - 1)); } } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __inline __wchar_t *__cdecl _wcsinc([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_Pc) { return (__wchar_t *)(_Pc + 1); } } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __inline unsigned __cdecl _wcsnextc([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_Cpc) { return (unsigned)(*_Cpc); } } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __inline __wchar_t *__cdecl _wcsninc([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_Pc, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Sz) { return (__wchar_t *)(_Pc + _Sz); } } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __inline size_t __cdecl _wcsncnt([SA_Pre ( Null = SA_No, ValidElements = "_Cnt" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read ), SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes )] const __wchar_t *_String, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Cnt) 
{ 
size_t n = _Cnt; 
__wchar_t *cp = ((__wchar_t *)_String); 
while ((n--) && (*cp)) 
cp++;   
return (_Cnt - n) - (1); 
} } 
[returnvalue : SA_Post ( MustCheck = SA_Yes )] extern "C" { __inline __wchar_t *__cdecl _wcsspnp(

[SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_Cpc1, 
[SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_Cpc2) 

{ 
return (_Cpc1 == (0)) ? (0) : ((*(_Cpc1 += wcsspn(_Cpc1, _Cpc2)) != ('\000')) ? ((__wchar_t *)_Cpc1) : (0)); 
} } 


extern "C" { __inline errno_t __cdecl _wcsncpy_s_l([SA_Pre ( Null = SA_No, WritableElements = "_Destination_size_chars" ), SA_Pre ( Deref = 1, Valid = SA_No ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t *_Destination, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Destination_size_chars, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_Source, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale) 
{ 
(void)_Locale; 
return wcsncpy_s(_Destination, _Destination_size_chars, _Source, _Count); 
} } 


template < size_t _Size > inline errno_t __cdecl _wcsncpy_s_l ( wchar_t ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const wchar_t * _Source, [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] size_t _Count, [ SA_Pre ( Null = SA_Maybe ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] _locale_t _Locale ) { return _wcsncpy_s_l ( _Dest, _Size, _Source, _Count, _Locale ); }

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcsncpy_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __inline __wchar_t *__cdecl _wcsncpy_l([SA_Pre ( Null = SA_No, WritableElements = "_Count" ), SA_Pre ( Deref = 1, Valid = SA_No )] __wchar_t *_Dst, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_Source, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale) 
{ 
(void)_Locale; 
/* Removed pragma: #pragma warning( push )*/
/* Removed pragma: #pragma warning( disable : 4996 6054)*/
return wcsncpy(_Dst, _Source, _Count); 
/* Removed pragma: #pragma warning( pop )*/
} } 




extern "C" { __inline errno_t __cdecl _wcsncat_s_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes, WritableElements = "_Destination_size_chars" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t *_Destination, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Destination_size_chars, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_Source, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale) 
{ 
(void)_Locale; 
return wcsncat_s(_Destination, _Destination_size_chars, _Source, _Count); 
} } 


template < size_t _Size > inline errno_t __cdecl _wcsncat_s_l ( wchar_t ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] const wchar_t * _Source, [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] size_t _Count, [ SA_Pre ( Null = SA_Maybe ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] _locale_t _Locale ) { return _wcsncat_s_l ( _Dest, _Size, _Source, _Count, _Locale ); }

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcsncat_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __inline __wchar_t *__cdecl _wcsncat_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t *_Dst, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_Source, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale) 
{ 
(void)_Locale; 
/* Removed pragma: #pragma warning( push )*/
/* Removed pragma: #pragma warning( disable : 4996 6054 6059)*/

return wcsncat(_Dst, _Source, _Count); 
/* Removed pragma: #pragma warning( pop )*/
} } 



extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcstok_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __inline __wchar_t *_wcstok_l([SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t *_String, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_Delimiters, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale) 
{ 
(void)_Locale; 
/* Removed pragma: #pragma warning(push)*/
/* Removed pragma: #pragma warning(disable:4996)*/
return wcstok(_String, _Delimiters); 
/* Removed pragma: #pragma warning(pop)*/
} } 

extern "C" { __inline __wchar_t *_wcstok_s_l([SA_Pre ( Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t *_String, [SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] const __wchar_t *_Delimiters, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Pre ( Deref = 2, Valid = SA_Yes ), SA_Post ( Deref = 1, Null = SA_Maybe, NullTerminated = SA_Yes ), SA_Post ( Deref = 2, Valid = SA_Yes )] __wchar_t **_Current_position, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale) 
{ 
(void)_Locale; 
return wcstok_s(_String, _Delimiters, _Current_position); 
} } 

extern "C" { __inline errno_t _wcsnset_s_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes, WritableElements = "_Destination_size_chars" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t *_Destination, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Destination_size_chars, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __wchar_t _Value, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Count, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale) 
{ 
(void)_Locale; 
return _wcsnset_s(_Destination, _Destination_size_chars, _Value, _Count); 
} } 

template < size_t _Size > inline errno_t __cdecl _wcsnset_s_l ( [ SA_Pre ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 2, Valid = SA_Yes ) ] [ SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Post ( Deref = 2, Valid = SA_Yes ) ] wchar_t ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] wchar_t _Value, [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] size_t _Count, [ SA_Pre ( Null = SA_Maybe ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] _locale_t _Locale ) { return _wcsnset_s_l ( _Dest, _Size, _Value, _Count, _Locale ); }

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcsnset_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNING" "S. See online help for details.")) __inline __wchar_t *__cdecl _wcsnset_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes, WritableElements = "_MaxCount" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t *_Dst, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __wchar_t _Value, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _MaxCount, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale) 
{ 
(void)_Locale; 
/* Removed pragma: #pragma warning( push )*/
/* Removed pragma: #pragma warning( disable : 4996 )*/
return _wcsnset(_Dst, _Value, _MaxCount); 
/* Removed pragma: #pragma warning( pop )*/
} } 



extern "C" { __inline errno_t _wcsset_s_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes, WritableElements = "_Destination_size_chars" ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t *_Destination, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] size_t _Destination_size_chars, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __wchar_t _Value, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale) 
{ 
(void)_Locale; 
return _wcsset_s(_Destination, _Destination_size_chars, _Value); 
} } 

template < size_t _Size > inline errno_t __cdecl _wcsset_s_l ( [ SA_Pre ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Pre ( Deref = 2, Valid = SA_Yes ) ] [ SA_Post ( Deref = 1, Null = SA_No, NullTerminated = SA_Yes ) ] [ SA_Post ( Deref = 2, Valid = SA_Yes ) ] wchar_t ( & _Dest ) [ _Size ], [ SA_Pre ( Null = SA_No ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read ) ] wchar_t _Value, [ SA_Pre ( Null = SA_Maybe ) ] [ SA_Pre ( Deref = 1, Valid = SA_Yes ) ] [ SA_Pre ( Deref = 1, Access = SA_Read ) ] _locale_t _Locale ) { return _wcsset_s_l ( _Dest, _Size, _Value, _Locale ); }

extern "C" { __declspec(deprecated("This function or variable may be unsafe. Consider using _wcsset_s_l instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS" ". See online help for details.")) __inline __wchar_t *__cdecl _wcsset_l([SA_Pre ( Null = SA_No, NullTerminated = SA_Yes ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Post ( NullTerminated = SA_Yes ), SA_Post ( Deref = 1, Valid = SA_Yes )] __wchar_t *_Dst, [SA_Pre ( Null = SA_No ), SA_Pre ( Deref = 1, Valid = SA_Yes, Access = SA_Read )] __wchar_t _Value, [SA_Pre ( Null = SA_Maybe ), SA_Pre ( Deref = 1, Valid = SA_Yes ), SA_Pre ( Deref = 1, Access = SA_Read )] _locale_t _Locale) 
{ 
(void)_Locale; 
/* Removed pragma: #pragma warning( push )*/
/* Removed pragma: #pragma warning( disable : 4996 )*/
return _wcsset(_Dst, _Value); 
/* Removed pragma: #pragma warning( pop )*/
} } 
#line 11 ".\\classBase.h"
class classBase { 


int m_baseValue; 

public: classBase(int a) 
{ 
m_baseValue = a; 
} 
~classBase(); 
int printValue(); 
}; 
#line 13 ".\\myClass.h"
class myClass : public classBase { 


int m_n; 


public: myClass(int a); 
~myClass(); 
int getIntValue(); 
void setValue(int a); 
void addBigOne(int a, int b); 
#if !defined(CppTest_Stub_addBigOne__ZN7myClass9addBigOneEii) && defined(CPPTEST_USER_STUB__ZN7myClass9addBigOneEii)
#line 23
void CppTest_Stub_addBigOne__ZN7myClass9addBigOneEii(int a, int b); 
#endif

#if !defined(CppTest_Safe_Stub_addBigOne__ZN7myClass9addBigOneEii) && defined(CPPTEST_SAFE_STUB__ZN7myClass9addBigOneEii)
#line 23
void CppTest_Safe_Stub_addBigOne__ZN7myClass9addBigOneEii(int a, int b); 
#endif

#if !defined(CppTest_Auto_Stub_addBigOne__ZN7myClass9addBigOneEii) && defined(CPPTEST_AUTO_STUB__ZN7myClass9addBigOneEii)
#line 23
void CppTest_Auto_Stub_addBigOne__ZN7myClass9addBigOneEii(int a, int b); 
#endif
#line 24
void writeToFile(); 

}; 
#if defined(CPPTEST_USER_STUB__ZN7myClass9addBigOneEii)
#line 37 "e:\\test_code\\para_use\\para_use\\stubs\\myClassStub.cpp"
void myClass::CppTest_Stub_addBigOne__ZN7myClass9addBigOneEii(int a, int b) 
{ 
printf("addBigOneStub\n"); 
this->addBigOne(a, b); 
m_n = 1000; 
} 
#endif

extern "C" int __cdecl printf(const char * _Format, ...); 
#if defined(CPPTEST_USER_STUB_printf)
#line 46
extern "C" int __cdecl CppTest_Stub_printf_printf(const char *_Format, ...) 
{ 
printf("CppTest_Stub_printf\n"); 
return 0; 
} 
#endif

#line 1 "__TEST_HARNESS__"
;

#line 8 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.1\\engine\\runtime\\include\\cpptest_pre.h"
#define __CppTest_Pre_h__ 
#line 8 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.1\\engine\\runtime\\include\\cpptest.h"
#define __Parasoft_CppTest_h__ 
#line 8 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.1\\engine\\runtime\\include\\cpptest_runtime_u.h"
#define __CppTest_Runtime_u_h__ 
#line 8 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.1\\engine\\runtime\\include\\cpptest_common.h"
#define __CppTest_Common_h__ 
#line 8 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.1\\engine\\runtime\\include\\cpptest_portinfo.h"
#define __CppTest_PortInfo_h__ 
#line 27
#define CPPTEST_WIN32 
#line 38
#define EXTERN_C_LINKAGE extern "C"
#define EXTERN_C extern "C"
#define EXTERN_C_LINKAGE_START extern "C" {
#define EXTERN_C_LINKAGE_END }
#line 50
#define CPPTEST_SHARED 1



#define CPPTEST_TIME_NOTIME 0
#define CPPTEST_TIME_ANSI 1
#define CPPTEST_TIME_GETTIMEOFDAY 2
#define CPPTEST_TIME_TIMEB 3
#define CPPTEST_TIME_TICKLIB 4
#define CPPTEST_TIME_NXT_SYSTICK 5


#define CPPTEST_NO_THREADS 0
#define CPPTEST_THREADS_POSIX 1
#define CPPTEST_THREADS_WINDOWS 2
#define CPPTEST_THREADS_VXWORKS_KERNEL 3
#define CPPTEST_THREADS_VXWORKS_RTP 4
#line 7 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.1\\engine\\runtime\\include\\config/cpptest_msvc.h"
#define CPPTEST_MSVC 1



#define CPPTEST_EXPORT __declspec(dllexport)
#line 19
#define CPPTEST_IMPORT __declspec(dllimport)
#line 26
#define CDECL_CALL __cdecl



#define CPPTEST_TIME_MODE CPPTEST_TIME_TIMEB



#define CPPTEST_THREADS_IMPLEMENTATION CPPTEST_THREADS_WINDOWS



#define CPPTEST_SETJMP_ENABLED 1




#define CPPTEST_USE_ANSI_SETJMP 1




#define CPPTEST_WCHAR_ENABLED 1


#define CPPTEST_INTEGER __int64
#define CPPTEST_PRINTF_INTEGER CPPTEST_INTEGER
#define CPPTEST_PRINTF_INTEGER_FMT "%I64d"

#define CPPTEST_UINTEGER unsigned __int64
#define CPPTEST_PRINTF_UINTEGER CPPTEST_UINTEGER
#define CPPTEST_PRINTF_UINTEGER_FMT "%I64u"

#define CPPTEST_FLOAT double
#define CPPTEST_PRINTF_FLOAT double
#define CPPTEST_PRINTF_FLOAT_FMT "%e"
#define CPPTEST_STR_TO_FLOAT(result,str,end) result = strtod(str, &end)
#line 69
#define CPPTEST_USE_UNCAUGHT_EXCEPTION_CHECKING 1
#line 82
#define CPPTEST_EPT_wmain 
#line 95
#define _CPPTEST_ENTRY_POINT_TYPE_DEFINED 
#line 137 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.1\\engine\\runtime\\include\\cpptest_portinfo.h"
#define CPPTEST_SYSTEM_HEADERS_ALLOWED 1




#define CPPTEST_HAS_GETENV CPPTEST_SYSTEM_HEADERS_ALLOWED



#define CPPTEST_HAS_IO_HEADER CPPTEST_SYSTEM_HEADERS_ALLOWED



#define CPPTEST_HAS_ASSERT_HEADER CPPTEST_SYSTEM_HEADERS_ALLOWED



#define CPPTEST_HAS_SIGNAL_HEADER CPPTEST_SYSTEM_HEADERS_ALLOWED



#define CPPTEST_HAS_MEMORY_HEADER CPPTEST_SYSTEM_HEADERS_ALLOWED



#define CPPTEST_HAS_UNISTD_HEADER CPPTEST_SYSTEM_HEADERS_ALLOWED



#define CPPTEST_HAS_FCNTL_HEADER CPPTEST_SYSTEM_HEADERS_ALLOWED



#define CPPTEST_HAS_SYS_UIO_HEADER CPPTEST_SYSTEM_HEADERS_ALLOWED



#define CPPTEST_HAS_SYS_MMAN_HEADER CPPTEST_SYSTEM_HEADERS_ALLOWED



#define CPPTEST_HAS_SYS_STAT_HEADER CPPTEST_SYSTEM_HEADERS_ALLOWED



#define CPPTEST_HAS_SYS_TIME_HEADER CPPTEST_SYSTEM_HEADERS_ALLOWED



#define CPPTEST_HAS_AIO_HEADER CPPTEST_SYSTEM_HEADERS_ALLOWED



#define CPPTEST_HAS_UTIME_HEADER CPPTEST_SYSTEM_HEADERS_ALLOWED
#line 8 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.1\\engine\\runtime\\include\\cpptest_features.h"
#define CPPTEST_FEATURES_ALLOWED 1




#define CPPTEST_CPP_FEATURES_ALLOWED CPPTEST_FEATURES_ALLOWED
#line 25
#define CPPTEST_CPP_STREAMS_REDIRECT_ENABLED CPPTEST_CPP_FEATURES_ALLOWED




#define CPPTEST_USE_WSTREAMS 0
#line 38
#define CPPTEST_C_STREAMS_REDIRECT_ENABLED CPPTEST_FEATURES_ALLOWED




#define CPPTEST_EXCEPTIONS_ENABLED CPPTEST_CPP_FEATURES_ALLOWED



#define CPPTEST_CPP_EXCEPTIONS_ENABLED CPPTEST_CPP_FEATURES_ALLOWED




#define CPPTEST_SPECIAL_STD_EXCEPTIONS_HANDLING_ENABLED CPPTEST_CPP_FEATURES_ALLOWED




#define CPPTEST_SEH_EXCEPTIONS_ENABLED CPPTEST_FEATURES_ALLOWED



#define CPPTEST_DATA_SOURCES_ENABLED CPPTEST_FEATURES_ALLOWED




#define CPPTEST_CSV_DATA_SOURCE_ENABLED CPPTEST_FEATURES_ALLOWED




#define CPPTEST_USE_SETUP_FOR_C_SUITES CPPTEST_FEATURES_ALLOWED



#define CPPTEST_THREADS_ENABLED CPPTEST_FEATURES_ALLOWED



#define CPPTEST_MULTI_PROCESSES_COVERAGE_ENABLED CPPTEST_FEATURES_ALLOWED



#define CPPTEST_SIGNALS_HANDLING_ENABLED CPPTEST_HAS_SIGNAL_HEADER



#define CPPTEST_RS232_SAFE_MODE 1



#define CPPTEST_INIT_QT 0
#line 197 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.1\\engine\\runtime\\include\\cpptest_portinfo.h"
#define CPPTEST_GETHOSTBYNAME_ENABLED 1





#define CPPTEST_WEAK_THREADS_ENABLED 0
#line 211
#define CPPTEST_FILE_IO_NOT_THREAD_SAFE 0



#define CPPTEST_SOCKET_IO_NOT_THREAD_SAFE 0



#define CPPTEST_RUNTIME_LOG_ENABLED 1
#line 232
#define CPPTEST_USE_FILE_COMMUNICATION 



#define CPPTEST_USE_STD_NS 1



#define CPPTEST_STD_NS_NAME std



#define CPPTEST_std CPPTEST_STD_NS_NAME::




#define CPPTEST_C_std 
#define CPPTEST_using_namespace_std 
#line 259
#define CPPTEST_WCHAR_TYPE wchar_t



#define CPPTEST_const_wchar_t_ptr_CAST 
#line 270
#define CPPTEST_USE_TRY_CATCH_EXCEPTION_CHECKING 0
#line 278
#define CPPTEST_USE_TRY_CATCH_EXCEPTION_CHECKING_IN_HANDLER 0





#define CPPTEST_USE_SET_TERMINATE 1
#line 291
#define CPPTEST_HAS_UNCAUGHT_EXCEPTION_PROBLEM_IN_EXCEPTION_HANDLER_IF_RETHROW 0





#define CPPTEST_CSV_DATA_SOURCE_POSIX 0





#define CPPTEST_MAX_MESSAGE_SIZE 8192U



#define CPPTEST_COLLECT_STACK_TRACE 1



#define CPPTEST_STACKTRACE_BLOCK_SIZE 24U



#define CPPTEST_DEFINE_INVALID_SIZE_ARGUMENT_FOR_IOC 1
#line 327
#define CPPTEST_RUNTIME_API EXTERN_C CPPTEST_IMPORT




#define CPPTEST_ALLOC_IMPL 0



#define CPPTEST_PRINTF_IMPL 0
#line 343
#define CPPTEST_USE_TARGET_SYSTEM 1
#line 350
#define CPPTEST_EXIT_DECL 



#define CPPTEST_EXIT(code) exit(code)




#define CPPTEST_DEFAULT_RUNTIME_AUTO_INIT 0
#line 366
#define CPPTEST_DEFAULT_DELAY_COMMUNICATION_INIT 1




#define CPPTEST_USE_EXTENDED_DATA_SOURCE_ROW_SIGNATURE 0



#define CPPTEST_USE_GLOBAL_OBJECTS_TO_INIT_RUNTIME 1



#define CPPTEST_MIN_ALLOWED_ALL_ALLOCATIONS_SIZE 1024U



#define CPPTEST_MAX_ALLOWED_ALL_ALLOCATIONS_SIZE (UINT_MAX/4U)



#define CPPTEST_MIN_ALLOWED_INVALID_ALLOCATIONS_COUNT 8U



#define CPPTEST_MAX_ALLOWED_INVALID_ALLOCATIONS_COUNT 128U



#define CPPTEST_ALLOCATION_SUFFIX_SIZE 8U



#define CPPTEST_MAX_ALLOWED_STACK_TRACE_DEPTH 65535U



#define CPPTEST_MAX_MEM_EQUAL_ASSERTION_SIZE_ALLOWED 1024U



#define CPPTEST_MAX_POST_CONDITION_MEM_BUFF_SIZE_ALLOWED 1024U



#define CPPTEST_INT_TRUE 33

#define CPPTEST_QUOTE_SLAVE(X) #X
#define CPPTEST_QUOTE(X) CPPTEST_QUOTE_SLAVE(X)
#line 8 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.1\\engine\\runtime\\include\\cpptest_headers.h"
#define __Parasoft_CppTest_Headers_h__ 
#line 32
#define CPPTEST_assert <assert.h>
#define CPPTEST_ctype <ctype.h>
#define CPPTEST_errno <errno.h>
#define CPPTEST_float <float.h>
#define CPPTEST_limits <limits.h>
#define CPPTEST_math <math.h>
#define CPPTEST_setjmp <setjmp.h>
#define CPPTEST_signal <signal.h>
#define CPPTEST_stdarg <stdarg.h>
#define CPPTEST_stddef <stddef.h>
#define CPPTEST_stdio <stdio.h>
#define CPPTEST_stdlib <stdlib.h>
#define CPPTEST_string <string.h>
#define CPPTEST_time <time.h>
#line 21 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
#define _INC_STDLIB 
#line 18 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
#define _CRTIMP __declspec(dllimport)
#line 25
#define _INC_CRTDEFS 
#line 106 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\sal.h"
#define __ATTR_SAL 



#define _USE_DECLSPECS_FOR_SAL 0
#line 118
#define _USE_ATTRIBUTES_FOR_SAL 1
#line 158
#define _In_ _Pre1_impl_(_$notnull) _Deref_pre2_impl_(_$valid, _$readaccess)
#define _In_opt_ _Pre_opt_valid_ _Deref_pre_readonly_



#define _In_z_ _Pre_z_ _Deref_pre_readonly_
#define _In_opt_z_ _Pre_opt_z_ _Deref_pre_readonly_





#define _In_count_(size) _Pre_count_(size) _Deref_pre_readonly_
#define _In_opt_count_(size) _Pre_opt_count_(size) _Deref_pre_readonly_
#define _In_bytecount_(size) _Pre_bytecount_(size) _Deref_pre_readonly_
#define _In_opt_bytecount_(size) _Pre_opt_bytecount_(size) _Deref_pre_readonly_


#define _In_count_c_(size) _Pre_count_c_(size) _Deref_pre_readonly_
#define _In_opt_count_c_(size) _Pre_opt_count_c_(size) _Deref_pre_readonly_
#define _In_bytecount_c_(size) _Pre_bytecount_c_(size) _Deref_pre_readonly_
#define _In_opt_bytecount_c_(size) _Pre_opt_bytecount_c_(size) _Deref_pre_readonly_





#define _In_z_count_(size) _Pre_z_ _Pre_count_(size) _Deref_pre_readonly_
#define _In_opt_z_count_(size) _Pre_opt_z_ _Pre_opt_count_(size) _Deref_pre_readonly_
#define _In_z_bytecount_(size) _Pre_z_ _Pre_bytecount_(size) _Deref_pre_readonly_
#define _In_opt_z_bytecount_(size) _Pre_opt_z_ _Pre_opt_bytecount_(size) _Deref_pre_readonly_


#define _In_z_count_c_(size) _Pre_z_ _Pre_count_c_(size) _Deref_pre_readonly_
#define _In_opt_z_count_c_(size) _Pre_opt_z_ _Pre_opt_count_c_(size) _Deref_pre_readonly_
#define _In_z_bytecount_c_(size) _Pre_z_ _Pre_bytecount_c_(size) _Deref_pre_readonly_
#define _In_opt_z_bytecount_c_(size) _Pre_opt_z_ _Pre_opt_bytecount_c_(size) _Deref_pre_readonly_



#define _In_ptrdiff_count_(size) _Pre_ptrdiff_count_(size) _Deref_pre_readonly_
#define _In_opt_ptrdiff_count_(size) _Pre_opt_ptrdiff_count_(size) _Deref_pre_readonly_



#define _In_count_x_(size) _Pre_count_x_(size) _Deref_pre_readonly_
#define _In_opt_count_x_(size) _Pre_opt_count_x_(size) _Deref_pre_readonly_
#define _In_bytecount_x_(size) _Pre_bytecount_x_(size) _Deref_pre_readonly_
#define _In_opt_bytecount_x_(size) _Pre_opt_bytecount_x_(size) _Deref_pre_readonly_





#define _Out_ _Pre_cap_c_(1) _Pre_invalid_
#define _Out_opt_ _Pre_opt_cap_c_(1) _Pre_invalid_




#define _Out_cap_(size) _Pre_cap_(size) _Pre_invalid_
#define _Out_opt_cap_(size) _Pre_opt_cap_(size) _Pre_invalid_
#define _Out_bytecap_(size) _Pre_bytecap_(size) _Pre_invalid_
#define _Out_opt_bytecap_(size) _Pre_opt_bytecap_(size) _Pre_invalid_


#define _Out_cap_c_(size) _Pre_cap_c_(size) _Pre_invalid_
#define _Out_opt_cap_c_(size) _Pre_opt_cap_c_(size) _Pre_invalid_
#define _Out_bytecap_c_(size) _Pre_bytecap_c_(size) _Pre_invalid_
#define _Out_opt_bytecap_c_(size) _Pre_opt_bytecap_c_(size) _Pre_invalid_


#define _Out_cap_m_(mult,size) _Pre_cap_m_(mult,size) _Pre_invalid_
#define _Out_opt_cap_m_(mult,size) _Pre_opt_cap_m_(mult,size) _Pre_invalid_
#define _Out_z_cap_m_(mult,size) _Pre_cap_m_(mult,size) _Pre_invalid_ _Post_z_
#define _Out_opt_z_cap_m_(mult,size) _Pre_opt_cap_m_(mult,size) _Pre_invalid_ _Post_z_



#define _Out_ptrdiff_cap_(size) _Pre_ptrdiff_cap_(size) _Pre_invalid_
#define _Out_opt_ptrdiff_cap_(size) _Pre_opt_ptrdiff_cap_(size) _Pre_invalid_


#define _Out_cap_x_(size) _Pre_cap_x_(size) _Pre_invalid_
#define _Out_opt_cap_x_(size) _Pre_opt_cap_x_(size) _Pre_invalid_
#define _Out_bytecap_x_(size) _Pre_bytecap_x_(size) _Pre_invalid_
#define _Out_opt_bytecap_x_(size) _Pre_opt_bytecap_x_(size) _Pre_invalid_




#define _Out_z_cap_(size) _Pre_cap_(size) _Pre_invalid_ _Post_z_
#define _Out_opt_z_cap_(size) _Pre_opt_cap_(size) _Pre_invalid_ _Post_z_
#define _Out_z_bytecap_(size) _Pre_bytecap_(size) _Pre_invalid_ _Post_z_
#define _Out_opt_z_bytecap_(size) _Pre_opt_bytecap_(size) _Pre_invalid_ _Post_z_


#define _Out_z_cap_c_(size) _Pre_cap_c_(size) _Pre_invalid_ _Post_z_
#define _Out_opt_z_cap_c_(size) _Pre_opt_cap_c_(size) _Pre_invalid_ _Post_z_
#define _Out_z_bytecap_c_(size) _Pre_bytecap_c_(size) _Pre_invalid_ _Post_z_
#define _Out_opt_z_bytecap_c_(size) _Pre_opt_bytecap_c_(size) _Pre_invalid_ _Post_z_


#define _Out_z_cap_x_(size) _Pre_cap_x_(size) _Pre_invalid_ _Post_z_
#define _Out_opt_z_cap_x_(size) _Pre_opt_cap_x_(size) _Pre_invalid_ _Post_z_
#define _Out_z_bytecap_x_(size) _Pre_bytecap_x_(size) _Pre_invalid_ _Post_z_
#define _Out_opt_z_bytecap_x_(size) _Pre_opt_bytecap_x_(size) _Pre_invalid_ _Post_z_



#define _Out_cap_post_count_(cap,count) _Pre_cap_(cap) _Pre_invalid_ _Post_count_(count)
#define _Out_opt_cap_post_count_(cap,count) _Pre_opt_cap_(cap) _Pre_invalid_ _Post_count_(count)
#define _Out_bytecap_post_bytecount_(cap,count) _Pre_bytecap_(cap) _Pre_invalid_ _Post_bytecount_(count)
#define _Out_opt_bytecap_post_bytecount_(cap,count) _Pre_opt_bytecap_(cap) _Pre_invalid_ _Post_bytecount_(count)



#define _Out_z_cap_post_count_(cap,count) _Pre_cap_(cap) _Pre_invalid_ _Post_z_count_(count)
#define _Out_opt_z_cap_post_count_(cap,count) _Pre_opt_cap_(cap) _Pre_invalid_ _Post_z_count_(count)
#define _Out_z_bytecap_post_bytecount_(cap,count) _Pre_bytecap_(cap) _Pre_invalid_ _Post_z_bytecount_(count)
#define _Out_opt_z_bytecap_post_bytecount_(cap,count) _Pre_opt_bytecap_(cap) _Pre_invalid_ _Post_z_bytecount_(count)


#define _Out_capcount_(capcount) _Pre_cap_(capcount) _Pre_invalid_ _Post_count_(capcount)
#define _Out_opt_capcount_(capcount) _Pre_opt_cap_(capcount) _Pre_invalid_ _Post_count_(capcount)
#define _Out_bytecapcount_(capcount) _Pre_bytecap_(capcount) _Pre_invalid_ _Post_bytecount_(capcount)
#define _Out_opt_bytecapcount_(capcount) _Pre_opt_bytecap_(capcount) _Pre_invalid_ _Post_bytecount_(capcount)

#define _Out_capcount_x_(capcount) _Pre_cap_x_(capcount) _Pre_invalid_ _Post_count_x_(capcount)
#define _Out_opt_capcount_x_(capcount) _Pre_opt_cap_x_(capcount) _Pre_invalid_ _Post_count_x_(capcount)
#define _Out_bytecapcount_x_(capcount) _Pre_bytecap_x_(capcount) _Pre_invalid_ _Post_bytecount_x_(capcount)
#define _Out_opt_bytecapcount_x_(capcount) _Pre_opt_bytecap_x_(capcount) _Pre_invalid_ _Post_bytecount_x_(capcount)


#define _Out_z_capcount_(capcount) _Pre_cap_(capcount) _Pre_invalid_ _Post_z_count_(capcount)
#define _Out_opt_z_capcount_(capcount) _Pre_opt_cap_(capcount) _Pre_invalid_ _Post_z_count_(capcount)
#define _Out_z_bytecapcount_(capcount) _Pre_bytecap_(capcount) _Pre_invalid_ _Post_z_bytecount_(capcount)
#define _Out_opt_z_bytecapcount_(capcount) _Pre_opt_bytecap_(capcount) _Pre_invalid_ _Post_z_bytecount_(capcount)





#define _Inout_ _Prepost_valid_
#define _Inout_opt_ _Prepost_opt_valid_



#define _Inout_z_ _Prepost_z_
#define _Inout_opt_z_ _Prepost_opt_z_



#define _Inout_count_(size) _Prepost_count_(size)
#define _Inout_opt_count_(size) _Prepost_opt_count_(size)
#define _Inout_bytecount_(size) _Prepost_bytecount_(size)
#define _Inout_opt_bytecount_(size) _Prepost_opt_bytecount_(size)

#define _Inout_count_c_(size) _Prepost_count_c_(size)
#define _Inout_opt_count_c_(size) _Prepost_opt_count_c_(size)
#define _Inout_bytecount_c_(size) _Prepost_bytecount_c_(size)
#define _Inout_opt_bytecount_c_(size) _Prepost_opt_bytecount_c_(size)



#define _Inout_z_count_(size) _Prepost_z_ _Prepost_count_(size)
#define _Inout_opt_z_count_(size) _Prepost_z_ _Prepost_opt_count_(size)
#define _Inout_z_bytecount_(size) _Prepost_z_ _Prepost_bytecount_(size)
#define _Inout_opt_z_bytecount_(size) _Prepost_z_ _Prepost_opt_bytecount_(size)

#define _Inout_z_count_c_(size) _Prepost_z_ _Prepost_count_c_(size)
#define _Inout_opt_z_count_c_(size) _Prepost_z_ _Prepost_opt_count_c_(size)
#define _Inout_z_bytecount_c_(size) _Prepost_z_ _Prepost_bytecount_c_(size)
#define _Inout_opt_z_bytecount_c_(size) _Prepost_z_ _Prepost_opt_bytecount_c_(size)

#define _Inout_ptrdiff_count_(size) _Pre_ptrdiff_count_(size)
#define _Inout_opt_ptrdiff_count_(size) _Pre_opt_ptrdiff_count_(size)

#define _Inout_count_x_(size) _Prepost_count_x_(size)
#define _Inout_opt_count_x_(size) _Prepost_opt_count_x_(size)
#define _Inout_bytecount_x_(size) _Prepost_bytecount_x_(size)
#define _Inout_opt_bytecount_x_(size) _Prepost_opt_bytecount_x_(size)


#define _Inout_cap_(size) _Pre_valid_cap_(size) _Post_valid_
#define _Inout_opt_cap_(size) _Pre_opt_valid_cap_(size) _Post_valid_
#define _Inout_bytecap_(size) _Pre_valid_bytecap_(size) _Post_valid_
#define _Inout_opt_bytecap_(size) _Pre_opt_valid_bytecap_(size) _Post_valid_

#define _Inout_cap_c_(size) _Pre_valid_cap_c_(size) _Post_valid_
#define _Inout_opt_cap_c_(size) _Pre_opt_valid_cap_c_(size) _Post_valid_
#define _Inout_bytecap_c_(size) _Pre_valid_bytecap_c_(size) _Post_valid_
#define _Inout_opt_bytecap_c_(size) _Pre_opt_valid_bytecap_c_(size) _Post_valid_

#define _Inout_cap_x_(size) _Pre_valid_cap_x_(size) _Post_valid_
#define _Inout_opt_cap_x_(size) _Pre_opt_valid_cap_x_(size) _Post_valid_
#define _Inout_bytecap_x_(size) _Pre_valid_bytecap_x_(size) _Post_valid_
#define _Inout_opt_bytecap_x_(size) _Pre_opt_valid_bytecap_x_(size) _Post_valid_



#define _Inout_z_cap_(size) _Pre_z_cap_(size) _Post_z_
#define _Inout_opt_z_cap_(size) _Pre_opt_z_cap_(size) _Post_z_
#define _Inout_z_bytecap_(size) _Pre_z_bytecap_(size) _Post_z_
#define _Inout_opt_z_bytecap_(size) _Pre_opt_z_bytecap_(size) _Post_z_

#define _Inout_z_cap_c_(size) _Pre_z_cap_c_(size) _Post_z_
#define _Inout_opt_z_cap_c_(size) _Pre_opt_z_cap_c_(size) _Post_z_
#define _Inout_z_bytecap_c_(size) _Pre_z_bytecap_c_(size) _Post_z_
#define _Inout_opt_z_bytecap_c_(size) _Pre_opt_z_bytecap_c_(size) _Post_z_

#define _Inout_z_cap_x_(size) _Pre_z_cap_x_(size) _Post_z_
#define _Inout_opt_z_cap_x_(size) _Pre_opt_z_cap_x_(size) _Post_z_
#define _Inout_z_bytecap_x_(size) _Pre_z_bytecap_x_(size) _Post_z_
#define _Inout_opt_z_bytecap_x_(size) _Pre_opt_z_bytecap_x_(size) _Post_z_




#define _Ret_ _Ret_valid_
#define _Ret_opt_ _Ret_opt_valid_
#line 385
#define _Deref_out_ _Out_ _Deref_pre_invalid_ _Deref_post_valid_
#define _Deref_out_opt_ _Out_ _Deref_pre_invalid_ _Deref_post_opt_valid_
#define _Deref_opt_out_ _Out_opt_ _Deref_pre_invalid_ _Deref_post_valid_
#define _Deref_opt_out_opt_ _Out_opt_ _Deref_pre_invalid_ _Deref_post_opt_valid_


#define _Deref_out_z_ _Out_ _Deref_pre_invalid_ _Deref_post_z_
#define _Deref_out_opt_z_ _Out_ _Deref_pre_invalid_ _Deref_post_opt_z_
#define _Deref_opt_out_z_ _Out_opt_ _Deref_pre_invalid_ _Deref_post_z_
#define _Deref_opt_out_opt_z_ _Out_opt_ _Deref_pre_invalid_ _Deref_post_opt_z_
#line 401
#define _Check_return_ _Check_return_impl_


#define _Printf_format_string_ _Printf_format_string_impl_
#define _Scanf_format_string_ _Scanf_format_string_impl_
#define _Scanf_s_format_string_ _Scanf_s_format_string_impl_


#define _Success_(expr) _Success_impl_(expr)


#define _In_bound_ _In_bound_impl_
#define _Out_bound_ _Out_bound_impl_
#define _Ret_bound_ _Ret_bound_impl_
#define _Deref_in_bound_ _Deref_in_bound_impl_
#define _Deref_out_bound_ _Deref_out_bound_impl_
#define _Deref_inout_bound_ _Deref_in_bound_ _Deref_out_bound_
#define _Deref_ret_bound_ _Deref_ret_bound_impl_


#define _In_range_(lb,ub) _In_range_impl_(lb,ub)
#define _Out_range_(lb,ub) _Out_range_impl_(lb,ub)
#define _Ret_range_(lb,ub) _Ret_range_impl_(lb,ub)
#define _Deref_in_range_(lb,ub) _Deref_in_range_impl_(lb,ub)
#define _Deref_out_range_(lb,ub) _Deref_out_range_impl_(lb,ub)
#define _Deref_ret_range_(lb,ub) _Deref_ret_range_impl_(lb,ub)
#line 439
#define _Pre_z_ _Pre2_impl_(_$notnull, _$zterm) _Deref_pre1_impl_(_$valid)
#define _Pre_opt_z_ _Pre2_impl_(_$maybenull,_$zterm) _Deref_pre1_impl_(_$valid)



#define _Pre_cap_(size) _Pre2_impl_(_$notnull, _$cap(size))
#define _Pre_opt_cap_(size) _Pre2_impl_(_$maybenull,_$cap(size))
#define _Pre_bytecap_(size) _Pre2_impl_(_$notnull, _$bytecap(size))
#define _Pre_opt_bytecap_(size) _Pre2_impl_(_$maybenull,_$bytecap(size))


#define _Pre_cap_c_(size) _Pre2_impl_(_$notnull, _$cap_c(size))
#define _Pre_opt_cap_c_(size) _Pre2_impl_(_$maybenull,_$cap_c(size))
#define _Pre_bytecap_c_(size) _Pre2_impl_(_$notnull, _$bytecap_c(size))
#define _Pre_opt_bytecap_c_(size) _Pre2_impl_(_$maybenull,_$bytecap_c(size))


#define _Pre_cap_m_(mult,size) _Pre2_impl_(_$notnull, _$mult(mult,size))
#define _Pre_opt_cap_m_(mult,size) _Pre2_impl_(_$maybenull,_$mult(mult,size))



#define _Pre_cap_for_(param) _Pre2_impl_(_$notnull, _$cap_for(param))
#define _Pre_opt_cap_for_(param) _Pre2_impl_(_$maybenull,_$cap_for(param))


#define _Pre_cap_x_(size) _Pre2_impl_(_$notnull, _$cap_x(size))
#define _Pre_opt_cap_x_(size) _Pre2_impl_(_$maybenull,_$cap_x(size))
#define _Pre_bytecap_x_(size) _Pre2_impl_(_$notnull, _$bytecap_x(size))
#define _Pre_opt_bytecap_x_(size) _Pre2_impl_(_$maybenull,_$bytecap_x(size))


#define _Pre_ptrdiff_cap_(ptr) _Pre2_impl_(_$notnull, _$cap_x(__ptrdiff(ptr)))
#define _Pre_opt_ptrdiff_cap_(ptr) _Pre2_impl_(_$maybenull,_$cap_x(__ptrdiff(ptr)))


#define _Pre_z_cap_(size) _Pre3_impl_(_$notnull, _$zterm,_$cap(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_opt_z_cap_(size) _Pre3_impl_(_$maybenull,_$zterm,_$cap(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_z_bytecap_(size) _Pre3_impl_(_$notnull, _$zterm,_$bytecap(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_opt_z_bytecap_(size) _Pre3_impl_(_$maybenull,_$zterm,_$bytecap(size)) _Deref_pre1_impl_(_$valid)

#define _Pre_z_cap_c_(size) _Pre3_impl_(_$notnull, _$zterm,_$cap_c(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_opt_z_cap_c_(size) _Pre3_impl_(_$maybenull,_$zterm,_$cap_c(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_z_bytecap_c_(size) _Pre3_impl_(_$notnull, _$zterm,_$bytecap_c(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_opt_z_bytecap_c_(size) _Pre3_impl_(_$maybenull,_$zterm,_$bytecap_c(size)) _Deref_pre1_impl_(_$valid)

#define _Pre_z_cap_x_(size) _Pre3_impl_(_$notnull, _$zterm,_$cap_x(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_opt_z_cap_x_(size) _Pre3_impl_(_$maybenull,_$zterm,_$cap_x(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_z_bytecap_x_(size) _Pre3_impl_(_$notnull, _$zterm,_$bytecap_x(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_opt_z_bytecap_x_(size) _Pre3_impl_(_$maybenull,_$zterm,_$bytecap_x(size)) _Deref_pre1_impl_(_$valid)


#define _Pre_valid_cap_(size) _Pre2_impl_(_$notnull, _$cap(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_opt_valid_cap_(size) _Pre2_impl_(_$maybenull,_$cap(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_valid_bytecap_(size) _Pre2_impl_(_$notnull, _$bytecap(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_opt_valid_bytecap_(size) _Pre2_impl_(_$maybenull,_$bytecap(size)) _Deref_pre1_impl_(_$valid)

#define _Pre_valid_cap_c_(size) _Pre2_impl_(_$notnull, _$cap_c(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_opt_valid_cap_c_(size) _Pre2_impl_(_$maybenull,_$cap_c(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_valid_bytecap_c_(size) _Pre2_impl_(_$notnull, _$bytecap_c(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_opt_valid_bytecap_c_(size) _Pre2_impl_(_$maybenull,_$bytecap_c(size)) _Deref_pre1_impl_(_$valid)

#define _Pre_valid_cap_x_(size) _Pre2_impl_(_$notnull, _$cap_x(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_opt_valid_cap_x_(size) _Pre2_impl_(_$maybenull,_$cap_x(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_valid_bytecap_x_(size) _Pre2_impl_(_$notnull, _$bytecap_x(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_opt_valid_bytecap_x_(size) _Pre2_impl_(_$maybenull,_$bytecap_x(size)) _Deref_pre1_impl_(_$valid)



#define _Pre_count_(size) _Pre2_impl_(_$notnull, _$count(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_opt_count_(size) _Pre2_impl_(_$maybenull,_$count(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_bytecount_(size) _Pre2_impl_(_$notnull, _$bytecount(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_opt_bytecount_(size) _Pre2_impl_(_$maybenull,_$bytecount(size)) _Deref_pre1_impl_(_$valid)


#define _Pre_count_c_(size) _Pre2_impl_(_$notnull, _$count_c(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_opt_count_c_(size) _Pre2_impl_(_$maybenull,_$count_c(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_bytecount_c_(size) _Pre2_impl_(_$notnull, _$bytecount_c(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_opt_bytecount_c_(size) _Pre2_impl_(_$maybenull,_$bytecount_c(size)) _Deref_pre1_impl_(_$valid)


#define _Pre_count_x_(size) _Pre2_impl_(_$notnull, _$count_x(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_opt_count_x_(size) _Pre2_impl_(_$maybenull,_$count_x(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_bytecount_x_(size) _Pre2_impl_(_$notnull, _$bytecount_x(size)) _Deref_pre1_impl_(_$valid)
#define _Pre_opt_bytecount_x_(size) _Pre2_impl_(_$maybenull,_$bytecount_x(size)) _Deref_pre1_impl_(_$valid)


#define _Pre_ptrdiff_count_(ptr) _Pre2_impl_(_$notnull, _$count_x(__ptrdiff(ptr))) _Deref_pre1_impl_(_$valid)
#define _Pre_opt_ptrdiff_count_(ptr) _Pre2_impl_(_$maybenull,_$count_x(__ptrdiff(ptr))) _Deref_pre1_impl_(_$valid)


#define _Pre_valid_ _Pre1_impl_(_$notnull) _Deref_pre1_impl_(_$valid)
#define _Pre_opt_valid_ _Pre1_impl_(_$maybenull) _Deref_pre1_impl_(_$valid)

#define _Pre_invalid_ _Deref_pre1_impl_(_$notvalid)


#define _Pre_notnull_ _Pre1_impl_(_$notnull)
#define _Pre_maybenull_ _Pre1_impl_(_$maybenull)
#define _Pre_null_ _Pre1_impl_(_$null)


#define _Pre_readonly_ _Pre1_impl_(_$readaccess)
#define _Pre_writeonly_ _Pre1_impl_(_$writeaccess)
#line 550
#define _Post_z_ _Post1_impl_(_$zterm) _Deref_post1_impl_(_$valid)



#define _Post_maybez_ _Post1_impl_(_$maybezterm)


#define _Post_cap_(size) _Post1_impl_(_$cap(size))
#define _Post_bytecap_(size) _Post1_impl_(_$bytecap(size))


#define _Post_count_(size) _Post1_impl_(_$count(size)) _Deref_post1_impl_(_$valid)
#define _Post_bytecount_(size) _Post1_impl_(_$bytecount(size)) _Deref_post1_impl_(_$valid)
#define _Post_count_c_(size) _Post1_impl_(_$count_c(size)) _Deref_post1_impl_(_$valid)
#define _Post_bytecount_c_(size) _Post1_impl_(_$bytecount_c(size)) _Deref_post1_impl_(_$valid)
#define _Post_count_x_(size) _Post1_impl_(_$count_x(size)) _Deref_post1_impl_(_$valid)
#define _Post_bytecount_x_(size) _Post1_impl_(_$bytecount_x(size)) _Deref_post1_impl_(_$valid)


#define _Post_z_count_(size) _Post2_impl_(_$zterm,_$count(size)) _Deref_post1_impl_(_$valid)
#define _Post_z_bytecount_(size) _Post2_impl_(_$zterm,_$bytecount(size)) _Deref_post1_impl_(_$valid)
#define _Post_z_count_c_(size) _Post2_impl_(_$zterm,_$count_c(size)) _Deref_post1_impl_(_$valid)
#define _Post_z_bytecount_c_(size) _Post2_impl_(_$zterm,_$bytecount_c(size)) _Deref_post1_impl_(_$valid)
#define _Post_z_count_x_(size) _Post2_impl_(_$zterm,_$count_x(size)) _Deref_post1_impl_(_$valid)
#define _Post_z_bytecount_x_(size) _Post2_impl_(_$zterm,_$bytecount_x(size)) _Deref_post1_impl_(_$valid)


#define _Post_valid_ _Deref_post1_impl_(_$valid)
#define _Post_invalid_ _Deref_post1_impl_(_$notvalid)


#define _Post_notnull_ _Post1_impl_(_$notnull)
#line 589
#define _Ret_z_ _Ret2_impl_(_$notnull, _$zterm) _Deref_ret1_impl_(_$valid)
#define _Ret_opt_z_ _Ret2_impl_(_$maybenull,_$zterm) _Deref_ret1_impl_(_$valid)



#define _Ret_cap_(size) _Ret2_impl_(_$notnull, _$cap(size))
#define _Ret_opt_cap_(size) _Ret2_impl_(_$maybenull,_$cap(size))
#define _Ret_bytecap_(size) _Ret2_impl_(_$notnull, _$bytecap(size))
#define _Ret_opt_bytecap_(size) _Ret2_impl_(_$maybenull,_$bytecap(size))


#define _Ret_cap_c_(size) _Ret2_impl_(_$notnull, _$cap_c(size))
#define _Ret_opt_cap_c_(size) _Ret2_impl_(_$maybenull,_$cap_c(size))
#define _Ret_bytecap_c_(size) _Ret2_impl_(_$notnull, _$bytecap_c(size))
#define _Ret_opt_bytecap_c_(size) _Ret2_impl_(_$maybenull,_$bytecap_c(size))


#define _Ret_cap_x_(size) _Ret2_impl_(_$notnull, _$cap_x(size))
#define _Ret_opt_cap_x_(size) _Ret2_impl_(_$maybenull,_$cap_x(size))
#define _Ret_bytecap_x_(size) _Ret2_impl_(_$notnull, _$bytecap_x(size))
#define _Ret_opt_bytecap_x_(size) _Ret2_impl_(_$maybenull,_$bytecap_x(size))


#define _Ret_z_cap_(size) _Ret3_impl_(_$notnull, _$zterm,_$cap(size)) _Deref_ret1_impl_(_$valid)
#define _Ret_opt_z_cap_(size) _Ret3_impl_(_$maybenull,_$zterm,_$cap(size)) _Deref_ret1_impl_(_$valid)
#define _Ret_z_bytecap_(size) _Ret3_impl_(_$notnull, _$zterm,_$bytecap(size)) _Deref_ret1_impl_(_$valid)
#define _Ret_opt_z_bytecap_(size) _Ret3_impl_(_$maybenull,_$zterm,_$bytecap(size)) _Deref_ret1_impl_(_$valid)



#define _Ret_count_(size) _Ret2_impl_(_$notnull, _$count(size)) _Deref_ret1_impl_(_$valid)
#define _Ret_opt_count_(size) _Ret2_impl_(_$maybenull,_$count(size)) _Deref_ret1_impl_(_$valid)
#define _Ret_bytecount_(size) _Ret2_impl_(_$notnull, _$bytecount(size)) _Deref_ret1_impl_(_$valid)
#define _Ret_opt_bytecount_(size) _Ret2_impl_(_$maybenull,_$bytecount(size)) _Deref_ret1_impl_(_$valid)


#define _Ret_count_c_(size) _Ret2_impl_(_$notnull, _$count_c(size)) _Deref_ret1_impl_(_$valid)
#define _Ret_opt_count_c_(size) _Ret2_impl_(_$maybenull,_$count_c(size)) _Deref_ret1_impl_(_$valid)
#define _Ret_bytecount_c_(size) _Ret2_impl_(_$notnull, _$bytecount_c(size)) _Deref_ret1_impl_(_$valid)
#define _Ret_opt_bytecount_c_(size) _Ret2_impl_(_$maybenull,_$bytecount_c(size)) _Deref_ret1_impl_(_$valid)


#define _Ret_count_x_(size) _Ret2_impl_(_$notnull, _$count_x(size)) _Deref_ret1_impl_(_$valid)
#define _Ret_opt_count_x_(size) _Ret2_impl_(_$maybenull,_$count_x(size)) _Deref_ret1_impl_(_$valid)
#define _Ret_bytecount_x_(size) _Ret2_impl_(_$notnull, _$bytecount_x(size)) _Deref_ret1_impl_(_$valid)
#define _Ret_opt_bytecount_x_(size) _Ret2_impl_(_$maybenull,_$bytecount_x(size)) _Deref_ret1_impl_(_$valid)


#define _Ret_z_count_(size) _Ret3_impl_(_$notnull, _$zterm,_$count(size)) _Deref_ret1_impl_(_$valid)
#define _Ret_opt_z_count_(size) _Ret3_impl_(_$maybenull,_$zterm,_$count(size)) _Deref_ret1_impl_(_$valid)
#define _Ret_z_bytecount_(size) _Ret3_impl_(_$notnull, _$zterm,_$bytecount(size)) _Deref_ret1_impl_(_$valid)
#define _Ret_opt_z_bytecount_(size) _Ret3_impl_(_$maybenull,_$zterm,_$bytecount(size)) _Deref_ret1_impl_(_$valid)


#define _Ret_valid_ _Ret1_impl_(_$notnull) _Deref_ret1_impl_(_$valid)
#define _Ret_opt_valid_ _Ret1_impl_(_$maybenull) _Deref_ret1_impl_(_$valid)


#define _Ret_notnull_ _Ret1_impl_(_$notnull)
#define _Ret_maybenull_ _Ret1_impl_(_$maybenull)
#define _Ret_null_ _Ret1_impl_(_$null)
#line 657
#define _Deref_pre_z_ _Deref_pre2_impl_(_$notnull, _$zterm) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_opt_z_ _Deref_pre2_impl_(_$maybenull,_$zterm) _Deref2_pre1_impl_(_$valid)



#define _Deref_pre_cap_(size) _Deref_pre2_impl_(_$notnull, _$cap(size))
#define _Deref_pre_opt_cap_(size) _Deref_pre2_impl_(_$maybenull,_$cap(size))
#define _Deref_pre_bytecap_(size) _Deref_pre2_impl_(_$notnull, _$bytecap(size))
#define _Deref_pre_opt_bytecap_(size) _Deref_pre2_impl_(_$maybenull,_$bytecap(size))


#define _Deref_pre_cap_c_(size) _Deref_pre2_impl_(_$notnull, _$cap_c(size))
#define _Deref_pre_opt_cap_c_(size) _Deref_pre2_impl_(_$maybenull,_$cap_c(size))
#define _Deref_pre_bytecap_c_(size) _Deref_pre2_impl_(_$notnull, _$bytecap_c(size))
#define _Deref_pre_opt_bytecap_c_(size) _Deref_pre2_impl_(_$maybenull,_$bytecap_c(size))


#define _Deref_pre_cap_x_(size) _Deref_pre2_impl_(_$notnull, _$cap_x(size))
#define _Deref_pre_opt_cap_x_(size) _Deref_pre2_impl_(_$maybenull,_$cap_x(size))
#define _Deref_pre_bytecap_x_(size) _Deref_pre2_impl_(_$notnull, _$bytecap_x(size))
#define _Deref_pre_opt_bytecap_x_(size) _Deref_pre2_impl_(_$maybenull,_$bytecap_x(size))


#define _Deref_pre_z_cap_(size) _Deref_pre3_impl_(_$notnull, _$zterm,_$cap(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_opt_z_cap_(size) _Deref_pre3_impl_(_$maybenull,_$zterm,_$cap(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_z_bytecap_(size) _Deref_pre3_impl_(_$notnull, _$zterm,_$bytecap(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_opt_z_bytecap_(size) _Deref_pre3_impl_(_$maybenull,_$zterm,_$bytecap(size)) _Deref2_pre1_impl_(_$valid)

#define _Deref_pre_z_cap_c_(size) _Deref_pre3_impl_(_$notnull, _$zterm,_$cap_c(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_opt_z_cap_c_(size) _Deref_pre3_impl_(_$maybenull,_$zterm,_$cap_c(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_z_bytecap_c_(size) _Deref_pre3_impl_(_$notnull, _$zterm,_$bytecap_c(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_opt_z_bytecap_c_(size) _Deref_pre3_impl_(_$maybenull,_$zterm,_$bytecap_c(size)) _Deref2_pre1_impl_(_$valid)

#define _Deref_pre_z_cap_x_(size) _Deref_pre3_impl_(_$notnull, _$zterm,_$cap_x(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_opt_z_cap_x_(size) _Deref_pre3_impl_(_$maybenull,_$zterm,_$cap_x(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_z_bytecap_x_(size) _Deref_pre3_impl_(_$notnull, _$zterm,_$bytecap_x(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_opt_z_bytecap_x_(size) _Deref_pre3_impl_(_$maybenull,_$zterm,_$bytecap_x(size)) _Deref2_pre1_impl_(_$valid)


#define _Deref_pre_valid_cap_(size) _Deref_pre2_impl_(_$notnull, _$cap(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_opt_valid_cap_(size) _Deref_pre2_impl_(_$maybenull,_$cap(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_valid_bytecap_(size) _Deref_pre2_impl_(_$notnull, _$bytecap(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_opt_valid_bytecap_(size) _Deref_pre2_impl_(_$maybenull,_$bytecap(size)) _Deref2_pre1_impl_(_$valid)

#define _Deref_pre_valid_cap_c_(size) _Deref_pre2_impl_(_$notnull, _$cap_c(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_opt_valid_cap_c_(size) _Deref_pre2_impl_(_$maybenull,_$cap_c(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_valid_bytecap_c_(size) _Deref_pre2_impl_(_$notnull, _$bytecap_c(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_opt_valid_bytecap_c_(size) _Deref_pre2_impl_(_$maybenull,_$bytecap_c(size)) _Deref2_pre1_impl_(_$valid)

#define _Deref_pre_valid_cap_x_(size) _Deref_pre2_impl_(_$notnull, _$cap_x(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_opt_valid_cap_x_(size) _Deref_pre2_impl_(_$maybenull,_$cap_x(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_valid_bytecap_x_(size) _Deref_pre2_impl_(_$notnull, _$bytecap_x(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_opt_valid_bytecap_x_(size) _Deref_pre2_impl_(_$maybenull,_$bytecap_x(size)) _Deref2_pre1_impl_(_$valid)



#define _Deref_pre_count_(size) _Deref_pre2_impl_(_$notnull, _$count(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_opt_count_(size) _Deref_pre2_impl_(_$maybenull,_$count(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_bytecount_(size) _Deref_pre2_impl_(_$notnull, _$bytecount(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_opt_bytecount_(size) _Deref_pre2_impl_(_$maybenull,_$bytecount(size)) _Deref2_pre1_impl_(_$valid)


#define _Deref_pre_count_c_(size) _Deref_pre2_impl_(_$notnull, _$count_c(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_opt_count_c_(size) _Deref_pre2_impl_(_$maybenull,_$count_c(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_bytecount_c_(size) _Deref_pre2_impl_(_$notnull, _$bytecount_c(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_opt_bytecount_c_(size) _Deref_pre2_impl_(_$maybenull,_$bytecount_c(size)) _Deref2_pre1_impl_(_$valid)


#define _Deref_pre_count_x_(size) _Deref_pre2_impl_(_$notnull, _$count_x(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_opt_count_x_(size) _Deref_pre2_impl_(_$maybenull,_$count_x(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_bytecount_x_(size) _Deref_pre2_impl_(_$notnull, _$bytecount_x(size)) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_opt_bytecount_x_(size) _Deref_pre2_impl_(_$maybenull,_$bytecount_x(size)) _Deref2_pre1_impl_(_$valid)


#define _Deref_pre_valid_ _Deref_pre1_impl_(_$notnull) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_opt_valid_ _Deref_pre1_impl_(_$maybenull) _Deref2_pre1_impl_(_$valid)
#define _Deref_pre_invalid_ _Deref2_pre1_impl_(_$notvalid)

#define _Deref_pre_notnull_ _Deref_pre1_impl_(_$notnull)
#define _Deref_pre_maybenull_ _Deref_pre1_impl_(_$maybenull)
#define _Deref_pre_null_ _Deref_pre1_impl_(_$null)


#define _Deref_pre_readonly_ _Deref_pre1_impl_(_$readaccess)
#define _Deref_pre_writeonly_ _Deref_pre1_impl_(_$writeaccess)
#line 749
#define _Deref_post_z_ _Deref_post2_impl_(_$notnull, _$zterm) _Deref2_post1_impl_(_$valid)
#define _Deref_post_opt_z_ _Deref_post2_impl_(_$maybenull,_$zterm) _Deref2_post1_impl_(_$valid)



#define _Deref_post_cap_(size) _Deref_post2_impl_(_$notnull, _$cap(size))
#define _Deref_post_opt_cap_(size) _Deref_post2_impl_(_$maybenull,_$cap(size))
#define _Deref_post_bytecap_(size) _Deref_post2_impl_(_$notnull, _$bytecap(size))
#define _Deref_post_opt_bytecap_(size) _Deref_post2_impl_(_$maybenull,_$bytecap(size))


#define _Deref_post_cap_c_(size) _Deref_post2_impl_(_$notnull, _$cap_z(size))
#define _Deref_post_opt_cap_c_(size) _Deref_post2_impl_(_$maybenull,_$cap_z(size))
#define _Deref_post_bytecap_c_(size) _Deref_post2_impl_(_$notnull, _$bytecap_z(size))
#define _Deref_post_opt_bytecap_c_(size) _Deref_post2_impl_(_$maybenull,_$bytecap_z(size))


#define _Deref_post_cap_x_(size) _Deref_post2_impl_(_$notnull, _$cap_x(size))
#define _Deref_post_opt_cap_x_(size) _Deref_post2_impl_(_$maybenull,_$cap_x(size))
#define _Deref_post_bytecap_x_(size) _Deref_post2_impl_(_$notnull, _$bytecap_x(size))
#define _Deref_post_opt_bytecap_x_(size) _Deref_post2_impl_(_$maybenull,_$bytecap_x(size))


#define _Deref_post_z_cap_(size) _Deref_post3_impl_(_$notnull, _$zterm,_$cap(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_opt_z_cap_(size) _Deref_post3_impl_(_$maybenull,_$zterm,_$cap(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_z_bytecap_(size) _Deref_post3_impl_(_$notnull, _$zterm,_$bytecap(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_opt_z_bytecap_(size) _Deref_post3_impl_(_$maybenull,_$zterm,_$bytecap(size)) _Deref2_post1_impl_(_$valid)

#define _Deref_post_z_cap_c_(size) _Deref_post3_impl_(_$notnull, _$zterm,_$cap_c(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_opt_z_cap_c_(size) _Deref_post3_impl_(_$maybenull,_$zterm,_$cap_c(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_z_bytecap_c_(size) _Deref_post3_impl_(_$notnull, _$zterm,_$bytecap_c(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_opt_z_bytecap_c_(size) _Deref_post3_impl_(_$maybenull,_$zterm,_$bytecap_c(size)) _Deref2_post1_impl_(_$valid)

#define _Deref_post_z_cap_x_(size) _Deref_post3_impl_(_$notnull, _$zterm,_$cap_x(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_opt_z_cap_x_(size) _Deref_post3_impl_(_$maybenull,_$zterm,_$cap_x(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_z_bytecap_x_(size) _Deref_post3_impl_(_$notnull, _$zterm,_$bytecap_x(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_opt_z_bytecap_x_(size) _Deref_post3_impl_(_$maybenull,_$zterm,_$bytecap_x(size)) _Deref2_post1_impl_(_$valid)


#define _Deref_post_valid_cap_(size) _Deref_post2_impl_(_$notnull, _$cap(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_opt_valid_cap_(size) _Deref_post2_impl_(_$maybenull,_$cap(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_valid_bytecap_(size) _Deref_post2_impl_(_$notnull, _$bytecap(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_opt_valid_bytecap_(size) _Deref_post2_impl_(_$maybenull,_$bytecap(size)) _Deref2_post1_impl_(_$valid)

#define _Deref_post_valid_cap_c_(size) _Deref_post2_impl_(_$notnull, _$cap_c(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_opt_valid_cap_c_(size) _Deref_post2_impl_(_$maybenull,_$cap_c(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_valid_bytecap_c_(size) _Deref_post2_impl_(_$notnull, _$bytecap_c(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_opt_valid_bytecap_c_(size) _Deref_post2_impl_(_$maybenull,_$bytecap_c(size)) _Deref2_post1_impl_(_$valid)

#define _Deref_post_valid_cap_x_(size) _Deref_post2_impl_(_$notnull, _$cap_x(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_opt_valid_cap_x_(size) _Deref_post2_impl_(_$maybenull,_$cap_x(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_valid_bytecap_x_(size) _Deref_post2_impl_(_$notnull, _$bytecap_x(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_opt_valid_bytecap_x_(size) _Deref_post2_impl_(_$maybenull,_$bytecap_x(size)) _Deref2_post1_impl_(_$valid)



#define _Deref_post_count_(size) _Deref_post2_impl_(_$notnull, _$count(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_opt_count_(size) _Deref_post2_impl_(_$maybenull,_$count(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_bytecount_(size) _Deref_post2_impl_(_$notnull, _$bytecount(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_opt_bytecount_(size) _Deref_post2_impl_(_$maybenull,_$bytecount(size)) _Deref2_post1_impl_(_$valid)


#define _Deref_post_count_c_(size) _Deref_post2_impl_(_$notnull, _$count_c(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_opt_count_c_(size) _Deref_post2_impl_(_$maybenull,_$count_c(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_bytecount_c_(size) _Deref_post2_impl_(_$notnull, _$bytecount_c(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_opt_bytecount_c_(size) _Deref_post2_impl_(_$maybenull,_$bytecount_c(size)) _Deref2_post1_impl_(_$valid)


#define _Deref_post_count_x_(size) _Deref_post2_impl_(_$notnull, _$count_x(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_opt_count_x_(size) _Deref_post2_impl_(_$maybenull,_$count_x(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_bytecount_x_(size) _Deref_post2_impl_(_$notnull, _$bytecount_x(size)) _Deref2_post1_impl_(_$valid)
#define _Deref_post_opt_bytecount_x_(size) _Deref_post2_impl_(_$maybenull,_$bytecount_x(size)) _Deref2_post1_impl_(_$valid)


#define _Deref_post_valid_ _Deref_post1_impl_(_$notnull) _Deref2_post1_impl_(_$valid)
#define _Deref_post_opt_valid_ _Deref_post1_impl_(_$maybenull) _Deref2_post1_impl_(_$valid)

#define _Deref_post_notnull_ _Deref_post1_impl_(_$notnull)
#define _Deref_post_maybenull_ _Deref_post1_impl_(_$maybenull)
#define _Deref_post_null_ _Deref_post1_impl_(_$null)





#define _Deref_ret_z_ _Deref_ret2_impl_(_$notnull, _$zterm)
#define _Deref_ret_opt_z_ _Deref_ret2_impl_(_$maybenull,_$zterm)




#define _Deref2_pre_readonly_ _Deref2_pre1_impl_(_$readaccess)
#line 849
#define _Prepost_z_ _Pre_z_ _Post_z_
#define _Prepost_opt_z_ _Pre_opt_z_ _Post_z_

#define _Prepost_count_(size) _Pre_count_(size) _Post_count_(size)
#define _Prepost_opt_count_(size) _Pre_opt_count_(size) _Post_count_(size)
#define _Prepost_bytecount_(size) _Pre_bytecount_(size) _Post_bytecount_(size)
#define _Prepost_opt_bytecount_(size) _Pre_opt_bytecount_(size) _Post_bytecount_(size)
#define _Prepost_count_c_(size) _Pre_count_c_(size) _Post_count_c_(size)
#define _Prepost_opt_count_c_(size) _Pre_opt_count_c_(size) _Post_count_c_(size)
#define _Prepost_bytecount_c_(size) _Pre_bytecount_c_(size) _Post_bytecount_c_(size)
#define _Prepost_opt_bytecount_c_(size) _Pre_opt_bytecount_c_(size) _Post_bytecount_c_(size)
#define _Prepost_count_x_(size) _Pre_count_x_(size) _Post_count_x_(size)
#define _Prepost_opt_count_x_(size) _Pre_opt_count_x_(size) _Post_count_x_(size)
#define _Prepost_bytecount_x_(size) _Pre_bytecount_x_(size) _Post_bytecount_x_(size)
#define _Prepost_opt_bytecount_x_(size) _Pre_opt_bytecount_x_(size) _Post_bytecount_x_(size)

#define _Prepost_valid_ _Pre_valid_ _Post_valid_
#define _Prepost_opt_valid_ _Pre_opt_valid_ _Post_valid_
#line 874
#define _Deref_prepost_z_ _Deref_pre_z_ _Deref_post_z_
#define _Deref_prepost_opt_z_ _Deref_pre_opt_z_ _Deref_post_opt_z_

#define _Deref_prepost_cap_(size) _Deref_pre_cap_(size) _Deref_post_cap_(size)
#define _Deref_prepost_opt_cap_(size) _Deref_pre_opt_cap_(size) _Deref_post_opt_cap_(size)
#define _Deref_prepost_bytecap_(size) _Deref_pre_bytecap_(size) _Deref_post_bytecap_(size)
#define _Deref_prepost_opt_bytecap_(size) _Deref_pre_opt_bytecap_(size) _Deref_post_opt_bytecap_(size)

#define _Deref_prepost_cap_x_(size) _Deref_pre_cap_x_(size) _Deref_post_cap_x_(size)
#define _Deref_prepost_opt_cap_x_(size) _Deref_pre_opt_cap_x_(size) _Deref_post_opt_cap_x_(size)
#define _Deref_prepost_bytecap_x_(size) _Deref_pre_bytecap_x_(size) _Deref_post_bytecap_x_(size)
#define _Deref_prepost_opt_bytecap_x_(size) _Deref_pre_opt_bytecap_x_(size) _Deref_post_opt_bytecap_x_(size)

#define _Deref_prepost_z_cap_(size) _Deref_pre_z_cap_(size) _Deref_post_z_cap_(size)
#define _Deref_prepost_opt_z_cap_(size) _Deref_pre_opt_z_cap_(size) _Deref_post_opt_z_cap_(size)
#define _Deref_prepost_z_bytecap_(size) _Deref_pre_z_bytecap_(size) _Deref_post_z_bytecap_(size)
#define _Deref_prepost_opt_z_bytecap_(size) _Deref_pre_opt_z_bytecap_(size) _Deref_post_opt_z_bytecap_(size)

#define _Deref_prepost_valid_cap_(size) _Deref_pre_valid_cap_(size) _Deref_post_valid_cap_(size)
#define _Deref_prepost_opt_valid_cap_(size) _Deref_pre_opt_valid_cap_(size) _Deref_post_opt_valid_cap_(size)
#define _Deref_prepost_valid_bytecap_(size) _Deref_pre_valid_bytecap_(size) _Deref_post_valid_bytecap_(size)
#define _Deref_prepost_opt_valid_bytecap_(size) _Deref_pre_opt_valid_bytecap_(size) _Deref_post_opt_valid_bytecap_(size)

#define _Deref_prepost_valid_cap_x_(size) _Deref_pre_valid_cap_x_(size) _Deref_post_valid_cap_x_(size)
#define _Deref_prepost_opt_valid_cap_x_(size) _Deref_pre_opt_valid_cap_x_(size) _Deref_post_opt_valid_cap_x_(size)
#define _Deref_prepost_valid_bytecap_x_(size) _Deref_pre_valid_bytecap_x_(size) _Deref_post_valid_bytecap_x_(size)
#define _Deref_prepost_opt_valid_bytecap_x_(size) _Deref_pre_opt_valid_bytecap_x_(size) _Deref_post_opt_valid_bytecap_x_(size)

#define _Deref_prepost_count_(size) _Deref_pre_count_(size) _Deref_post_count_(size)
#define _Deref_prepost_opt_count_(size) _Deref_pre_opt_count_(size) _Deref_post_opt_count_(size)
#define _Deref_prepost_bytecount_(size) _Deref_pre_bytecount_(size) _Deref_post_bytecount_(size)
#define _Deref_prepost_opt_bytecount_(size) _Deref_pre_opt_bytecount_(size) _Deref_post_opt_bytecount_(size)

#define _Deref_prepost_count_x_(size) _Deref_pre_count_x_(size) _Deref_post_count_x_(size)
#define _Deref_prepost_opt_count_x_(size) _Deref_pre_opt_count_x_(size) _Deref_post_opt_count_x_(size)
#define _Deref_prepost_bytecount_x_(size) _Deref_pre_bytecount_x_(size) _Deref_post_bytecount_x_(size)
#define _Deref_prepost_opt_bytecount_x_(size) _Deref_pre_opt_bytecount_x_(size) _Deref_post_opt_bytecount_x_(size)

#define _Deref_prepost_valid_ _Deref_pre_valid_ _Deref_post_valid_
#define _Deref_prepost_opt_valid_ _Deref_pre_opt_valid_ _Deref_post_opt_valid_
#line 920
#define _Deref_out_z_cap_c_(size) _Deref_pre_cap_c_(size) _Deref_pre_invalid_ _Deref_post_z_
#define _Deref_inout_z_cap_c_(size) _Deref_pre_z_cap_c_(size) _Deref_post_z_
#define _Deref_out_z_bytecap_c_(size) _Deref_pre_bytecap_c_(size) _Deref_pre_invalid_ _Deref_post_z_
#define _Deref_inout_z_bytecap_c_(size) _Deref_pre_z_bytecap_c_(size) _Deref_post_z_
#define _Deref_inout_z_ _Deref_prepost_z_
#line 9 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\codeanalysis\\sourceannotations.h"
#define _W64 __w64
#line 21
#define _SIZE_T_DEFINED 
#line 34
#define SA(id) id
#define REPEATABLE [repeatable]
#line 218
#define SA_All All
#define SA_Class Class
#define SA_Constructor Constructor
#define SA_Delegate Delegate
#define SA_Enum Enum
#define SA_Event Event
#define SA_Field Field
#define SA_GenericParameter GenericParameter
#define SA_Interface Interface
#define SA_Method Method
#define SA_Module Module
#define SA_Parameter Parameter
#define SA_Property Property
#define SA_ReturnValue ReturnValue
#define SA_Struct Struct
#line 934 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\sal.h"
#define _Check_return_impl_ [returnvalue:SA_Post(MustCheck=SA_Yes)]

#define _Success_impl_(expr) [SA_Success(Condition=#expr)]

#define _Printf_format_string_impl_ [SA_FormatString(Style="printf")]
#define _Scanf_format_string_impl_ [SA_FormatString(Style="scanf")]
#define _Scanf_s_format_string_impl_ [SA_FormatString(Style="scanf_s")]

#define _In_bound_impl_ [SA_PreBound(Deref=0)]
#define _Out_bound_impl_ [SA_PostBound(Deref=0)]
#define _Ret_bound_impl_ [returnvalue:SA_PostBound(Deref=0)]
#define _Deref_in_bound_impl_ [SA_PreBound(Deref=1)]
#define _Deref_out_bound_impl_ [SA_PostBound(Deref=1)]
#define _Deref_ret_bound_impl_ [returnvalue:SA_PostBound(Deref=1)]

#define _In_range_impl_(min,max) [SA_PreRange(MinVal=#min,MaxVal=#max)]
#define _Out_range_impl_(min,max) [SA_PostRange(MinVal=#min,MaxVal=#max)]
#define _Ret_range_impl_(min,max) [returnvalue:SA_PostRange(MinVal=#min,MaxVal=#max)]
#define _Deref_in_range_impl_(min,max) [SA_PreRange(Deref=1,MinVal=#min,MaxVal=#max)]
#define _Deref_out_range_impl_(min,max) [SA_PostRange(Deref=1,MinVal=#min,MaxVal=#max)]
#define _Deref_ret_range_impl_(min,max) [returnvalue:SA_PostRange(Deref=1,MinVal=#min,MaxVal=#max)]

#define _$valid Valid=SA_Yes
#define _$maybevalid Valid=SA_Maybe
#define _$notvalid Valid=SA_No

#define _$null Null=SA_Yes
#define _$maybenull Null=SA_Maybe
#define _$notnull Null=SA_No

#define _$zterm NullTerminated=SA_Yes
#define _$maybezterm NullTerminated=SA_Maybe
#define _$notzterm NullTerminated=SA_No

#define _$readaccess Access=SA_Read
#define _$writeaccess Access=SA_Write

#define _$cap(size) WritableElements=#size
#define _$cap_c(size) WritableElementsConst=size
#define _$cap_for(param) WritableElementsLength=#param
#define _$cap_x(size) WritableElements="\n@"#size

#define _$bytecap(size) WritableBytes=#size
#define _$bytecap_c(size) WritableBytesConst=size
#define _$bytecap_x(size) WritableBytes="\n@"#size

#define _$mult(mult,size) ElementSizeConst=mult,_$cap(size)

#define _$count(size) ValidElements=#size
#define _$count_c(size) ValidElementsConst=size
#define _$count_x(size) ValidElements="\n@"#size

#define _$bytecount(size) ValidBytes=#size
#define _$bytecount_c(size) ValidBytesConst=size
#define _$bytecount_x(size) ValidBytes="\n@"#size

#define _Pre1_impl_(p1) [SA_Pre(p1)]
#define _Pre2_impl_(p1,p2) [SA_Pre(p1,p2)]
#define _Pre3_impl_(p1,p2,p3) [SA_Pre(p1,p2,p3)]

#define _Post1_impl_(p1) [SA_Post(p1)]
#define _Post2_impl_(p1,p2) [SA_Post(p1,p2)]
#define _Post3_impl_(p1,p2,p3) [SA_Post(p1,p2,p3)]

#define _Ret1_impl_(p1) [returnvalue:SA_Post(p1)]
#define _Ret2_impl_(p1,p2) [returnvalue:SA_Post(p1,p2)]
#define _Ret3_impl_(p1,p2,p3) [returnvalue:SA_Post(p1,p2,p3)]

#define _Deref_pre1_impl_(p1) [SA_Pre(Deref=1,p1)]
#define _Deref_pre2_impl_(p1,p2) [SA_Pre(Deref=1,p1,p2)]
#define _Deref_pre3_impl_(p1,p2,p3) [SA_Pre(Deref=1,p1,p2,p3)]

#define _Deref_post1_impl_(p1) [SA_Post(Deref=1,p1)]
#define _Deref_post2_impl_(p1,p2) [SA_Post(Deref=1,p1,p2)]
#define _Deref_post3_impl_(p1,p2,p3) [SA_Post(Deref=1,p1,p2,p3)]

#define _Deref_ret1_impl_(p1) [returnvalue:SA_Post(Deref=1,p1)]
#define _Deref_ret2_impl_(p1,p2) [returnvalue:SA_Post(Deref=1,p1,p2)]
#define _Deref_ret3_impl_(p1,p2,p3) [returnvalue:SA_Post(Deref=1,p1,p2,p3)]

#define _Deref2_pre1_impl_(p1) [SA_Pre(Deref=2,p1)]
#define _Deref2_post1_impl_(p1) [SA_Post(Deref=2,p1)]
#define _Deref2_ret1_impl_(p1) [returnvalue:SA_Post(Deref=2,p1)]
#line 1473
#define __specstrings 



#define __nothrow __declspec(nothrow)
#line 1706
#define __null 
#define __notnull 
#define __maybenull 
#define __readonly 
#define __notreadonly 
#define __maybereadonly 
#define __valid 
#define __notvalid 
#define __maybevalid 
#define __readableTo(extent) 
#define __elem_readableTo(size) 
#define __byte_readableTo(size) 
#define __writableTo(size) 
#define __elem_writableTo(size) 
#define __byte_writableTo(size) 
#define __deref 
#define __pre 
#define __post 
#define __precond(expr) 
#define __postcond(expr) 
#define __exceptthat 
#define __execeptthat 
#define __inner_success(expr) 
#define __inner_checkReturn 
#define __inner_typefix(ctype) 
#define __inner_override 
#define __inner_callback 
#define __inner_blocksOn(resource) 
#define __inner_fallthrough_dec 
#define __inner_fallthrough 
#define __refparam 
#define __inner_control_entrypoint(category) 
#define __inner_data_entrypoint(category) 
#line 1751
#define __ecount(size) __notnull __elem_writableTo(size)
#define __bcount(size) __notnull __byte_writableTo(size)
#define __in __pre __valid __pre __deref __readonly
#define __in_ecount(size) __in __pre __elem_readableTo(size)
#define __in_bcount(size) __in __pre __byte_readableTo(size)
#define __in_z __in __pre __nullterminated
#define __in_ecount_z(size) __in_ecount(size) __pre __nullterminated
#define __in_bcount_z(size) __in_bcount(size) __pre __nullterminated
#define __in_nz __in
#define __in_ecount_nz(size) __in_ecount(size)
#define __in_bcount_nz(size) __in_bcount(size)
#define __out __ecount(1) __post __valid __refparam
#define __out_ecount(size) __ecount(size) __post __valid __refparam
#define __out_bcount(size) __bcount(size) __post __valid __refparam
#define __out_ecount_part(size,length) __out_ecount(size) __post __elem_readableTo(length)
#define __out_bcount_part(size,length) __out_bcount(size) __post __byte_readableTo(length)
#define __out_ecount_full(size) __out_ecount_part(size,size)
#define __out_bcount_full(size) __out_bcount_part(size,size)
#define __out_z __post __valid __refparam __post __nullterminated
#define __out_z_opt __post __valid __refparam __post __nullterminated __exceptthat __maybenull
#define __out_ecount_z(size) __ecount(size) __post __valid __refparam __post __nullterminated
#define __out_bcount_z(size) __bcount(size) __post __valid __refparam __post __nullterminated
#define __out_ecount_part_z(size,length) __out_ecount_part(size,length) __post __nullterminated
#define __out_bcount_part_z(size,length) __out_bcount_part(size,length) __post __nullterminated
#define __out_ecount_full_z(size) __out_ecount_full(size) __post __nullterminated
#define __out_bcount_full_z(size) __out_bcount_full(size) __post __nullterminated
#define __out_nz __post __valid __refparam __post
#define __out_nz_opt __post __valid __refparam __post __exceptthat __maybenull
#define __out_ecount_nz(size) __ecount(size) __post __valid __refparam
#define __out_bcount_nz(size) __bcount(size) __post __valid __refparam
#define __inout __pre __valid __post __valid __refparam
#define __inout_ecount(size) __out_ecount(size) __pre __valid
#define __inout_bcount(size) __out_bcount(size) __pre __valid
#define __inout_ecount_part(size,length) __out_ecount_part(size,length) __pre __valid __pre __elem_readableTo(length)
#define __inout_bcount_part(size,length) __out_bcount_part(size,length) __pre __valid __pre __byte_readableTo(length)
#define __inout_ecount_full(size) __inout_ecount_part(size,size)
#define __inout_bcount_full(size) __inout_bcount_part(size,size)
#define __inout_z __inout __pre __nullterminated __post __nullterminated
#define __inout_ecount_z(size) __inout_ecount(size) __pre __nullterminated __post __nullterminated
#define __inout_bcount_z(size) __inout_bcount(size) __pre __nullterminated __post __nullterminated
#define __inout_nz __inout
#define __inout_ecount_nz(size) __inout_ecount(size)
#define __inout_bcount_nz(size) __inout_bcount(size)
#define __ecount_opt(size) __ecount(size) __exceptthat __maybenull
#define __bcount_opt(size) __bcount(size) __exceptthat __maybenull
#define __in_opt __in __exceptthat __maybenull
#define __in_ecount_opt(size) __in_ecount(size) __exceptthat __maybenull
#define __in_bcount_opt(size) __in_bcount(size) __exceptthat __maybenull
#define __in_z_opt __in_opt __pre __nullterminated
#define __in_ecount_z_opt(size) __in_ecount_opt(size) __pre __nullterminated
#define __in_bcount_z_opt(size) __in_bcount_opt(size) __pre __nullterminated
#define __in_nz_opt __in_opt
#define __in_ecount_nz_opt(size) __in_ecount_opt(size)
#define __in_bcount_nz_opt(size) __in_bcount_opt(size)
#define __out_opt __out __exceptthat __maybenull
#define __out_ecount_opt(size) __out_ecount(size) __exceptthat __maybenull
#define __out_bcount_opt(size) __out_bcount(size) __exceptthat __maybenull
#define __out_ecount_part_opt(size,length) __out_ecount_part(size,length) __exceptthat __maybenull
#define __out_bcount_part_opt(size,length) __out_bcount_part(size,length) __exceptthat __maybenull
#define __out_ecount_full_opt(size) __out_ecount_full(size) __exceptthat __maybenull
#define __out_bcount_full_opt(size) __out_bcount_full(size) __exceptthat __maybenull
#define __out_ecount_z_opt(size) __out_ecount_opt(size) __post __nullterminated
#define __out_bcount_z_opt(size) __out_bcount_opt(size) __post __nullterminated
#define __out_ecount_part_z_opt(size,length) __out_ecount_part_opt(size,length) __post __nullterminated
#define __out_bcount_part_z_opt(size,length) __out_bcount_part_opt(size,length) __post __nullterminated
#define __out_ecount_full_z_opt(size) __out_ecount_full_opt(size) __post __nullterminated
#define __out_bcount_full_z_opt(size) __out_bcount_full_opt(size) __post __nullterminated
#define __out_ecount_nz_opt(size) __out_ecount_opt(size) __post __nullterminated
#define __out_bcount_nz_opt(size) __out_bcount_opt(size) __post __nullterminated
#define __inout_opt __inout __exceptthat __maybenull
#define __inout_ecount_opt(size) __inout_ecount(size) __exceptthat __maybenull
#define __inout_bcount_opt(size) __inout_bcount(size) __exceptthat __maybenull
#define __inout_ecount_part_opt(size,length) __inout_ecount_part(size,length) __exceptthat __maybenull
#define __inout_bcount_part_opt(size,length) __inout_bcount_part(size,length) __exceptthat __maybenull
#define __inout_ecount_full_opt(size) __inout_ecount_full(size) __exceptthat __maybenull
#define __inout_bcount_full_opt(size) __inout_bcount_full(size) __exceptthat __maybenull
#define __inout_z_opt __inout_opt __pre __nullterminated __post __nullterminated
#define __inout_ecount_z_opt(size) __inout_ecount_opt(size) __pre __nullterminated __post __nullterminated
#define __inout_ecount_z_opt(size) __inout_ecount_opt(size) __pre __nullterminated __post __nullterminated
#define __inout_bcount_z_opt(size) __inout_bcount_opt(size)
#define __inout_nz_opt __inout_opt
#define __inout_ecount_nz_opt(size) __inout_ecount_opt(size)
#define __inout_bcount_nz_opt(size) __inout_bcount_opt(size)
#define __deref_ecount(size) __ecount(1) __post __elem_readableTo(1) __post __deref __notnull __post __deref __elem_writableTo(size)
#define __deref_bcount(size) __ecount(1) __post __elem_readableTo(1) __post __deref __notnull __post __deref __byte_writableTo(size)
#define __deref_out __deref_ecount(1) __post __deref __valid __refparam
#define __deref_out_ecount(size) __deref_ecount(size) __post __deref __valid __refparam
#define __deref_out_bcount(size) __deref_bcount(size) __post __deref __valid __refparam
#define __deref_out_ecount_part(size,length) __deref_out_ecount(size) __post __deref __elem_readableTo(length)
#define __deref_out_bcount_part(size,length) __deref_out_bcount(size) __post __deref __byte_readableTo(length)
#define __deref_out_ecount_full(size) __deref_out_ecount_part(size,size)
#define __deref_out_bcount_full(size) __deref_out_bcount_part(size,size)
#define __deref_out_z __post __deref __valid __refparam __post __deref __nullterminated
#define __deref_out_ecount_z(size) __deref_out_ecount(size) __post __deref __nullterminated
#define __deref_out_bcount_z(size) __deref_out_ecount(size) __post __deref __nullterminated
#define __deref_out_nz __deref_out
#define __deref_out_ecount_nz(size) __deref_out_ecount(size)
#define __deref_out_bcount_nz(size) __deref_out_ecount(size)
#define __deref_inout __notnull __elem_readableTo(1) __pre __deref __valid __post __deref __valid __refparam
#define __deref_inout_z __deref_inout __pre __deref __nullterminated __post __deref __nullterminated
#define __deref_inout_ecount(size) __deref_inout __pre __deref __elem_writableTo(size) __post __deref __elem_writableTo(size)
#define __deref_inout_bcount(size) __deref_inout __pre __deref __byte_writableTo(size) __post __deref __byte_writableTo(size)
#define __deref_inout_ecount_part(size,length) __deref_inout_ecount(size) __pre __deref __elem_readableTo(length) __post __deref __elem_readableTo(length)
#define __deref_inout_bcount_part(size,length) __deref_inout_bcount(size) __pre __deref __byte_readableTo(length) __post __deref __byte_readableTo(length)
#define __deref_inout_ecount_full(size) __deref_inout_ecount_part(size,size)
#define __deref_inout_bcount_full(size) __deref_inout_bcount_part(size,size)
#define __deref_inout_z __deref_inout __pre __deref __nullterminated __post __deref __nullterminated
#define __deref_inout_ecount_z(size) __deref_inout_ecount(size) __pre __deref __nullterminated __post __deref __nullterminated
#define __deref_inout_bcount_z(size) __deref_inout_bcount(size) __pre __deref __nullterminated __post __deref __nullterminated
#define __deref_inout_nz __deref_inout
#define __deref_inout_ecount_nz(size) __deref_inout_ecount(size)
#define __deref_inout_bcount_nz(size) __deref_inout_ecount(size)
#define __deref_ecount_opt(size) __deref_ecount(size) __post __deref __exceptthat __maybenull
#define __deref_bcount_opt(size) __deref_bcount(size) __post __deref __exceptthat __maybenull
#define __deref_out_opt __deref_out __post __deref __exceptthat __maybenull
#define __deref_out_ecount_opt(size) __deref_out_ecount(size) __post __deref __exceptthat __maybenull
#define __deref_out_bcount_opt(size) __deref_out_bcount(size) __post __deref __exceptthat __maybenull
#define __deref_out_ecount_part_opt(size,length) __deref_out_ecount_part(size,length) __post __deref __exceptthat __maybenull
#define __deref_out_bcount_part_opt(size,length) __deref_out_bcount_part(size,length) __post __deref __exceptthat __maybenull
#define __deref_out_ecount_full_opt(size) __deref_out_ecount_full(size) __post __deref __exceptthat __maybenull
#define __deref_out_bcount_full_opt(size) __deref_out_bcount_full(size) __post __deref __exceptthat __maybenull
#define __deref_out_z_opt __post __deref __valid __refparam __execeptthat __maybenull __post __deref __nullterminated
#define __deref_out_ecount_z_opt(size) __deref_out_ecount_opt(size) __post __deref __nullterminated
#define __deref_out_bcount_z_opt(size) __deref_out_bcount_opt(size) __post __deref __nullterminated
#define __deref_out_nz_opt __deref_out_opt
#define __deref_out_ecount_nz_opt(size) __deref_out_ecount_opt(size)
#define __deref_out_bcount_nz_opt(size) __deref_out_bcount_opt(size)
#define __deref_inout_opt __deref_inout __pre __deref __exceptthat __maybenull __post __deref __exceptthat __maybenull
#define __deref_inout_ecount_opt(size) __deref_inout_ecount(size) __pre __deref __exceptthat __maybenull __post __deref __exceptthat __maybenull
#define __deref_inout_bcount_opt(size) __deref_inout_bcount(size) __pre __deref __exceptthat __maybenull __post __deref __exceptthat __maybenull
#define __deref_inout_ecount_part_opt(size,length) __deref_inout_ecount_part(size,length) __pre __deref __exceptthat __maybenull __post __deref __exceptthat __maybenull
#define __deref_inout_bcount_part_opt(size,length) __deref_inout_bcount_part(size,length) __pre __deref __exceptthat __maybenull __post __deref __exceptthat __maybenull
#define __deref_inout_ecount_full_opt(size) __deref_inout_ecount_full(size) __pre __deref __exceptthat __maybenull __post __deref __exceptthat __maybenull
#define __deref_inout_bcount_full_opt(size) __deref_inout_bcount_full(size) __pre __deref __exceptthat __maybenull __post __deref __exceptthat __maybenull
#define __deref_inout_z_opt __deref_inout_opt __pre __deref __nullterminated __post __deref __nullterminated
#define __deref_inout_ecount_z_opt(size) __deref_inout_ecount_opt(size) __pre __deref __nullterminated __post __deref __nullterminated
#define __deref_inout_bcount_z_opt(size) __deref_inout_bcount_opt(size) __pre __deref __nullterminated __post __deref __nullterminated
#define __deref_inout_nz_opt __deref_inout_opt
#define __deref_inout_ecount_nz_opt(size) __deref_inout_ecount_opt(size)
#define __deref_inout_bcount_nz_opt(size) __deref_inout_bcount_opt(size)
#define __deref_opt_ecount(size) __deref_ecount(size) __exceptthat __maybenull
#define __deref_opt_bcount(size) __deref_bcount(size) __exceptthat __maybenull
#define __deref_opt_out __deref_out __exceptthat __maybenull
#define __deref_opt_out_z __deref_opt_out __post __deref __nullterminated
#define __deref_opt_out_ecount(size) __deref_out_ecount(size) __exceptthat __maybenull
#define __deref_opt_out_bcount(size) __deref_out_bcount(size) __exceptthat __maybenull
#define __deref_opt_out_ecount_part(size,length) __deref_out_ecount_part(size,length) __exceptthat __maybenull
#define __deref_opt_out_bcount_part(size,length) __deref_out_bcount_part(size,length) __exceptthat __maybenull
#define __deref_opt_out_ecount_full(size) __deref_out_ecount_full(size) __exceptthat __maybenull
#define __deref_opt_out_bcount_full(size) __deref_out_bcount_full(size) __exceptthat __maybenull
#define __deref_opt_inout __deref_inout __exceptthat __maybenull
#define __deref_opt_inout_ecount(size) __deref_inout_ecount(size) __exceptthat __maybenull
#define __deref_opt_inout_bcount(size) __deref_inout_bcount(size) __exceptthat __maybenull
#define __deref_opt_inout_ecount_part(size,length) __deref_inout_ecount_part(size,length) __exceptthat __maybenull
#define __deref_opt_inout_bcount_part(size,length) __deref_inout_bcount_part(size,length) __exceptthat __maybenull
#define __deref_opt_inout_ecount_full(size) __deref_inout_ecount_full(size) __exceptthat __maybenull
#define __deref_opt_inout_bcount_full(size) __deref_inout_bcount_full(size) __exceptthat __maybenull
#define __deref_opt_inout_z __deref_opt_inout __pre __deref __nullterminated __post __deref __nullterminated
#define __deref_opt_inout_ecount_z(size) __deref_opt_inout_ecount(size) __pre __deref __nullterminated __post __deref __nullterminated
#define __deref_opt_inout_bcount_z(size) __deref_opt_inout_bcount(size) __pre __deref __nullterminated __post __deref __nullterminated
#define __deref_opt_inout_nz __deref_opt_inout
#define __deref_opt_inout_ecount_nz(size) __deref_opt_inout_ecount(size)
#define __deref_opt_inout_bcount_nz(size) __deref_opt_inout_bcount(size)
#define __deref_opt_ecount_opt(size) __deref_ecount_opt(size) __exceptthat __maybenull
#define __deref_opt_bcount_opt(size) __deref_bcount_opt(size) __exceptthat __maybenull
#define __deref_opt_out_opt __deref_out_opt __exceptthat __maybenull
#define __deref_opt_out_ecount_opt(size) __deref_out_ecount_opt(size) __exceptthat __maybenull
#define __deref_opt_out_bcount_opt(size) __deref_out_bcount_opt(size) __exceptthat __maybenull
#define __deref_opt_out_ecount_part_opt(size,length) __deref_out_ecount_part_opt(size,length) __exceptthat __maybenull
#define __deref_opt_out_bcount_part_opt(size,length) __deref_out_bcount_part_opt(size,length) __exceptthat __maybenull
#define __deref_opt_out_ecount_full_opt(size) __deref_out_ecount_full_opt(size) __exceptthat __maybenull
#define __deref_opt_out_bcount_full_opt(size) __deref_out_bcount_full_opt(size) __exceptthat __maybenull
#define __deref_opt_out_z_opt __post __deref __valid __refparam __exceptthat __maybenull __pre __deref __exceptthat __maybenull __post __deref __exceptthat __maybenull __post __deref __nullterminated
#define __deref_opt_out_ecount_z_opt(size) __deref_opt_out_ecount_opt(size) __post __deref __nullterminated
#define __deref_opt_out_bcount_z_opt(size) __deref_opt_out_bcount_opt(size) __post __deref __nullterminated
#define __deref_opt_out_nz_opt __deref_opt_out_opt
#define __deref_opt_out_ecount_nz_opt(size) __deref_opt_out_ecount_opt(size)
#define __deref_opt_out_bcount_nz_opt(size) __deref_opt_out_bcount_opt(size)
#define __deref_opt_inout_opt __deref_inout_opt __exceptthat __maybenull
#define __deref_opt_inout_ecount_opt(size) __deref_inout_ecount_opt(size) __exceptthat __maybenull
#define __deref_opt_inout_bcount_opt(size) __deref_inout_bcount_opt(size) __exceptthat __maybenull
#define __deref_opt_inout_ecount_part_opt(size,length) __deref_inout_ecount_part_opt(size,length) __exceptthat __maybenull
#define __deref_opt_inout_bcount_part_opt(size,length) __deref_inout_bcount_part_opt(size,length) __exceptthat __maybenull
#define __deref_opt_inout_ecount_full_opt(size) __deref_inout_ecount_full_opt(size) __exceptthat __maybenull
#define __deref_opt_inout_bcount_full_opt(size) __deref_inout_bcount_full_opt(size) __exceptthat __maybenull
#define __deref_opt_inout_z_opt __deref_opt_inout_opt __pre __deref __nullterminated __post __deref __nullterminated
#define __deref_opt_inout_ecount_z_opt(size) __deref_opt_inout_ecount_opt(size) __pre __deref __nullterminated __post __deref __nullterminated
#define __deref_opt_inout_bcount_z_opt(size) __deref_opt_inout_bcount_opt(size) __pre __deref __nullterminated __post __deref __nullterminated
#define __deref_opt_inout_nz_opt __deref_opt_inout_opt
#define __deref_opt_inout_ecount_nz_opt(size) __deref_opt_inout_ecount_opt(size)
#define __deref_opt_inout_bcount_nz_opt(size) __deref_opt_inout_bcount_opt(size)
#line 1953
#define __success(expr) __inner_success(expr)
#define __nullterminated __readableTo(sentinel(0))
#define __nullnullterminated 
#define __reserved __pre __null
#define __checkReturn __inner_checkReturn
#define __typefix(ctype) __inner_typefix(ctype)
#define __override __inner_override
#define __callback __inner_callback
#define __format_string 
#define __blocksOn(resource) __inner_blocksOn(resource)
#define __control_entrypoint(category) __inner_control_entrypoint(category)
#define __data_entrypoint(category) __inner_data_entrypoint(category)



#define __fallthrough __inner_fallthrough
#line 1975
#define __analysis_assume(expr) 
#line 78 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
#define _CRT_MANIFEST_DEBUG 
#line 16 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\crtassem.h"
#define _VC_ASSEMBLY_PUBLICKEYTOKEN "1fc8b3b9a1e18e3b"



#define _BIND_TO_CURRENT_VCLIBS_VERSION 0
#line 27
#define _BIND_TO_CURRENT_CRT_VERSION 0
#line 35
#define _CRT_ASSEMBLY_VERSION "9.0.21022.8"




#define __LIBRARIES_ASSEMBLY_NAME_PREFIX "Microsoft.VC90"
#line 166 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
#define _CRT_PACKING 8
#line 18 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\vadefs.h"
#define _INC_VADEFS 
#line 30
#undef _CRT_PACKING
#define _CRT_PACKING 8
#line 54
#define _UINTPTR_T_DEFINED 
#line 63
#define _VA_LIST_DEFINED 



#define _ADDRESSOF(v) ( &reinterpret_cast<const char &>(v) )
#line 83
#define _SLOTSIZEOF(t) (sizeof(t))
#define _APALIGN(t,ap) (__alignof(t))
#line 101
#define _INTSIZEOF(n) ( (sizeof(n) + sizeof(int) - 1) & ~(sizeof(int) - 1) )

#define _crt_va_start(ap,v) ( ap = (va_list)_ADDRESSOF(v) + _INTSIZEOF(v) )
#define _crt_va_arg(ap,t) ( *(t *)((ap += _INTSIZEOF(t)) - _INTSIZEOF(t)) )
#define _crt_va_end(ap) ( ap = (va_list)0 )
#line 179 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\crtdefs.h"
#define __CRT_STRINGIZE(_Value) #_Value
#define _CRT_STRINGIZE(_Value) __CRT_STRINGIZE(_Value)



#define __CRT_WIDE(_String) L##_String
#define _CRT_WIDE(_String) __CRT_WIDE(_String)



#define __CRT_APPEND(_Value1,_Value2) _Value1##_Value2
#define _CRT_APPEND(_Value1,_Value2) __CRT_APPEND(_Value1, _Value2)
#line 207
#define _CRTIMP_NOIA64 _CRTIMP
#line 215
#define _CRTIMP2 __declspec(dllimport)
#line 228
#define _CRTIMP_ALTERNATIVE _CRTIMP
#define _CRT_ALTERNATIVE_IMPORTED 
#line 239
#define _MRTIMP __declspec(dllimport)
#line 246
#define _MRTIMP2 __declspec(dllimport)
#line 257
#define _MCRTIMP __declspec(dllimport)
#line 267
#define __CLR_OR_THIS_CALL 
#line 275
#define __CLRCALL_OR_CDECL __cdecl
#line 283
#define _CRTIMP_PURE _CRTIMP
#line 295
#define _PGLOBAL 
#line 303
#define _AGLOBAL 
#line 315
#define __STDC_SECURE_LIB__ 200411L


#define __GOT_SECURE_LIB__ __STDC_SECURE_LIB__



#define __STDC_WANT_SECURE_LIB__ 1
#line 332
#define _CRT_DEPRECATE_TEXT(_Text) __declspec(deprecated(_Text))
#line 347
#define _CRT_INSECURE_DEPRECATE(_Replacement) _CRT_DEPRECATE_TEXT("This function or variable may be unsafe. Consider using " #_Replacement " instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.")
#line 359
#define _CRT_INSECURE_DEPRECATE_MEMORY(_Replacement) 
#line 380
#define _CRT_INSECURE_DEPRECATE_GLOBALS(_Replacement) _CRT_INSECURE_DEPRECATE(_Replacement)
#line 401
#define _CRT_MANAGED_HEAP_DEPRECATE 





#define _SECURECRT_FILL_BUFFER_PATTERN 0xFE
#line 421
#define _CRT_OBSOLETE(_NewItem) _CRT_DEPRECATE_TEXT("This function or variable has been superceded by newer library or operating system functionality. Consider using " #_NewItem " instead. See online help for details.")
#line 432
#define _CRT_JIT_INTRINSIC 
#line 439
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 0
#line 450
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 0
#line 461
#define _CRT_SECURE_CPP_OVERLOAD_SECURE_NAMES 1
#line 482
#define _CRT_NONSTDC_DEPRECATE(_NewName) _CRT_DEPRECATE_TEXT("The POSIX name for this item is deprecated. Instead, use the ISO C++ conformant name: " #_NewName ". See online help for details.")
#line 498
#define _RSIZE_T_DEFINED 
#line 508
#define _INTPTR_T_DEFINED 
#line 526
#define _PTRDIFF_T_DEFINED 
#line 537
#define _WCTYPE_T_DEFINED 
#line 557
#define _ERRCODE_DEFINED 
#line 570
#define _TIME32_T_DEFINED 




#define _TIME64_T_DEFINED 
#line 584
#define _TIME_T_DEFINED 




#define _CONST_RETURN const
#define _CRT_CONST_CORRECT_OVERLOADS 
#line 600
#define UNALIGNED 
#line 608
#define _CRT_ALIGN(x) __declspec(align(x))
#line 616
#define _MSC_VER_GREATER_THEN_13102050 





#define _CRTNOALIAS __declspec(noalias)



#define _CRTRESTRICT __declspec(restrict)
#line 650
#define __CRTDECL __cdecl




#define _ARGMAX 100



#define _TRUNCATE ((size_t)-1)
#line 666
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_0(_ReturnType,_FuncName,_DstType,_Dst) extern "C++" { template <size_t _Size> inline _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size]) { return _FuncName(_Dst, _Size); } }
#line 677
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1(_ReturnType,_FuncName,_DstType,_Dst,_TType1,_TArg1) extern "C++" { template <size_t _Size> inline _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1) { return _FuncName(_Dst, _Size, _TArg1); } }
#line 688
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2(_ReturnType,_FuncName,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) extern "C++" { template <size_t _Size> inline _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2) { return _FuncName(_Dst, _Size, _TArg1, _TArg2); } }
#line 699
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_3(_ReturnType,_FuncName,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) extern "C++" { template <size_t _Size> inline _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) { return _FuncName(_Dst, _Size, _TArg1, _TArg2, _TArg3); } }
#line 710
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_4(_ReturnType,_FuncName,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3,_TType4,_TArg4) extern "C++" { template <size_t _Size> inline _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4) { return _FuncName(_Dst, _Size, _TArg1, _TArg2, _TArg3, _TArg4); } }
#line 721
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_1(_ReturnType,_FuncName,_HType1,_HArg1,_DstType,_Dst,_TType1,_TArg1) extern "C++" { template <size_t _Size> inline _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _DstType (&_Dst)[_Size], _TType1 _TArg1) { return _FuncName(_HArg1, _Dst, _Size, _TArg1); } }
#line 732
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_2(_ReturnType,_FuncName,_HType1,_HArg1,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) extern "C++" { template <size_t _Size> inline _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _DstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2) { return _FuncName(_HArg1, _Dst, _Size, _TArg1, _TArg2); } }
#line 743
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_1_3(_ReturnType,_FuncName,_HType1,_HArg1,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) extern "C++" { template <size_t _Size> inline _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _DstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3) { return _FuncName(_HArg1, _Dst, _Size, _TArg1, _TArg2, _TArg3); } }
#line 754
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_2_0(_ReturnType,_FuncName,_HType1,_HArg1,_HType2,_HArg2,_DstType,_Dst) extern "C++" { template <size_t _Size> inline _ReturnType __CRTDECL _FuncName(_HType1 _HArg1, _HType2 _HArg2, _DstType (&_Dst)[_Size]) { return _FuncName(_HArg1, _HArg2, _Dst, _Size); } }
#line 765
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_1_ARGLIST(_ReturnType,_FuncName,_VFuncName,_DstType,_Dst,_TType1,_TArg1) extern "C++" { __pragma(warning(push)); __pragma(warning(disable: 4793)); template <size_t _Size> inline _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, ...) { va_list _ArgList; _crt_va_start(_ArgList, _TArg1); return _VFuncName(_Dst, _Size, _TArg1, _ArgList); } __pragma(warning(pop)); }
#line 781
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_0_2_ARGLIST(_ReturnType,_FuncName,_VFuncName,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) extern "C++" { __pragma(warning(push)); __pragma(warning(disable: 4793)); template <size_t _Size> inline _ReturnType __CRTDECL _FuncName(_DstType (&_Dst)[_Size], _TType1 _TArg1, _TType2 _TArg2, ...) { va_list _ArgList; _crt_va_start(_ArgList, _TArg2); return _VFuncName(_Dst, _Size, _TArg1, _TArg2, _ArgList); } __pragma(warning(pop)); }
#line 797
#define __DEFINE_CPP_OVERLOAD_SECURE_FUNC_SPLITPATH(_ReturnType,_FuncName,_DstType,_Src) extern "C++" { template <size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize> inline _ReturnType __CRTDECL _FuncName(_In_ const _DstType *_Src, _DstType (&_Drive)[_DriveSize], _DstType (&_Dir)[_DirSize], _DstType (&_Name)[_NameSize], _DstType (&_Ext)[_ExtSize]) { return _FuncName(_Src, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize); } }
#line 826
#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _SalAttributeDst, _DstType, _Dst)


#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)


#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)


#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)


#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3,_TType4,_TArg4) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4)


#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_HType1,_HArg1,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)


#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_HType1,_HArg1,_HType2,_HArg2,_SalAttributeDst,_DstType,_Dst) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst)


#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_VFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _VFuncName, _VFuncName##_s, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)


#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_VFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _VFuncName, _VFuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)


#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE(_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)


#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE(_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)



#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _SalAttributeDst, _DstType, _Dst)


#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _SalAttributeDst, _DstType, _DstType, _Dst, _TType1, _TArg1)


#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)


#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)


#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3,_TType4,_TArg4) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3, _TType4, _TArg4)


#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_HType1,_HArg1,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _HType1, _HArg1, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)


#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_HType1,_HArg1,_HType2,_HArg2,_SalAttributeDst,_DstType,_Dst) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _HType1, _HArg1, _HType2, _HArg2, _SalAttributeDst, _DstType, _Dst)


#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_VFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST_EX(_ReturnType, _ReturnPolicy, _DeclSpec, _FuncName, _FuncName##_s, _VFuncName, _VFuncName##_s, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1)


#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE(_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE_EX(_DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2)


#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE(_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE_EX(_DeclSpec, _FuncName, _FuncName##_s, _DstType, _SalAttributeDst, _DstType, _Dst, _TType1, _TArg1, _TType2, _TArg2, _TType3, _TArg3)
#line 1892
#define __RETURN_POLICY_SAME(_FunctionCall) 
#define __RETURN_POLICY_DST(_FunctionCall) 
#define __RETURN_POLICY_VOID(_FunctionCall) 
#define __EMPTY_DECLSPEC 

#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SalAttributeDst,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst);


#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_0_CGETS(_ReturnType,_DeclSpec,_FuncName,_SalAttributeDst,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst);


#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1);


#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);


#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);


#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_4_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3,_TType4,_TArg4) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4);


#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_1_1_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_HType1,_HArg1,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _SalAttributeDst _DstType *_Dst, _TType1 _TArg1);


#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_2_0_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_HType1,_HArg1,_HType2,_HArg2,_SalAttributeDst,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _HType2 _HArg2, _SalAttributeDst _DstType *_Dst);


#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_1_ARGLIST_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_VFuncName,_SecureVFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, ...); _CRT_INSECURE_DEPRECATE(_SecureVFuncName) _DeclSpec _ReturnType __cdecl _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, va_list _Args);



#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_ARGLIST_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_VFuncName,_SecureVFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); _CRT_INSECURE_DEPRECATE(_SecureVFuncName) _DeclSpec _ReturnType __cdecl _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);



#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_2_SIZE_EX(_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);


#define __DEFINE_CPP_OVERLOAD_STANDARD_FUNC_0_3_SIZE_EX(_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);


#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SalAttributeDst,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst);


#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_0_GETS(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_DstType *_Dst);


#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1);


#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);


#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);


#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_4_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3,_TType4,_TArg4) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3, _TType4 _TArg4);


#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_1_1_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_HType1,_HArg1,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _SalAttributeDst _DstType *_Dst, _TType1 _TArg1);


#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_2_0_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_HType1,_HArg1,_HType2,_HArg2,_SalAttributeDst,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_HType1 _HArg1, _HType2 _HArg2, _SalAttributeDst _DstType *_Dst);


#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_1_ARGLIST_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_SecureFuncName,_VFuncName,_SecureVFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, ...); _CRT_INSECURE_DEPRECATE(_SecureVFuncName) _DeclSpec _ReturnType __cdecl _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, va_list _Args);



#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_VFuncName,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); _CRT_INSECURE_DEPRECATE(_VFuncName##_s) _DeclSpec _ReturnType __cdecl _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);



#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_ARGLIST_EX(_ReturnType,_ReturnPolicy,_DeclSpec,_FuncName,_VFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_FuncName##_s) _DeclSpec _ReturnType __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, ...); _CRT_INSECURE_DEPRECATE(_VFuncName##_s) _DeclSpec _ReturnType __cdecl _VFuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, va_list _Args);



#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_2_SIZE_EX(_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2);


#define __DEFINE_CPP_OVERLOAD_STANDARD_NFUNC_0_3_SIZE_EX(_DeclSpec,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) _CRT_INSECURE_DEPRECATE(_SecureFuncName) _DeclSpec size_t __cdecl _FuncName(_SalAttributeDst _DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3);



#define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_0_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst)




#define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_0_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst) 

#define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_1_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1)




#define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_1_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1) 

#define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_2_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2)




#define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_2_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) 

#define __DECLARE_CPP_OVERLOAD_INLINE_FUNC_0_3_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3)




#define __DEFINE_CPP_OVERLOAD_INLINE_FUNC_0_3_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) 

#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_0_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst)




#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_0_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst) 

#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_1_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1)




#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_1_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1) 

#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_2_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2)




#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_2_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2) 

#define __DECLARE_CPP_OVERLOAD_INLINE_NFUNC_0_3_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) _CRT_INSECURE_DEPRECATE(_SecureFuncName) __inline _ReturnType __CRTDECL _FuncName(_DstType *_Dst, _TType1 _TArg1, _TType2 _TArg2, _TType3 _TArg3)




#define __DEFINE_CPP_OVERLOAD_INLINE_NFUNC_0_3_EX(_ReturnType,_ReturnPolicy,_FuncName,_SecureFuncName,_SecureDstType,_SalAttributeDst,_DstType,_Dst,_TType1,_TArg1,_TType2,_TArg2,_TType3,_TArg3) 
#line 2055
#define _TAGLC_ID_DEFINED 
#line 2084
#define _THREADLOCALEINFO 
#line 2094
#define _Check_return_opt_ 





#define _Check_return_wat_ 





#define __crt_typefix(ctype) 
#line 2117
#define _CRT_UNUSED(x) (void)x
#line 22 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\limits.h"
#define _INC_LIMITS 


#define CHAR_BIT 8
#define SCHAR_MIN (-128)
#define SCHAR_MAX 127
#define UCHAR_MAX 0xff


#define CHAR_MIN SCHAR_MIN
#define CHAR_MAX SCHAR_MAX





#define MB_LEN_MAX 5
#define SHRT_MIN (-32768)
#define SHRT_MAX 32767
#define USHRT_MAX 0xffff
#define INT_MIN (-2147483647 - 1)
#define INT_MAX 2147483647
#define UINT_MAX 0xffffffff
#define LONG_MIN (-2147483647L - 1)
#define LONG_MAX 2147483647L
#define ULONG_MAX 0xffffffffUL
#define LLONG_MAX 9223372036854775807i64
#define LLONG_MIN (-9223372036854775807i64 - 1)
#define ULLONG_MAX 0xffffffffffffffffui64

#define _I8_MIN (-127i8 - 1)
#define _I8_MAX 127i8
#define _UI8_MAX 0xffui8

#define _I16_MIN (-32767i16 - 1)
#define _I16_MAX 32767i16
#define _UI16_MAX 0xffffui16

#define _I32_MIN (-2147483647i32 - 1)
#define _I32_MAX 2147483647i32
#define _UI32_MAX 0xffffffffui32


#define _I64_MIN (-9223372036854775807i64 - 1)

#define _I64_MAX 9223372036854775807i64

#define _UI64_MAX 0xffffffffffffffffui64
#line 84
#define SIZE_MAX UINT_MAX
#line 93
#define RSIZE_MAX SIZE_MAX
#line 41 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\stdlib.h"
#define NULL 0
#line 49
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
#line 68
#define onexit_t _onexit_t


#define _ONEXIT_T_DEFINED 
#line 89
#define _DIV_T_DEFINED 
#line 107
#define _PTR_LD(x) ((unsigned char *)(&(x)->ld))
#line 148
#define _CRT_DOUBLE_DEC 




#define RAND_MAX 0x7fff
#line 161
#define MB_CUR_MAX ___mb_cur_max_func()
#line 177
#define __max(a,b) (((a) > (b)) ? (a) : (b))
#define __min(a,b) (((a) < (b)) ? (a) : (b))





#define _MAX_PATH 260
#define _MAX_DRIVE 3
#define _MAX_DIR 256
#define _MAX_FNAME 256
#define _MAX_EXT 256




#define _OUT_TO_DEFAULT 0
#define _OUT_TO_STDERR 1
#define _OUT_TO_MSGBOX 2
#define _REPORT_ERRMODE 3




#define _WRITE_ABORT_MSG 0x1
#define _CALL_REPORTFAULT 0x2




#define _MAX_ENV 32767
#line 266
#define _CRT_ERRNO_DEFINED 

#define errno (*_errno())
#line 275
#define _doserrno (*__doserrno())
#line 282
#define _sys_errlist (__sys_errlist())


#define _sys_nerr (*__sys_nerr())
#line 362
#define _countof(_Array) sizeof(*__countof_helper(_Array))
#line 370
#define _CRT_TERMINATE_DEFINED 
#line 379
#define _CRT_ABS_DEFINED 
#line 415
#define _CRT_ATOF_DEFINED 
#line 424
#define _CRT_ALGO_DEFINED 
#line 520
#define _CRT_SYSTEM_DEFINED 
#line 566
#define _CRT_ALLOCATION_DEFINED 
#line 669
#define _CRT_WSYSTEM_DEFINED 
#line 690
#define _WSTDLIB_DEFINED 
#line 699
#define _CVTBUFSIZE (309+40)
#line 768
#define _CRT_PERROR_DEFINED 
#line 816
#define _CRT_WPERROR_DEFINED 
#line 832
#define _WSTDLIBP_DEFINED 
#line 853
#define sys_errlist _sys_errlist
#define sys_nerr _sys_nerr
#define environ _environ
#line 20 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\stdarg.h"
#define _INC_STDARG 
#line 29
#define va_start _crt_va_start
#define va_arg _crt_va_arg
#define va_end _crt_va_end
#line 16 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.1\\engine\\runtime\\include\\cpptest_common.h"
#define CPPTEST_MALLOC_FAILED 119
#line 182
#define cpptestMarshallWord(data,buf) (*((short*)buf) = data, buf + 2)
#define cpptestMarshallDWord(data,buf) (*((int*)buf) = data, buf + 4)
#line 8 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.1\\engine\\runtime\\include\\cpptest_system.h"
#define __CppTest_System_h__ 
#line 21 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.1\\engine\\runtime\\include\\cpptest_runtime_u.h"
#define CPPTEST_NO_LINE UINT_MAX
#define CPPTEST_NEW_RUNTIME_API CPPTEST_RUNTIME_API
#line 29
#define CPPTEST_FULL_MASK 0xFFFFU
#define CPPTEST_ERROR_MASK 0xC000U
#define CPPTEST_EXCEPTION_MASK 0xF800U



#define CPPTEST_NO_ERROR 0x0000U


#define CPPTEST_ANY_ERROR 0x8000U


#define CPPTEST_GENERAL_EQUAL_ASSERTION_FAILED 0x8AA1U
#define CPPTEST_BOOL_EQUAL_ASSERTION_FAILED 0x8AA2U
#define CPPTEST_INTEGER_EQUAL_ASSERTION_FAILED 0x8AA3U
#define CPPTEST_UINTEGER_EQUAL_ASSERTION_FAILED 0x8AA4U
#define CPPTEST_FLOAT_EQUAL_ASSERTION_FAILED 0x8AA5U
#define CPPTEST_FLOAT_FMT_EQUAL_ASSERTION_FAILED 0x8AA6U
#define CPPTEST_CSTR_EQUAL_ASSERTION_FAILED 0x8AA7U
#define CPPTEST_WCSTR_EQUAL_ASSERTION_FAILED 0x8AA8U
#define CPPTEST_CSTRN_EQUAL_ASSERTION_FAILED 0x8AA9U
#define CPPTEST_WCSTRN_EQUAL_ASSERTION_FAILED 0x8AAAU
#define CPPTEST_MEM_EQUAL_ASSERTION_FAILED 0x8AABU
#define CPPTEST_PTR_EQUAL_ASSERTION_FAILED 0x8AACU

#define CPPTEST_GENERAL_ASSERTION_FAILED 0x8AF9U
#define CPPTEST_THROW_ASSERTION_FAILED 0x8AFAU
#define CPPTEST_NOTHROW_ASSERTION_FAILED 0x8AFBU
#define CPPTEST_MEMORY_LEAKS_ASSERTION_FAILED 0x8AFCU


#define CPPTEST_ASSERT_CALLED 0x8BF1U

#define CPPTEST_MISSING_CPP_EXCEPTION 0x8F20U

#define CPPTEST_EXCEPTION 0x9000U


#define CPPTEST_CPP_EXCEPTION 0x9100U
#define CPPTEST_STD_EXCEPTION 0x9120U


#define CPPTEST_ACCESS_VIOLATION 0x9201U
#define CPPTEST_ARRAY_BOUNDS_EXCEEDED 0x9202U
#define CPPTEST_BREAKPOINT 0x9203U
#define CPPTEST_DATATYPE_MISALIGNMENT 0x9204U
#define CPPTEST_FLT_DENORMAL_OPERAND 0x9205U
#define CPPTEST_FLT_DIVIDE_BY_ZERO 0x9206U
#define CPPTEST_FLT_INEXACT_RESULT 0x9207U
#define CPPTEST_FLT_INVALID_OPERATION 0x9208U
#define CPPTEST_FLT_OVERFLOW 0x9209U
#define CPPTEST_FLT_STACK_CHECK 0x920AU
#define CPPTEST_FLT_UNDERFLOW 0x920BU
#define CPPTEST_ILLEGAL_INSTRUCTION 0x920CU
#define CPPTEST_IN_PAGE_ERROR 0x920DU
#define CPPTEST_INT_DIVIDE_BY_ZERO 0x920EU
#define CPPTEST_INT_OVERFLOW 0x920FU
#define CPPTEST_INVALID_DISPOSITION 0x9210U
#define CPPTEST_NONCONTINUABLE_EXCEPTION 0x9211U
#define CPPTEST_PRIV_INSTRUCTION 0x9212U
#define CPPTEST_SINGLE_STEP 0x9213U
#define CPPTEST_STACK_OVERFLOW 0x9214U
#define CPPTEST_UNKNOWN_EXCEPTION 0x92FFU


#define CPPTEST_SIGHUP 0x9901U
#define CPPTEST_SIGINT 0x9902U
#define CPPTEST_SIGQUIT 0x9903U
#define CPPTEST_SIGILL 0x9904U
#define CPPTEST_SIGABRT 0x9905U
#define CPPTEST_SIGBUS 0x9906U
#define CPPTEST_SIGFPE 0x9907U
#define CPPTEST_SIGUSR1 0x9908U
#define CPPTEST_SIGSEGV 0x9909U
#define CPPTEST_SIGUSR2 0x990AU
#define CPPTEST_SIGPIPE 0x990BU
#define CPPTEST_SIGALRM 0x990CU
#define CPPTEST_SIGTERM 0x990DU
#define CPPTEST_SIGSTKFLT 0x990EU
#define CPPTEST_SIGTSTP 0x990FU
#define CPPTEST_SIGTTIN 0x9910U
#define CPPTEST_SIGTTOU 0x9911U
#define CPPTEST_SIGXCPU 0x9912U
#define CPPTEST_SIGXFSZ 0x9913U
#define CPPTEST_SIGVTALRM 0x9914U
#define CPPTEST_SIGPROF 0x9915U
#define CPPTEST_SIGPOLL 0x9916U
#define CPPTEST_SIGTRAP 0x9917U
#define CPPTEST_SIGLOST 0x9918U
#define CPPTEST_SIGEMT 0x9919U
#define CPPTEST_SIGSYS 0x991AU
#define CPPTEST_UNKNOWN_SIGNAL 0x99FFU




#define CPPTEST_EXIT_CALLED 0x9A01U

#define CPPTEST_ABORT_CALLED 0x9A02U

#define CPPTEST_RAISE_CALLED 0x9A03U

#define CPPTEST__EXIT_CALLED 0x9A04U

#define CPPTEST_USER_BREAK 0x9A10U


#define CPPTEST_INVALID_PARAM_CALLED 0x9F11U


#define CPPTEST_TIMEOUT 0x9F20U


#define CPPTEST_EXECUTION_FAILED 0x9F30U


#define CPPTEST_TOO_LARGE_STACK_TRACE 0x9FF1U


#define CPPTEST_DS_UNKNOWN_VALUE 0xA881U
#define CPPTEST_DS_ERROR_IN_VALUE 0xA882U
#define CPPTEST_DS_NOT_INITIALIZED 0xA883U
#define CPPTEST_DS_METHOD_NOT_INITIALIZED 0xA884U
#define CPPTEST_DS_CSV_ERROR_OPENING_FILE 0xA891U
#define CPPTEST_DS_CSV_ERROR_READING_FILE 0xA892U
#define CPPTEST_DS_CSV_NO_DATA_SOURCE 0xA893U
#define CPPTEST_DS_CSV_UNMATCHED_QUOTE 0xA894U
#define CPPTEST_DS_CSV_FORBIDDEN_CHAR 0xA895U
#define CPPTEST_DS_CSV_INVALID_QUOTES 0xA896U


#define CPPTEST_EPC_CANNOT_CREATE_PIPE 0xA901U
#define CPPTEST_EPC_CANNOT_CREATE_PROCESS 0xA902U
#define CPPTEST_EPC_CANNOT_GET_PROCESS_EXIT_CODE 0xA903U
#define CPPTEST_EPC_WAITING_FOR_PROCESS_TO_FINISH_FAILED 0xA904U
#define CPPTEST_EPC_CANNOT_DUPLICATE_DESCRIPTOR 0xA905U
#line 279
#define cpptestFormat CppTest_Format
#line 584
#define CPPTEST_STREAMDUP 0
#line 601
#define CppTest_RedirectStdInput(value) CppTest_StreamRedirectInput(0, value, &CppTest_clearStdInput, CPPTEST_STREAMDUP)
#line 613
#define CppTest_RedirectNStdInput(value,size) CppTest_StreamRedirectNInput(0, value, size, &CppTest_clearStdInput, CPPTEST_STREAMDUP)
#line 623
#define CppTest_RedirectStdOutput() CppTest_StreamRedirectOutput(1, &CppTest_flushStdOutput)
#line 633
#define CppTest_RedirectStdError() CppTest_StreamRedirectOutput(2, &CppTest_flushStdError)
#line 8 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.1\\engine\\runtime\\include\\cpptest_data_source.h"
#define __Parasoft_CppTest_Data_Source_h__ 
#line 47
#define CPPTEST_DS_METHOD(DS,METHOD) ((DS || cpptestDsNotInitialized()), (DS->METHOD || cpptestDsMethodNotInitialized(#METHOD)), DS->METHOD)
#line 60
#define CPPTEST_DS_HAS_MORE_DATA() CPPTEST_DS_METHOD(cpptestGetCurrentDataSource(), hasMoreData)(cpptestGetCurrentDataSource())
#define CPPTEST_DS_LOAD_NEXT_DATA() CPPTEST_DS_METHOD(cpptestGetCurrentDataSource(), loadNextData)(cpptestGetCurrentDataSource())
#define CPPTEST_DS_FINALIZE() CPPTEST_DS_METHOD(cpptestGetCurrentDataSource(), finalize)(cpptestGetCurrentDataSource())



#define CPPTEST_DS_GET_DATA_SIGNATURE() ((const char*)0)
#line 4 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\exception"
#define _EXCEPTION_ 
#line 4 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\xstddef"
#define _XSTDDEF_ 
#line 4 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
#define _YVALS 
#line 12
#define _CPPLIB_VER 505


#define _HAS_TR1 1
#line 27
#define __PURE_APPDOMAIN_GLOBAL 
#line 57
#define __CLRCALL_PURE_OR_CDECL __cdecl




#define _WIN32_C_LIB 1


#define _MULTI_THREAD 1
#define _IOSTREAM_OP_LOCKS 1
#define _GLOBAL_LOCALE 0


#define _COMPILER_TLS 1

#define _TLS_QUAL __declspec(thread)
#line 79
#define _HAS_EXCEPTIONS 1



#define _HAS_NAMESPACE 1



#define _HAS_IMMUTABLE_SETS 0



#define _HAS_STRICT_CONFORMANCE 0



#define _HAS_TRADITIONAL_STL 0



#define _GLOBAL_USING 1




#define _HAS_ITERATOR_DEBUGGING 1
#line 119
#define __STR2WSTR(str) L##str
#define _STR2WSTR(str) __STR2WSTR(str)

#define __FILEW__ _STR2WSTR(__FILE__)
#define __FUNCTIONW__ _STR2WSTR(__FUNCTION__)




#define _SECURE_SCL 1
#line 140
#define _SECURE_SCL_DEPRECATE 1




#define _SECURE_SCL_THROWS 0
#line 152
#define _SCL_CHECKED_ALGORITHM_WARN _CRT_DEPRECATE_TEXT( "Function call with parameters that may be unsafe - this call relies on the caller to check that the passed values are correct. " "To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. See documentation on how to use Visual C++ 'Checked Iterators'")
#line 161
#define _SCL_INSECURE_DEPRECATE _CRT_DEPRECATE_TEXT( "Function call with parameters that may be unsafe - this call relies on the caller to check that the passed values are correct. " "To disable this warning, use -D_SCL_SECURE_NO_WARNINGS. See documentation on how to use Visual C++ 'Checked Iterators'")
#line 177
#define _SCL_SECURE_INVALID_PARAMETER(expr) ::_invalid_parameter(__STR2WSTR(#expr), __FUNCTIONW__, __FILEW__, __LINE__, 0)
#line 195
#define _SCL_SECURE_INVALID_ARGUMENT_NO_ASSERT _SCL_SECURE_INVALID_PARAMETER("invalid argument")
#define _SCL_SECURE_OUT_OF_RANGE_NO_ASSERT _SCL_SECURE_INVALID_PARAMETER("out of range")



#define _SCL_SECURE_ALWAYS_VALIDATE(cond) { if (!(cond)) { _ASSERTE((#cond, 0)); _SCL_SECURE_INVALID_ARGUMENT_NO_ASSERT; } __analysis_assume(cond); }
#line 210
#define _SCL_SECURE_ALWAYS_VALIDATE_RANGE(cond) { if (!(cond)) { _ASSERTE((#cond, 0)); _SCL_SECURE_OUT_OF_RANGE_NO_ASSERT; } __analysis_assume(cond); }
#line 221
#define _SCL_SECURE_CRT_VALIDATE(cond,retvalue) { if (!(cond)) { _ASSERTE((#cond, 0)); _SCL_SECURE_INVALID_PARAMETER(cond); return (retvalue); } }
#line 233
#define _SCL_SECURE_VALIDATE(cond) { if (!(cond)) { _ASSERTE((#cond, 0)); _SCL_SECURE_INVALID_ARGUMENT_NO_ASSERT; } __analysis_assume(cond); }
#line 243
#define _SCL_SECURE_VALIDATE_RANGE(cond) { if (!(cond)) { _ASSERTE((#cond, 0)); _SCL_SECURE_OUT_OF_RANGE_NO_ASSERT; } __analysis_assume(cond); }
#line 253
#define _SCL_SECURE_INVALID_ARGUMENT { _ASSERTE(("Standard C++ Libraries Invalid Argument", 0)); _SCL_SECURE_INVALID_ARGUMENT_NO_ASSERT; }




#define _SCL_SECURE_OUT_OF_RANGE { _ASSERTE(("Standard C++ Libraries Out of Range", 0)); _SCL_SECURE_OUT_OF_RANGE_NO_ASSERT; }





#define _SCL_SECURE_MOVE(func,dst,size,src,count) func((dst), (size), (src), (count))
#define _SCL_SECURE_COPY(func,dst,size,src,count) func((dst), (size), (src), (count))
#line 296
#define _SECURE_VALIDATION _Secure_validation



#define _SECURE_VALIDATION_DEFAULT true

#define _SCL_SECURE_TRAITS_VALIDATE(cond) { __pragma(warning(push)); __pragma(warning(disable: 4127)); if (_SECURE_VALIDATION) { _SCL_SECURE_VALIDATE(cond) } __pragma(warning(pop)); }
#line 313
#define _SCL_SECURE_TRAITS_VALIDATE_RANGE(cond) { __pragma(warning(push)); __pragma(warning(disable: 4127)); if (_SECURE_VALIDATION) { _SCL_SECURE_VALIDATE_RANGE(cond) } __pragma(warning(pop)); }
#line 324
#define _SCL_SECURE_TRAITS_INVALID_ARGUMENT { __pragma(warning(push)); __pragma(warning(disable: 4127)); if (_SECURE_VALIDATION) { _SCL_SECURE_INVALID_ARGUMENT } __pragma(warning(pop)); }
#line 335
#define _SCL_SECURE_TRAITS_OUT_OF_RANGE { __pragma(warning(push)); __pragma(warning(disable: 4127)); if (_SECURE_VALIDATION) { _SCL_SECURE_OUT_OF_RANGE } __pragma(warning(pop)); }
#line 359
#define _CRT_SECURE_MEMCPY(dest,destsize,source,count) ::memcpy_s((dest), (destsize), (source), (count))
#define _CRT_SECURE_MEMMOVE(dest,destsize,source,count) ::memmove_s((dest), (destsize), (source), (count))
#define _CRT_SECURE_WMEMCPY(dest,destsize,source,count) ::wmemcpy_s((dest), (destsize), (source), (count))
#define _CRT_SECURE_WMEMMOVE(dest,destsize,source,count) ::wmemmove_s((dest), (destsize), (source), (count))
#line 17 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\use_ansi.h"
#define _USE_ANSI_CPP 
#line 38
#define _CRT_MANIFEST_DEBUG 
#line 373 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\yvals.h"
#define _VC6SP2 0
#line 398
#define _CRTIMP2_NCEEPURE _CRTIMP2
#line 425
#define _MRTIMP2_NPURE 
#line 435
#define _MRTIMP2_NCEE _MRTIMP2
#line 444
#define _MRTIMP2_NCEEPURE _MRTIMP2
#line 453
#define _MRTIMP2_NPURE_NCEEPURE _MRTIMP2_NPURE




#define _DLL_CPPLIB 
#line 465
#define _CRTIMP2_PURE _CRTIMP2




#define _CRTDATA2 _CRTIMP2



#define _DEPRECATED _CRT_DEPRECATE_TEXT("This is an obsolete part of the Standard C++ Library Implementation. Do not use it.")
#line 481
#define _STD_BEGIN namespace std {
#define _STD_END }
#define _STD ::std::




#define _STDEXT_BEGIN namespace stdext {
#define _STDEXT_END }
#define _STDEXT ::stdext::
#line 500
#define _C_STD_BEGIN 
#define _C_STD_END 
#define _CSTD ::


#define _C_LIB_DECL extern "C" {
#define _END_C_LIB_DECL }
#define _EXTERN_C extern "C" {
#define _END_EXTERN_C }
#line 525
#define _Restrict restrict
#line 534
#define _LONGLONG __int64
#define _ULONGLONG unsigned __int64
#define _LLONG_MAX 0x7fffffffffffffff
#define _ULLONG_MAX 0xffffffffffffffff


#define _C2 1

#define _MAX_EXP_DIG 8
#define _MAX_INT_DIG 32
#define _MAX_SIG_DIG 36





#define _Filet _iobuf


#define _FPOSOFF(fp) ((long)(fp))


#define _IOBASE _base
#define _IOPTR _ptr
#define _IOCNT _cnt



#define _LOCK_LOCALE 0
#define _LOCK_MALLOC 1
#define _LOCK_STREAM 2
#define _LOCK_DEBUG 3
#define _MAX_LOCK 4
#line 704
#define _BEGIN_LOCK(_Kind) { _STD _Lockit _Lock(_Kind);



#define _END_LOCK() }


#define _BEGIN_LOCINFO(_VarName) { _Locinfo _VarName;



#define _END_LOCINFO() }


#define _RELIABILITY_CONTRACT 
#line 823
#define _ATEXIT_T void
#define _Mbstinit(x) mbstate_t x = {0}



#define _EXTERN_TEMPLATE template
#define _THROW_BAD_ALLOC _THROW1(...)
#line 4 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\cstddef"
#define _CSTDDEF_ 
#line 20 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\stddef.h"
#define _INC_STDDEF 
#line 54
#define offsetof(s,m) (size_t)&reinterpret_cast<const volatile char&>((((s *)0)->m))
#line 69
#define _threadid (__threadid())
#line 20 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\xstddef"
#define _THROWS(x) 


#define _TRY_BEGIN try {
#define _CATCH(x) } catch (x) {
#define _CATCH_ALL } catch (...) {
#define _CATCH_END }

#define _RAISE(x) throw x
#define _RERAISE throw





#define _THROW0() throw ()
#define _THROW1(x) throw (...)

#define _THROW(x,y) throw x(y)
#define _THROW_NCEE(x,y) _THROW(x, y)
#line 61
#define _EMPTY_ARGUMENT 


#define _BITMASK(Enum,Ty) typedef int Ty

#define _BITMASK_OPS(Ty) 


#define _DESTRUCTOR(ty,ptr) (ptr)->~ty()
#define _MESG(str) str
#define _PROTECTED protected

#define _TDEF(x) = x
#define _TDEF2(x,y) = x, y

#define _STCONS(ty,name,val) static const ty name = (ty)(val)





#define _STCONSDEF(cls,ty,name) 



#define _X_STD_BEGIN _STD_BEGIN
#define _X_STD_END _STD_END
#define _XSTD std::
#line 97
#define _CONVERTIBLE_TO_TRUE (&_STD _Bool_struct::_Member)
#line 25 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\exception"
#define _USE_EXCEPTION using _STDEXT exception;


#define _USE_BAD_EXCEPTION using _STDEXT bad_alloc; using _STDEXT bad_exception;



#define _USE_EX using ::set_terminate; using ::terminate_handler; using ::terminate; using ::set_unexpected; using ::unexpected_handler; using ::unexpected;
#line 20 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\eh.h"
#define _INC_EH 
#line 20 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\malloc.h"
#define _INC_MALLOC 
#line 41
#define _HEAP_MAXREQ 0xFFFFFFE0





#define _STATIC_ASSERT(expr) typedef char __static_assert_t[ (expr) ]




#define _HEAPEMPTY (-1)
#define _HEAPOK (-2)
#define _HEAPBADBEGIN (-3)
#define _HEAPBADNODE (-4)
#define _HEAPEND (-5)
#define _HEAPBADPTR (-6)
#define _FREEENTRY 0
#define _USEDENTRY 1
#line 67
#define _HEAPINFO_DEFINED 
#line 79
#define _mm_free(a) _aligned_free(a)
#define _mm_malloc(a,b) _aligned_malloc(a, b)
#line 151
#define _MAX_WAIT_MALLOC_CRT 60000
#line 186
#define _ALLOCA_S_THRESHOLD 1024
#define _ALLOCA_S_STACK_MARKER 0xCCCC
#define _ALLOCA_S_HEAP_MARKER 0xDDDD


#define _ALLOCA_S_MARKER_SIZE 8
#line 218
#define _malloca(size) __pragma(warning(suppress: 6255)) _MarkAllocaS(malloc((size) + _ALLOCA_S_MARKER_SIZE), _ALLOCA_S_HEAP_MARKER)
#line 232
#define _FREEA_INLINE 
#line 262
#define alloca _alloca
#line 86 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\exception"
#define _CRT_SECURE_STRCPY(dest,destsize,source) ::strcpy_s((dest), (destsize), (source))
#line 20 "C:\\Program Files\\Parasoft\\C++test for Visual Studio\\9.1\\engine\\runtime\\include\\cpptest.h"
#define CPPTEST_GET_ADDRESS_OF(object_name) (void*)&(__CPTR_AddressOfType&)(object_name)




#define CPTSP(STR) cpptestStringPool(0, STR)
#line 35
#define CPPTEST_REPORT(txt) cpptestReport(txt, CPTSP(__FILE__), __LINE__, 0);


#define CPPTEST_REPORT_BOOL(txt,value) cpptestReportBool(txt, value ? CPPTEST_INT_TRUE : 0, CPTSP(__FILE__), __LINE__);


#define CPPTEST_REPORT_INTEGER(txt,value) cpptestReportInteger(txt, value, CPTSP(__FILE__), __LINE__);


#define CPPTEST_REPORT_UINTEGER(txt,value) cpptestReportUInteger(txt, value, CPTSP(__FILE__), __LINE__);


#define CPPTEST_REPORT_FLOAT(txt,value) cpptestReportFloat(txt, value, CPTSP(__FILE__), __LINE__);


#define CPPTEST_REPORT_CSTR(txt,value) cpptestReportCStr(txt, (char*)value, CPTSP(__FILE__), __LINE__);


#define CPPTEST_REPORT_CSTR_N(txt,value,max_size) cpptestReportCStrN(txt, (char*)value, max_size, CPTSP(__FILE__), __LINE__);


#define CPPTEST_REPORT_MEM_BUFFER(txt,value,size) cpptestReportMemBuffer(txt, (void*)value, size, CPTSP(__FILE__), __LINE__);


#define CPPTEST_REPORT_PTR(txt,value) cpptestReportPtr(txt, (value == 0) ? CPPTEST_INT_TRUE : 0, CPTSP(__FILE__), __LINE__);


#define CPPTEST_REPORT_STACKTRACE(txt) cpptestReport(txt, CPTSP(__FILE__), __LINE__, CPPTEST_INT_TRUE);



#define CPPTEST_MESSAGE(message) CPPTEST_REPORT(message)
#line 75
#define CPPTEST_FAIL(message) cpptestAssertion(0, message, 0, CPTSP(__FILE__), __LINE__);



#define CPPTEST_ASSERT(condition) CPPTEST_ASSERT_HELPER(condition, 0)



#define CPPTEST_ASSERT_MESSAGE(message,condition) CPPTEST_ASSERT_HELPER(condition, message)



#define CPPTEST_ASSERT_EQUAL(expected,actual) CPPTEST_ASSERT_EQUAL_HELPER(expected, actual, 0)



#define CPPTEST_ASSERT_EQUAL_MESSAGE(message,expected,actual) CPPTEST_ASSERT_EQUAL_HELPER(expected, actual, message)



#define CPPTEST_ASSERT_BOOL_EQUAL(expected,actual) CPPTEST_ASSERT_BOOL_EQUAL_HELPER(expected, actual, 0)



#define CPPTEST_ASSERT_INTEGER_EQUAL(expected,actual) CPPTEST_ASSERT_NUMBER_EQUAL_HELPER((expected) == (actual), expected, actual, 0, 0, cpptestIntegerEqualAssertion, 0)



#define CPPTEST_ASSERT_INTEGER_EQUAL_DELTA(expected,actual,delta) CPPTEST_ASSERT_NUMBER_EQUAL_HELPER(CPPTEST_EQUAL_DELTA(expected, actual, delta), expected, actual, 1, delta, cpptestIntegerEqualAssertion, 0)



#define CPPTEST_ASSERT_INTEGER_ARRAY_EQUAL(expected,actual,size) CPPTEST_ASSERT_NUMBER_ARRAY_EQUAL_HELPER(expected, actual, size, 0, 0, cpptestIntegerEqualAssertion)



#define CPPTEST_ASSERT_INTEGER_ARRAY_EQUAL_DELTA(expected,actual,size,delta) CPPTEST_ASSERT_NUMBER_ARRAY_EQUAL_HELPER(expected, actual, size, 1, delta, cpptestIntegerEqualAssertion)



#define CPPTEST_ASSERT_UINTEGER_EQUAL(expected,actual) CPPTEST_ASSERT_NUMBER_EQUAL_HELPER((expected) == (actual), expected, actual, 0, 0, cpptestUIntegerEqualAssertion, 0)



#define CPPTEST_ASSERT_UINTEGER_EQUAL_DELTA(expected,actual,delta) CPPTEST_ASSERT_NUMBER_EQUAL_HELPER(CPPTEST_EQUAL_DELTA(expected, actual, delta), expected, actual, 1, delta, cpptestUIntegerEqualAssertion, 0)



#define CPPTEST_ASSERT_UINTEGER_ARRAY_EQUAL(expected,actual,size) CPPTEST_ASSERT_NUMBER_ARRAY_EQUAL_HELPER(expected, actual, size, 0, 0, cpptestUIntegerEqualAssertion)



#define CPPTEST_ASSERT_UINTEGER_ARRAY_EQUAL_DELTA(expected,actual,size,delta) CPPTEST_ASSERT_NUMBER_ARRAY_EQUAL_HELPER(expected, actual, size, 1, delta, cpptestUIntegerEqualAssertion)



#define CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(expected,actual,delta) CPPTEST_ASSERT_NUMBER_EQUAL_HELPER(CPPTEST_EQUAL_DELTA(expected, actual, delta), expected, actual, 1, delta, cpptestFloatEqualAssertion, 0)



#define CPPTEST_ASSERT_FLOAT_ARRAY_EQUAL_DELTA(expected,actual,size,delta) CPPTEST_ASSERT_NUMBER_ARRAY_EQUAL_HELPER(expected, actual, size, 1, delta, cpptestFloatEqualAssertion)



#define CPPTEST_ASSERT_FLOAT_EQUAL(expected,actual,delta) CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(expected, actual, delta)



#define CPPTEST_ASSERT_DOUBLES_EQUAL(expected,actual,delta) CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(expected, actual, delta)



#define CPPTEST_ASSERT_DOUBLES_EQUAL_MESSAGE(message,expected,actual,delta) CPPTEST_ASSERT_NUMBER_EQUAL_HELPER(CPPTEST_EQUAL_DELTA(expected, actual, delta), expected, actual, 1, delta, cpptestFloatEqualAssertion, message)



#define CPPTEST_ASSERT_DOUBLES_FMT_EQUAL(expected,actual) CPPTEST_ASSERT_FMT_EQUAL_HELPER(CPPTEST_FLOATS_FMT_EQUAL(expected, actual), expected, actual, cpptestFloatFmtEqualAssertion, 0)



#define CPPTEST_ASSERT_CSTR_EQUAL(expected,actual) CPPTEST_ASSERT_TYPE_EQUAL_HELPER(CPPTEST_CSTRS_EQUAL(expected, actual), expected, actual, cpptestCstrEqualAssertion, 0)



#define CPPTEST_ASSERT_CSTR_ARRAY_EQUAL(expected,actual,size) CPPTEST_ASSERT_ARRAY_EQUAL_CSTR_HELPER(expected, actual, size, cpptestCstrEqualAssertion)



#define CPPTEST_ASSERT_CSTR_EQUAL_MESSAGE(message,expected,actual) CPPTEST_ASSERT_TYPE_EQUAL_HELPER(CPPTEST_CSTRS_EQUAL(expected, actual), expected, actual, cpptestCstrEqualAssertion, message)



#define CPPTEST_ASSERT_CSTR_N_EQUAL(expected,actual,max_size) CPPTEST_ASSERT_MEM_EQUAL_HELPER(CPPTEST_CSTRS_N_EQUAL(expected, actual, max_size), expected, actual, max_size, cpptestCstrNEqualAssertion, 0)



#define CPPTEST_ASSERT_MEM_BUFFER_EQUAL(expected,actual,size) CPPTEST_ASSERT_MEM_EQUAL_HELPER(CPPTEST_MEM_BUFFERS_EQUAL(expected, actual, size), expected, actual, size, cpptestMemBufferEqualAssertion, 0)



#define CPPTEST_ASSERT_PTR_EQUAL(expected,actual) CPPTEST_ASSERT_TYPE_EQUAL_HELPER((expected) == (actual), expected, actual, cpptestPtrEqualAssertion, 0)



#define CPPTEST_ASSERT_PTR_ARRAY_EQUAL(expected,actual,size) CPPTEST_ASSERT_TYPE_ARRAY_EQUAL_HELPER(expected, actual, size, cpptestPtrEqualAssertion)




#define CPPTEST_ASSERT_WCSTR_EQUAL(expected,actual) CPPTEST_ASSERT_TYPE_EQUAL_HELPER(CPPTEST_WCSTRS_EQUAL(expected, actual), expected, actual, cpptestWCstrEqualAssertion, 0)



#define CPPTEST_ASSERT_WCSTR_EQUAL_MESSAGE(message,expected,actual) CPPTEST_ASSERT_TYPE_EQUAL_HELPER(CPPTEST_WCSTRS_EQUAL(expected, actual), expected, actual, cpptestWCstrEqualAssertion, message)




#define CPPTEST_ASSERT_THROW(expression,ExceptionType) CPPTEST_ASSERT_THROW_HELPER(0, expression, ExceptionType)



#define CPPTEST_ASSERT_THROW_MESSAGE(message,expression,ExceptionType) CPPTEST_ASSERT_THROW_HELPER(message, expression, ExceptionType)



#define CPPTEST_ASSERT_NO_THROW(expression) CPPTEST_ASSERT_NO_THROW_HELPER(0, expression)



#define CPPTEST_ASSERT_NO_THROW_MESSAGE(message,expression) CPPTEST_ASSERT_NO_THROW_HELPER(message, expression)
#line 226
#define CPPTEST_ASSERT_MEMORY_LEAKS() cpptestCheckMemoryLeaks(CPTSP(__FILE__), __LINE__, 1);



#define CPPTEST_NOT_VALIDATED() cpptestTestCaseNotValidated(CPTSP(__FILE__), __LINE__);




#define CPPTEST_EQUAL_DELTA(v1,v2,delta) (((v1) > (v2)) ? ((v1) - (v2) <= (delta)) : ((v2) - (v1) <= (delta)))

#define CPPTEST_FLOATS_FMT_EQUAL(f1,f2) (0 != cpptestFloatsFmtEqual(CPTSP("" #f1), f2))

#define CPPTEST_CSTRS_EQUAL(s1,s2) (0 != cpptestCharPtrsEqual(s1, s2))

#define CPPTEST_CSTRS_N_EQUAL(s1,s2,max_size) (0 != cpptestCharPtrsNEqual(s1, s2, max_size))

#define CPPTEST_MEM_BUFFERS_EQUAL(p1,p2,size) (0 != cpptestMemBuffersEqual(p1, p2, size))

#define CPPTEST_WCSTRS_EQUAL(s1,s2) (0 != cpptestWCharPtrsEqual(s1, s2))

#define CPPTEST_WCSTRS_N_EQUAL(s1,s2,max_size) (0 != cpptestWCharPtrsNEqual(s1, s2, max_size))

#define CPPTEST_ASSERT_HELPER(condition,message) cpptestAssertion((condition), message, CPTSP("" #condition), CPTSP(__FILE__), __LINE__);


#define CPPTEST_ASSERT_EQUAL_HELPER(expected,actual,message) cpptestEqualAssertion(((expected) == (actual)), message, CPTSP("" #expected), CPTSP("" #actual), CPTSP(__FILE__), __LINE__);


#define CPPTEST_ASSERT_BOOL_EQUAL_HELPER(expected,actual,message) do { int __expected = ((expected) ? CPPTEST_INT_TRUE : 0); int __actual = ((actual) ? CPPTEST_INT_TRUE : 0); cpptestBoolEqualAssertion((__expected == __actual), __expected, __actual, message, CPTSP("" #expected), CPTSP("" #actual), CPTSP(__FILE__), __LINE__); } while (0);





#define CPPTEST_ASSERT_TYPE_ARRAY_EQUAL_HELPER(expected,actual,size,action) do { unsigned int counter = 0; while (counter < size) { CPPTEST_ASSERT_TYPE_ARRAY_ELEM_EQUAL_HELPER((expected)[counter] == (actual)[counter], counter, expected, actual, action, 0) counter++; } } while (0);
#line 270
#define CPPTEST_ASSERT_NUMBER_ARRAY_EQUAL_HELPER(expected,actual,size,hasDelta,delta,action) do { unsigned int counter = 0; while (counter < size) { CPPTEST_ASSERT_NUMBER_ARRAY_ELEM_EQUAL_HELPER(hasDelta ? CPPTEST_EQUAL_DELTA((expected)[counter], (actual)[counter], delta) : ((expected)[counter] == (actual)[counter]), counter, expected, actual, hasDelta, delta, action, 0) counter++; } } while (0);
#line 279
#define CPPTEST_ASSERT_ARRAY_EQUAL_CSTR_HELPER(expected,actual,size,action) do { unsigned int counter = 0; while (counter < size) { CPPTEST_ASSERT_TYPE_ARRAY_ELEM_EQUAL_HELPER(CPPTEST_CSTRS_EQUAL((expected)[counter], (actual)[counter]), counter, expected, actual, action, 0) counter++; } } while (0);
#line 289
#define CPPTEST_ASSERT_TYPE_EQUAL_HELPER(condition,expected,actual,action,message) action((condition), (expected), (actual), 0, message, CPTSP("" #expected), CPTSP("" #actual), CPTSP(__FILE__), __LINE__);


#define CPPTEST_ASSERT_TYPE_ARRAY_ELEM_EQUAL_HELPER(condition,array_index,expected,actual,action,message) action((condition), (expected)[array_index], (actual)[array_index], &array_index, message, CPTSP("" #expected), CPTSP("" #actual), CPTSP(__FILE__), __LINE__);


#define CPPTEST_ASSERT_NUMBER_EQUAL_HELPER(condition,expected,actual,hasDelta,delta,action,message) action((condition), (expected), (actual), hasDelta, delta, 0, message, CPTSP("" #expected), CPTSP("" #actual), CPTSP(__FILE__), __LINE__);


#define CPPTEST_ASSERT_NUMBER_ARRAY_ELEM_EQUAL_HELPER(condition,array_index,expected,actual,hasDelta,delta,action,message) action((condition), (expected)[array_index], (actual)[array_index], hasDelta, delta, &array_index, message, CPTSP("" #expected), CPTSP("" #actual), CPTSP(__FILE__), __LINE__);


#define CPPTEST_ASSERT_FMT_EQUAL_HELPER(condition,expected,actual,action,message) action((condition), (actual), message, CPTSP("" #expected), CPTSP("" #actual), CPTSP(__FILE__), __LINE__);


#define CPPTEST_ASSERT_MEM_EQUAL_HELPER(condition,expected,actual,size,action,message) action((condition), (expected), (actual), size, message, CPTSP("" #expected), CPTSP("" #actual), CPTSP(__FILE__), __LINE__);


#define CPPTEST_ASSERT_THROW_HELPER(message,expression,ExceptionType) do { try { expression; cpptestThrowAssertion(0, message, CPTSP("" #ExceptionType), CPTSP(__FILE__), __LINE__); } catch (ExceptionType) { cpptestThrowAssertion(1, message, CPTSP("" #ExceptionType), CPTSP(__FILE__), __LINE__); } } while(0);
#line 317
#define CPPTEST_ASSERT_NO_THROW_HELPER(message,expression) do { try { expression; cpptestNoThrowAssertion(1, message, CPTSP(__FILE__), __LINE__); } catch (...) { cpptestNoThrowAssertion(0, message, CPTSP(__FILE__), __LINE__); } } while(0);
#line 334
#define CPPTEST_BREAK() cpptestUserBreak(CPTSP(__FILE__), __LINE__);



#define CPPTEST_PATH_RELATIVE_TO_ABSOLUTE(FILE) cpptestPathRelativeToAbsolute(FILE, __FILE__)
#line 348
#define CPPTEST_POST_CONDITION_BOOL(value_string,value) cpptestPostConditionBool(value_string, value ? CPPTEST_INT_TRUE : 0, CPTSP(__FILE__), __LINE__);



#define CPPTEST_POST_CONDITION_INTEGER(value_string,value) cpptestPostConditionInteger(value_string, value, CPTSP(__FILE__), __LINE__);



#define CPPTEST_POST_CONDITION_UINTEGER(value_string,value) cpptestPostConditionUInteger(value_string, value, CPTSP(__FILE__), __LINE__);



#define CPPTEST_POST_CONDITION_FLOAT(value_string,value) cpptestPostConditionFloat(value_string, value, CPTSP(__FILE__), __LINE__);



#define CPPTEST_POST_CONDITION_CSTR(value_string,value) cpptestPostConditionCStr(value_string, (char*)value, CPTSP(__FILE__), __LINE__);



#define CPPTEST_POST_CONDITION_CSTR_N(value_string,value,max_size) cpptestPostConditionCStrN(value_string, (char*)value, max_size, CPTSP(__FILE__), __LINE__);



#define CPPTEST_POST_CONDITION_MEM_BUFFER(value_string,value,size) cpptestPostConditionMemBuffer(value_string, (void*)value, size, CPTSP(__FILE__), __LINE__);



#define CPPTEST_POST_CONDITION_PTR(value_string,value) cpptestPostConditionPtr(value_string, (value == 0) ? CPPTEST_INT_TRUE : 0, CPTSP(__FILE__), __LINE__);
#line 395
#define CPPTEST_CONTEXT(X) 




#define CPPTEST_TEST_SUITE(X) public: typedef X ThisTestSuite; static void (ThisTestSuite::*call_slave_ptr)(); static void call_slave() { X s; cpptestIgnoreCurrStackElement(); s.setUp(); (s.*call_slave_ptr)(); s.tearDown(); } static void testSuiteBegin() { cpptestTestSuiteBegin(CPTSP("" #X), CPTSP(__FILE__), __LINE__); } CPPTEST_TEST_NO_EXCEPTION_FUNC static int call(const char* name) { cpptestIgnoreCurrStackElement();
#line 462
#define CPPTEST_TEST_SUITE_END() return 1; }





#define CPPTEST_TEST_SUITE_SETUP(X) if (cpptestStrCmp(name, "#setUp") == 0) { X(); return 0; }





#define CPPTEST_TEST_SUITE_TEARDOWN(X) if (cpptestStrCmp(name, "#tearDown") == 0) { X(); return 0; }
#line 547
#define CPPTEST_DS_GET_VALUE(SOURCE) SOURCE[CPPTEST_DS_GET_ITERATION() - 1]

#define CPPTEST_DS_REPEAT(NUMBER) CppTest_DsRepeat(NUMBER)


#define CPPTEST_DS_ARRAY(DATA,ROW,COLUMN) CppTest_DsArray((const char**)DATA, ROW, COLUMN)


#define CPPTEST_DS_CSV(FILE,SEPARATOR,HEADER,TRIM) CppTest_DsCsv(FILE, SEPARATOR, HEADER, TRIM)


#define CPPTEST_DS(DATA_SOURCE) CppTest_Ds(DATA_SOURCE)





#define CPPTEST_IS_CPP 1




#define CPPTEST_TEST_CASE_PARAMETERS() (cpptestGetCurrentDataSource() ? (CPPTEST_DS_GET_DATA_SIGNATURE()) : (const char*)0)


#define CPPTEST_TEST_SLAVE(TEST_CASE,EXPECTED_ERROR,EXPECTED_ERROR_MASK) if (cpptestStrCmp(name, #TEST_CASE) == 0) { cpptestTestCaseBegin(CPTSP("" #TEST_CASE), EXPECTED_ERROR, EXPECTED_ERROR_MASK, CPPTEST_IS_CPP, CPTSP(__FILE__), __LINE__); CPPTEST_TEST_NO_EXCEPTION(TEST_CASE) cpptestTestCaseEnd(); return 0; }
#line 581
#define CPPTEST_TEST_DS_SLAVE(TEST_CASE,DATA_SOURCE,EXPECTED_ERROR,EXPECTED_ERROR_MASK) if (cpptestStrCmp(name, #TEST_CASE) == 0) { cpptestDsTestCaseBegin(CPTSP("" #TEST_CASE), EXPECTED_ERROR, EXPECTED_ERROR_MASK, CPPTEST_IS_CPP, CPTSP(__FILE__), __LINE__); cpptestDsForCurrentTestCaseInitialized(DATA_SOURCE); while (CPPTEST_DS_HAS_MORE_DATA()) { if (CPPTEST_DS_LOAD_NEXT_DATA()) { cpptestDsTestCaseIterationBegin(CPPTEST_DS_GET_ITERATION(), CPPTEST_DS_GET_DATA_SIGNATURE()); CPPTEST_TEST_NO_EXCEPTION(TEST_CASE) cpptestDsTestCaseIterationEnd(); } } CPPTEST_DS_FINALIZE(); cpptestDsTestCaseEnd(); return 0; }
#line 599
#define CPPTEST_TEST(TEST_CASE) CPPTEST_TEST_SLAVE(TEST_CASE, CPPTEST_NO_ERROR, CPPTEST_FULL_MASK)


#define CPPTEST_TEST_FAIL(TEST_CASE) CPPTEST_TEST_SLAVE(TEST_CASE, CPPTEST_ANY_ERROR, CPPTEST_ERROR_MASK)


#define CPPTEST_TEST_ERROR(TEST_CASE,ERROR_CODE) CPPTEST_TEST_SLAVE(TEST_CASE, ERROR_CODE, CPPTEST_FULL_MASK)


#define CPPTEST_TEST_DS(TEST_CASE,DATA_SOURCE) CPPTEST_TEST_DS_SLAVE(TEST_CASE, DATA_SOURCE, CPPTEST_NO_ERROR, CPPTEST_FULL_MASK)


#define CPPTEST_TEST_FAIL_DS(TEST_CASE,DATA_SOURCE) CPPTEST_TEST_DS_SLAVE(TEST_CASE, DATA_SOURCE, CPPTEST_ANY_ERROR, CPPTEST_ERROR_MASK)


#define CPPTEST_TEST_ERROR_DS(TEST_CASE,DATA_SOURCE,ERROR_CODE) CPPTEST_TEST_DS_SLAVE(TEST_CASE, DATA_SOURCE, ERROR_CODE, CPPTEST_FULL_MASK)




#define CPPTEST_TEST_EXCEPTION(TEST_CASE,EXCEPTION) if (cpptestStrCmp(name, #TEST_CASE) == 0) { cpptestTestCaseBegin(CPTSP("" #TEST_CASE), CPPTEST_NO_ERROR, CPPTEST_FULL_MASK, CPPTEST_IS_CPP, CPTSP(__FILE__), __LINE__); CPPTEST_TEST_EXCEPTION_SLAVE(TEST_CASE, EXCEPTION) cpptestTestCaseEnd(); return 0; }
#line 635
#define CPPTEST_TEST_DISABLED(TEST_CASE) if (cpptestStrCmp(name, #TEST_CASE) == 0) { cpptestTestCaseDisabled(CPTSP("" #TEST_CASE), CPTSP(__FILE__), __LINE__); return 0; }
#line 642
#define CPPTEST_TEST_FAIL_DISABLED(TEST_CASE) CPPTEST_TEST_DISABLED(TEST_CASE)


#define CPPTEST_TEST_ERROR_DISABLED(TEST_CASE,ERROR_CODE) CPPTEST_TEST_DISABLED(TEST_CASE)


#define CPPTEST_TEST_EXCEPTION_DISABLED(TEST_CASE,EXCEPTION) CPPTEST_TEST_DISABLED(TEST_CASE)


#define CPPTEST_TEST_DS_DISABLED(TEST_CASE,DATA_SOURCE) CPPTEST_TEST_DISABLED(TEST_CASE)




#define CPPTEST_RUN_TEST_SUITE_BEGIN(X,FILE_CONTEXT,TEST_CASE_NUMBER) if (TEST_CASE_NUMBER && (__CPTR_Test_Manager_Count + TEST_CASE_NUMBER > __CPTR_Test_Manager_Start_Id)) { const char* testCaseName = 0; const char* testSuiteName = #X; cpptestCurrentFileContext = FILE_CONTEXT; X##_testSuiteBegin();
#line 664
#define CPPTEST_RUN_TEST_SUITE_END(X,TEST_CASE_NUMBER) cpptestTestSuiteEnd(); } else { __CPTR_Test_Manager_Count += TEST_CASE_NUMBER; }
#line 671
#define CPPTEST_RUN_TEST_CASE(S,X) testCaseName = #X; if (__CPTR_Test_Manager_Test(testSuiteName, testCaseName)) { S##_callTest(testCaseName); }





#define CPPTEST_RUN_TEST_SUITE_SETUP(S) testCaseName = "#setUp"; S##_callTest(testCaseName);



#define CPPTEST_RUN_TEST_SUITE_TEARDOWN(S) testCaseName = "#tearDown"; S##_callTest(testCaseName);
#line 700
#define CPPTEST_STD_EXCEPT_HANDLER } catch (std::exception& except) { cpptestIgnoreCurrStackElement(); cpptestUnhandledStdExceptionInTestCase(except.what());
#line 708
#define CPPTEST_TEST_NO_EXCEPTION(X) cpptest_test_no_exception(&ThisTestSuite::X);


#define CPPTEST_TEST_NO_EXCEPTION_FUNC static void cpptest_test_no_exception(void (ThisTestSuite::*testcase_ptr)()) { cpptestIgnoreCurrStackElement(); try { try { call_slave_ptr = testcase_ptr; cpptestTestCaseSlave(& call_slave); CPPTEST_STD_EXCEPT_HANDLER } catch (...) { cpptestIgnoreCurrStackElement(); cpptestUnhandledCppExceptionInTestCase(); } } catch (...) {} };
#line 727
#define CPPTEST_TEST_EXCEPTION_SLAVE(X,E) try { int cpptestExceptionCaught = 0; try { try { call_slave_ptr = &ThisTestSuite::X; cpptestTestCaseSlave(& call_slave); } catch (E) { cpptestExceptionCaught = 1; } CPPTEST_STD_EXCEPT_HANDLER } catch (...) { cpptestIgnoreCurrStackElement(); cpptestUnhandledCppExceptionInTestCase(); } if (0 == cpptestExceptionCaught) { cpptestNoExpectedCppExceptionInTestCase(CPTSP( "" #E)); } } catch (...) {}
#line 757
#define CPPTEST_DEFINE_TEST_CASE_SLAVE(X) static void cpptestCallTestCase_##X() { ThisTestSuite s; cpptestIgnoreCurrStackElement(); s.setUp(); s.X(); s.tearDown(); }
#line 767
#define CPPTEST_TEST_SUITE_REGISTRATION(X) void (X::*X::call_slave_ptr)(); EXTERN_C_LINKAGE void X##_testSuiteBegin(void) { X::testSuiteBegin(); } EXTERN_C_LINKAGE int X##_callTest(const char* name) { cpptestIgnoreCurrStackElement(); return X::call(name); }
#line 824
#define CPPTEST_TEST_SUITE_INCLUDED_TO(file) 
#line 853
#define CPPTEST_MACRO_TO_STR_PROXY(ARG) #ARG
#define CPPTEST_MACRO_TO_STR(ARG) CPPTEST_MACRO_TO_STR_PROXY(ARG)


#define CPPTEST_PROJECT_ROOT CPPTEST_MACRO_TO_STR(CPPTEST_PROJECT_ROOT_RAW)
#line 867
#define CppTest_Assert(condition,message) CPPTEST_ASSERT_MESSAGE(message, condition)



#define CppTest_Break() CPPTEST_BREAK()



#define CPPTEST_BREAK_EXECUTION(code,fileName,lineNo) CPPTEST_BREAK()



#define CPPTEST_BREAK_EXECUTION_MSG(code,message,fileName,lineNo) CPPTEST_BREAK()
#line 5 ".\\myClass.h"
#define __MYCLASS_H__ 
#line 11 ".\\targetver.h"
#define _WIN32_WINNT 0x0600
#line 20 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
#define _INC_STDIO 
#line 38
#define BUFSIZ 512
#line 45
#define _NFILE _NSTREAM_

#define _NSTREAM_ 512





#define _IOB_ENTRIES 20

#define EOF (-1)
#line 70
#define _FILE_DEFINED 
#line 80
#define _P_tmpdir "\\"
#define _wP_tmpdir L"\\"
#line 93
#define L_tmpnam (sizeof(_P_tmpdir) + 12)

#define L_tmpnam_s (sizeof(_P_tmpdir) + 16)
#line 106
#define SEEK_CUR 1
#define SEEK_END 2
#define SEEK_SET 0


#define FILENAME_MAX 260
#define FOPEN_MAX 20
#define _SYS_OPEN 20
#define TMP_MAX 32767

#define TMP_MAX_S _TMP_MAX_S
#define _TMP_MAX_S 2147483647
#line 139
#undef _FPOSOFF
#line 149
#define _FPOSOFF(fp) ((long)(fp))
#line 156
#define _FPOS_T_DEFINED 



#define stdin (&__iob_func()[0])
#define stdout (&__iob_func()[1])
#define stderr (&__iob_func()[2])
#define _STDSTREAM_DEFINED 


#define _IOREAD 0x0001
#define _IOWRT 0x0002

#define _IOFBF 0x0000
#define _IOLBF 0x0040
#define _IONBF 0x0004

#define _IOMYBUF 0x0008
#define _IOEOF 0x0010
#define _IOERR 0x0020
#define _IOSTRG 0x0040
#define _IORW 0x0080





#define _TWO_DIGIT_EXPONENT 0x1
#line 296
#define _CRT_DIRECTORY_DEFINED 
#line 421
#define WEOF (wint_t)(0xFFFF)
#line 528
#define _SWPRINTFS_DEPRECATED _CRT_DEPRECATE_TEXT("swprintf has been changed to conform with the ISO C standard, adding an extra character count parameter. To use traditional Microsoft swprintf, set _CRT_NON_CONFORMING_SWPRINTFS.")
#line 25 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\swprintf.inl"
#define _INC_SWPRINTF_INL_ 
#line 625 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\stdio.h"
#define getwc(_stm) fgetwc(_stm)
#define putwc(_c,_stm) fputwc(_c,_stm)
#define _putwc_nolock(_c,_stm) _fputwc_nolock(_c,_stm)
#define _getwc_nolock(_stm) _fgetwc_nolock(_stm)
#line 636
#define _WSTDIO_DEFINED 


#define _STDIO_DEFINED 
#line 659
#define _fgetc_nolock(_stream) (--(_stream)->_cnt >= 0 ? 0xff & *(_stream)->_ptr++ : _filbuf(_stream))
#define _fputc_nolock(_c,_stream) (--(_stream)->_cnt >= 0 ? 0xff & (*(_stream)->_ptr++ = (char)(_c)) : _flsbuf((_c),(_stream)))
#define _getc_nolock(_stream) _fgetc_nolock(_stream)
#define _putc_nolock(_c,_stream) _fputc_nolock(_c, _stream)
#define _getchar_nolock() _getc_nolock(stdin)
#define _putchar_nolock(_c) _putc_nolock((_c),stdout)
#define _getwchar_nolock() _getwc_nolock(stdin)
#define _putwchar_nolock(_c) _putwc_nolock((_c),stdout)
#line 705
#define P_tmpdir _P_tmpdir
#define SYS_OPEN _SYS_OPEN
#line 23 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\tchar.h"
#define _INC_TCHAR 
#line 106
#define _ftcscat _tcscat
#define _ftcschr _tcschr
#define _ftcscpy _tcscpy
#define _ftcscspn _tcscspn
#define _ftcslen _tcslen
#define _ftcsncat _tcsncat
#define _ftcsncpy _tcsncpy
#define _ftcspbrk _tcspbrk
#define _ftcsrchr _tcsrchr
#define _ftcsspn _tcsspn
#define _ftcsstr _tcsstr
#define _ftcstok _tcstok

#define _ftcsdup _tcsdup
#define _ftcsnset _tcsnset
#define _ftcsrev _tcsrev
#define _ftcsset _tcsset

#define _ftcscmp _tcscmp
#define _ftcsicmp _tcsicmp
#define _ftcsnccmp _tcsnccmp
#define _ftcsncmp _tcsncmp
#define _ftcsncicmp _tcsncicmp
#define _ftcsnicmp _tcsnicmp

#define _ftcscoll _tcscoll
#define _ftcsicoll _tcsicoll
#define _ftcsnccoll _tcsnccoll
#define _ftcsncoll _tcsncoll
#define _ftcsncicoll _tcsncicoll
#define _ftcsnicoll _tcsnicoll



#define _ftcsclen _tcsclen
#define _ftcsnccat _tcsnccat
#define _ftcsnccpy _tcsnccpy
#define _ftcsncset _tcsncset

#define _ftcsdec _tcsdec
#define _ftcsinc _tcsinc
#define _ftcsnbcnt _tcsnbcnt
#define _ftcsnccnt _tcsnccnt
#define _ftcsnextc _tcsnextc
#define _ftcsninc _tcsninc
#define _ftcsspnp _tcsspnp

#define _ftcslwr _tcslwr
#define _ftcsupr _tcsupr

#define _ftclen _tclen
#define _ftccpy _tccpy
#define _ftccmp _tccmp
#line 170
#define _WConst_return _CONST_RETURN
#line 24 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\wchar.h"
#define _INC_WCHAR 
#line 43
#define WCHAR_MIN 0
#define WCHAR_MAX 0xffff
#line 89
#define _FSIZE_T_DEFINED 
#line 140
#define _wfinddata_t _wfinddata64i32_t
#define _wfinddatai64_t _wfinddata64_t

#define _wfindfirst _wfindfirst64i32
#define _wfindnext _wfindnext64i32
#define _wfindfirsti64 _wfindfirst64
#define _wfindnexti64 _wfindnext64



#define _WFINDDATA_T_DEFINED 
#line 173
#define _WConst_return _CONST_RETURN


#define _CRT_CTYPEDATA_DEFINED 
#line 183
#define __PCTYPE_FUNC __pctype_func()
#line 197
#define _CRT_WCTYPEDATA_DEFINED 
#line 214
#define _UPPER 0x1
#define _LOWER 0x2
#define _DIGIT 0x4
#define _SPACE 0x8

#define _PUNCT 0x10
#define _CONTROL 0x20
#define _BLANK 0x40
#define _HEX 0x80

#define _LEADBYTE 0x8000
#define _ALPHA (0x0100|_UPPER|_LOWER)
#line 275
#define _WCTYPE_DEFINED 
#line 305
#define _WDIRECT_DEFINED 
#line 344
#define _WIO_DEFINED 
#line 353
#define _WLOCALE_DEFINED 
#line 385
#define _WPROCESS_DEFINED 
#line 449
#define _WCTYPE_INLINE_DEFINED 
#line 463
#define _INO_T_DEFINED 
#line 472
#define _DEV_T_DEFINED 
#line 481
#define _OFF_T_DEFINED 
#line 564
#define __stat64 _stat64
#line 575
#define _fstat _fstat64i32
#define _fstati64 _fstat64
#define _stat _stat64i32
#define _stati64 _stat64
#define _wstat _wstat64i32
#define _wstati64 _wstat64




#define _STAT_DEFINED 
#line 598
#define _WSTAT_DEFINED 
#line 651
#define _WCONIO_DEFINED 
#line 1076
#define _CPP_WIDE_INLINES_DEFINED 
#line 1104
#define wcswcs wcsstr
#line 1118
#define _WSTRING_DEFINED 
#line 1133
#define _TM_DEFINED 
#line 26 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\wtime.inl"
#define _INC_WTIME_INL 
#line 1167 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\wchar.h"
#define _WTIME_DEFINED 
#line 198 "C:\\Program Files\\Microsoft Visual Studio 9.0\\VC\\include\\tchar.h"
#define __TCHAR_DEFINED 
#line 205
#define _TCHAR_DEFINED 


#define _TEOF WEOF

#define __T(x) L##x




#define _tmain wmain
#define _tWinMain wWinMain
#define _tenviron _wenviron
#define __targv __wargv



#define _tprintf wprintf
#define _tprintf_l _wprintf_l
#define _tprintf_s wprintf_s
#define _tprintf_s_l _wprintf_s_l
#define _tprintf_p _wprintf_p
#define _tprintf_p_l _wprintf_p_l
#define _tcprintf _cwprintf
#define _tcprintf_l _cwprintf_l
#define _tcprintf_s _cwprintf_s
#define _tcprintf_s_l _cwprintf_s_l
#define _tcprintf_p _cwprintf_p
#define _tcprintf_p_l _cwprintf_p_l
#define _vtcprintf _vcwprintf
#define _vtcprintf_l _vcwprintf_l
#define _vtcprintf_s _vcwprintf_s
#define _vtcprintf_s_l _vcwprintf_s_l
#define _vtcprintf_p _vcwprintf_p
#define _vtcprintf_p_l _vcwprintf_p_l
#define _ftprintf fwprintf
#define _ftprintf_l _fwprintf_l
#define _ftprintf_s fwprintf_s
#define _ftprintf_s_l _fwprintf_s_l
#define _ftprintf_p _fwprintf_p
#define _ftprintf_p_l _fwprintf_p_l
#define _stprintf _swprintf
#define _stprintf_l __swprintf_l
#define _stprintf_s swprintf_s
#define _stprintf_s_l _swprintf_s_l
#define _stprintf_p _swprintf_p
#define _stprintf_p_l _swprintf_p_l
#define _sctprintf _scwprintf
#define _sctprintf_l _scwprintf_l
#define _sctprintf_p _scwprintf_p
#define _sctprintf_p_l _scwprintf_p_l
#define _sntprintf _snwprintf
#define _sntprintf_l _snwprintf_l
#define _sntprintf_s _snwprintf_s
#define _sntprintf_s_l _snwprintf_s_l
#define _vtprintf vwprintf
#define _vtprintf_l _vwprintf_l
#define _vtprintf_s vwprintf_s
#define _vtprintf_s_l _vwprintf_s_l
#define _vtprintf_p _vwprintf_p
#define _vtprintf_p_l _vwprintf_p_l
#define _vftprintf vfwprintf
#define _vftprintf_l _vfwprintf_l
#define _vftprintf_s vfwprintf_s
#define _vftprintf_s_l _vfwprintf_s_l
#define _vftprintf_p _vfwprintf_p
#define _vftprintf_p_l _vfwprintf_p_l
#define _vstprintf _vswprintf
#define _vstprintf_l _vswprintf_l
#define _vstprintf_s vswprintf_s
#define _vstprintf_s_l _vswprintf_s_l
#define _vstprintf_p _vswprintf_p
#define _vstprintf_p_l _vswprintf_p_l
#define _vsctprintf _vscwprintf
#define _vsctprintf_l _vscwprintf_l
#define _vsctprintf_p _vscwprintf_p
#define _vsctprintf_p_l _vscwprintf_p_l
#define _vsntprintf _vsnwprintf
#define _vsntprintf_l _vsnwprintf_l
#define _vsntprintf_s _vsnwprintf_s
#define _vsntprintf_s_l _vsnwprintf_s_l

#define _tscanf wscanf
#define _tscanf_l _wscanf_l
#define _tscanf_s wscanf_s
#define _tscanf_s_l _wscanf_s_l
#define _tcscanf _cwscanf
#define _tcscanf_l _cwscanf_l
#define _tcscanf_s _cwscanf_s
#define _tcscanf_s_l _cwscanf_s_l
#define _ftscanf fwscanf
#define _ftscanf_l _fwscanf_l
#define _ftscanf_s fwscanf_s
#define _ftscanf_s_l _fwscanf_s_l
#define _stscanf swscanf
#define _stscanf_l _swscanf_l
#define _stscanf_s swscanf_s
#define _stscanf_s_l _swscanf_s_l
#define _sntscanf _snwscanf
#define _sntscanf_l _snwscanf_l
#define _sntscanf_s _snwscanf_s
#define _sntscanf_s_l _snwscanf_s_l




#define _fgettc fgetwc
#define _fgettc_nolock _fgetwc_nolock
#define _fgettchar _fgetwchar
#define _fgetts fgetws
#define _fputtc fputwc
#define _fputtc_nolock _fputwc_nolock
#define _fputtchar _fputwchar
#define _fputts fputws
#define _cputts _cputws
#define _cgetts _cgetws
#define _cgetts_s _cgetws_s
#define _gettc getwc
#define _gettc_nolock _getwc_nolock
#define _gettch _getwch
#define _gettch_nolock _getwch_nolock
#define _gettche _getwche
#define _gettche_nolock _getwche_nolock
#define _gettchar getwchar
#define _gettchar_nolock _getwchar_nolock
#define _getts _getws
#define _getts_s _getws_s
#define _puttc putwc
#define _puttc_nolock _putwc_nolock
#define _puttchar putwchar
#define _puttchar_nolock _putwchar_nolock
#define _puttch _putwch
#define _puttch_nolock _putwch_nolock
#define _putts _putws
#define _ungettc ungetwc
#define _ungettc_nolock _ungetwc_nolock
#define _ungettch _ungetwch
#define _ungettch_nolock _ungetwch_nolock




#define _tcstod wcstod
#define _tcstol wcstol
#define _tcstoul wcstoul
#define _tcstoi64 _wcstoi64
#define _tcstoui64 _wcstoui64
#define _tstof _wtof
#define _tstol _wtol
#define _tstoi _wtoi
#define _tstoi64 _wtoi64
#define _tcstod_l _wcstod_l
#define _tcstol_l _wcstol_l
#define _tcstoul_l _wcstoul_l
#define _tcstoi64_l _wcstoi64_l
#define _tcstoui64_l _wcstoui64_l
#define _tstof_l _wtof_l
#define _tstol_l _wtol_l
#define _tstoi_l _wtoi_l
#define _tstoi64_l _wtoi64_l

#define _itot_s _itow_s
#define _ltot_s _ltow_s
#define _ultot_s _ultow_s
#define _itot _itow
#define _ltot _ltow
#define _ultot _ultow
#define _ttoi _wtoi
#define _ttol _wtol

#define _ttoi64 _wtoi64
#define _i64tot_s _i64tow_s
#define _ui64tot_s _ui64tow_s
#define _i64tot _i64tow
#define _ui64tot _ui64tow



#define _tcscat wcscat
#define _tcscat_s wcscat_s
#define _tcschr wcschr
#define _tcscpy wcscpy
#define _tcscpy_s wcscpy_s
#define _tcscspn wcscspn
#define _tcslen wcslen
#define _tcsnlen wcsnlen
#define _tcsncat wcsncat
#define _tcsncat_s wcsncat_s
#define _tcsncat_l _wcsncat_l
#define _tcsncat_s_l _wcsncat_s_l
#define _tcsncpy wcsncpy
#define _tcsncpy_s wcsncpy_s
#define _tcsncpy_l _wcsncpy_l
#define _tcsncpy_s_l _wcsncpy_s_l
#define _tcspbrk wcspbrk
#define _tcsrchr wcsrchr
#define _tcsspn wcsspn
#define _tcsstr wcsstr
#define _tcstok wcstok
#define _tcstok_s wcstok_s
#define _tcstok_l _wcstok_l
#define _tcstok_s_l _wcstok_s_l
#define _tcserror _wcserror
#define _tcserror_s _wcserror_s
#define __tcserror __wcserror
#define __tcserror_s __wcserror_s

#define _tcsdup _wcsdup
#define _tcsnset _wcsnset
#define _tcsnset_s _wcsnset_s
#define _tcsnset_l _wcsnset_l
#define _tcsnset_s_l _wcsnset_s_l
#define _tcsrev _wcsrev
#define _tcsset _wcsset
#define _tcsset_s _wcsset_s
#define _tcsset_l _wcsset_l
#define _tcsset_s_l _wcsset_s_l

#define _tcscmp wcscmp
#define _tcsicmp _wcsicmp
#define _tcsicmp_l _wcsicmp_l
#define _tcsnccmp wcsncmp
#define _tcsncmp wcsncmp
#define _tcsncicmp _wcsnicmp
#define _tcsncicmp_l _wcsnicmp_l
#define _tcsnicmp _wcsnicmp
#define _tcsnicmp_l _wcsnicmp_l

#define _tcscoll wcscoll
#define _tcscoll_l _wcscoll_l
#define _tcsicoll _wcsicoll
#define _tcsicoll_l _wcsicoll_l
#define _tcsnccoll _wcsncoll
#define _tcsnccoll_l _wcsncoll_l
#define _tcsncoll _wcsncoll
#define _tcsncoll_l _wcsncoll_l
#define _tcsncicoll _wcsnicoll
#define _tcsncicoll_l _wcsnicoll_l
#define _tcsnicoll _wcsnicoll
#define _tcsnicoll_l _wcsnicoll_l


#define _tcsdup_dbg _wcsdup_dbg




#define _texecl _wexecl
#define _texecle _wexecle
#define _texeclp _wexeclp
#define _texeclpe _wexeclpe
#define _texecv _wexecv
#define _texecve _wexecve
#define _texecvp _wexecvp
#define _texecvpe _wexecvpe

#define _tspawnl _wspawnl
#define _tspawnle _wspawnle
#define _tspawnlp _wspawnlp
#define _tspawnlpe _wspawnlpe
#define _tspawnv _wspawnv
#define _tspawnve _wspawnve
#define _tspawnvp _wspawnvp
#define _tspawnvp _wspawnvp
#define _tspawnvpe _wspawnvpe

#define _tsystem _wsystem




#define _tasctime _wasctime
#define _tctime _wctime
#define _tctime32 _wctime32
#define _tctime64 _wctime64
#define _tstrdate _wstrdate
#define _tstrtime _wstrtime
#define _tutime _wutime
#define _tutime32 _wutime32
#define _tutime64 _wutime64
#define _tcsftime wcsftime
#define _tcsftime_l _wcsftime_l

#define _tasctime_s _wasctime_s
#define _tctime_s _wctime_s
#define _tctime32_s _wctime32_s
#define _tctime64_s _wctime64_s
#define _tstrdate_s _wstrdate_s
#define _tstrtime_s _wstrtime_s



#define _tchdir _wchdir
#define _tgetcwd _wgetcwd
#define _tgetdcwd _wgetdcwd
#define _tgetdcwd_nolock _wgetdcwd_nolock
#define _tmkdir _wmkdir
#define _trmdir _wrmdir


#define _tgetcwd_dbg _wgetcwd_dbg
#define _tgetdcwd_dbg _wgetdcwd_dbg
#define _tgetdcwd_lk_dbg _wgetdcwd_lk_dbg




#define _tfullpath _wfullpath
#define _tgetenv _wgetenv
#define _tgetenv_s _wgetenv_s
#define _tdupenv_s _wdupenv_s
#define _tmakepath _wmakepath
#define _tmakepath_s _wmakepath_s
#define _tpgmptr _wpgmptr
#define _get_tpgmptr _get_wpgmptr
#define _tputenv _wputenv
#define _tputenv_s _wputenv_s
#define _tsearchenv _wsearchenv
#define _tsearchenv_s _wsearchenv_s
#define _tsplitpath _wsplitpath
#define _tsplitpath_s _wsplitpath_s


#define _tfullpath_dbg _wfullpath_dbg
#define _tdupenv_s_dbg _wdupenv_s_dbg




#define _tfdopen _wfdopen
#define _tfsopen _wfsopen
#define _tfopen _wfopen
#define _tfopen_s _wfopen_s
#define _tfreopen _wfreopen
#define _tfreopen_s _wfreopen_s
#define _tperror _wperror
#define _tpopen _wpopen
#define _ttempnam _wtempnam
#define _ttmpnam _wtmpnam
#define _ttmpnam_s _wtmpnam_s


#define _ttempnam_dbg _wtempnam_dbg





#define _taccess _waccess
#define _taccess_s _waccess_s
#define _tchmod _wchmod
#define _tcreat _wcreat
#define _tfindfirst _wfindfirst
#define _tfindfirst32 _wfindfirst32
#define _tfindfirst64 _wfindfirst64
#define _tfindfirsti64 _wfindfirsti64
#define _tfindfirst32i64 _wfindfirst32i64
#define _tfindfirst64i32 _wfindfirst64i32
#define _tfindnext _wfindnext
#define _tfindnext32 _wfindnext32
#define _tfindnext64 _wfindnext64
#define _tfindnexti64 _wfindnexti64
#define _tfindnext32i64 _wfindnext32i64
#define _tfindnext64i32 _wfindnext64i32
#define _tmktemp _wmktemp
#define _tmktemp_s _wmktemp_s
#define _topen _wopen
#define _tremove _wremove
#define _trename _wrename
#define _tsopen _wsopen
#define _tsopen_s _wsopen_s
#define _tunlink _wunlink

#define _tfinddata_t _wfinddata_t
#define _tfinddata32_t _wfinddata32_t
#define _tfinddata64_t _wfinddata64_t
#define _tfinddatai64_t _wfinddatai64_t
#define _tfinddata32i64_t _wfinddata32i64_t
#define _tfinddata64i32_t _wfinddata64i32_t




#define _tstat _wstat
#define _tstat32 _wstat32
#define _tstat32i64 _wstat32i64
#define _tstat64 _wstat64
#define _tstat64i32 _wstat64i32
#define _tstati64 _wstati64




#define _tsetlocale _wsetlocale




#define _tcsclen wcslen
#define _tcscnlen wcsnlen
#define _tcsclen_l(_String,_Locale) wcslen(_String)
#define _tcscnlen_l(_String,_Max_count,_Locale) wcsnlen((_String), (_Max_count))
#define _tcsnccat wcsncat
#define _tcsnccat_s wcsncat_s
#define _tcsnccat_l _wcsncat_l
#define _tcsnccat_s_l _wcsncat_s_l
#define _tcsnccpy wcsncpy
#define _tcsnccpy_s wcsncpy_s
#define _tcsnccpy_l _wcsncpy_l
#define _tcsnccpy_s_l _wcsncpy_s_l
#define _tcsncset _wcsnset
#define _tcsncset_s _wcsnset_s
#define _tcsncset_l _wcsnset_l
#define _tcsncset_s_l _wcsnset_s_l

#define _tcsdec _wcsdec
#define _tcsinc _wcsinc
#define _tcsnbcnt _wcsncnt
#define _tcsnccnt _wcsncnt
#define _tcsnextc _wcsnextc
#define _tcsninc _wcsninc
#define _tcsspnp _wcsspnp

#define _tcslwr _wcslwr
#define _tcslwr_l _wcslwr_l
#define _tcslwr_s _wcslwr_s
#define _tcslwr_s_l _wcslwr_s_l
#define _tcsupr _wcsupr
#define _tcsupr_l _wcsupr_l
#define _tcsupr_s _wcsupr_s
#define _tcsupr_s_l _wcsupr_s_l
#define _tcsxfrm wcsxfrm
#define _tcsxfrm_l _wcsxfrm_l
#line 663
#define _istalnum iswalnum
#define _istalnum_l _iswalnum_l
#define _istalpha iswalpha
#define _istalpha_l _iswalpha_l
#define _istascii iswascii
#define _istcntrl iswcntrl
#define _istcntrl_l _iswcntrl_l
#define _istdigit iswdigit
#define _istdigit_l _iswdigit_l
#define _istgraph iswgraph
#define _istgraph_l _iswgraph_l
#define _istlower iswlower
#define _istlower_l _iswlower_l
#define _istprint iswprint
#define _istprint_l _iswprint_l
#define _istpunct iswpunct
#define _istpunct_l _iswpunct_l
#define _istspace iswspace
#define _istspace_l _iswspace_l
#define _istupper iswupper
#define _istupper_l _iswupper_l
#define _istxdigit iswxdigit
#define _istxdigit_l _iswxdigit_l

#define _totupper towupper
#define _totupper_l _towupper_l
#define _totlower towlower
#define _totlower_l _towlower_l

#define _istlegal(_Char) (1)
#define _istlead(_Char) (0)
#define _istleadbyte(_Char) (0)
#define _istleadbyte_l(_Char,_Locale) (0)
#line 2390
#define _T(x) __T(x)
#define _TEXT(x) __T(x)
#line 5 ".\\classBase.h"
#define __CLASSBASE_H__ 
