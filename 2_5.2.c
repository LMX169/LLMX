//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    int *p = arr;
    for (int i = 0; i < 5; i++)
    {
        *p *= 2;
        p++;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
        if (i != 4)
        {
            printf(" ");
        }
    }
    
}