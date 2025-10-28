//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
int main()
{
    int num, a,b,c;
    int first = 1;
    num = 99; 
    while (num < 1000)
    {
        a = num / 100;
        b = (num / 10)%10;
        c = num % 10;
        if (a*a*a+b*b*b+c*c*c == num)
    {
        if (first==1)
        {
            printf("%d",num);
            first = 0;
        }
        else
        {
            printf(" %d",num);
        }
    }
    num++;
    }
    
    return 0;
    
}