#include <stdio.h>
int main(){
    int arr[5]={2,3,5,6,7} , *p;
    p=&arr[0];
    for(int i=1;i<5;i++){
    printf("%d ",*p);
    p++;
    }
  
}