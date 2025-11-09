#include<stdio.h>
int main (){
     int n,firstTerm=0,secondTerm=1,nextTerm;
  printf("Enter a number : \n");
  scanf("%d",&n);
  printf("The fibonacci series up to n number is : ");
  for(int i=1;i<=n;i++){
    firstTerm = secondTerm;
    secondTerm = nextTerm ;
    nextTerm = firstTerm + secondTerm;
  }
    printf("%d ",nextTerm);
  
    return 0;
}