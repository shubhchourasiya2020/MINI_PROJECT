#include <stdio.h>
void greet(){
    printf("good morning\n");
    printf("hello\n");
    return;
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    greet ();
    return 0;
}