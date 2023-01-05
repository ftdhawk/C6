#include <stdio.h>

int main(void)
{
    float yingcun = 1;
    float limi = 2;
    printf("请please input inch:\n");
    scanf("%f",&yingcun);
    limi = 2.54 * yingcun;
    printf("The result is %f inch= %f cm\n",yingcun,limi);

    getchar();
    return 0;
}
