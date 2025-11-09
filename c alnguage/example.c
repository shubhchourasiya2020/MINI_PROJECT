#include <stdio.h>

int main() {
    int i = 1, r, sum, originalnum, Temp;

    while (i <= 500) {
        originalnum = i; 
        sum = 0;  
        Temp =i;       
        while (Temp > 0) {  
            r = Temp% 10; 
            sum += (r * r * r);   
            Temp/= 10;      
        }

        if (sum == originalnum) {            
            printf("%d\n", originalnum);     
        }

        i++; 
    }

    return 0;
}