//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
void move(int *ptr_arr, int len)
{
     int *p = ptr_arr + len - 2;  
    while (p >= ptr_arr) 
    {       
        *(p + 1) = *p;           
        p--;                     
    }
    *ptr_arr = 0; 
}
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    move(arr,5);
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