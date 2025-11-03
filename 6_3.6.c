//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
int sum(int arr[],int len)
{
    int a=0;
    for (int i = 0; i < len; i++)
    {
        a +=arr[i];
    }
    return a;
}
int pro(int arr[],int len)
{
    int b=1;
    for (int i = 0; i < len; i++)
    {
        b *=arr[i];
    }
     return b;
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum1=sum(arr,5);
    int pro1=pro(arr,5);
    printf("%d %d",sum1,pro1);
    return 0;
}