//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
int main()
{
    double a=0,b=0;
    char op;
    scanf ("%d %d %c",&a,&b,&op);
    switch (op)
    {
    case '+':
        printf ("%d\n",a + b );
        break;
    case '-':
        printf ("%d\n",a - b );
        break;
    case '*':
        printf ("%d\n",a * b );
        break;
        if (b != 0)
         {
                printf("%f\n", a / b);
            } else {
                printf("除数不能为0\n");
            }
            break;
        default:
            printf("%f\n",a / b);
        
    }

    return 0;
}