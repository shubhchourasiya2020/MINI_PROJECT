#include<stdio.h>
int main(){
    int l;
    printf("Enter length l of square : ");
    scanf("%d",&l);
    for (int i=1;i<=l;i++){
        for(int i=1;i<=l;i++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
    }