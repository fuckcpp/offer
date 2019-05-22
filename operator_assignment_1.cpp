#include "operator_assignment_1.h"
CMyString::CMyString(char* pData){
	cout<<"construct"<<endl;
	m_pData=pData;
	if(pData)
	{
		int size=strlen(pData)+1;
		m_pData=new char[size];
		memcpy(m_pData,pData,size);
	}
} 

CMyString::CMyString(const CMyString& str)
{
        cout<<"copy construct"<<endl;
	m_pData=str.data();	
}
CMyString::~CMyString(void)
{
	delete[] m_pData;
}

char* CMyString::data() const
{
	return m_pData;
}
CMyString& CMyString::operator=(const CMyString& str)
{
	cout<<"copy assignment"<<endl;
	if(this!=&str)
	{
		delete[] m_pData;
		m_pData=nullptr;	
		int size=strlen(str.data())+1;
		m_pData=new char[size];
		memcpy(m_pData,str.data(),size);
	}
	return *this;
}
