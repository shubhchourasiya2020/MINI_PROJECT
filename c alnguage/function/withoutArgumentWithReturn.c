#include<stdio.h>
int sum ();
int main(){
    int result ;
    result=sum();
    printf("The sum is : %d",result);
    return 0;
}
int sum(){
    int a,b,c;
    printf("Enter two nos : ");
    scanf("%d %d",&a,&b);
    c=a+b;
    return c;
}