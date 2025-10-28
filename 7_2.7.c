//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
int main()
{
    int num=0;
    int arr[5]={0,0,0,0,0};
    int first = 0;
    for (int i = 1; i < 5; i++)
    {
        scanf("%d",&num);
        arr[i] = num;
    }
    for (int i = 0; i < 5; i++)
    {
        if (first==0) 
        {
            printf("%d",arr[i]);
            first = 1;
        }
        else
        {
            printf(" %d", arr[i]);
        }
    }
    return 0;
}