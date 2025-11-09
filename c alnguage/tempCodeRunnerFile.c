#include<stdio.h>
 void printTable(int n);
int main(){
    int n;
    printf("enter value of n\n");
    scanf("%d",&n);
    printTable(n);
    return 0;
}
void printTable(int n){
for(int i=0;i<=10;i++){
printf(i*n);
}
}