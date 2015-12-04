// 四则运算
#ifndef CCALC_H_
#define CCALC_H_
#include <string>

class CCalc
{
private:
  double m_dFirst;
  double m_dSecond;
  double m_dPrev;
  std::string m_sOperator;
 // 初始化
  void Init();
protected:
 // 读取数字
  double _GetNum();
 // 读取运算符
  std::string _GetOperator();
public:
  CCalc();
  ~CCalc();
 // 读取数字 和 运算符
  void Input();
 // 加法
  double Plus();
 // 清除
  void AllClear();
};

#endif  // CCALC_H_
