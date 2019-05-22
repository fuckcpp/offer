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
	if(this==&str)
	return *this;
	delete m_pData;
	m_pData=nullptr;
	
	int size=strlen(str.data())+1;
	m_pData=new char[size];
	memcpy(m_pData,str.data(),size);
	return *this;
}
