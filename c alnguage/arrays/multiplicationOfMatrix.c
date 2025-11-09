#include<stdio.h> 
#define N 50 
int main(){ 
    int a[N][N],b[N][N],c[N][N],m,n,p,q,sum=0; 
    printf("Enter the rows and coulums of matrix 'a': "); 
    scanf("%d %d",&m,&n); 
 
    printf("Enter the rows and coulums of matrix 'b': "); 
    scanf("%d %d",&p,&q); 
 
    printf("Enter the elments of matrix 'a': \n"); 
    for (int i = 0; i < m; i++) 
    { 
        for(int j=0; j < n ; j++){ 
            scanf("%d",&a[i][j]); 
        } 
    } 
     
    printf("Enter the elments of matrix 'b': \n"); 
    for (int i = 0; i < p; i++) 
    { 
        for(int j=0; j < q ; j++){ 
            scanf("%d",&b[i][j]); 
        } 
    } 
     
    printf("The first matrix is : \n"); 
    for (int i = 0; i < m; i++) 
    { 
        for(int j=0; j < n ; j++){ 
            printf("%d\t",a[i][j]); 
        } 
        printf("\n"); 
    } 
 
    printf("The second matrix is : \n"); 
    for (int i = 0; i < p; i++) 
    { 
        for(int j=0; j < q; j++){ 
            printf("%d\t",b[i][j]); 
        } 
        printf("\n"); 
    } 
 
    if(n!=p){ 
        printf("The multiplication of these matrix is not possible"); 
    } 
 
    else{ 
        for (int i = 0; i < m; i++){ 
            for (int j = 0; j < p; j++){ 
                sum=0; 
                for (int k = 0; k < p; k++) 
                { 
                  sum+=a[i][k]*b[k][i]; 
                  
                } 
                c[i][j]=sum; 
               
            } 
             
             
        } 
         
    } 
    printf("The resultant matrix after multiplication is:\n"); 
    for (int i = 0; i < m; i++) { 
        for (int j = 0; j < q; j++) { 
            printf("%d\t", c[i][j]); 
        } 
        printf("\n"); 
    } 
    return 0; 
 
} 
 