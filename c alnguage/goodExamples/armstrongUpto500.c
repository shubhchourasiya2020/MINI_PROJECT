#include<stdio.h>
int main(){
    int i=1, n, r, sum, originalnum;
        while(i <= 500){
        originalnum = i;
        sum = 0;
        r = i%10;
        i = i/10;
        sum += (r*r*r);
        if(sum==originalnum){
            printf("%d",i);
        }
        i++;
    
    }
    return 0;
}