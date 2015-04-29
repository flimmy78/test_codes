
#include <stdio.h>
#include <iostream>
#include "NumberConversionUtil.h"

using namespace TA_Base_Bus;

NumberConversionUtil g_util;
/*
void test1(WORD word)
{
	int v = g_util.convertFromINT16_Value(word);
	printf("convertFromINT16_Value: %X,   %d\n", v, v);

	v = g_util.convertFromUINT16_Value(word);
	printf("convertFromUINT16_Value: %X,   %d\n", v, v);

	v = g_util.convertFromINT16S_Value(word);
	printf("convertFromINT16S_Value: %X,   %d\n", v, v);
}

void test2(WORD word)
{
	int v = g_util.convertFromINT15_Value(word);
	printf("convertFromINT15_Value: %X,   %d\n", v, v);

	v = g_util.convertFromUINT16_Value(word);
	printf("convertFromUINT16_Value: %X,   %d\n", v, v);

	v = g_util.convertFromINT16S_Value(word);
	printf("convertFromINT16S_Value: %X,   %d\n", v, v);
}

WORD getTheMixedWord( unsigned long startBitAddress, WORD lowWord, WORD highWord )
{
	//      LowWord   | highWord;
	//0123456789ABCDEF0123456789ABCDEF
	//     0123456789ABCDEF	// if startBitAddress = 5;
	WORD resWord = 0;
	if (startBitAddress > 15)
	{
		printf("err.\n");
		return resWord;
	}
	lowWord =  lowWord  >> startBitAddress;
	highWord = highWord << (16 - startBitAddress);
	resWord = lowWord | highWord;
	return resWord;
}
*/
double conversion2WordNumber(long bitWidth, long bitAddress, int dataType)
{
	if (32 < bitWidth || bitWidth <= 0)
	{
		printf("bit width: %d, is not in the range.", bitWidth);
		return 0;	// not process.
	}

	WORD registerValue = 0X8343;  // 1000001101000011
	WORD registerValue2 = 0X8441; // 1000010001000001
	WORD registerValue3 = 0X8740; // 1000011101000000

	WORD lowWord = registerValue >> bitAddress;
	lowWord = lowWord | (registerValue2 << (16 - bitAddress));
	WORD highWord = registerValue2 >> bitAddress;
	highWord = highWord | (registerValue3 << (16 - bitAddress));

	unsigned long tempLong = highWord;
	tempLong = (tempLong << 16) | lowWord;
	tempLong = tempLong << (32 - bitWidth);

	lowWord = (WORD)((tempLong << 16) >> 16);
	highWord = (WORD)(tempLong >> 16);

	double resValue = 0.0;
	long longValue = 0;
	unsigned long uLongValue = 0;
	switch (dataType)
	{
	case 1:
		longValue = g_util.convertFromINT32_Value( highWord, lowWord);
		resValue = longValue >> (32 - bitWidth);
		break;
	case 2:
		uLongValue = g_util.convertFromUINT32_Value( highWord, lowWord);
		resValue = uLongValue >> (32 - bitWidth);
		break;
	case 3:
		longValue = g_util.convertFromINT32S_Value( highWord, lowWord);
		resValue = longValue >> (32 - bitWidth);
		break;

	default:
		printf("Unable to process");
		break;
	}

	printf("processINT16DataPoint: bitwidth[%d], register word[%X], in word[%X], result[%lf]",
		bitWidth, lowWord, registerValue, resValue);

	return resValue;
}

int main()
{
	double d = conversion2WordNumber(10, 9, 1);
	printf("%lf\n", d);
	for (int j = 16; j >= 1; --j)
	{
		for(WORD w = 0; w < 0xFFFF; ++w)
		{
			int intV = g_util.convertFromUINT16_Value(w << (16 - j));
			intV = intV >> (16 - j);
			if(g_util.convertFromUINT15_Value(w, j) != intV)
			{
				printf("%X, %d, %d not ok.\n", w,
					g_util.convertFromUINT15_Value(w, j),
					intV);
			}
		}
	}
	return 0;
/*
	test1(0xFFF);
	printf("\n");
	test1(0xFFFF);
	printf("\n");
	test1(0xF000);
	printf("1end. \n");
	test2(0xFFF);
	printf("\n");
	test2(0xFFFF);
	printf("\n");
	test2(0xF000);*/
	return 0;
}

