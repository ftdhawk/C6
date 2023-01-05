#include<stdio.h>

int main(void)
{
    float weight;  //你的体重
    float value;   //等重的白金价值

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    scanf("%f", &weight);

    //假设白金每盎司$1700
    //14.5833是讲英镑转换为盎司
    value = 1700 * weight * 14.5833;
    printf("Your weight in platinum is worth $%.6f.\n",value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");


    return 0;
}