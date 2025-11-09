#include<stdio.h>
int main(){
    int matrix[2][3],rowSum=0,colSum=0;
    printf("ENter the elments of the metrix: ");
    for (int i = 0; i < 2; i++)
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
            rowSum+=matrix[i][j];
            colSum+=matrix[j][i];
        }
        printf("Row sum = %d",rowSum);
        printf("Column sum = %d",colSum);
        printf("\n");
        rowSum=0;
    }

  
    return 0;
}
dikkat hai iss wale main sahi banao
