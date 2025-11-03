//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
void inverse(int arr[],int len)
{
    int start = 0;
    int end = len - 1;
    while (start < end)
    {
        int num;
        num = arr[start];
        arr[start] = arr[end];
        arr[end] = num;
        start++;
        end--;
    }
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    inverse(arr,5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d",arr[i]);
        if (i !=4)
        {
            printf(" ");
        }
    }
    return 0;
}