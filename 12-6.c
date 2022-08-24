#include <stdio.h>
void print_even(int);

int main(){ 
     int n;
     printf("Enter the value of n : ");
     scanf("%d",&n);

     printf("The first %d even natural numbers in reverse order is : \n ",n);
     print_even(n);

return 0; 
}

void print_even(int x){
    if (x>0){
    printf("%d ", 2*x);
    print_even(x-1);
    }
}