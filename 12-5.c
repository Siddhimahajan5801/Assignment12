#include <stdio.h>
void print_even(int);

int main(){ 
     int n;
     printf("Enter the value of n : ");
     scanf("%d",&n);

     printf("The first %d even natural numbers are : \n ",n);
     print_even(n);

return 0; 
}

void print_even(int x){
    if (x>0){
    print_even(x-1);
    printf("%d ", 2*x);
    }
}