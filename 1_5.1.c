//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int *p = &a;
    *p += 10;
    printf("%d,%d\n",a,*p);
    return 0;
}