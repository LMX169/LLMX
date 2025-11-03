//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
int main()
{
    int arr[10];
    for (int i = 0; i < 10; i++)
    {
       scanf("%d",&arr[i]);
    }
    for (int j = 0; j < 9; j++)
    {
        for (int i = 0; i < 9; i++)
    {
        if (arr[i]>=arr[i+1])
        {
            int num;
            num = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = num;
        }
    }
    }
    int first = 1;
   for (int i = 0; i < 10; i++)
    {
        if (first == 1)
        {
            printf("%d", arr[i]);
            first = 0;
        }
        else
        {
            printf(" %d", arr[i]);
        }
        
    }
    
    return 0;
}
