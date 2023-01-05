// 把我的年龄转成天

#include<stdio.h>

int main(void)
{
    int ages;
    ages = 20;
    printf("请输入您的年龄：");

    scanf("%d", &ages);
    printf("你已经活了%d天。\n",365 * ages);


    return 0;
}
