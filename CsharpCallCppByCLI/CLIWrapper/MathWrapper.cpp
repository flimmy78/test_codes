
#include "stdafx.h"
#include "MathWrapper.h"
#pragma comment(lib, "../debug/CppDLL.lib")
#include "../CppDLL/cppdll.h"

using namespace CppMathLib;

 double MathWrapper::Add(double x, double y)
{
	return Math::Add(x, y);
}
 double MathWrapper::Multiply(double x, double y)
{
//	m_ad->SetValue(50.0);
	m_callBack(x * y);
	return m_math->Multiply(x,y);
}

 void MathWrapper::SetCaller(ShowMsgCallBack__^ p)
{
	m_callBack = p;
	m_math = new Math(&callUi);
//	m_ad->SetValue(5000.0);
	return ;
}

 int AdvancedMathWrapper::Factorial(int x)
{
	return AdvancedMath::Factorial(x);
}

void AdvancedMathWrapper::SetValue(double v)
{
	double x = v;
	return ;
} 