//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
int main()
{
    int first=1;
    int arr[5]={0,0,0,0,0};
    int num = 0;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&num);
        arr[i] = num;
    }
    for (int i = 0; i < 4; i++)
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