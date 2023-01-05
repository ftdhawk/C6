//在C语言中，函数可以调用另一个函数。编写一个程序，调用一个名
//为one_three()的函数。该函数在一行打印单词“one”，再调用第2个函数
// two()，然后在另一行打印单词“three”。two()函数在一行显示单词“two”。
// main()函数在调用 one_three()函数前要打印短语“starting now:”，并在调用完
// 毕后显示短语“done!”。

#include<stdio.h>

void one_three(void);
void two(void);

int main(void)
{
    printf("starting now:\n");
    one_three();
    printf("done!\n");

    getchar();
    getchar();
    return 0;
}

void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}

void two(void)
{
    printf("two\n");
}