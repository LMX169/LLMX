//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d",arr[i][j]);
            if (j != 2)
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    return 0 ;
}
    