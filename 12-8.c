#include <stdio.h>
void print_binary(int);

int main(){ 
     int num;
     printf("Enter the number in decimal : ");
     scanf("%d",&num);

     printf("The binary number of the given decimal number is : ");
     print_binary(num);

return 0; 
}

void print_binary(int x){
    
    if (x>0){
    print_binary(x/2);
    printf("%d",x%2);
    }
    
}