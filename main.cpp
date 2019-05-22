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
	
	CMyString str2("a");

	CMyString str3;
	str3=str;
	cout<<str3<<endl;

	const char* a="hello";
	char b[]="world";

	cout<<strlen(a)<<endl;
	cout<<sizeof(b)/sizeof(b[0])<<endl;	
        return 0;
}
