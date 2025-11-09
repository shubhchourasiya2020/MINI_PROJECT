# include<stdio.h>
int main(){
    int a,b,l,m;
    printf("Enter a , b : \n");
    scanf("%d %d ",&a,&b);

    if (a>b){
        for(int i=b/2;i>=1;i--){
            l=a%i;
            m=b%i;
            if(l==m){
                printf("gcd of %d , %d is %d",a,b,i);
                break;
            }
        }
    }
    if (b>a){
        for(int i=a/2;i>=1;i--){
            l=a%i;
            m=b%i;
            if(l==m){
                printf("gcd of %d , %d is %d",a,b,i);
                break;
            }
        }
    }
    return 0;
}