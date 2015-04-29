#pragma once

class Math;
class AdvancedMath;

#include "../CppDLL/cppdll.h"

namespace CppMathLib
{
	public delegate void (ShowMsgCallBack__)(double d);

	public ref class AdvancedMathWrapper
	{
	public:
		static int Factorial(int x);
		virtual void SetValue(double v);
	};

	public ref class MathWrapper
	{
	public:
		MathWrapper(){};
		MathWrapper (char* abc){};
		static double Add(double x, double y);
		
		double Multiply(double x, double y);

		//void testNothing(){};

		void SetCaller(ShowMsgCallBack__^ p);
		//static void __stdcall callUi(double d);
		
		//AdvancedMathWrapper^ m_ad;
		Math* m_math;
		ShowMsgCallBack__^ m_callBack;
	};

	void __stdcall callUi(double d){};

}