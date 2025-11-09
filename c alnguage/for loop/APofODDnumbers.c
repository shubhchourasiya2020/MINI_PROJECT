#include <stdio.h>
int main()
{
    float n ;
    printf("Enter n: ");
    scanf("%f", &n);

    for (int i = 1; i <= n; i++) {
        i = i / 2.0;  
        printf("%f\n", i);
    }

    return 0;
}
