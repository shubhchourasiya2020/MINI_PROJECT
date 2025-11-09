#include<stdio.h>
#define max(a,b) ((a>b)?a:b)
int main(){
int a,b,greatest=0;
    printf("Enter the two numbers : ");
    scanf("%d %d",&a,&b);
    greatest = max(a,b) ;
    printf("greatest is : %d",greatest);
    return 0;

}


