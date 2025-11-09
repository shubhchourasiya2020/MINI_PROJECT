#include<stdio.h>
int main(){
    int a,b,c=1;
    printf("Enter the base = ");
    scanf("%d",&a);
    printf("Enter the exponent = ");
    scanf("%d",&b);
    for(int i=1;i<=b;i++){
        c = c * a;
    }
    printf("%d",c);
return 0;
}
