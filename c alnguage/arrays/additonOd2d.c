#include <stdio.h>
int main(){
    int i,j,arr1[3][3],arr2[3][3],sumarr[3][3];
    printf("Enter elements of first matrix : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
        printf("\n");
    }

    printf("Enter elements of second matrix : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }
    printf("The first matrix is : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
    }
    printf("Sum matriz of these matrices is : \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            sumarr[i][j]=arr1[i][j] + arr2[i][j];
            printf("%d\t",sumarr[i][j]);
        }
        printf("\n");
}
return 0;
}
