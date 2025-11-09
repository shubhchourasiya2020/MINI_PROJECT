#include<stdio.h>
int main(){
    int n , r , sum=0, originalnum;
    printf("Enter a number n : ");
    scanf("%d",&n);
    originalnum = n;
    while(n!=0){
        r=n%10;
        n/=10;
        sum+=(r*r*r);
    }
    if (sum == originalnum){
        printf("armstrong");
    }
    else{
        printf("not armstrong");
}
}