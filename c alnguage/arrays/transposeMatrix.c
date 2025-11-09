#include<stdio.h>
int main(){
    int matrix[2][3];
    printf("Enter the elments of the metrix: ");
    for (int i = 0; i <2; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        scanf("%d",&matrix[i][j]);
      }
      printf("\n");    
    }
    printf("the matix is :\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",matrix[i][j]);
           
        }
        printf("\n");
    }
    printf("the transpose matix is :\n");
    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t",matrix[j][i]);
           
        }
        printf("\n");
    }
    return 0;
}