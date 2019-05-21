class CMyString
{
public:
    CMyString(char pData[]):m_pData(pData){};
    CMyString(const CMyString& str);
    ~CMyString(void);
    char* m_pData;
};
