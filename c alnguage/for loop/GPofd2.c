#include<stdio.h>
int main(){
    int n;
    printf("Enter n = ");
    scanf("%d",&n);
    int a =3;
    for(int i=2;i<=n;i++){
    printf("%d\n",a);
    a = a*3;}
    return 0;
}