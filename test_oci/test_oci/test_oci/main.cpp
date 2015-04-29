// test_oci.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

/*
int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
*/
#include "DataBase.h"

/*  ≤‚ ‘±Ì ************************
create table TEST_TAB
(
ID   NUMBER(10),
NAME CHAR(10),
AGE  NUMBER(10)
)
*/

int main()
{
	int flag;
	int i;

	//DataBase db( "billopr", "billopr", "accpstdb" );
	DataBase db( "IT271350_4", "IT271350_4", "transact" );
	flag = db._DB_Connect();
	if( flag != OCI_SUCCESS )
	{
		cout<<"[ "<<__FILE__<<" ] [ "<<__LINE__<<" ] db._DB_Connect() = "<<flag<<endl;
	}

	string sql;
	sql = string( "" ) + "select * from location";
	flag = db._DB_PrepareSQL(sql);

	if( flag != OCI_SUCCESS )
	{
		cout<<"[ "<<__FILE__<<" ] [ "<<__LINE__<<" ] db._DB_PrepareSQL() = "<<flag<<endl;
	}

	flag = db._DB_ExecuteSQL();
	if( flag != OCI_SUCCESS )
	{
		cout<<"[ "<<__FILE__<<" ] [ "<<__LINE__<<" ] db._DB_ExecuteSQL() = "<<flag<<endl;
	}
	db._DB_RecordSet();

	cout<<"[ "<<__FILE__<<" ] [ "<<__LINE__<<" ] RecordSet.colnum = "<<db.RecordSet.colnum<<endl;
	cout<<"[ "<<__FILE__<<" ] [ "<<__LINE__<<" ] RecordSet.rownum = "<<db.RecordSet.rownum<<endl;
	cout<<"[ "<<__FILE__<<" ] [ "<<__LINE__<<" ] RecordSet.size() = "<<db.RecordSet.size()<<endl;


	for(i = 0; i < db.RecordSet.size(); i++)
	{ 
		for(int j = 0; j < db.RecordSet.colnum; j++ )
		{
			cout<<db.RecordSet.rec(i, j)<<"\t";
		}
		cout<<endl;
	}
return 0;
	sql = string( "" ) + "select * from test_tab where id = :v1 and age > :v2";
	char *num1 = "13";
	char *num2 = "0";

	flag = db._DB_PrepareSQL(sql);

	if( flag != OCI_SUCCESS )
	{
		cout<<"[ "<<__FILE__<<" ] [ "<<__LINE__<<" ] db._DB_PrepareSQL() = "<<flag<<endl;
	}

	flag = db._DB_BindParam(0, OCI_TYPE_CHAR, num1);
	if( flag != OCI_SUCCESS )
	{
		cout<<"[ "<<__FILE__<<" ] [ "<<__LINE__<<" ] db._DB_BindParam() = "<<flag<<endl;
	}
	flag = db._DB_BindParam(1, OCI_TYPE_CHAR, num2);
	if( flag != OCI_SUCCESS )
	{
		cout<<"[ "<<__FILE__<<" ] [ "<<__LINE__<<" ] db._DB_BindParam() = "<<flag<<endl;
	}

	flag = db._DB_ExecuteSQL();
	if( flag != OCI_SUCCESS )
	{
		cout<<"[ "<<__FILE__<<" ] [ "<<__LINE__<<" ] db._DB_ExecuteSQL() = "<<flag<<endl;
	}
	db._DB_RecordSet();

	cout<<"[ "<<__FILE__<<" ] [ "<<__LINE__<<" ] RecordSet.colnum = "<<db.RecordSet.colnum<<endl;
	cout<<"[ "<<__FILE__<<" ] [ "<<__LINE__<<" ] RecordSet.rownum = "<<db.RecordSet.rownum<<endl;
	cout<<"[ "<<__FILE__<<" ] [ "<<__LINE__<<" ] RecordSet.size() = "<<db.RecordSet.size()<<endl;

	// tmpRec = &(db._DB_FetchData());

	for(i = 0; i < db.RecordSet.size(); i++)
	{ 
		for(int j = 0; j < db.RecordSet.colnum; j++ )
		{
			cout<<db.RecordSet.rec(i, j)<<"\t";
		}
		cout<<endl;
	}

	sql = string( "" ) + "insert into test_tab values(:v1, :v2, :v3)";
	// char *num1 = "25";
	// char *num2 = "wwwwwwww";
	char *num3 = "30";

	flag = db._DB_PrepareSQL(sql);

	if( flag != OCI_SUCCESS )
	{
		cout<<"[ "<<__FILE__<<" ] [ "<<__LINE__<<" ] db._DB_PrepareSQL() = "<<flag<<endl;
	}

	flag = db._DB_BindParam(0, OCI_TYPE_CHAR, num1);
	flag = db._DB_BindParam(1, OCI_TYPE_CHAR, num2);
	flag = db._DB_BindParam(2, OCI_TYPE_CHAR, num3);

	if( flag != OCI_SUCCESS )
	{
		cout<<"[ "<<__FILE__<<" ] [ "<<__LINE__<<" ] db._DB_BindParam() = "<<flag<<endl;
	}

	flag = db._DB_ExecuteSQL_P();
	/* if( flag != OCI_SUCCESS )
	{
	cout<<"[ "<<__FILE__<<" ] [ "<<__LINE__<<" ] db._DB_ExecuteSQL() = "<<flag<<endl;
	}
	db._DB_RecordSet();

	cout<<"[ "<<__FILE__<<" ] [ "<<__LINE__<<" ] RecordSet.colnum = "<<db.RecordSet.colnum<<endl;
	cout<<"[ "<<__FILE__<<" ] [ "<<__LINE__<<" ] RecordSet.rownum = "<<db.RecordSet.rownum<<endl;
	cout<<"[ "<<__FILE__<<" ] [ "<<__LINE__<<" ] RecordSet.size() = "<<db.RecordSet.size()<<endl;

	// tmpRec = &(db._DB_FetchData());

	for(i = 0; i < db.RecordSet.size(); i++)
	{ 
	for(int j = 0; j < db.RecordSet.colnum; j++ )
	{
	cout<<db.RecordSet.rec(i, j)<<"\t";
	}
	cout<<endl;
	}*/
	db._DB_EndTrans(0);
	return 0;
}