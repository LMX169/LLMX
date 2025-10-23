//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
int main()
{
    int a=0,b=0;
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
    case '/':
        if (b != 0)
         {
                printf("%d\n", a / b);
            } else {
                printf("除数不能为0\n");
            }
            break;
        default:
            printf("无效运算符\n");
        
    }

    return 0;

}
