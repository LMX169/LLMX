//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
int main()
{
    int a=0,b=0,c=0;
    printf ("请输入三个整数\n");
    scanf ("%d %d %d",&a,&b,&c);
    if (a+b>c&&a+c>b&&b+c>a)
    {
        printf("可以组成三角形\n");
    }
    else if(a==b&&b==c)
    {
        printf("可以组成三角形\n");
    }
    else if(a==b||b==c)
    {
        printf("可以组成三角形\n");
    }
    else{
        printf("不可以组成三角形\n");
    }
    return 0;
    
}