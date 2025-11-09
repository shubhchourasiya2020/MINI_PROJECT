#include <stdio.h>
int main(){
  int n,firstTerm=0,secondTerm=1,nextTerm;
  printf("Enter a number : \n");
  scanf("%d",&n);
  printf("The fibonacci series up to n number is : ");
  for(int i=2;i<=n;i++){
    nextTerm = firstTerm + secondTerm;
    firstTerm = secondTerm;

    secondTerm = nextTerm ;
    
    printf("%d ",nextTerm);
  }
    return 0;
}