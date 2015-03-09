/*************************************************************************
	> File Name: main.c
	> Author:zhaoyihong 
	> Mail:zhaoyihong_at_126_dot_com 
	> Created Time: 2015年03月09日 星期一 21时13分53秒
 ************************************************************************/

#include  <stdio.h>
#include  <ctype.h>
#include  <assert.h>
#include  <strings.h>

int my_atoi(const char s[]);
void my_itoa(int n,char s[]);

int main()
{

    printf("%d\n",my_atoi("1001"));
    printf("%d\n",my_atoi("+1001a"));
    printf("%d\n",my_atoi(" -1001"));
    printf("%d\n",my_atoi(" -a1001"));
    printf("%d\n",my_atoi(NULL));
    printf("%d\n",my_atoi(""));
    

    char s[100];
    bzero(s,100);
    my_itoa(1010,s);
    printf("%s\n",s);

    bzero(s,100);
    my_itoa(-1010,s);
    printf("%s\n",s);

}

int my_atoi(const char s[])
{
    //空指针转为0
    if(s == NULL)
    {
        return 0;
    }

    //跳过空格
    int i;
    for(i=0;isspace(s[i]);++i);

    //处理符号位
    int sign = 1;
    if(s[i] == '+')
    {
        sign = 1;
        ++i;
    }
    else if (s[i] == '-')
    {
        sign = -1;
        ++i;
    }

    int result = 0;
    for(;isdigit(s[i]);++i)
    {
        result *= 10;
        result += (s[i]-'0');
    }

    return result*sign;
}



void my_itoa(int n,char s[])
{
    int i = 0; //索引号
    int sign = 1;

    if(n < 0)
    {
        n = -n;
        sign = -1;
    }

    //首先反着生成字符串,最小位在左边
    do
    {
        s[i++] = n%10+'0';
        n /= 10;
    }while( n != 0);

    //最右边加上符号
    if(-1 == sign) 
    {
        s[i++] = '-';
    }
    
    //数组逆序
    for(int j=0;j<i/2;++j)
    {
        char t = s[j];
        s[j] = s[i-1-j];
        s[i-1-j] = t;
    }

}


