#include<iostream>
#include <cstring>
using namespace std;
class CMyString
{
public:
    CMyString(char* pData=nullptr):m_pData(pData){
	cout<<"construct"<<endl;
	} 
    CMyString(const CMyString& str);
    CMyString& operator=(const CMyString& str);
    ~CMyString(void);
    char* data() const;
private:    
    char* m_pData;
};
