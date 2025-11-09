#include <stdio.h>
int main(){
  int n,fact=1;
  printf("Enter a number : \n");
  scanf("%d",&n);
  if(n==0 || n==1){
    printf("the factorial of given number is 1");
  }
  else{
  for(int i=1;i<=n;i++){
    fact*=i;
  }
  printf("%d is the factorial of %d",fact,n);
  return 0;
}
}