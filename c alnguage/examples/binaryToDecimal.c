#include<stdio.h>
#include<math.h>
int main (){
    int choice , binary,num,rem,base=1,decimal=0;

    printf("Enter 1 for binary to decimal \nEnter 2 for decimal to binary");
    printf("\nEnter the choice : ");
    scanf("%d",choice);
    
    if(choice==1){
        printf("Enter the binary value : ");
        scanf("%d",binary);

        binary==num;

        while(num>0){
            rem=num % 10;
            decimal += rem*base;
            base *= 2;
            num /= 10;

        }
        printf("decimal equivalent : %d",decimal);

        elseif (choice==2){
            printf("Enter a decimal number : ");
            scanf("%d",decimal);
            num == decimal;
            while(num > 0){
                rem=decimal%2;
                binary+=rem*base;
                decimal/=2;
                base*=10;}
              
        }
    }
        return 0;

    }

