/*************************************************************************
	> File Name: test2.cpp
	> Author:zhaoyihong 
	> Mail:zhaoyihong_at_126_dot_com 
	> Created Time: 2015年03月09日 星期一 20时45分18秒
 ************************************************************************/

#include  <iostream>
#include  <stdio.h>
using namespace std;


int main()
{
  int a=2,x=2,p,q;
  p = (a++)+(a++);
  q = (++x)+(++x);
  printf("%d,%d,%d,%d\n",a,x,p,q);
  //    结果：4，4，4，8
  //  说明：a++无论有多少项相加，都是各项先算完表达式，之后再自加1；
    //      ++x则是所有项先自加，之后再计算表达式。""
}
