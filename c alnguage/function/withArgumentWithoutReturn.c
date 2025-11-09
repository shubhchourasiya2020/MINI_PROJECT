#include<stdio.h>
int sum (a,b);
int main(){
    int a,b,c;
    printf("Enter two nos : ");
    scanf("%d %d",&a,&b);
    sum (a,b);
}
int sum (int x, int y){
    printf("The sum is : %d",x+y);
}