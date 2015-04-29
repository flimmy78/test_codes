// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the CPPDLL_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// CPPDLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.

#pragma once

#ifdef CPPDLL_EXPORTS
#define CPPDLL_API __declspec(dllexport)
#else
#define CPPDLL_API __declspec(dllimport)
#endif

// This class is exported from the CppDLL.dll
class CPPDLL_API CCppDLL {
public:
	CCppDLL(void);
	// TODO: add your methods here.
};

extern CPPDLL_API int nCppDLL;

CPPDLL_API int fnCppDLL(void);

//typedef void (* ShowMsgCallBack)(char*, int);
typedef void (__stdcall * ShowMsgCallBack)(double d);
//extern "C" _declspec(dllexport) bool RegCallBack(ShowMsgCallBack fHandlerFunc); 

class CPPDLL_API Math
{
public:
	Math(ShowMsgCallBack fHandlerFunc);
	static double Add(double x, double y);
	static double Multiply(double x, double y);
};

class CPPDLL_API AdvancedMath
{
public:
	static int Factorial(int x);
};

