//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
int power(int a,int b)
{
    int result = 1;
    for (int i = 0; i < b; i++)
    {
       result *= a ;
    }
    return result;
}
int main()
{
    int num = 1;
    for (int i = 1; i <= 5; i++)
    {
        num +=power(i,2);
    }
    printf("%d",num);
    return 0;

}


