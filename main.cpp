#include<iostream>
#include<cstring>
#include "operator_assignment_1.h"
using namespace std;
ostream& operator<<(ostream& os,const CMyString& str)
{
	os<<str.data();
	return os;
}
int main()
{
	CMyString str("string");	
	cout<<str<<endl;

	CMyString str2("a");

	cout<<str2<<endl;
	CMyString str3;
	str3=str2=str;
	cout<<str3<<endl;

	
        return 0;
}
