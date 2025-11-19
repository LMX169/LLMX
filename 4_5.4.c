//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
void add(int *arr,int length)
{
    for (int i = 0; i < length; i++)
    {
    (*arr)++;
    arr++;
    }
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    add(arr,5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
        if (i != 4)
        {
            printf(" ");
        }
        
    }
    return 0;
}