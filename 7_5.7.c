//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
int main()
{
    int arr[10];  
    int *p = arr;
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", p + i);  
    }
    for (int j = 0; j < 9; j++) 
    {  
        p = arr;  
        for (int i = 0; i < 9 - j; i++) 
        {  
            if (*p > *(p + 1)) 
            {
                int num = *p;
                *p = *(p + 1);
                *(p + 1) = num;
            }
            p++;  
        }
    }
    p = arr;  
    for (int i = 0; i < 10; i++) 
    {
        printf("%d", *(p + i)); 
        if (i != 9) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}