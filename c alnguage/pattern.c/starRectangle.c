#include<stdio.h>
int main(){
    int l,b;
    printf("Enter length l : ");
    scanf("%d",&l);
    printf("Enter breadth b : ");
    scanf("%d",&b);
    for(int i=1 ; i<=b ; i++){
        for(int j = 1; j<=l ; j++){
            printf("* ");
            
        }
        printf("\n");
    }
    return 0;
}