//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ar =(int*)malloc(5 * sizeof(int));
    int *p = ar;
    for (int i = 0; i < 5; i++)
    {
       scanf("%d",p + i);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d",*(p+i));
        if (i != 4)
        {
            printf(" ");
        }
    }
    free(ar);
    ar = NULL;
    return 0;
}