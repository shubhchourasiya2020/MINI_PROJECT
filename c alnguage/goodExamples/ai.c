#include <stdio.h>

int main() {
    int i = 1, r, sum, originalnum;

    while (i <= 500) {
        originalnum = i; 
        sum = 0;         
        while (i > 0) {  
            r = i % 10; 
            sum += (r * r * r);   
            i /= 10;      
        }

        if (sum == originalnum) {            
            printf("%d\n", originalnum);     
        }

        i++; 
    }

    return 0;
}
