#include <stdio.h>
int main (){
    int n , orgNum , rev = 0 , r;
    printf("Enter the number n: ");
    scanf("%d",&n);
    
    orgNum = n;
    
    int i;
    while  (i != 0){
        r=n%10;
        rev = rev*10 + r;
        n = n/10;    
    }
    if (orgNum == rev){
        printf("Entered number is pallindrome");
    }
    else printf("Entered number is not a pallindrome");
    return 0;
}