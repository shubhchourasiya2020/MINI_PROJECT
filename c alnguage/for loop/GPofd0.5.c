#include <stdio.h>
int main() {
    int n;              
    double t1 = 100;  
    double r = 0.5;  
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The GP is:\n");
    for (int i = 0; i < n; i++) {
        printf("%lf ", t1);
        t1 *=r;  
    }

    return 0;
}
