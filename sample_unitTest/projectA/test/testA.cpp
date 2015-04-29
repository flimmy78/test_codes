
#include "testA.h"

classATest::classATest ( const std::string & name )
    : TestCase ( name )
{
}

void classATest::setUp( const std::string & INFile , const std::string & OUTFile)
{
	m_cA.SetN(10);
}

void classATest::tearDown( const std::string & OUTFile )
{
}

TestSuite* classATest::suite()
{
	TestSuite * testSuite = new TestSuite( "classATest" );
	testSuite->addTest(new TestCaller< classATest >( "testGet1", &classATest::testGet1, this ) );
	testSuite->addTest(new TestCaller< classATest >( "testGet2", &classATest::testGet2, this ) );
	testSuite->addTest(new TestCaller< classATest >( "testFGet1", &classATest::testFGet1, this ) );
	return testSuite;
}

void classATest::testGet1()
{
	int v = m_cA.GetN();
	//assert(10 == v);
	Assert(10 == v);
}

void classATest::testGet2()
{
	int v = m_cA.GetN();
	Assert(10 == v);
}

void classATest::testFGet1()
{
	int v = m_cA.GetN();
	Assert(11 == v);
}