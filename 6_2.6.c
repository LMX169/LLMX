//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
int main()
{
    int arr[5];
    int i, num;
    int first = 0;
    for (i = 0; i < 5; i++)
    {
        do 
        {
            scanf("%d", &num);
        } 
        while (num % 2 != 0);
        arr[i] = num;
    }
    for (i = 0; i < 5; i++)
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