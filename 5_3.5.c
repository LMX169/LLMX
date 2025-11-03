//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
int ari(int a1,int an,int step)
{
    int result = 0;
    result = (a1 + an)*an/2*step;
    return result;
}
int main()
{
    int b;
    b = ari(1,100,1);
    printf("%d",b);
    return 0;
}