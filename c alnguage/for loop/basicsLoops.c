#include <stdio.h>
int main(){
    int n =0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(int i = 1; i<=10;i++)
    printf("%d\n",i*n);
    return 0;
}