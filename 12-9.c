#include <stdio.h>
void print_octal(int);

int main(){ 
     int num;
     printf("Enter the number in decimal : ");
     scanf("%d",&num);

     printf("The octal number of the given decimal number is : ");
     print_octal(num);

return 0; 
}

void print_octal(int x){
    
    if (x>0){
    print_octal(x/8);
    printf("%d",x%8);
    }
    
}