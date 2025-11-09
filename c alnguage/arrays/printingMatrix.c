#include<stdio.h>
int main(){
    int matrix[2][3],sum=0;
    printf("ENter the elments of the metrix: ");
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        scanf("%d",&matrix[i][j]);
      }
      printf("\n");    
    }
    printf("the matix is :\n ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",matrix[i][j]);
            sum+=matrix[i][j];
        }
        printf("\n");
    }
    printf("the sum of the elemnts is : %d ",sum);
    return 0;
}