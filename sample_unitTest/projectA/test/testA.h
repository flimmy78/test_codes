
#ifndef CLASSATEST_H
#define CLASSATEST_H

#include "../src/classA.h"

#include "assert.h"

#include "../../CppUnit/src/TestCase.h"
#include "../../CppUnit/src/TestFramework.h"

class classATest : public TestCase
{
public:
	classATest ( const std::string & name );
	virtual void setUp( const std::string & INFile , const std::string & OUTFile);
	virtual void tearDown( const std::string & OUTFile );
	TestSuite *suite();
	virtual void setUpSuite( const std::string & inFile ) {}
    virtual void tearDownSuite() {}
protected:
	void testGet1(void);
	void testGet2(void);
	void testFGet1(void);
private:
	classA m_cA;
};

#endif
