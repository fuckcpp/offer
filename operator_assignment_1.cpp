#include "operator_assignment_1.h"
CMyString::CMyString(const CMyString& str)
{
        cout<<"copy construct"<<endl;
	m_pData=str.data();	
}
CMyString::~CMyString(void)
{

}

char* CMyString::data() const
{
	return m_pData;
}
CMyString& CMyString::operator=(const CMyString& str)
{
	cout<<"copy assignment"<<endl;
	int size = strlen(str.data())+1;
	void * add=malloc(size);
	memcpy(add,(void*)str.data(),size);
	m_pData=(char*)add;
}
