//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    if (n == 1)
    {
        printf("密钥不安全，请重新输入\n");
        return 0;
    }
    else if (n == 2)
    {
        printf("密钥安全，密码设置成功\n");
        return 0;
    }
    else if (n <= 0 || n >= 50)
    {
        printf("密钥不安全，请重新输入\n");
        return 0;
    }
    else
    {
        int a = 1;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                a = 0;
                break;
            }
        }
        if (a)
        {
            printf("密钥安全，密码设置成功\n");
        }
        else
        {
            printf("密钥不安全，请重新输入\n");
        }
    }
    return 0;
    
}