
#include <stdio.h>
#include "testA.h"

int main()
{
	TestRunner runner;

    classATest testcase1("classATest");
	runner.addSuite( testcase1.suite() );
    
    try
    {
        // Run config file. Make sure it is in the cfg directory.
        runner.begin( "./cfg/config.ini" );
    }
    catch (...)
    {
		printf("Caught an unhandled exception\n");
	}

	return 0;
}