#include "CCalc.h"
CCalc::CCalc()
{
	Init();
}

CCalc::~CCalc()
{
	// do nothing
}

// 初始化
void CCalc::Init()
{
	m_dFirst = 0.0;
	m_dSecond = 0.0;
	m_dPrev = 0.0;
	m_sOperator = "\0";
}

// 读取数字 和 运算符
void CCalc::Input()
{
	// 三步，数字 运算符 数字
	m_dFirst = _GetNum();
	m_sOperator = _GetOperator();
	m_dSecond = _GetNum();	
}
// 读取数字
double CCalc::_GetNum()
{
	double num;
	while(!cin>>num)
	{
		// 如果读取数字失败
		std::cout << "读取数字失败" << std::endl;
		while(cin.get() != '\n')
			continue;
		cin.clear();
	}
	std::cout << num << std::endl;
	return num;
}

// 读取运算符
std::string CCalc::_GetOperator()
{
	std::string oprator;
	
}

int CCalc::Plus()
{
	return m_nFirst+m_nSecond;
}

void CCalc::AllClear()
{
	Init(0, 0);
}