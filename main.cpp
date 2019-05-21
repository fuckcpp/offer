#include<iostream>
#include "operator_assignment_1.h"
using namespace std;
ostream& operator<<(ostream& os,const CMyString& str)
{
	os<<str.m_pData;
	return os;
}
int main()
{
	CMyString str("string");	
	cout<<str<<endl;

	const char* a="abs";
	char b[]="cdf";
	cout<<a<<endl;
	cout<<b<<endl;
        return 0;
}
