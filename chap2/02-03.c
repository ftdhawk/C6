// 一个文件中包含两个函数
#include <stdio.h>

void bulter(void);                          //函数原型

int main(void)
{
    printf("本程序有两个函数，下面请看另一个的输出内容：\n");
    bulter();                               //函数调用

    getchar();
    getchar();
    return 0;
}

void bulter(void)                           //函数定义
{
    printf("这是本程序的另一个函数。\n");
}
