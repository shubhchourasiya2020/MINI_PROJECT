#include <stdio.h>
int main() {
    int temp, rev = 0, r = 0, sum = 0, originalnumber;

    printf("Enter a number: \n");
    scanf("%d", &originalnumber);
    
    temp = originalnumber;

    while (temp > 0) {
        r = temp % 10;             
        rev = rev * 10 + r;        
        temp /= 10;                
    }
    sum = rev + originalnumber;
    printf("The reversed number is: %d\n", rev);
    printf("%d is the sum of %d and its reverse.\n", sum, originalnumber);

    return 0;
}
