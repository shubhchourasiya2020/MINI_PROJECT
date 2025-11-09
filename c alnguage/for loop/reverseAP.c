#include <stdio.h>
int main()
{
    int n;
    printf("Enter n :");
    scanf("%d",&n);
    for(int i=100;i>=n;i-=3){
    printf("%d\n",i);
    }
    return 0;
} 