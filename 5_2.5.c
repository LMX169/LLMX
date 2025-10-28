//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
int main()
{
    int first=1;
    int arr[5]={1,2,3,4};
    for (int i = -1; i < 4; i++)
    {
        arr[4] = arr[4]+arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (first==1)
        {
            printf("%d",arr[i]);
            first = 0;
        }
        else
        {
           printf(" %d",arr[i]); 
        }
        
    }
    
    return 0;
    
}