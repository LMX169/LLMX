//202510304211
//2124108137@qq.com
//李景浩
#include<stdio.h>
int main()
{
    double score = 0;
    printf("请输入成绩\n");
    scanf("%f",&score);
    if (score>100||score<0)
    {
        printf("请重新输入\n");
        scanf("%lf",&score);
        if(score>=90)
    {
        printf("为A等\n");
    }
    else if(score>=80)
    {
        printf("为B等\n");
    }
    else if(score>=70)
    {
        printf("为C等\n");
    }
    else if(score>=60)
    {
        printf("为D等\n");
    }
    else
    {
        printf("为E等\n");
    }
    }
    else if(score>=90)
    {
        printf("为A等\n");
    }
    else if(score>=80)
    {
        printf("为B等\n");
    }
    else if(score>=70)
    {
        printf("为C等\n");
    }
    else if(score>=60)
    {
        printf("为D等\n");
    }
    else
    {
        printf("为E等\n");
    }
    return 0;
}