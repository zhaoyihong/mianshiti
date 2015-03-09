/*************************************************************************
	> File Name: test4.c
	> Author:zhaoyihong 
	> Mail:zhaoyihong_at_126_dot_com 
	> Created Time: 2015年03月09日 星期一 20时55分06秒
 ************************************************************************/

#include  <stdio.h>
void func1();
void func2();

int main(void)
{
    func1();
    func2();
}


void func1()
{
    int b = 3;
    int arr[] = { 6,7,8,9,10};
    int *ptr = arr;
    *(ptr++)+=123;
    printf("%d,%d\n",*ptr,*(++ptr));
//   结果：8，8
}
 
void func2()
{
    int b = 3;
    int arr[] = {6,7,8,9,10};
    int *ptr = arr;
    *(ptr++)+=123;
    printf("%d,%d\n",*ptr,*ptr++);
   //       结果：7，7
   //       说明：1.printf语句的计算顺序是自右向左，所以才有例1的结果。
    //            2.++运算符和*运算符具有相同优先级，但结合性是自右向左，故例2中先算ptr++后算*,由于++在变量后时，总是整个表达式计算完之后才将变量加1，故printf执行完之后，才将ptr加1，所以才有例2的结果。""
 }

