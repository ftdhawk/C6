#include <stdio.h>

int main(void)
{
    unsigned int un = 3000000000;
    short int end = 200;
    long int big = 65537;
    long long int verybig = 12345678908642;

    printf("un = %u and not %d\n",un, un);
    printf("end = %hd and %d\n",end, end);
    printf("big = %ld and not %hd\n",big, big);
    printf("verybig = %lld and not %ld\n",verybig, verybig);
    //苹果电脑 long int 和long long int 占用的字节数分别为：
    //而本系统的long和long long见下方代码。
    printf("size of long int = %zd\n",sizeof(long));
    printf("size of long long int = %zd\n",sizeof(long long));
    //printf("\a");
    printf("Hello!\007\n");

    getchar();
    getchar();
    return 0;
}