// SIMPLE AND COMPOUND INTEREST
#include <stdio.h>
#include <math.h>
int main()
{
    float p=1000;
    float r=10;
    float t=2;
    float si=(p*r*t)/100;
    float a=p*pow((1+r/100),t);
    float ci=a-p;
    printf("The simple interest is %f \n",si);
    printf("The compound interest is %f \n",ci);
    return 0;
}