#include<stdio.h>
int main(){
    int l;
    char c;
    printf("Enter length of square : ");
    scanf("%d",&l);
    for (int i=1;i<=l;i++){
        int a=1;
        for(int i=65;i<=l;i++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
    }