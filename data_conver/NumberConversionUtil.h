/**
  * The source code in this file is the property of Ripple Systems and is not for redistribution in
  * any form.
  *
  * Source:		$File: //depot/3002_TIP/TA_BASE/transactive/bus/scada/datapoint_library/src/NumberConversionUtil.h $
  * @author:	HoaVu
  * @version:	$Revision: #1 $
  *
  * Last modification:	$DateTime: 2009/09/24 11:10:12 $
  * Last modified by:	$Author: grace.koh $
  *
  * Description:
  *
  * Class for performing number conversion due to different numbering formats
  *
  */

#ifndef NUMBER_CONVERSION_UTIL_H
#define NUMBER_CONVERSION_UTIL_H


namespace TA_Base_Bus
{

	typedef unsigned char BYTE;
	typedef unsigned short WORD;

	class NumberConversionUtil
	{

	public:

		NumberConversionUtil();
		~NumberConversionUtil();


		/**
		*
		* convertFromIEEE32_Value
		*
		* Convert the 32 bit number to a double value using IEEE 32 bit
		* floating point conversion algorithm
		*
		* @param    highOrderNumber		The high order number of the 32 bit number
		* @param    lowOrderNumber		The low order number of the 32 bit number
		*
		*/
		double convertFromIEEE32_Value ( WORD highOrderNumber, WORD lowOrderNumber );


		/**
		*
		* convertToINT32S_Value
		*
		* Convert the specified floating number to an IEEE 32bit formatted number
		* Returns true to indicate if conversion is successful, false otherwise.
		*
		* @param    originalNumber		The original number for conversion
		* @param    convertedNumber		The converted output number
		*
		*/
		bool convertToIEEE32_Value ( double originalNumber, double & convertedNumber );


		/**
		*
		* convertFromINT32S_Value
		*
		* Convert the 32 bit number to a signed integer value using the last bit
		* as the signed bit.
		*
		* @param    highOrderNumber		The high order number of the 32 bit number
		* @param    lowOrderNumber		The low order number of the 32 bit number
		*
		*/
		double convertFromINT32S_Value ( WORD highOrderNumber, WORD lowOrderNumber );


		/**
		*
		* convertToINT32S_Value
		*
		* Convert the specified integer to an integer where the most significant
		* bit is used as signed bit.  Returns true to indicate if conversion is
		* successful, false otherwise.
		*
		* @param    originalNumber		The original number for conversion
		* @param    convertedNumber		The converted output number
		*
		*/
		bool convertToINT32S_Value ( double originalNumber, double & convertedNumber );


		/**
		*
		* convertFromINT32_Value
		*
		* Convert the 32 bit number to a signed integer value using 2's complement
		* format
		*
		* @param    highOrderNumber		The high order number of the 32 bit number
		* @param    lowOrderNumber		The low order number of the 32 bit number
		*
		*/
		double convertFromINT32_Value ( WORD highOrderNumber, WORD lowOrderNumber );


		/**
		*
		* convertToINT32_Value
		*
		* Convert the specified integer to an integer whose bits are represented
		* in 2's complement format.  Returns true to indicate if conversion is
		* successful, false otherwise.
		*
		* @param    originalNumber		The original number for conversion
		* @param    convertedNumber		The converted output number
		*
		*/
		bool convertToINT32_Value ( double originalNumber, double & convertedNumber );


		/**
		*
		* convertFromINT16S_Value
		*
		* Convert the 16 bit number to a signed integer value using the last bit
		* as the signed bit.
		*
		* @param    originalNumber		The original number to apply the conversion
		*
		*/
		int convertFromINT16S_Value ( WORD originalNumber );


		/**
		*
		* convertToINT16S_Value
		*
		* Convert the specified integer to an integer where the most significant
		* bit is used as signed bit.  Returns true to indicate if conversion is
		* successful, false otherwise.
		*
		* @param    originalNumber		The original number for conversion
		* @param    convertedNumber		The converted output number
		*
		*/
		bool convertToINT16S_Value ( int originalNumber, WORD & convertedNumber );


		/**
		*
		* convertFromINT16_Value
		*
		* Convert the 16 bit number to a signed integer value using 2's complement
		* format
		*
		* @param    originalNumber		The original number to apply the conversion
		*
		*/
		int convertFromINT16_Value ( WORD originalNumber );


		/**
		*
		* convertToINT16_Value
		*
		* Convert the specified integer to an integer whose bits are represented
		* in 2's complement format.  Returns true to indicate if conversion is
		* successful, false otherwise.
		*
		* @param    originalNumber		The original number for conversion
		* @param    convertedNumber		The converted output number
		*
		*/
		bool convertToINT16_Value ( int originalNumber, WORD & convertedNumber );


		/**
		*
		* convertFromUINT32_Value
		*
		* Convert the specified 32 bit number to unsigned int
		*
		* @param    highOrderNumber		The high order number of the 32 bit number
		* @param    lowOrderNumber		The low order number of the 32 bit number
		*
		*/
		double convertFromUINT32_Value ( WORD highOrderNumber, WORD lowOrderNumber );

		
		/**
		*
		* convertFromUINT16_Value
		*
		* Convert the specified 16 bit number to unsigned int
		*
		* @param    originalNumber		The original number for conversion
		*
		*/
		unsigned int convertFromUINT16_Value ( WORD originalNumber );

		/**
		*
		* convertFromINT15_Value
		*
		* Convert the 15 bit number to a signed integer value using 2's complement
		* format, ignore the 16th bit.
		*
		* @param    originalNumber		The original number to apply the conversion
		*
		*/
		int convertFromINT15_Value ( WORD originalNumber, long bitWidth );
		int convertFromINT15_Value2 ( WORD originalNumber, long bitWidth );

		/**
		*
		* convertFromUINT15_Value
		*
		* Convert the specified 15 bit number to unsigned int, ignore the 16th bit.
		*
		* @param    originalNumber		The original number for conversion
		*
		*/
		unsigned int convertFromUINT15_Value (WORD originalNumber, long bitWidth );

	private:

	};

}

#endif    
