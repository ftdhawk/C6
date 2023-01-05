//这是一个把英寻fathom转换成英尺feet的程序

#include <stdio.h>

int main(void)
{
    int feet, fathoms;          //定义变量英尺、英寻

    fathoms = 2;                //英寻
    feet = 6 * fathoms;         //6英尺等于1英寻

    printf("There are %d feet in %d fathoms!\n",feet,fathoms);
    printf("Yes, I said %d feet!\n", 6 * fathoms);
    
    getchar();
    getchar();
    return 0;
}